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
                     * 获取代理企业和员工的信息。<br/>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * @return Agent 代理企业和员工的信息。<br/>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置代理企业和员工的信息。<br/>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * @param _agent 代理企业和员工的信息。<br/>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
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
                     * 获取执行本接口操作的员工信息。<br/>注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @return Operator 执行本接口操作的员工信息。<br/>注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置执行本接口操作的员工信息。<br/>注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @param _operator 执行本接口操作的员工信息。<br/>注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
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
                     * 获取被授企业id/授权方企业id，和AuthorizedOrganizationName二选一传入
                     * @return AuthorizedOrganizationId 被授企业id/授权方企业id，和AuthorizedOrganizationName二选一传入
                     * 
                     */
                    std::string GetAuthorizedOrganizationId() const;

                    /**
                     * 设置被授企业id/授权方企业id，和AuthorizedOrganizationName二选一传入
                     * @param _authorizedOrganizationId 被授企业id/授权方企业id，和AuthorizedOrganizationName二选一传入
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
                     * 获取被授企业名称/授权方企业名称，和AuthorizedOrganizationId二选一传入
                     * @return AuthorizedOrganizationName 被授企业名称/授权方企业名称，和AuthorizedOrganizationId二选一传入
                     * 
                     */
                    std::string GetAuthorizedOrganizationName() const;

                    /**
                     * 设置被授企业名称/授权方企业名称，和AuthorizedOrganizationId二选一传入
                     * @param _authorizedOrganizationName 被授企业名称/授权方企业名称，和AuthorizedOrganizationId二选一传入
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
                     * 获取指定印章类型，指定后只能选择该类型的印章进行授权支持以下印章类型：- OFFICIAL : 企业公章- CONTRACT : 合同专用章- FINANCE : 财务专用章- PERSONNEL : 人事专用章
                     * @return SealTypes 指定印章类型，指定后只能选择该类型的印章进行授权支持以下印章类型：- OFFICIAL : 企业公章- CONTRACT : 合同专用章- FINANCE : 财务专用章- PERSONNEL : 人事专用章
                     * 
                     */
                    std::vector<std::string> GetSealTypes() const;

                    /**
                     * 设置指定印章类型，指定后只能选择该类型的印章进行授权支持以下印章类型：- OFFICIAL : 企业公章- CONTRACT : 合同专用章- FINANCE : 财务专用章- PERSONNEL : 人事专用章
                     * @param _sealTypes 指定印章类型，指定后只能选择该类型的印章进行授权支持以下印章类型：- OFFICIAL : 企业公章- CONTRACT : 合同专用章- FINANCE : 财务专用章- PERSONNEL : 人事专用章
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
                     * 获取他方授权给我方：
- false：我方授权他方，AuthorizedOrganizationName代表【被授权方】企业名称
- true：他方授权我方，AuthorizedOrganizationName代表【授权方】企业名称
                     * @return AuthToMe 他方授权给我方：
- false：我方授权他方，AuthorizedOrganizationName代表【被授权方】企业名称
- true：他方授权我方，AuthorizedOrganizationName代表【授权方】企业名称
                     * 
                     */
                    bool GetAuthToMe() const;

                    /**
                     * 设置他方授权给我方：
- false：我方授权他方，AuthorizedOrganizationName代表【被授权方】企业名称
- true：他方授权我方，AuthorizedOrganizationName代表【授权方】企业名称
                     * @param _authToMe 他方授权给我方：
- false：我方授权他方，AuthorizedOrganizationName代表【被授权方】企业名称
- true：他方授权我方，AuthorizedOrganizationName代表【授权方】企业名称
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
                     * 代理企业和员工的信息。<br/>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 执行本接口操作的员工信息。<br/>注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 被授企业id/授权方企业id，和AuthorizedOrganizationName二选一传入
                     */
                    std::string m_authorizedOrganizationId;
                    bool m_authorizedOrganizationIdHasBeenSet;

                    /**
                     * 被授企业名称/授权方企业名称，和AuthorizedOrganizationId二选一传入
                     */
                    std::string m_authorizedOrganizationName;
                    bool m_authorizedOrganizationNameHasBeenSet;

                    /**
                     * 指定印章类型，指定后只能选择该类型的印章进行授权支持以下印章类型：- OFFICIAL : 企业公章- CONTRACT : 合同专用章- FINANCE : 财务专用章- PERSONNEL : 人事专用章
                     */
                    std::vector<std::string> m_sealTypes;
                    bool m_sealTypesHasBeenSet;

                    /**
                     * 他方授权给我方：
- false：我方授权他方，AuthorizedOrganizationName代表【被授权方】企业名称
- true：他方授权我方，AuthorizedOrganizationName代表【授权方】企业名称
                     */
                    bool m_authToMe;
                    bool m_authToMeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEPARTNERAUTOSIGNAUTHURLREQUEST_H_
