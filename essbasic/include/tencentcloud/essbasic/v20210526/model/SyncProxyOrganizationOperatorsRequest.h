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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_SYNCPROXYORGANIZATIONOPERATORSREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_SYNCPROXYORGANIZATIONOPERATORSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>
#include <tencentcloud/essbasic/v20210526/model/ProxyOrganizationOperator.h>
#include <tencentcloud/essbasic/v20210526/model/UserInfo.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * SyncProxyOrganizationOperators请求参数结构体
                */
                class SyncProxyOrganizationOperatorsRequest : public AbstractModel
                {
                public:
                    SyncProxyOrganizationOperatorsRequest();
                    ~SyncProxyOrganizationOperatorsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
</ul>
第三方平台子客企业必须已经经过实名认证
                     * @return Agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
</ul>
第三方平台子客企业必须已经经过实名认证
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
</ul>
第三方平台子客企业必须已经经过实名认证
                     * @param _agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
</ul>
第三方平台子客企业必须已经经过实名认证
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
                     * 获取操作类型，对应的操作
<ul><li> **CREATE** :新增员工</li>
<li> **UPDATE** :修改员工（仅支持修改未实名员工的信息，如果已经实名并加入企业的员工基础信息修改需要到小程序中进行）</li>
<li> **RESIGN** :离职员工</li></ul>
                     * @return OperatorType 操作类型，对应的操作
<ul><li> **CREATE** :新增员工</li>
<li> **UPDATE** :修改员工（仅支持修改未实名员工的信息，如果已经实名并加入企业的员工基础信息修改需要到小程序中进行）</li>
<li> **RESIGN** :离职员工</li></ul>
                     * 
                     */
                    std::string GetOperatorType() const;

                    /**
                     * 设置操作类型，对应的操作
<ul><li> **CREATE** :新增员工</li>
<li> **UPDATE** :修改员工（仅支持修改未实名员工的信息，如果已经实名并加入企业的员工基础信息修改需要到小程序中进行）</li>
<li> **RESIGN** :离职员工</li></ul>
                     * @param _operatorType 操作类型，对应的操作
<ul><li> **CREATE** :新增员工</li>
<li> **UPDATE** :修改员工（仅支持修改未实名员工的信息，如果已经实名并加入企业的员工基础信息修改需要到小程序中进行）</li>
<li> **RESIGN** :离职员工</li></ul>
                     * 
                     */
                    void SetOperatorType(const std::string& _operatorType);

                    /**
                     * 判断参数 OperatorType 是否已赋值
                     * @return OperatorType 是否已赋值
                     * 
                     */
                    bool OperatorTypeHasBeenSet() const;

                    /**
                     * 获取员工信息列表，最多支持200个
                     * @return ProxyOrganizationOperators 员工信息列表，最多支持200个
                     * 
                     */
                    std::vector<ProxyOrganizationOperator> GetProxyOrganizationOperators() const;

                    /**
                     * 设置员工信息列表，最多支持200个
                     * @param _proxyOrganizationOperators 员工信息列表，最多支持200个
                     * 
                     */
                    void SetProxyOrganizationOperators(const std::vector<ProxyOrganizationOperator>& _proxyOrganizationOperators);

                    /**
                     * 判断参数 ProxyOrganizationOperators 是否已赋值
                     * @return ProxyOrganizationOperators 是否已赋值
                     * 
                     */
                    bool ProxyOrganizationOperatorsHasBeenSet() const;

                    /**
                     * 获取暂未开放
                     * @return Operator 暂未开放
                     * @deprecated
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置暂未开放
                     * @param _operator 暂未开放
                     * @deprecated
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * @deprecated
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
</ul>
第三方平台子客企业必须已经经过实名认证
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 操作类型，对应的操作
<ul><li> **CREATE** :新增员工</li>
<li> **UPDATE** :修改员工（仅支持修改未实名员工的信息，如果已经实名并加入企业的员工基础信息修改需要到小程序中进行）</li>
<li> **RESIGN** :离职员工</li></ul>
                     */
                    std::string m_operatorType;
                    bool m_operatorTypeHasBeenSet;

                    /**
                     * 员工信息列表，最多支持200个
                     */
                    std::vector<ProxyOrganizationOperator> m_proxyOrganizationOperators;
                    bool m_proxyOrganizationOperatorsHasBeenSet;

                    /**
                     * 暂未开放
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_SYNCPROXYORGANIZATIONOPERATORSREQUEST_H_
