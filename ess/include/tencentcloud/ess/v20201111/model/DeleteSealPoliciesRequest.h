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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DELETESEALPOLICIESREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DELETESEALPOLICIESREQUEST_H_

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
                * DeleteSealPolicies请求参数结构体
                */
                class DeleteSealPoliciesRequest : public AbstractModel
                {
                public:
                    DeleteSealPoliciesRequest();
                    ~DeleteSealPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取调用方用户信息，userId 必填
                     * @return Operator 调用方用户信息，userId 必填
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置调用方用户信息，userId 必填
                     * @param _operator 调用方用户信息，userId 必填
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
                     * 获取印章授权编码数组。这个参数跟下面的SealId其中一个必填，另外一个可选填
                     * @return PolicyIds 印章授权编码数组。这个参数跟下面的SealId其中一个必填，另外一个可选填
                     * 
                     */
                    std::vector<std::string> GetPolicyIds() const;

                    /**
                     * 设置印章授权编码数组。这个参数跟下面的SealId其中一个必填，另外一个可选填
                     * @param _policyIds 印章授权编码数组。这个参数跟下面的SealId其中一个必填，另外一个可选填
                     * 
                     */
                    void SetPolicyIds(const std::vector<std::string>& _policyIds);

                    /**
                     * 判断参数 PolicyIds 是否已赋值
                     * @return PolicyIds 是否已赋值
                     * 
                     */
                    bool PolicyIdsHasBeenSet() const;

                    /**
                     * 获取印章ID。这个参数跟上面的PolicyIds其中一个必填，另外一个可选填
                     * @return SealId 印章ID。这个参数跟上面的PolicyIds其中一个必填，另外一个可选填
                     * 
                     */
                    std::string GetSealId() const;

                    /**
                     * 设置印章ID。这个参数跟上面的PolicyIds其中一个必填，另外一个可选填
                     * @param _sealId 印章ID。这个参数跟上面的PolicyIds其中一个必填，另外一个可选填
                     * 
                     */
                    void SetSealId(const std::string& _sealId);

                    /**
                     * 判断参数 SealId 是否已赋值
                     * @return SealId 是否已赋值
                     * 
                     */
                    bool SealIdHasBeenSet() const;

                    /**
                     * 获取待授权的员工ID
                     * @return UserIds 待授权的员工ID
                     * 
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 设置待授权的员工ID
                     * @param _userIds 待授权的员工ID
                     * 
                     */
                    void SetUserIds(const std::vector<std::string>& _userIds);

                    /**
                     * 判断参数 UserIds 是否已赋值
                     * @return UserIds 是否已赋值
                     * 
                     */
                    bool UserIdsHasBeenSet() const;

                    /**
                     * 获取代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     * @return Agent 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     * @param _agent 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
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
                     * 调用方用户信息，userId 必填
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 印章授权编码数组。这个参数跟下面的SealId其中一个必填，另外一个可选填
                     */
                    std::vector<std::string> m_policyIds;
                    bool m_policyIdsHasBeenSet;

                    /**
                     * 印章ID。这个参数跟上面的PolicyIds其中一个必填，另外一个可选填
                     */
                    std::string m_sealId;
                    bool m_sealIdHasBeenSet;

                    /**
                     * 待授权的员工ID
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

                    /**
                     * 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DELETESEALPOLICIESREQUEST_H_
