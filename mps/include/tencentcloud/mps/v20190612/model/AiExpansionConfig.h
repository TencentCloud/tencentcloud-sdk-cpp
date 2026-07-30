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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIEXPANSIONCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIEXPANSIONCONFIG_H_

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
                * 智能扩图配置。
                */
                class AiExpansionConfig : public AbstractModel
                {
                public:
                    AiExpansionConfig();
                    ~AiExpansionConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>能力配置开关，可选值：  ON：开启； OFF：关闭。 默认值：ON。</p>
                     * @return Switch <p>能力配置开关，可选值：  ON：开启； OFF：关闭。 默认值：ON。</p>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置<p>能力配置开关，可选值：  ON：开启； OFF：关闭。 默认值：ON。</p>
                     * @param _switch <p>能力配置开关，可选值：  ON：开启； OFF：关闭。 默认值：ON。</p>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取<p>目标比例，如 &quot;16:9&quot;</p>
                     * @return AspectRatio <p>目标比例，如 &quot;16:9&quot;</p>
                     * 
                     */
                    std::string GetAspectRatio() const;

                    /**
                     * 设置<p>目标比例，如 &quot;16:9&quot;</p>
                     * @param _aspectRatio <p>目标比例，如 &quot;16:9&quot;</p>
                     * 
                     */
                    void SetAspectRatio(const std::string& _aspectRatio);

                    /**
                     * 判断参数 AspectRatio 是否已赋值
                     * @return AspectRatio 是否已赋值
                     * 
                     */
                    bool AspectRatioHasBeenSet() const;

                    /**
                     * 获取<p>目标宽度（像素）</p><p>取值范围：[0, 2048]</p>
                     * @return Width <p>目标宽度（像素）</p><p>取值范围：[0, 2048]</p>
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置<p>目标宽度（像素）</p><p>取值范围：[0, 2048]</p>
                     * @param _width <p>目标宽度（像素）</p><p>取值范围：[0, 2048]</p>
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
                     * 获取<p>目标高度（像素）</p><p>取值范围：[0, 2048]</p>
                     * @return Height <p>目标高度（像素）</p><p>取值范围：[0, 2048]</p>
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置<p>目标高度（像素）</p><p>取值范围：[0, 2048]</p>
                     * @param _height <p>目标高度（像素）</p><p>取值范围：[0, 2048]</p>
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                private:

                    /**
                     * <p>能力配置开关，可选值：  ON：开启； OFF：关闭。 默认值：ON。</p>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * <p>目标比例，如 &quot;16:9&quot;</p>
                     */
                    std::string m_aspectRatio;
                    bool m_aspectRatioHasBeenSet;

                    /**
                     * <p>目标宽度（像素）</p><p>取值范围：[0, 2048]</p>
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * <p>目标高度（像素）</p><p>取值范围：[0, 2048]</p>
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIEXPANSIONCONFIG_H_
