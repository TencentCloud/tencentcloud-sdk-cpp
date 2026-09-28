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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_IMAGECOMPOSECANVAS_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_IMAGECOMPOSECANVAS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 图片处理图层融合功能画布参数
                */
                class ImageComposeCanvas : public AbstractModel
                {
                public:
                    ImageComposeCanvas();
                    ~ImageComposeCanvas() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>画布宽度，取值范围 [1, 10240]，需与 Height 同时设置。</p>
                     * @return Width <p>画布宽度，取值范围 [1, 10240]，需与 Height 同时设置。</p>
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置<p>画布宽度，取值范围 [1, 10240]，需与 Height 同时设置。</p>
                     * @param _width <p>画布宽度，取值范围 [1, 10240]，需与 Height 同时设置。</p>
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取<p>画布高度，取值范围 [1, 10240]，需与 Width 同时设置。</p>
                     * @return Height <p>画布高度，取值范围 [1, 10240]，需与 Width 同时设置。</p>
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置<p>画布高度，取值范围 [1, 10240]，需与 Width 同时设置。</p>
                     * @param _height <p>画布高度，取值范围 [1, 10240]，需与 Width 同时设置。</p>
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取<p>画布底色，统一为 8 位十六进制 #RRGGBBAA（含 alpha），原样作为画布底色。缺省 #00000000（全透明）。示例：#FFFFFFFF 不透明白、#FFFFFF80 半透明白。</p><p>输出格式不支持透明通道时（如 JPEG），透明区域按该底色的 RGB 塌陷；缺省值会得到黑底，需要白底请显式传    #FFFFFFFF。</p>
                     * @return Background <p>画布底色，统一为 8 位十六进制 #RRGGBBAA（含 alpha），原样作为画布底色。缺省 #00000000（全透明）。示例：#FFFFFFFF 不透明白、#FFFFFF80 半透明白。</p><p>输出格式不支持透明通道时（如 JPEG），透明区域按该底色的 RGB 塌陷；缺省值会得到黑底，需要白底请显式传    #FFFFFFFF。</p>
                     * 
                     */
                    std::string GetBackground() const;

                    /**
                     * 设置<p>画布底色，统一为 8 位十六进制 #RRGGBBAA（含 alpha），原样作为画布底色。缺省 #00000000（全透明）。示例：#FFFFFFFF 不透明白、#FFFFFF80 半透明白。</p><p>输出格式不支持透明通道时（如 JPEG），透明区域按该底色的 RGB 塌陷；缺省值会得到黑底，需要白底请显式传    #FFFFFFFF。</p>
                     * @param _background <p>画布底色，统一为 8 位十六进制 #RRGGBBAA（含 alpha），原样作为画布底色。缺省 #00000000（全透明）。示例：#FFFFFFFF 不透明白、#FFFFFF80 半透明白。</p><p>输出格式不支持透明通道时（如 JPEG），透明区域按该底色的 RGB 塌陷；缺省值会得到黑底，需要白底请显式传    #FFFFFFFF。</p>
                     * 
                     */
                    void SetBackground(const std::string& _background);

                    /**
                     * 判断参数 Background 是否已赋值
                     * @return Background 是否已赋值
                     * 
                     */
                    bool BackgroundHasBeenSet() const;

                private:

                    /**
                     * <p>画布宽度，取值范围 [1, 10240]，需与 Height 同时设置。</p>
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * <p>画布高度，取值范围 [1, 10240]，需与 Width 同时设置。</p>
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * <p>画布底色，统一为 8 位十六进制 #RRGGBBAA（含 alpha），原样作为画布底色。缺省 #00000000（全透明）。示例：#FFFFFFFF 不透明白、#FFFFFF80 半透明白。</p><p>输出格式不支持透明通道时（如 JPEG），透明区域按该底色的 RGB 塌陷；缺省值会得到黑底，需要白底请显式传    #FFFFFFFF。</p>
                     */
                    std::string m_background;
                    bool m_backgroundHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_IMAGECOMPOSECANVAS_H_
