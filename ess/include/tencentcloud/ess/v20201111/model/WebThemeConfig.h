/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_WEBTHEMECONFIG_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_WEBTHEMECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 页面主题配置
                */
                class WebThemeConfig : public AbstractModel
                {
                public:
                    WebThemeConfig();
                    ~WebThemeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否显示页面底部电子签logo，取值如下：
<ul><li> **true**：页面底部显示电子签logo</li>
<li> **false**：页面底部不显示电子签logo（默认）</li></ul>
                     * @return DisplaySignBrandLogo 是否显示页面底部电子签logo，取值如下：
<ul><li> **true**：页面底部显示电子签logo</li>
<li> **false**：页面底部不显示电子签logo（默认）</li></ul>
                     * 
                     */
                    bool GetDisplaySignBrandLogo() const;

                    /**
                     * 设置是否显示页面底部电子签logo，取值如下：
<ul><li> **true**：页面底部显示电子签logo</li>
<li> **false**：页面底部不显示电子签logo（默认）</li></ul>
                     * @param _displaySignBrandLogo 是否显示页面底部电子签logo，取值如下：
<ul><li> **true**：页面底部显示电子签logo</li>
<li> **false**：页面底部不显示电子签logo（默认）</li></ul>
                     * 
                     */
                    void SetDisplaySignBrandLogo(const bool& _displaySignBrandLogo);

                    /**
                     * 判断参数 DisplaySignBrandLogo 是否已赋值
                     * @return DisplaySignBrandLogo 是否已赋值
                     * 
                     */
                    bool DisplaySignBrandLogoHasBeenSet() const;

                    /**
                     * 获取主题颜色：
支持十六进制颜色值以及RGB格式颜色值，例如：#D54941，rgb(213, 73, 65)
<br/>
                     * @return WebEmbedThemeColor 主题颜色：
支持十六进制颜色值以及RGB格式颜色值，例如：#D54941，rgb(213, 73, 65)
<br/>
                     * 
                     */
                    std::string GetWebEmbedThemeColor() const;

                    /**
                     * 设置主题颜色：
支持十六进制颜色值以及RGB格式颜色值，例如：#D54941，rgb(213, 73, 65)
<br/>
                     * @param _webEmbedThemeColor 主题颜色：
支持十六进制颜色值以及RGB格式颜色值，例如：#D54941，rgb(213, 73, 65)
<br/>
                     * 
                     */
                    void SetWebEmbedThemeColor(const std::string& _webEmbedThemeColor);

                    /**
                     * 判断参数 WebEmbedThemeColor 是否已赋值
                     * @return WebEmbedThemeColor 是否已赋值
                     * 
                     */
                    bool WebEmbedThemeColorHasBeenSet() const;

                private:

                    /**
                     * 是否显示页面底部电子签logo，取值如下：
<ul><li> **true**：页面底部显示电子签logo</li>
<li> **false**：页面底部不显示电子签logo（默认）</li></ul>
                     */
                    bool m_displaySignBrandLogo;
                    bool m_displaySignBrandLogoHasBeenSet;

                    /**
                     * 主题颜色：
支持十六进制颜色值以及RGB格式颜色值，例如：#D54941，rgb(213, 73, 65)
<br/>
                     */
                    std::string m_webEmbedThemeColor;
                    bool m_webEmbedThemeColorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_WEBTHEMECONFIG_H_
