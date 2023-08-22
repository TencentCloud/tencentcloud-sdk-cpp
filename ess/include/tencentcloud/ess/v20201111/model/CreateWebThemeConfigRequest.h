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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEWEBTHEMECONFIGREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEWEBTHEMECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/WebThemeConfig.h>
#include <tencentcloud/ess/v20201111/model/Agent.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateWebThemeConfig请求参数结构体
                */
                class CreateWebThemeConfigRequest : public AbstractModel
                {
                public:
                    CreateWebThemeConfigRequest();
                    ~CreateWebThemeConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取操作人信息
                     * @return Operator 操作人信息
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作人信息
                     * @param _operator 操作人信息
                     * 
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取主题类型
<br/>EMBED_WEB_THEME：嵌入式主题
<br/>目前只支持EMBED_WEB_THEME，web页面嵌入的主题风格配置
                     * @return ThemeType 主题类型
<br/>EMBED_WEB_THEME：嵌入式主题
<br/>目前只支持EMBED_WEB_THEME，web页面嵌入的主题风格配置
                     * 
                     */
                    std::string GetThemeType() const;

                    /**
                     * 设置主题类型
<br/>EMBED_WEB_THEME：嵌入式主题
<br/>目前只支持EMBED_WEB_THEME，web页面嵌入的主题风格配置
                     * @param _themeType 主题类型
<br/>EMBED_WEB_THEME：嵌入式主题
<br/>目前只支持EMBED_WEB_THEME，web页面嵌入的主题风格配置
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

                    /**
                     * 获取代理企业和员工的信息。 在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。	
                     * @return Agent 代理企业和员工的信息。 在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。	
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置代理企业和员工的信息。 在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。	
                     * @param _agent 代理企业和员工的信息。 在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。	
                     * 
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                private:

                    /**
                     * 操作人信息
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 主题类型
<br/>EMBED_WEB_THEME：嵌入式主题
<br/>目前只支持EMBED_WEB_THEME，web页面嵌入的主题风格配置
                     */
                    std::string m_themeType;
                    bool m_themeTypeHasBeenSet;

                    /**
                     * 主题配置
                     */
                    WebThemeConfig m_webThemeConfig;
                    bool m_webThemeConfigHasBeenSet;

                    /**
                     * 代理企业和员工的信息。 在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。	
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEWEBTHEMECONFIGREQUEST_H_
