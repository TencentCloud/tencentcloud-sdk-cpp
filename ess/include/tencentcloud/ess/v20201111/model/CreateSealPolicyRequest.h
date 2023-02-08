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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATESEALPOLICYREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATESEALPOLICYREQUEST_H_

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
                * CreateSealPolicy请求参数结构体
                */
                class CreateSealPolicyRequest : public AbstractModel
                {
                public:
                    CreateSealPolicyRequest();
                    ~CreateSealPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取授权发起人在平台信息，具体参考UserInfo结构体
                     * @return Operator 授权发起人在平台信息，具体参考UserInfo结构体
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置授权发起人在平台信息，具体参考UserInfo结构体
                     * @param Operator 授权发起人在平台信息，具体参考UserInfo结构体
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取用户在电子文件签署平台标识信息，具体参考UserInfo结构体。可跟下面的UserIds可叠加起作用
                     * @return Users 用户在电子文件签署平台标识信息，具体参考UserInfo结构体。可跟下面的UserIds可叠加起作用
                     */
                    std::vector<UserInfo> GetUsers() const;

                    /**
                     * 设置用户在电子文件签署平台标识信息，具体参考UserInfo结构体。可跟下面的UserIds可叠加起作用
                     * @param Users 用户在电子文件签署平台标识信息，具体参考UserInfo结构体。可跟下面的UserIds可叠加起作用
                     */
                    void SetUsers(const std::vector<UserInfo>& _users);

                    /**
                     * 判断参数 Users 是否已赋值
                     * @return Users 是否已赋值
                     */
                    bool UsersHasBeenSet() const;

                    /**
                     * 获取印章ID
                     * @return SealId 印章ID
                     */
                    std::string GetSealId() const;

                    /**
                     * 设置印章ID
                     * @param SealId 印章ID
                     */
                    void SetSealId(const std::string& _sealId);

                    /**
                     * 判断参数 SealId 是否已赋值
                     * @return SealId 是否已赋值
                     */
                    bool SealIdHasBeenSet() const;

                    /**
                     * 获取授权有效期。时间戳秒级
                     * @return Expired 授权有效期。时间戳秒级
                     */
                    int64_t GetExpired() const;

                    /**
                     * 设置授权有效期。时间戳秒级
                     * @param Expired 授权有效期。时间戳秒级
                     */
                    void SetExpired(const int64_t& _expired);

                    /**
                     * 判断参数 Expired 是否已赋值
                     * @return Expired 是否已赋值
                     */
                    bool ExpiredHasBeenSet() const;

                    /**
                     * 获取印章授权内容
                     * @return Policy 印章授权内容
                     */
                    std::string GetPolicy() const;

                    /**
                     * 设置印章授权内容
                     * @param Policy 印章授权内容
                     */
                    void SetPolicy(const std::string& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取应用相关
                     * @return Agent 应用相关
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置应用相关
                     * @param Agent 应用相关
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取需要授权的用户UserId集合。跟上面的SealId参数配合使用。选填，跟上面的Users同时起作用
                     * @return UserIds 需要授权的用户UserId集合。跟上面的SealId参数配合使用。选填，跟上面的Users同时起作用
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 设置需要授权的用户UserId集合。跟上面的SealId参数配合使用。选填，跟上面的Users同时起作用
                     * @param UserIds 需要授权的用户UserId集合。跟上面的SealId参数配合使用。选填，跟上面的Users同时起作用
                     */
                    void SetUserIds(const std::vector<std::string>& _userIds);

                    /**
                     * 判断参数 UserIds 是否已赋值
                     * @return UserIds 是否已赋值
                     */
                    bool UserIdsHasBeenSet() const;

                private:

                    /**
                     * 授权发起人在平台信息，具体参考UserInfo结构体
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 用户在电子文件签署平台标识信息，具体参考UserInfo结构体。可跟下面的UserIds可叠加起作用
                     */
                    std::vector<UserInfo> m_users;
                    bool m_usersHasBeenSet;

                    /**
                     * 印章ID
                     */
                    std::string m_sealId;
                    bool m_sealIdHasBeenSet;

                    /**
                     * 授权有效期。时间戳秒级
                     */
                    int64_t m_expired;
                    bool m_expiredHasBeenSet;

                    /**
                     * 印章授权内容
                     */
                    std::string m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * 应用相关
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 需要授权的用户UserId集合。跟上面的SealId参数配合使用。选填，跟上面的Users同时起作用
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATESEALPOLICYREQUEST_H_
