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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEWEBTHEMECONFIGREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEWEBTHEMECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>
#include <tencentcloud/essbasic/v20210526/model/WebThemeConfig.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * ChannelCreateWebThemeConfig请求参数结构体
                */
                class ChannelCreateWebThemeConfigRequest : public AbstractModel
                {
                public:
                    ChannelCreateWebThemeConfigRequest();
                    ~ChannelCreateWebThemeConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 必填。
                     * @return Agent 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 必填。
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 必填。
                     * @param _agent 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 必填。
                     * 
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取主题类型<br/>EMBED_WEB_THEME：嵌入式主题
<ul>
<li>EMBED_WEB_THEME，web页面嵌入的主题风格配置</li>
<li>COMPANY_AUTHENTICATE，子客认证主题配置， 对当前第三方应用号生效，
目前支持的有，背景图替换，隐藏企业认证页面导航栏和隐藏企业认证顶部logo</li>
</ul>
                     * @return ThemeType 主题类型<br/>EMBED_WEB_THEME：嵌入式主题
<ul>
<li>EMBED_WEB_THEME，web页面嵌入的主题风格配置</li>
<li>COMPANY_AUTHENTICATE，子客认证主题配置， 对当前第三方应用号生效，
目前支持的有，背景图替换，隐藏企业认证页面导航栏和隐藏企业认证顶部logo</li>
</ul>
                     * 
                     */
                    std::string GetThemeType() const;

                    /**
                     * 设置主题类型<br/>EMBED_WEB_THEME：嵌入式主题
<ul>
<li>EMBED_WEB_THEME，web页面嵌入的主题风格配置</li>
<li>COMPANY_AUTHENTICATE，子客认证主题配置， 对当前第三方应用号生效，
目前支持的有，背景图替换，隐藏企业认证页面导航栏和隐藏企业认证顶部logo</li>
</ul>
                     * @param _themeType 主题类型<br/>EMBED_WEB_THEME：嵌入式主题
<ul>
<li>EMBED_WEB_THEME，web页面嵌入的主题风格配置</li>
<li>COMPANY_AUTHENTICATE，子客认证主题配置， 对当前第三方应用号生效，
目前支持的有，背景图替换，隐藏企业认证页面导航栏和隐藏企业认证顶部logo</li>
</ul>
                     * 
                     */
                    void SetThemeType(const std::string& _themeType);

                    /**
                     * 判断参数 ThemeType 是否已赋值
                     * @return ThemeType 是否已赋值
                     * 
                     */
                    bool ThemeTypeHasBeenSet() const;

                    /**
                     * 获取主题配置
                     * @return WebThemeConfig 主题配置
                     * 
                     */
                    WebThemeConfig GetWebThemeConfig() const;

                    /**
                     * 设置主题配置
                     * @param _webThemeConfig 主题配置
                     * 
                     */
                    void SetWebThemeConfig(const WebThemeConfig& _webThemeConfig);

                    /**
                     * 判断参数 WebThemeConfig 是否已赋值
                     * @return WebThemeConfig 是否已赋值
                     * 
                     */
                    bool WebThemeConfigHasBeenSet() const;

                private:

                    /**
                     * 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 必填。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 主题类型<br/>EMBED_WEB_THEME：嵌入式主题
<ul>
<li>EMBED_WEB_THEME，web页面嵌入的主题风格配置</li>
<li>COMPANY_AUTHENTICATE，子客认证主题配置， 对当前第三方应用号生效，
目前支持的有，背景图替换，隐藏企业认证页面导航栏和隐藏企业认证顶部logo</li>
</ul>
                     */
                    std::string m_themeType;
                    bool m_themeTypeHasBeenSet;

                    /**
                     * 主题配置
                     */
                    WebThemeConfig m_webThemeConfig;
                    bool m_webThemeConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEWEBTHEMECONFIGREQUEST_H_
