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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEPARTNERAUTOSIGNAUTHURLREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEPARTNERAUTOSIGNAUTHURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/Agent.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreatePartnerAutoSignAuthUrl请求参数结构体
                */
                class CreatePartnerAutoSignAuthUrlRequest : public AbstractModel
                {
                public:
                    CreatePartnerAutoSignAuthUrlRequest();
                    ~CreatePartnerAutoSignAuthUrlRequest() = default;
                    std::string ToJsonString() const;


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

                    /**
                     * 获取<p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * @return Operator <p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置<p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * @param _operator <p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
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
                     * 获取<p>被授企业id/授权方企业id（即OrganizationId），和AuthorizedOrganizationName二选一传入</p>
                     * @return AuthorizedOrganizationId <p>被授企业id/授权方企业id（即OrganizationId），和AuthorizedOrganizationName二选一传入</p>
                     * 
                     */
                    std::string GetAuthorizedOrganizationId() const;

                    /**
                     * 设置<p>被授企业id/授权方企业id（即OrganizationId），和AuthorizedOrganizationName二选一传入</p>
                     * @param _authorizedOrganizationId <p>被授企业id/授权方企业id（即OrganizationId），和AuthorizedOrganizationName二选一传入</p>
                     * 
                     */
                    void SetAuthorizedOrganizationId(const std::string& _authorizedOrganizationId);

                    /**
                     * 判断参数 AuthorizedOrganizationId 是否已赋值
                     * @return AuthorizedOrganizationId 是否已赋值
                     * 
                     */
                    bool AuthorizedOrganizationIdHasBeenSet() const;

                    /**
                     * 获取<p>被授企业名称/授权方企业的名字，和AuthorizedOrganizationId二选一传入即可。请确认该名称与企业营业执照中注册的名称一致。<br>注: <code>如果名称中包含英文括号()，请使用中文括号（）代替。</code></p>
                     * @return AuthorizedOrganizationName <p>被授企业名称/授权方企业的名字，和AuthorizedOrganizationId二选一传入即可。请确认该名称与企业营业执照中注册的名称一致。<br>注: <code>如果名称中包含英文括号()，请使用中文括号（）代替。</code></p>
                     * 
                     */
                    std::string GetAuthorizedOrganizationName() const;

                    /**
                     * 设置<p>被授企业名称/授权方企业的名字，和AuthorizedOrganizationId二选一传入即可。请确认该名称与企业营业执照中注册的名称一致。<br>注: <code>如果名称中包含英文括号()，请使用中文括号（）代替。</code></p>
                     * @param _authorizedOrganizationName <p>被授企业名称/授权方企业的名字，和AuthorizedOrganizationId二选一传入即可。请确认该名称与企业营业执照中注册的名称一致。<br>注: <code>如果名称中包含英文括号()，请使用中文括号（）代替。</code></p>
                     * 
                     */
                    void SetAuthorizedOrganizationName(const std::string& _authorizedOrganizationName);

                    /**
                     * 判断参数 AuthorizedOrganizationName 是否已赋值
                     * @return AuthorizedOrganizationName 是否已赋值
                     * 
                     */
                    bool AuthorizedOrganizationNameHasBeenSet() const;

                    /**
                     * 获取<p>在设置印章授权时，可以指定特定的印章类型，以确保在授权过程中只使用相应类型的印章。</p><p>枚举值：</p><ul><li>OFFICIAL： 企业公章，用于代表企业对外的正式文件和重要事务的认证</li><li>CONTRACT： 合同专用章，专门用于签署各类合同。</li><li>FINANCE： 财务专用章，用于企业的财务相关文件，如发票、收据等财务凭证的认证</li><li>PERSONNEL： 人事专用章，用于人事管理相关文件，如劳动合同、人事任命等。</li><li>OTHER： 其他类型印章，包含子类型</li></ul>
                     * @return SealTypes <p>在设置印章授权时，可以指定特定的印章类型，以确保在授权过程中只使用相应类型的印章。</p><p>枚举值：</p><ul><li>OFFICIAL： 企业公章，用于代表企业对外的正式文件和重要事务的认证</li><li>CONTRACT： 合同专用章，专门用于签署各类合同。</li><li>FINANCE： 财务专用章，用于企业的财务相关文件，如发票、收据等财务凭证的认证</li><li>PERSONNEL： 人事专用章，用于人事管理相关文件，如劳动合同、人事任命等。</li><li>OTHER： 其他类型印章，包含子类型</li></ul>
                     * 
                     */
                    std::vector<std::string> GetSealTypes() const;

                    /**
                     * 设置<p>在设置印章授权时，可以指定特定的印章类型，以确保在授权过程中只使用相应类型的印章。</p><p>枚举值：</p><ul><li>OFFICIAL： 企业公章，用于代表企业对外的正式文件和重要事务的认证</li><li>CONTRACT： 合同专用章，专门用于签署各类合同。</li><li>FINANCE： 财务专用章，用于企业的财务相关文件，如发票、收据等财务凭证的认证</li><li>PERSONNEL： 人事专用章，用于人事管理相关文件，如劳动合同、人事任命等。</li><li>OTHER： 其他类型印章，包含子类型</li></ul>
                     * @param _sealTypes <p>在设置印章授权时，可以指定特定的印章类型，以确保在授权过程中只使用相应类型的印章。</p><p>枚举值：</p><ul><li>OFFICIAL： 企业公章，用于代表企业对外的正式文件和重要事务的认证</li><li>CONTRACT： 合同专用章，专门用于签署各类合同。</li><li>FINANCE： 财务专用章，用于企业的财务相关文件，如发票、收据等财务凭证的认证</li><li>PERSONNEL： 人事专用章，用于人事管理相关文件，如劳动合同、人事任命等。</li><li>OTHER： 其他类型印章，包含子类型</li></ul>
                     * 
                     */
                    void SetSealTypes(const std::vector<std::string>& _sealTypes);

                    /**
                     * 判断参数 SealTypes 是否已赋值
                     * @return SealTypes 是否已赋值
                     * 
                     */
                    bool SealTypesHasBeenSet() const;

                    /**
                     * 获取<p>在处理授权关系时，授权的方向</p><ul><li><strong>false</strong>（默认值）：表示我方授权他方。在这种情况下，<code>AuthorizedOrganizationName</code> 代表的是【被授权方】的企业名称，即接收授权的企业。</li><li><strong>true</strong>：表示他方授权我方。在这种情况下，<code>AuthorizedOrganizationName</code> 代表的是【授权方】的企业名称，即提供授权的企业。</li></ul>
                     * @return AuthToMe <p>在处理授权关系时，授权的方向</p><ul><li><strong>false</strong>（默认值）：表示我方授权他方。在这种情况下，<code>AuthorizedOrganizationName</code> 代表的是【被授权方】的企业名称，即接收授权的企业。</li><li><strong>true</strong>：表示他方授权我方。在这种情况下，<code>AuthorizedOrganizationName</code> 代表的是【授权方】的企业名称，即提供授权的企业。</li></ul>
                     * 
                     */
                    bool GetAuthToMe() const;

                    /**
                     * 设置<p>在处理授权关系时，授权的方向</p><ul><li><strong>false</strong>（默认值）：表示我方授权他方。在这种情况下，<code>AuthorizedOrganizationName</code> 代表的是【被授权方】的企业名称，即接收授权的企业。</li><li><strong>true</strong>：表示他方授权我方。在这种情况下，<code>AuthorizedOrganizationName</code> 代表的是【授权方】的企业名称，即提供授权的企业。</li></ul>
                     * @param _authToMe <p>在处理授权关系时，授权的方向</p><ul><li><strong>false</strong>（默认值）：表示我方授权他方。在这种情况下，<code>AuthorizedOrganizationName</code> 代表的是【被授权方】的企业名称，即接收授权的企业。</li><li><strong>true</strong>：表示他方授权我方。在这种情况下，<code>AuthorizedOrganizationName</code> 代表的是【授权方】的企业名称，即提供授权的企业。</li></ul>
                     * 
                     */
                    void SetAuthToMe(const bool& _authToMe);

                    /**
                     * 判断参数 AuthToMe 是否已赋值
                     * @return AuthToMe 是否已赋值
                     * 
                     */
                    bool AuthToMeHasBeenSet() const;

                private:

                    /**
                     * <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>被授企业id/授权方企业id（即OrganizationId），和AuthorizedOrganizationName二选一传入</p>
                     */
                    std::string m_authorizedOrganizationId;
                    bool m_authorizedOrganizationIdHasBeenSet;

                    /**
                     * <p>被授企业名称/授权方企业的名字，和AuthorizedOrganizationId二选一传入即可。请确认该名称与企业营业执照中注册的名称一致。<br>注: <code>如果名称中包含英文括号()，请使用中文括号（）代替。</code></p>
                     */
                    std::string m_authorizedOrganizationName;
                    bool m_authorizedOrganizationNameHasBeenSet;

                    /**
                     * <p>在设置印章授权时，可以指定特定的印章类型，以确保在授权过程中只使用相应类型的印章。</p><p>枚举值：</p><ul><li>OFFICIAL： 企业公章，用于代表企业对外的正式文件和重要事务的认证</li><li>CONTRACT： 合同专用章，专门用于签署各类合同。</li><li>FINANCE： 财务专用章，用于企业的财务相关文件，如发票、收据等财务凭证的认证</li><li>PERSONNEL： 人事专用章，用于人事管理相关文件，如劳动合同、人事任命等。</li><li>OTHER： 其他类型印章，包含子类型</li></ul>
                     */
                    std::vector<std::string> m_sealTypes;
                    bool m_sealTypesHasBeenSet;

                    /**
                     * <p>在处理授权关系时，授权的方向</p><ul><li><strong>false</strong>（默认值）：表示我方授权他方。在这种情况下，<code>AuthorizedOrganizationName</code> 代表的是【被授权方】的企业名称，即接收授权的企业。</li><li><strong>true</strong>：表示他方授权我方。在这种情况下，<code>AuthorizedOrganizationName</code> 代表的是【授权方】的企业名称，即提供授权的企业。</li></ul>
                     */
                    bool m_authToMe;
                    bool m_authToMeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEPARTNERAUTOSIGNAUTHURLREQUEST_H_
