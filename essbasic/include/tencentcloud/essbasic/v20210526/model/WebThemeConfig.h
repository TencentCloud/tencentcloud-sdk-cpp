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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_WEBTHEMECONFIG_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_WEBTHEMECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 主题配置
                */
                class WebThemeConfig : public AbstractModel
                {
                public:
                    WebThemeConfig();
                    ~WebThemeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取页面底部是否显示电子签logo
<br/>true：允许在页面底部隐藏电子签logo 
<br/>默认false，不允许允许在页面底部隐藏电子签logo
                     * @return DisplaySignBrandLogo 页面底部是否显示电子签logo
<br/>true：允许在页面底部隐藏电子签logo 
<br/>默认false，不允许允许在页面底部隐藏电子签logo
                     * 
                     */
                    bool GetDisplaySignBrandLogo() const;

                    /**
                     * 设置页面底部是否显示电子签logo
<br/>true：允许在页面底部隐藏电子签logo 
<br/>默认false，不允许允许在页面底部隐藏电子签logo
                     * @param _displaySignBrandLogo 页面底部是否显示电子签logo
<br/>true：允许在页面底部隐藏电子签logo 
<br/>默认false，不允许允许在页面底部隐藏电子签logo
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
                     * 获取嵌入式主题颜色
<br/>支持十六进制颜色值以及RGB格式颜色值，例如：#D54941，rgb(213, 73, 65)
                     * @return WebEmbedThemeColor 嵌入式主题颜色
<br/>支持十六进制颜色值以及RGB格式颜色值，例如：#D54941，rgb(213, 73, 65)
                     * 
                     */
                    std::string GetWebEmbedThemeColor() const;

                    /**
                     * 设置嵌入式主题颜色
<br/>支持十六进制颜色值以及RGB格式颜色值，例如：#D54941，rgb(213, 73, 65)
                     * @param _webEmbedThemeColor 嵌入式主题颜色
<br/>支持十六进制颜色值以及RGB格式颜色值，例如：#D54941，rgb(213, 73, 65)
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
                     * 页面底部是否显示电子签logo
<br/>true：允许在页面底部隐藏电子签logo 
<br/>默认false，不允许允许在页面底部隐藏电子签logo
                     */
                    bool m_displaySignBrandLogo;
                    bool m_displaySignBrandLogoHasBeenSet;

                    /**
                     * 嵌入式主题颜色
<br/>支持十六进制颜色值以及RGB格式颜色值，例如：#D54941，rgb(213, 73, 65)
                     */
                    std::string m_webEmbedThemeColor;
                    bool m_webEmbedThemeColorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_WEBTHEMECONFIG_H_
