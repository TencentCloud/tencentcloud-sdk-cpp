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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWFORWARDSREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWFORWARDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/FlowForwardInfo.h>
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
                * CreateFlowForwards请求参数结构体
                */
                class CreateFlowForwardsRequest : public AbstractModel
                {
                public:
                    CreateFlowForwardsRequest();
                    ~CreateFlowForwardsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取执行本接口操作的员工信息。注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @return Operator 执行本接口操作的员工信息。注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置执行本接口操作的员工信息。注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @param _operator 执行本接口操作的员工信息。注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
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
                     * 获取合同对应参与方需要修改的目标经办人。其UserId可在企业控制台中组织管理里面找到。或者使用获取员工信息接口得到。

注意：`需要保证目标经办人已经加入企业且已实名`
                     * @return TargetUserId 合同对应参与方需要修改的目标经办人。其UserId可在企业控制台中组织管理里面找到。或者使用获取员工信息接口得到。

注意：`需要保证目标经办人已经加入企业且已实名`
                     * 
                     */
                    std::string GetTargetUserId() const;

                    /**
                     * 设置合同对应参与方需要修改的目标经办人。其UserId可在企业控制台中组织管理里面找到。或者使用获取员工信息接口得到。

注意：`需要保证目标经办人已经加入企业且已实名`
                     * @param _targetUserId 合同对应参与方需要修改的目标经办人。其UserId可在企业控制台中组织管理里面找到。或者使用获取员工信息接口得到。

注意：`需要保证目标经办人已经加入企业且已实名`
                     * 
                     */
                    void SetTargetUserId(const std::string& _targetUserId);

                    /**
                     * 判断参数 TargetUserId 是否已赋值
                     * @return TargetUserId 是否已赋值
                     * 
                     */
                    bool TargetUserIdHasBeenSet() const;

                    /**
                     * 获取企业签署方的合同及对应签署方
                     * @return FlowForwardInfos 企业签署方的合同及对应签署方
                     * 
                     */
                    std::vector<FlowForwardInfo> GetFlowForwardInfos() const;

                    /**
                     * 设置企业签署方的合同及对应签署方
                     * @param _flowForwardInfos 企业签署方的合同及对应签署方
                     * 
                     */
                    void SetFlowForwardInfos(const std::vector<FlowForwardInfo>& _flowForwardInfos);

                    /**
                     * 判断参数 FlowForwardInfos 是否已赋值
                     * @return FlowForwardInfos 是否已赋值
                     * 
                     */
                    bool FlowForwardInfosHasBeenSet() const;

                    /**
                     * 获取代理企业和员工的信息。在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * @return Agent 代理企业和员工的信息。在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置代理企业和员工的信息。在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * @param _agent 代理企业和员工的信息。在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
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
                     * 执行本接口操作的员工信息。注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 合同对应参与方需要修改的目标经办人。其UserId可在企业控制台中组织管理里面找到。或者使用获取员工信息接口得到。

注意：`需要保证目标经办人已经加入企业且已实名`
                     */
                    std::string m_targetUserId;
                    bool m_targetUserIdHasBeenSet;

                    /**
                     * 企业签署方的合同及对应签署方
                     */
                    std::vector<FlowForwardInfo> m_flowForwardInfos;
                    bool m_flowForwardInfosHasBeenSet;

                    /**
                     * 代理企业和员工的信息。在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWFORWARDSREQUEST_H_
