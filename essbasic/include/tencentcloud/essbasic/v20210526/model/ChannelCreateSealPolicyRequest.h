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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATESEALPOLICYREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATESEALPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>
#include <tencentcloud/essbasic/v20210526/model/OrganizationInfo.h>
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
                * ChannelCreateSealPolicy请求参数结构体
                */
                class ChannelCreateSealPolicyRequest : public AbstractModel
                {
                public:
                    ChannelCreateSealPolicyRequest();
                    ~ChannelCreateSealPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户渠道信息
                     * @return Agent 用户渠道信息
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置用户渠道信息
                     * @param Agent 用户渠道信息
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取指定印章
                     * @return SealId 指定印章
                     */
                    std::string GetSealId() const;

                    /**
                     * 设置指定印章
                     * @param SealId 指定印章
                     */
                    void SetSealId(const std::string& _sealId);

                    /**
                     * 判断参数 SealId 是否已赋值
                     * @return SealId 是否已赋值
                     */
                    bool SealIdHasBeenSet() const;

                    /**
                     * 获取指定待授权的用户ID数组
                     * @return UserIds 指定待授权的用户ID数组
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 设置指定待授权的用户ID数组
                     * @param UserIds 指定待授权的用户ID数组
                     */
                    void SetUserIds(const std::vector<std::string>& _userIds);

                    /**
                     * 判断参数 UserIds 是否已赋值
                     * @return UserIds 是否已赋值
                     */
                    bool UserIdsHasBeenSet() const;

                    /**
                     * 获取企业机构信息
                     * @return Organization 企业机构信息
                     */
                    OrganizationInfo GetOrganization() const;

                    /**
                     * 设置企业机构信息
                     * @param Organization 企业机构信息
                     */
                    void SetOrganization(const OrganizationInfo& _organization);

                    /**
                     * 判断参数 Organization 是否已赋值
                     * @return Organization 是否已赋值
                     */
                    bool OrganizationHasBeenSet() const;

                    /**
                     * 获取操作人（用户）信息
                     * @return Operator 操作人（用户）信息
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作人（用户）信息
                     * @param Operator 操作人（用户）信息
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 用户渠道信息
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 指定印章
                     */
                    std::string m_sealId;
                    bool m_sealIdHasBeenSet;

                    /**
                     * 指定待授权的用户ID数组
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

                    /**
                     * 企业机构信息
                     */
                    OrganizationInfo m_organization;
                    bool m_organizationHasBeenSet;

                    /**
                     * 操作人（用户）信息
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATESEALPOLICYREQUEST_H_
