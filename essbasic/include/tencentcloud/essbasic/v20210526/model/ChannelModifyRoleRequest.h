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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELMODIFYROLEREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELMODIFYROLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>
#include <tencentcloud/essbasic/v20210526/model/PermissionGroup.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * ChannelModifyRole请求参数结构体
                */
                class ChannelModifyRoleRequest : public AbstractModel
                {
                public:
                    ChannelModifyRoleRequest();
                    ~ChannelModifyRoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取代理企业和员工的信息。
                     * @return Agent 代理企业和员工的信息。
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置代理企业和员工的信息。
                     * @param _agent 代理企业和员工的信息。
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
                     * 获取角色名称，最大长度为20个字符，仅限中文、字母、数字和下划线组成。
                     * @return Name 角色名称，最大长度为20个字符，仅限中文、字母、数字和下划线组成。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置角色名称，最大长度为20个字符，仅限中文、字母、数字和下划线组成。
                     * @param _name 角色名称，最大长度为20个字符，仅限中文、字母、数字和下划线组成。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取角色Id，可通过接口 ChannelDescribeRoles 查询获取
                     * @return RoleId 角色Id，可通过接口 ChannelDescribeRoles 查询获取
                     * 
                     */
                    std::string GetRoleId() const;

                    /**
                     * 设置角色Id，可通过接口 ChannelDescribeRoles 查询获取
                     * @param _roleId 角色Id，可通过接口 ChannelDescribeRoles 查询获取
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
                     * 获取角色描述，最大长度为50个字符
                     * @return Description 角色描述，最大长度为50个字符
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置角色描述，最大长度为50个字符
                     * @param _description 角色描述，最大长度为50个字符
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取权限树，权限树内容 PermissionGroups 可参考接口 ChannelDescribeRoles的输出
                     * @return PermissionGroups 权限树，权限树内容 PermissionGroups 可参考接口 ChannelDescribeRoles的输出
                     * 
                     */
                    std::vector<PermissionGroup> GetPermissionGroups() const;

                    /**
                     * 设置权限树，权限树内容 PermissionGroups 可参考接口 ChannelDescribeRoles的输出
                     * @param _permissionGroups 权限树，权限树内容 PermissionGroups 可参考接口 ChannelDescribeRoles的输出
                     * 
                     */
                    void SetPermissionGroups(const std::vector<PermissionGroup>& _permissionGroups);

                    /**
                     * 判断参数 PermissionGroups 是否已赋值
                     * @return PermissionGroups 是否已赋值
                     * 
                     */
                    bool PermissionGroupsHasBeenSet() const;

                private:

                    /**
                     * 代理企业和员工的信息。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 角色名称，最大长度为20个字符，仅限中文、字母、数字和下划线组成。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 角色Id，可通过接口 ChannelDescribeRoles 查询获取
                     */
                    std::string m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * 角色描述，最大长度为50个字符
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 权限树，权限树内容 PermissionGroups 可参考接口 ChannelDescribeRoles的输出
                     */
                    std::vector<PermissionGroup> m_permissionGroups;
                    bool m_permissionGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELMODIFYROLEREQUEST_H_
