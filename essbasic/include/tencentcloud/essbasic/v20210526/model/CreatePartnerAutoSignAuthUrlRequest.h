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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEPARTNERAUTOSIGNAUTHURLREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEPARTNERAUTOSIGNAUTHURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * CreatePartnerAutoSignAuthUrl请求参数结构体
                */
                class CreatePartnerAutoSignAuthUrlRequest : public AbstractModel
                {
                public:
                    CreatePartnerAutoSignAuthUrlRequest();
                    ~CreatePartnerAutoSignAuthUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li>
</ul>
第三方平台子客企业和员工必须已经经过实名认证
                     * @return Agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li>
</ul>
第三方平台子客企业和员工必须已经经过实名认证
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li>
</ul>
第三方平台子客企业和员工必须已经经过实名认证
                     * @param _agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li>
</ul>
第三方平台子客企业和员工必须已经经过实名认证
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
                     * 获取被授企业id，和AuthorizedOrganizationName二选一，不能同时为空
注：`被授权企业必须和当前企业在同一应用号下`
                     * @return AuthorizedOrganizationId 被授企业id，和AuthorizedOrganizationName二选一，不能同时为空
注：`被授权企业必须和当前企业在同一应用号下`
                     * 
                     */
                    std::string GetAuthorizedOrganizationId() const;

                    /**
                     * 设置被授企业id，和AuthorizedOrganizationName二选一，不能同时为空
注：`被授权企业必须和当前企业在同一应用号下`
                     * @param _authorizedOrganizationId 被授企业id，和AuthorizedOrganizationName二选一，不能同时为空
注：`被授权企业必须和当前企业在同一应用号下`
                     * 
                     */
                    void SetAuthorizedOrganizationId(const std::string& _authorizedOrganizationId);

                    /**
                     * 判断参数 AuthorizedOrganizationId 是否已赋值
                     * @return AuthorizedOrganizationId 是否已赋值
                     * 
                     */
                    bool AuthorizedOrganizationIdHasBeenSet() const;

                    /**
                     * 获取被授权企业名，和AuthorizedOrganizationId二选一，不能同时为空
注：`被授权企业必须和当前企业在同一应用号下`
                     * @return AuthorizedOrganizationName 被授权企业名，和AuthorizedOrganizationId二选一，不能同时为空
注：`被授权企业必须和当前企业在同一应用号下`
                     * 
                     */
                    std::string GetAuthorizedOrganizationName() const;

                    /**
                     * 设置被授权企业名，和AuthorizedOrganizationId二选一，不能同时为空
注：`被授权企业必须和当前企业在同一应用号下`
                     * @param _authorizedOrganizationName 被授权企业名，和AuthorizedOrganizationId二选一，不能同时为空
注：`被授权企业必须和当前企业在同一应用号下`
                     * 
                     */
                    void SetAuthorizedOrganizationName(const std::string& _authorizedOrganizationName);

                    /**
                     * 判断参数 AuthorizedOrganizationName 是否已赋值
                     * @return AuthorizedOrganizationName 是否已赋值
                     * 
                     */
                    bool AuthorizedOrganizationNameHasBeenSet() const;

                    /**
                     * 获取是否给平台应用授权:
- true: 是（无需设置AuthorizedOrganizationId和AuthorizedOrganizationName）
- false: 否（默认）
 注：该参数需要开通“基于子客授权第三方应用可文件发起子客自动签署”，请联系运营经理开通

                     * @return PlatformAppAuthorization 是否给平台应用授权:
- true: 是（无需设置AuthorizedOrganizationId和AuthorizedOrganizationName）
- false: 否（默认）
 注：该参数需要开通“基于子客授权第三方应用可文件发起子客自动签署”，请联系运营经理开通

                     * 
                     */
                    bool GetPlatformAppAuthorization() const;

                    /**
                     * 设置是否给平台应用授权:
- true: 是（无需设置AuthorizedOrganizationId和AuthorizedOrganizationName）
- false: 否（默认）
 注：该参数需要开通“基于子客授权第三方应用可文件发起子客自动签署”，请联系运营经理开通

                     * @param _platformAppAuthorization 是否给平台应用授权:
- true: 是（无需设置AuthorizedOrganizationId和AuthorizedOrganizationName）
- false: 否（默认）
 注：该参数需要开通“基于子客授权第三方应用可文件发起子客自动签署”，请联系运营经理开通

                     * 
                     */
                    void SetPlatformAppAuthorization(const bool& _platformAppAuthorization);

                    /**
                     * 判断参数 PlatformAppAuthorization 是否已赋值
                     * @return PlatformAppAuthorization 是否已赋值
                     * 
                     */
                    bool PlatformAppAuthorizationHasBeenSet() const;

                    /**
                     * 获取指定印章类型，指定后只能选择该类型的印章进行授权
支持以下印章类型：
- OFFICIAL : 企业公章
- CONTRACT : 合同专用章
- FINANCE : 财务专用章
- PERSONNEL : 人事专用章
                     * @return SealTypes 指定印章类型，指定后只能选择该类型的印章进行授权
支持以下印章类型：
- OFFICIAL : 企业公章
- CONTRACT : 合同专用章
- FINANCE : 财务专用章
- PERSONNEL : 人事专用章
                     * 
                     */
                    std::vector<std::string> GetSealTypes() const;

                    /**
                     * 设置指定印章类型，指定后只能选择该类型的印章进行授权
支持以下印章类型：
- OFFICIAL : 企业公章
- CONTRACT : 合同专用章
- FINANCE : 财务专用章
- PERSONNEL : 人事专用章
                     * @param _sealTypes 指定印章类型，指定后只能选择该类型的印章进行授权
支持以下印章类型：
- OFFICIAL : 企业公章
- CONTRACT : 合同专用章
- FINANCE : 财务专用章
- PERSONNEL : 人事专用章
                     * 
                     */
                    void SetSealTypes(const std::vector<std::string>& _sealTypes);

                    /**
                     * 判断参数 SealTypes 是否已赋值
                     * @return SealTypes 是否已赋值
                     * 
                     */
                    bool SealTypesHasBeenSet() const;

                private:

                    /**
                     * 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li>
</ul>
第三方平台子客企业和员工必须已经经过实名认证
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 被授企业id，和AuthorizedOrganizationName二选一，不能同时为空
注：`被授权企业必须和当前企业在同一应用号下`
                     */
                    std::string m_authorizedOrganizationId;
                    bool m_authorizedOrganizationIdHasBeenSet;

                    /**
                     * 被授权企业名，和AuthorizedOrganizationId二选一，不能同时为空
注：`被授权企业必须和当前企业在同一应用号下`
                     */
                    std::string m_authorizedOrganizationName;
                    bool m_authorizedOrganizationNameHasBeenSet;

                    /**
                     * 是否给平台应用授权:
- true: 是（无需设置AuthorizedOrganizationId和AuthorizedOrganizationName）
- false: 否（默认）
 注：该参数需要开通“基于子客授权第三方应用可文件发起子客自动签署”，请联系运营经理开通

                     */
                    bool m_platformAppAuthorization;
                    bool m_platformAppAuthorizationHasBeenSet;

                    /**
                     * 指定印章类型，指定后只能选择该类型的印章进行授权
支持以下印章类型：
- OFFICIAL : 企业公章
- CONTRACT : 合同专用章
- FINANCE : 财务专用章
- PERSONNEL : 人事专用章
                     */
                    std::vector<std::string> m_sealTypes;
                    bool m_sealTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEPARTNERAUTOSIGNAUTHURLREQUEST_H_
