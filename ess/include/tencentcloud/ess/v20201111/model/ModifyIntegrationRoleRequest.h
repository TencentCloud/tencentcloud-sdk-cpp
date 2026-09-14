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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_MODIFYINTEGRATIONROLEREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_MODIFYINTEGRATIONROLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/PermissionGroup.h>
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
                * ModifyIntegrationRole请求参数结构体
                */
                class ModifyIntegrationRoleRequest : public AbstractModel
                {
                public:
                    ModifyIntegrationRoleRequest();
                    ~ModifyIntegrationRoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>角色Id，可通过接口 DescribeIntegrationRoles 查询获取</p>
                     * @return RoleId <p>角色Id，可通过接口 DescribeIntegrationRoles 查询获取</p>
                     * 
                     */
                    std::string GetRoleId() const;

                    /**
                     * 设置<p>角色Id，可通过接口 DescribeIntegrationRoles 查询获取</p>
                     * @param _roleId <p>角色Id，可通过接口 DescribeIntegrationRoles 查询获取</p>
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
                     * 获取<p>角色名称，最大长度为20个字符，仅限中文、字母、数字和下划线组成。</p>
                     * @return Name <p>角色名称，最大长度为20个字符，仅限中文、字母、数字和下划线组成。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>角色名称，最大长度为20个字符，仅限中文、字母、数字和下划线组成。</p>
                     * @param _name <p>角色名称，最大长度为20个字符，仅限中文、字母、数字和下划线组成。</p>
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
                     * 获取<p>执行本接口操作的员工信息。使用此接口时，必须填写userId。<br>支持填入集团子公司经办人 userId 代发合同。</p><p>注: 在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</p>
                     * @return Operator <p>执行本接口操作的员工信息。使用此接口时，必须填写userId。<br>支持填入集团子公司经办人 userId 代发合同。</p><p>注: 在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</p>
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置<p>执行本接口操作的员工信息。使用此接口时，必须填写userId。<br>支持填入集团子公司经办人 userId 代发合同。</p><p>注: 在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</p>
                     * @param _operator <p>执行本接口操作的员工信息。使用此接口时，必须填写userId。<br>支持填入集团子公司经办人 userId 代发合同。</p><p>注: 在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</p>
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
                     * 获取<p>角色描述，最大长度为50个字符</p>
                     * @return Description <p>角色描述，最大长度为50个字符</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>角色描述，最大长度为50个字符</p>
                     * @param _description <p>角色描述，最大长度为50个字符</p>
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
                     * 获取<p>权限树</p>
                     * @return PermissionGroups <p>权限树</p>
                     * 
                     */
                    std::vector<PermissionGroup> GetPermissionGroups() const;

                    /**
                     * 设置<p>权限树</p>
                     * @param _permissionGroups <p>权限树</p>
                     * 
                     */
                    void SetPermissionGroups(const std::vector<PermissionGroup>& _permissionGroups);

                    /**
                     * 判断参数 PermissionGroups 是否已赋值
                     * @return PermissionGroups 是否已赋值
                     * 
                     */
                    bool PermissionGroupsHasBeenSet() const;

                    /**
                     * 获取<p>集团角色的话，需要传递集团子企业列表，如果是全选，则传1</p>
                     * @return SubOrganizationIds <p>集团角色的话，需要传递集团子企业列表，如果是全选，则传1</p>
                     * 
                     */
                    std::vector<std::string> GetSubOrganizationIds() const;

                    /**
                     * 设置<p>集团角色的话，需要传递集团子企业列表，如果是全选，则传1</p>
                     * @param _subOrganizationIds <p>集团角色的话，需要传递集团子企业列表，如果是全选，则传1</p>
                     * 
                     */
                    void SetSubOrganizationIds(const std::vector<std::string>& _subOrganizationIds);

                    /**
                     * 判断参数 SubOrganizationIds 是否已赋值
                     * @return SubOrganizationIds 是否已赋值
                     * 
                     */
                    bool SubOrganizationIdsHasBeenSet() const;

                    /**
                     * 获取<p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * @return Agent <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置<p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * @param _agent <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
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
                     * <p>角色Id，可通过接口 DescribeIntegrationRoles 查询获取</p>
                     */
                    std::string m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * <p>角色名称，最大长度为20个字符，仅限中文、字母、数字和下划线组成。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>执行本接口操作的员工信息。使用此接口时，必须填写userId。<br>支持填入集团子公司经办人 userId 代发合同。</p><p>注: 在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</p>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>角色描述，最大长度为50个字符</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>权限树</p>
                     */
                    std::vector<PermissionGroup> m_permissionGroups;
                    bool m_permissionGroupsHasBeenSet;

                    /**
                     * <p>集团角色的话，需要传递集团子企业列表，如果是全选，则传1</p>
                     */
                    std::vector<std::string> m_subOrganizationIds;
                    bool m_subOrganizationIdsHasBeenSet;

                    /**
                     * <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_MODIFYINTEGRATIONROLEREQUEST_H_
