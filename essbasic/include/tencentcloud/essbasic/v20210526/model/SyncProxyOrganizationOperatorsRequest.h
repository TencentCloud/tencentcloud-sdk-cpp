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
                     * 获取操作类型，新增:"CREATE"，修改:"UPDATE"，离职:"RESIGN"
                     * @return OperatorType 操作类型，新增:"CREATE"，修改:"UPDATE"，离职:"RESIGN"
                     */
                    std::string GetOperatorType() const;

                    /**
                     * 设置操作类型，新增:"CREATE"，修改:"UPDATE"，离职:"RESIGN"
                     * @param OperatorType 操作类型，新增:"CREATE"，修改:"UPDATE"，离职:"RESIGN"
                     */
                    void SetOperatorType(const std::string& _operatorType);

                    /**
                     * 判断参数 OperatorType 是否已赋值
                     * @return OperatorType 是否已赋值
                     */
                    bool OperatorTypeHasBeenSet() const;

                    /**
                     * 获取应用信息
                     * @return Agent 应用信息
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置应用信息
                     * @param Agent 应用信息
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取经办人信息列表
                     * @return ProxyOrganizationOperators 经办人信息列表
                     */
                    std::vector<ProxyOrganizationOperator> GetProxyOrganizationOperators() const;

                    /**
                     * 设置经办人信息列表
                     * @param ProxyOrganizationOperators 经办人信息列表
                     */
                    void SetProxyOrganizationOperators(const std::vector<ProxyOrganizationOperator>& _proxyOrganizationOperators);

                    /**
                     * 判断参数 ProxyOrganizationOperators 是否已赋值
                     * @return ProxyOrganizationOperators 是否已赋值
                     */
                    bool ProxyOrganizationOperatorsHasBeenSet() const;

                    /**
                     * 获取操作者的信息
                     * @return Operator 操作者的信息
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作者的信息
                     * @param Operator 操作者的信息
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 操作类型，新增:"CREATE"，修改:"UPDATE"，离职:"RESIGN"
                     */
                    std::string m_operatorType;
                    bool m_operatorTypeHasBeenSet;

                    /**
                     * 应用信息
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 经办人信息列表
                     */
                    std::vector<ProxyOrganizationOperator> m_proxyOrganizationOperators;
                    bool m_proxyOrganizationOperatorsHasBeenSet;

                    /**
                     * 操作者的信息
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_SYNCPROXYORGANIZATIONOPERATORSREQUEST_H_
