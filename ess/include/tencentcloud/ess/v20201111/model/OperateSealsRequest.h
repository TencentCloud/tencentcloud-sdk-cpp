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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_OPERATESEALSREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_OPERATESEALSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
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
                * OperateSeals请求参数结构体
                */
                class OperateSealsRequest : public AbstractModel
                {
                public:
                    OperateSealsRequest();
                    ~OperateSealsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取执行本接口操作的员工信息。 注: 在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。
                     * @return Operator 执行本接口操作的员工信息。 注: 在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置执行本接口操作的员工信息。 注: 在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。
                     * @param _operator 执行本接口操作的员工信息。 注: 在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。
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

                    /**
                     * 获取操作类型，int，目前支持传入以下类型：
<ul><li>1：启用印章</li></ul>
<ul><li>2：停用印章</li></ul>
                     * @return Act 操作类型，int，目前支持传入以下类型：
<ul><li>1：启用印章</li></ul>
<ul><li>2：停用印章</li></ul>
                     * 
                     */
                    int64_t GetAct() const;

                    /**
                     * 设置操作类型，int，目前支持传入以下类型：
<ul><li>1：启用印章</li></ul>
<ul><li>2：停用印章</li></ul>
                     * @param _act 操作类型，int，目前支持传入以下类型：
<ul><li>1：启用印章</li></ul>
<ul><li>2：停用印章</li></ul>
                     * 
                     */
                    void SetAct(const int64_t& _act);

                    /**
                     * 判断参数 Act 是否已赋值
                     * @return Act 是否已赋值
                     * 
                     */
                    bool ActHasBeenSet() const;

                    /**
                     * 获取需要操作的印章ID，数组形式，印章ID可从【web控制台->印章 】获取。
                     * @return SealIds 需要操作的印章ID，数组形式，印章ID可从【web控制台->印章 】获取。
                     * 
                     */
                    std::vector<std::string> GetSealIds() const;

                    /**
                     * 设置需要操作的印章ID，数组形式，印章ID可从【web控制台->印章 】获取。
                     * @param _sealIds 需要操作的印章ID，数组形式，印章ID可从【web控制台->印章 】获取。
                     * 
                     */
                    void SetSealIds(const std::vector<std::string>& _sealIds);

                    /**
                     * 判断参数 SealIds 是否已赋值
                     * @return SealIds 是否已赋值
                     * 
                     */
                    bool SealIdsHasBeenSet() const;

                private:

                    /**
                     * 执行本接口操作的员工信息。 注: 在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 代理企业和员工的信息。 在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 操作类型，int，目前支持传入以下类型：
<ul><li>1：启用印章</li></ul>
<ul><li>2：停用印章</li></ul>
                     */
                    int64_t m_act;
                    bool m_actHasBeenSet;

                    /**
                     * 需要操作的印章ID，数组形式，印章ID可从【web控制台->印章 】获取。
                     */
                    std::vector<std::string> m_sealIds;
                    bool m_sealIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_OPERATESEALSREQUEST_H_
