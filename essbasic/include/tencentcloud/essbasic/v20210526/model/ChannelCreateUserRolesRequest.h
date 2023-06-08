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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEUSERROLESREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEUSERROLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>
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
                * ChannelCreateUserRoles请求参数结构体
                */
                class ChannelCreateUserRolesRequest : public AbstractModel
                {
                public:
                    ChannelCreateUserRolesRequest();
                    ~ChannelCreateUserRolesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 必填。
                     * @return Agent 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 必填。
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 必填。
                     * @param Agent 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 必填。
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取绑定角色的员工id列表，电子签的UserId
                     * @return UserIds 绑定角色的员工id列表，电子签的UserId
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 设置绑定角色的员工id列表，电子签的UserId
                     * @param UserIds 绑定角色的员工id列表，电子签的UserId
                     */
                    void SetUserIds(const std::vector<std::string>& _userIds);

                    /**
                     * 判断参数 UserIds 是否已赋值
                     * @return UserIds 是否已赋值
                     */
                    bool UserIdsHasBeenSet() const;

                    /**
                     * 获取绑定角色的角色id列表
                     * @return RoleIds 绑定角色的角色id列表
                     */
                    std::vector<std::string> GetRoleIds() const;

                    /**
                     * 设置绑定角色的角色id列表
                     * @param RoleIds 绑定角色的角色id列表
                     */
                    void SetRoleIds(const std::vector<std::string>& _roleIds);

                    /**
                     * 判断参数 RoleIds 是否已赋值
                     * @return RoleIds 是否已赋值
                     */
                    bool RoleIdsHasBeenSet() const;

                    /**
                     * 获取操作者信息
                     * @return Operator 操作者信息
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作者信息
                     * @param Operator 操作者信息
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 必填。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 绑定角色的员工id列表，电子签的UserId
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

                    /**
                     * 绑定角色的角色id列表
                     */
                    std::vector<std::string> m_roleIds;
                    bool m_roleIdsHasBeenSet;

                    /**
                     * 操作者信息
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEUSERROLESREQUEST_H_
