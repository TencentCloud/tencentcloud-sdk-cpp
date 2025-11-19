/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_AIART_V20221229_MODEL_TEXTTOIMAGERAPIDREQUEST_H_
#define TENCENTCLOUD_AIART_V20221229_MODEL_TEXTTOIMAGERAPIDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/aiart/v20221229/model/Image.h>
#include <tencentcloud/aiart/v20221229/model/LogoParam.h>


namespace TencentCloud
{
    namespace Aiart
    {
        namespace V20221229
        {
            namespace Model
            {
                /**
                * TextToImageRapid请求参数结构体
                */
                class TextToImageRapidRequest : public AbstractModel
                {
                public:
                    TextToImageRapidRequest();
                    ~TextToImageRapidRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文本描述。
算法将根据输入的文本智能生成与之相关的图像。建议详细描述画面主体、细节、场景等，文本描述越丰富，生成效果越精美。
不能为空，推荐使用中文。最多可传256个 utf-8 字符。
                     * @return Prompt 文本描述。
算法将根据输入的文本智能生成与之相关的图像。建议详细描述画面主体、细节、场景等，文本描述越丰富，生成效果越精美。
不能为空，推荐使用中文。最多可传256个 utf-8 字符。
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置文本描述。
算法将根据输入的文本智能生成与之相关的图像。建议详细描述画面主体、细节、场景等，文本描述越丰富，生成效果越精美。
不能为空，推荐使用中文。最多可传256个 utf-8 字符。
                     * @param _prompt 文本描述。
算法将根据输入的文本智能生成与之相关的图像。建议详细描述画面主体、细节、场景等，文本描述越丰富，生成效果越精美。
不能为空，推荐使用中文。最多可传256个 utf-8 字符。
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                    /**
                     * 获取生成图分辨率，默认1024:1024。
支持的图像宽高比例: 1:1，3:4，4:3，9:16，16:9。
支持的长边分辨率: 160，200，225，258，512，520，608，768，1024，1080，1280，1600，1620，1920，2048，2400，2560，2592，3440，3840，4096。
                     * @return Resolution 生成图分辨率，默认1024:1024。
支持的图像宽高比例: 1:1，3:4，4:3，9:16，16:9。
支持的长边分辨率: 160，200，225，258，512，520，608，768，1024，1080，1280，1600，1620，1920，2048，2400，2560，2592，3440，3840，4096。
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置生成图分辨率，默认1024:1024。
支持的图像宽高比例: 1:1，3:4，4:3，9:16，16:9。
支持的长边分辨率: 160，200，225，258，512，520，608，768，1024，1080，1280，1600，1620，1920，2048，2400，2560，2592，3440，3840，4096。
                     * @param _resolution 生成图分辨率，默认1024:1024。
支持的图像宽高比例: 1:1，3:4，4:3，9:16，16:9。
支持的长边分辨率: 160，200，225，258，512，520，608，768，1024，1080，1280，1600，1620，1920，2048，2400，2560，2592，3440，3840，4096。
                     * 
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取随机种子，默认随机。
0：随机种子生成。
不传：随机种子生成。
正数：固定种子生成。

                     * @return Seed 随机种子，默认随机。
0：随机种子生成。
不传：随机种子生成。
正数：固定种子生成。

                     * 
                     */
                    int64_t GetSeed() const;

                    /**
                     * 设置随机种子，默认随机。
0：随机种子生成。
不传：随机种子生成。
正数：固定种子生成。

                     * @param _seed 随机种子，默认随机。
0：随机种子生成。
不传：随机种子生成。
正数：固定种子生成。

                     * 
                     */
                    void SetSeed(const int64_t& _seed);

                    /**
                     * 判断参数 Seed 是否已赋值
                     * @return Seed 是否已赋值
                     * 
                     */
                    bool SeedHasBeenSet() const;

                    /**
                     * 获取参考图。

- Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
- 当传入Image参数时，Style和Resolution参数不生效，输出图分辨率将保持Image传入图分辨率。
- 图片限制：单边分辨率大于128且小于2048；图片小于6M；格式支持 jpg、jpeg、png、bmp、tiff、webp。
                     * @return Image 参考图。

- Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
- 当传入Image参数时，Style和Resolution参数不生效，输出图分辨率将保持Image传入图分辨率。
- 图片限制：单边分辨率大于128且小于2048；图片小于6M；格式支持 jpg、jpeg、png、bmp、tiff、webp。
                     * 
                     */
                    Image GetImage() const;

                    /**
                     * 设置参考图。

- Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
- 当传入Image参数时，Style和Resolution参数不生效，输出图分辨率将保持Image传入图分辨率。
- 图片限制：单边分辨率大于128且小于2048；图片小于6M；格式支持 jpg、jpeg、png、bmp、tiff、webp。
                     * @param _image 参考图。

- Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
- 当传入Image参数时，Style和Resolution参数不生效，输出图分辨率将保持Image传入图分辨率。
- 图片限制：单边分辨率大于128且小于2048；图片小于6M；格式支持 jpg、jpeg、png、bmp、tiff、webp。
                     * 
                     */
                    void SetImage(const Image& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取生成的图片风格，参考值：

1：宫崎骏风格；
2：新海诚风格；
3：去旅行风格；
4：水彩风格；
5：像素风格；
6：童话世界风格；
7：奇趣卡通风格；
8：赛博朋克风格；
9：极简风格；
10：复古风格；
11：暗黑系风格；
12：波普风风格；
13：糖果色风格；
14：胶片电影风格；
15：素描风格；
16：水墨画风格；
17：油画风格；
18：粉笔风格；
19：粘土风格；
20：毛毡风格；
21：刺绣风格；
22：彩铅风格；
23：莫奈风格；
24：毕加索风格；
25：穆夏风格；
26：古风二次元风格；
27：都市二次元风格；
28：悬疑风格；
29：校园风格；
30：都市异能风格。
                     * @return Style 生成的图片风格，参考值：

1：宫崎骏风格；
2：新海诚风格；
3：去旅行风格；
4：水彩风格；
5：像素风格；
6：童话世界风格；
7：奇趣卡通风格；
8：赛博朋克风格；
9：极简风格；
10：复古风格；
11：暗黑系风格；
12：波普风风格；
13：糖果色风格；
14：胶片电影风格；
15：素描风格；
16：水墨画风格；
17：油画风格；
18：粉笔风格；
19：粘土风格；
20：毛毡风格；
21：刺绣风格；
22：彩铅风格；
23：莫奈风格；
24：毕加索风格；
25：穆夏风格；
26：古风二次元风格；
27：都市二次元风格；
28：悬疑风格；
29：校园风格；
30：都市异能风格。
                     * 
                     */
                    std::string GetStyle() const;

                    /**
                     * 设置生成的图片风格，参考值：

1：宫崎骏风格；
2：新海诚风格；
3：去旅行风格；
4：水彩风格；
5：像素风格；
6：童话世界风格；
7：奇趣卡通风格；
8：赛博朋克风格；
9：极简风格；
10：复古风格；
11：暗黑系风格；
12：波普风风格；
13：糖果色风格；
14：胶片电影风格；
15：素描风格；
16：水墨画风格；
17：油画风格；
18：粉笔风格；
19：粘土风格；
20：毛毡风格；
21：刺绣风格；
22：彩铅风格；
23：莫奈风格；
24：毕加索风格；
25：穆夏风格；
26：古风二次元风格；
27：都市二次元风格；
28：悬疑风格；
29：校园风格；
30：都市异能风格。
                     * @param _style 生成的图片风格，参考值：

1：宫崎骏风格；
2：新海诚风格；
3：去旅行风格；
4：水彩风格；
5：像素风格；
6：童话世界风格；
7：奇趣卡通风格；
8：赛博朋克风格；
9：极简风格；
10：复古风格；
11：暗黑系风格；
12：波普风风格；
13：糖果色风格；
14：胶片电影风格；
15：素描风格；
16：水墨画风格；
17：油画风格；
18：粉笔风格；
19：粘土风格；
20：毛毡风格；
21：刺绣风格；
22：彩铅风格；
23：莫奈风格；
24：毕加索风格；
25：穆夏风格；
26：古风二次元风格；
27：都市二次元风格；
28：悬疑风格；
29：校园风格；
30：都市异能风格。
                     * 
                     */
                    void SetStyle(const std::string& _style);

                    /**
                     * 判断参数 Style 是否已赋值
                     * @return Style 是否已赋值
                     * 
                     */
                    bool StyleHasBeenSet() const;

                    /**
                     * 获取为生成结果图添加标识的开关，默认为1。
1：添加标识。
0：不添加标识。
其他数值：默认按1处理。
建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。
                     * @return LogoAdd 为生成结果图添加标识的开关，默认为1。
1：添加标识。
0：不添加标识。
其他数值：默认按1处理。
建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。
                     * 
                     */
                    int64_t GetLogoAdd() const;

                    /**
                     * 设置为生成结果图添加标识的开关，默认为1。
1：添加标识。
0：不添加标识。
其他数值：默认按1处理。
建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。
                     * @param _logoAdd 为生成结果图添加标识的开关，默认为1。
1：添加标识。
0：不添加标识。
其他数值：默认按1处理。
建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。
                     * 
                     */
                    void SetLogoAdd(const int64_t& _logoAdd);

                    /**
                     * 判断参数 LogoAdd 是否已赋值
                     * @return LogoAdd 是否已赋值
                     * 
                     */
                    bool LogoAddHasBeenSet() const;

                    /**
                     * 获取标识内容设置。
默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。
                     * @return LogoParam 标识内容设置。
默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。
                     * 
                     */
                    LogoParam GetLogoParam() const;

                    /**
                     * 设置标识内容设置。
默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。
                     * @param _logoParam 标识内容设置。
默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。
                     * 
                     */
                    void SetLogoParam(const LogoParam& _logoParam);

                    /**
                     * 判断参数 LogoParam 是否已赋值
                     * @return LogoParam 是否已赋值
                     * 
                     */
                    bool LogoParamHasBeenSet() const;

                    /**
                     * 获取返回图像方式（base64 或 url），二选一，默认为 base64。url 有效期为1小时。
                     * @return RspImgType 返回图像方式（base64 或 url），二选一，默认为 base64。url 有效期为1小时。
                     * 
                     */
                    std::string GetRspImgType() const;

                    /**
                     * 设置返回图像方式（base64 或 url），二选一，默认为 base64。url 有效期为1小时。
                     * @param _rspImgType 返回图像方式（base64 或 url），二选一，默认为 base64。url 有效期为1小时。
                     * 
                     */
                    void SetRspImgType(const std::string& _rspImgType);

                    /**
                     * 判断参数 RspImgType 是否已赋值
                     * @return RspImgType 是否已赋值
                     * 
                     */
                    bool RspImgTypeHasBeenSet() const;

                private:

                    /**
                     * 文本描述。
算法将根据输入的文本智能生成与之相关的图像。建议详细描述画面主体、细节、场景等，文本描述越丰富，生成效果越精美。
不能为空，推荐使用中文。最多可传256个 utf-8 字符。
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * 生成图分辨率，默认1024:1024。
支持的图像宽高比例: 1:1，3:4，4:3，9:16，16:9。
支持的长边分辨率: 160，200，225，258，512，520，608，768，1024，1080，1280，1600，1620，1920，2048，2400，2560，2592，3440，3840，4096。
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * 随机种子，默认随机。
0：随机种子生成。
不传：随机种子生成。
正数：固定种子生成。

                     */
                    int64_t m_seed;
                    bool m_seedHasBeenSet;

                    /**
                     * 参考图。

- Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
- 当传入Image参数时，Style和Resolution参数不生效，输出图分辨率将保持Image传入图分辨率。
- 图片限制：单边分辨率大于128且小于2048；图片小于6M；格式支持 jpg、jpeg、png、bmp、tiff、webp。
                     */
                    Image m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 生成的图片风格，参考值：

1：宫崎骏风格；
2：新海诚风格；
3：去旅行风格；
4：水彩风格；
5：像素风格；
6：童话世界风格；
7：奇趣卡通风格；
8：赛博朋克风格；
9：极简风格；
10：复古风格；
11：暗黑系风格；
12：波普风风格；
13：糖果色风格；
14：胶片电影风格；
15：素描风格；
16：水墨画风格；
17：油画风格；
18：粉笔风格；
19：粘土风格；
20：毛毡风格；
21：刺绣风格；
22：彩铅风格；
23：莫奈风格；
24：毕加索风格；
25：穆夏风格；
26：古风二次元风格；
27：都市二次元风格；
28：悬疑风格；
29：校园风格；
30：都市异能风格。
                     */
                    std::string m_style;
                    bool m_styleHasBeenSet;

                    /**
                     * 为生成结果图添加标识的开关，默认为1。
1：添加标识。
0：不添加标识。
其他数值：默认按1处理。
建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。
                     */
                    int64_t m_logoAdd;
                    bool m_logoAddHasBeenSet;

                    /**
                     * 标识内容设置。
默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。
                     */
                    LogoParam m_logoParam;
                    bool m_logoParamHasBeenSet;

                    /**
                     * 返回图像方式（base64 或 url），二选一，默认为 base64。url 有效期为1小时。
                     */
                    std::string m_rspImgType;
                    bool m_rspImgTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AIART_V20221229_MODEL_TEXTTOIMAGERAPIDREQUEST_H_
