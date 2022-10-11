struct VSInput
{
    [[vk::location(0)]] float3 Pos : POSITION0;
    [[vk::location(1)]] float3 Color : COLOR0;
};

struct VSOutput
{
	float4 Pos : SV_POSITION;
    [[vk::location(0)]] float3 Color : COLOR0;
};

VSOutput main(VSInput input)
{
    VSOutput output = (VSOutput)0;
    output.Color = input.Color;
    output.Pos = float4(input.Pos, 1.0);
    return output;
}
