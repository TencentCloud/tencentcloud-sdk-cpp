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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DELETEORGANIZATIONAUTHORIZATIONSREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DELETEORGANIZATIONAUTHORIZATIONSREQUEST_H_

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
                * DeleteOrganizationAuthorizations请求参数结构体
                */
                class DeleteOrganizationAuthorizationsRequest : public AbstractModel
                {
                public:
                    DeleteOrganizationAuthorizationsRequest();
                    ~DeleteOrganizationAuthorizationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取执行本接口操作的员工信息, userId 必填。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @return Operator 执行本接口操作的员工信息, userId 必填。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置执行本接口操作的员工信息, userId 必填。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @param _operator 执行本接口操作的员工信息, userId 必填。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
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
                     * 获取认证流Ids数组
认证流 Id 是指在企业认证过程中，当前操作人的认证流程的唯一标识。每个企业在认证过程中只能有一条认证流认证成功。这意味着在同一认证过程内，一个企业只能有一个认证流程处于成功状态，以确保认证的唯一性和有效性。


认证流 Id可以通过回调 [授权书认证审核结果回调](https://qian.tencent.com/developers/company/callback_types_staffs/#%E5%8D%81%E5%9B%9B-%E6%8E%88%E6%9D%83%E4%B9%A6%E8%AE%A4%E8%AF%81%E5%AE%A1%E6%A0%B8%E7%BB%93%E6%9E%9C%E5%9B%9E%E8%B0%83) 获取

注意：
如果传递了认证流Id，则下面的参数 超管二要素不会生效
                     * @return AuthorizationIds 认证流Ids数组
认证流 Id 是指在企业认证过程中，当前操作人的认证流程的唯一标识。每个企业在认证过程中只能有一条认证流认证成功。这意味着在同一认证过程内，一个企业只能有一个认证流程处于成功状态，以确保认证的唯一性和有效性。


认证流 Id可以通过回调 [授权书认证审核结果回调](https://qian.tencent.com/developers/company/callback_types_staffs/#%E5%8D%81%E5%9B%9B-%E6%8E%88%E6%9D%83%E4%B9%A6%E8%AE%A4%E8%AF%81%E5%AE%A1%E6%A0%B8%E7%BB%93%E6%9E%9C%E5%9B%9E%E8%B0%83) 获取

注意：
如果传递了认证流Id，则下面的参数 超管二要素不会生效
                     * 
                     */
                    std::vector<std::string> GetAuthorizationIds() const;

                    /**
                     * 设置认证流Ids数组
认证流 Id 是指在企业认证过程中，当前操作人的认证流程的唯一标识。每个企业在认证过程中只能有一条认证流认证成功。这意味着在同一认证过程内，一个企业只能有一个认证流程处于成功状态，以确保认证的唯一性和有效性。


认证流 Id可以通过回调 [授权书认证审核结果回调](https://qian.tencent.com/developers/company/callback_types_staffs/#%E5%8D%81%E5%9B%9B-%E6%8E%88%E6%9D%83%E4%B9%A6%E8%AE%A4%E8%AF%81%E5%AE%A1%E6%A0%B8%E7%BB%93%E6%9E%9C%E5%9B%9E%E8%B0%83) 获取

注意：
如果传递了认证流Id，则下面的参数 超管二要素不会生效
                     * @param _authorizationIds 认证流Ids数组
认证流 Id 是指在企业认证过程中，当前操作人的认证流程的唯一标识。每个企业在认证过程中只能有一条认证流认证成功。这意味着在同一认证过程内，一个企业只能有一个认证流程处于成功状态，以确保认证的唯一性和有效性。


认证流 Id可以通过回调 [授权书认证审核结果回调](https://qian.tencent.com/developers/company/callback_types_staffs/#%E5%8D%81%E5%9B%9B-%E6%8E%88%E6%9D%83%E4%B9%A6%E8%AE%A4%E8%AF%81%E5%AE%A1%E6%A0%B8%E7%BB%93%E6%9E%9C%E5%9B%9E%E8%B0%83) 获取

注意：
如果传递了认证流Id，则下面的参数 超管二要素不会生效
                     * 
                     */
                    void SetAuthorizationIds(const std::vector<std::string>& _authorizationIds);

                    /**
                     * 判断参数 AuthorizationIds 是否已赋值
                     * @return AuthorizationIds 是否已赋值
                     * 
                     */
                    bool AuthorizationIdsHasBeenSet() const;

                    /**
                     * 获取认证人姓名，组织机构超管姓名。 
在注册流程中，必须是超管本人进行操作。 
                     * @return AdminName 认证人姓名，组织机构超管姓名。 
在注册流程中，必须是超管本人进行操作。 
                     * 
                     */
                    std::string GetAdminName() const;

                    /**
                     * 设置认证人姓名，组织机构超管姓名。 
在注册流程中，必须是超管本人进行操作。 
                     * @param _adminName 认证人姓名，组织机构超管姓名。 
在注册流程中，必须是超管本人进行操作。 
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
                     * 执行本接口操作的员工信息, userId 必填。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 认证流Ids数组
认证流 Id 是指在企业认证过程中，当前操作人的认证流程的唯一标识。每个企业在认证过程中只能有一条认证流认证成功。这意味着在同一认证过程内，一个企业只能有一个认证流程处于成功状态，以确保认证的唯一性和有效性。


认证流 Id可以通过回调 [授权书认证审核结果回调](https://qian.tencent.com/developers/company/callback_types_staffs/#%E5%8D%81%E5%9B%9B-%E6%8E%88%E6%9D%83%E4%B9%A6%E8%AE%A4%E8%AF%81%E5%AE%A1%E6%A0%B8%E7%BB%93%E6%9E%9C%E5%9B%9E%E8%B0%83) 获取

注意：
如果传递了认证流Id，则下面的参数 超管二要素不会生效
                     */
                    std::vector<std::string> m_authorizationIds;
                    bool m_authorizationIdsHasBeenSet;

                    /**
                     * 认证人姓名，组织机构超管姓名。 
在注册流程中，必须是超管本人进行操作。 
                     */
                    std::string m_adminName;
                    bool m_adminNameHasBeenSet;

                    /**
                     * 认证人手机号，组织机构超管手机号。 在注册流程中，必须是超管本人进行操作。 
                     */
                    std::string m_adminMobile;
                    bool m_adminMobileHasBeenSet;

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

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DELETEORGANIZATIONAUTHORIZATIONSREQUEST_H_
