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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELDELETEROLEUSERSREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELDELETEROLEUSERSREQUEST_H_

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
                * ChannelDeleteRoleUsers请求参数结构体
                */
                class ChannelDeleteRoleUsersRequest : public AbstractModel
                {
                public:
                    ChannelDeleteRoleUsersRequest();
                    ~ChannelDeleteRoleUsersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取代理信息此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 必填。
                     * @return Agent 代理信息此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 必填。
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置代理信息此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 必填。
                     * @param _agent 代理信息此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 必填。
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
                     * 获取角色Id（非超管或法人角色Id）
                     * @return RoleId 角色Id（非超管或法人角色Id）
                     * 
                     */
                    std::string GetRoleId() const;

                    /**
                     * 设置角色Id（非超管或法人角色Id）
                     * @param _roleId 角色Id（非超管或法人角色Id）
                     * 
                     */
                    void SetRoleId(const std::string& _roleId);

                    /**
                     * 判断参数 RoleId 是否已赋值
                     * @return RoleId 是否已赋值
                     * 
                     */
                    bool RoleIdHasBeenSet() const;

                    /**
                     * 获取电子签用户ID列表，与OpenIds参数二选一,优先UserIds参数，最多两百
                     * @return UserIds 电子签用户ID列表，与OpenIds参数二选一,优先UserIds参数，最多两百
                     * 
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 设置电子签用户ID列表，与OpenIds参数二选一,优先UserIds参数，最多两百
                     * @param _userIds 电子签用户ID列表，与OpenIds参数二选一,优先UserIds参数，最多两百
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
                     * 获取操作人信息
                     * @return Operator 操作人信息
                     * @deprecated
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作人信息
                     * @param _operator 操作人信息
                     * @deprecated
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * @deprecated
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取客户系统用户ID列表，与UserIds参数二选一,优先UserIds参数，最多两百
                     * @return OpenIds 客户系统用户ID列表，与UserIds参数二选一,优先UserIds参数，最多两百
                     * 
                     */
                    std::vector<std::string> GetOpenIds() const;

                    /**
                     * 设置客户系统用户ID列表，与UserIds参数二选一,优先UserIds参数，最多两百
                     * @param _openIds 客户系统用户ID列表，与UserIds参数二选一,优先UserIds参数，最多两百
                     * 
                     */
                    void SetOpenIds(const std::vector<std::string>& _openIds);

                    /**
                     * 判断参数 OpenIds 是否已赋值
                     * @return OpenIds 是否已赋值
                     * 
                     */
                    bool OpenIdsHasBeenSet() const;

                private:

                    /**
                     * 代理信息此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 必填。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 角色Id（非超管或法人角色Id）
                     */
                    std::string m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * 电子签用户ID列表，与OpenIds参数二选一,优先UserIds参数，最多两百
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

                    /**
                     * 操作人信息
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 客户系统用户ID列表，与UserIds参数二选一,优先UserIds参数，最多两百
                     */
                    std::vector<std::string> m_openIds;
                    bool m_openIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELDELETEROLEUSERSREQUEST_H_
