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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEROLEREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEROLEREQUEST_H_

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
                * ChannelCreateRole请求参数结构体
                */
                class ChannelCreateRoleRequest : public AbstractModel
                {
                public:
                    ChannelCreateRoleRequest();
                    ~ChannelCreateRoleRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li>
</ul>
第三方平台子客企业和员工必须已经经过实名认证
                     * @return Agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li>
</ul>
第三方平台子客企业和员工必须已经经过实名认证
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li>
</ul>
第三方平台子客企业和员工必须已经经过实名认证
                     * @param _agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li>
</ul>
第三方平台子客企业和员工必须已经经过实名认证
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
                     * 获取权限树，权限树内容 PermissionGroups 可参考接口 ChannelDescribeRoles 的输出
                     * @return PermissionGroups 权限树，权限树内容 PermissionGroups 可参考接口 ChannelDescribeRoles 的输出
                     * 
                     */
                    std::vector<PermissionGroup> GetPermissionGroups() const;

                    /**
                     * 设置权限树，权限树内容 PermissionGroups 可参考接口 ChannelDescribeRoles 的输出
                     * @param _permissionGroups 权限树，权限树内容 PermissionGroups 可参考接口 ChannelDescribeRoles 的输出
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
                     * 角色名称，最大长度为20个字符，仅限中文、字母、数字和下划线组成。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li>
</ul>
第三方平台子客企业和员工必须已经经过实名认证
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 角色描述，最大长度为50个字符
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 权限树，权限树内容 PermissionGroups 可参考接口 ChannelDescribeRoles 的输出
                     */
                    std::vector<PermissionGroup> m_permissionGroups;
                    bool m_permissionGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEROLEREQUEST_H_
