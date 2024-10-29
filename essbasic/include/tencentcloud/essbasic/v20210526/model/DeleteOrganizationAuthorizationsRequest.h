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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DELETEORGANIZATIONAUTHORIZATIONSREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DELETEORGANIZATIONAUTHORIZATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * DeleteOrganizationAuthorizations请求参数结构体
                */
                class DeleteOrganizationAuthorizationsRequest : public AbstractModel
                {
                public:
                    DeleteOrganizationAuthorizationsRequest();
                    ~DeleteOrganizationAuthorizationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
</ul>

                     * @return Agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
</ul>

                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
</ul>

                     * @param _agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
</ul>

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
                     * 获取认证人姓名，组织机构超管姓名。 在注册流程中，必须是超管本人进行操作。 
                     * @return AdminName 认证人姓名，组织机构超管姓名。 在注册流程中，必须是超管本人进行操作。 
                     * 
                     */
                    std::string GetAdminName() const;

                    /**
                     * 设置认证人姓名，组织机构超管姓名。 在注册流程中，必须是超管本人进行操作。 
                     * @param _adminName 认证人姓名，组织机构超管姓名。 在注册流程中，必须是超管本人进行操作。 
                     * 
                     */
                    void SetAdminName(const std::string& _adminName);

                    /**
                     * 判断参数 AdminName 是否已赋值
                     * @return AdminName 是否已赋值
                     * 
                     */
                    bool AdminNameHasBeenSet() const;

                    /**
                     * 获取认证人手机号，组织机构超管手机号。 在注册流程中，必须是超管本人进行操作。 
                     * @return AdminMobile 认证人手机号，组织机构超管手机号。 在注册流程中，必须是超管本人进行操作。 
                     * 
                     */
                    std::string GetAdminMobile() const;

                    /**
                     * 设置认证人手机号，组织机构超管手机号。 在注册流程中，必须是超管本人进行操作。 
                     * @param _adminMobile 认证人手机号，组织机构超管手机号。 在注册流程中，必须是超管本人进行操作。 
                     * 
                     */
                    void SetAdminMobile(const std::string& _adminMobile);

                    /**
                     * 判断参数 AdminMobile 是否已赋值
                     * @return AdminMobile 是否已赋值
                     * 
                     */
                    bool AdminMobileHasBeenSet() const;

                private:

                    /**
                     * 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
</ul>

                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 认证人姓名，组织机构超管姓名。 在注册流程中，必须是超管本人进行操作。 
                     */
                    std::string m_adminName;
                    bool m_adminNameHasBeenSet;

                    /**
                     * 认证人手机号，组织机构超管手机号。 在注册流程中，必须是超管本人进行操作。 
                     */
                    std::string m_adminMobile;
                    bool m_adminMobileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DELETEORGANIZATIONAUTHORIZATIONSREQUEST_H_
