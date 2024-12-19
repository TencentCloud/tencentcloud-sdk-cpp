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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEORGANIZATIONAUTHFILEREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEORGANIZATIONAUTHFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/OrganizationCommonInfo.h>
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
                * CreateOrganizationAuthFile请求参数结构体
                */
                class CreateOrganizationAuthFileRequest : public AbstractModel
                {
                public:
                    CreateOrganizationAuthFileRequest();
                    ~CreateOrganizationAuthFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取企业授权书信息参数， 需要自行保证这些参数跟营业执照中的信息一致。
                     * @return OrganizationCommonInfo 企业授权书信息参数， 需要自行保证这些参数跟营业执照中的信息一致。
                     * 
                     */
                    OrganizationCommonInfo GetOrganizationCommonInfo() const;

                    /**
                     * 设置企业授权书信息参数， 需要自行保证这些参数跟营业执照中的信息一致。
                     * @param _organizationCommonInfo 企业授权书信息参数， 需要自行保证这些参数跟营业执照中的信息一致。
                     * 
                     */
                    void SetOrganizationCommonInfo(const OrganizationCommonInfo& _organizationCommonInfo);

                    /**
                     * 判断参数 OrganizationCommonInfo 是否已赋值
                     * @return OrganizationCommonInfo 是否已赋值
                     * 
                     */
                    bool OrganizationCommonInfoHasBeenSet() const;

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
                     * 获取授权书类型：
- 0: 企业认证超管授权书
- 1: 超管变更授权书
- 2: 企业注销授权书
                     * @return Type 授权书类型：
- 0: 企业认证超管授权书
- 1: 超管变更授权书
- 2: 企业注销授权书
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置授权书类型：
- 0: 企业认证超管授权书
- 1: 超管变更授权书
- 2: 企业注销授权书
                     * @param _type 授权书类型：
- 0: 企业认证超管授权书
- 1: 超管变更授权书
- 2: 企业注销授权书
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 企业授权书信息参数， 需要自行保证这些参数跟营业执照中的信息一致。
                     */
                    OrganizationCommonInfo m_organizationCommonInfo;
                    bool m_organizationCommonInfoHasBeenSet;

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
                     * 授权书类型：
- 0: 企业认证超管授权书
- 1: 超管变更授权书
- 2: 企业注销授权书
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEORGANIZATIONAUTHFILEREQUEST_H_
