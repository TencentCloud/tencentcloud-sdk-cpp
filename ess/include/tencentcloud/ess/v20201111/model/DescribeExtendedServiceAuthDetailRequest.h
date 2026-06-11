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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEEXTENDEDSERVICEAUTHDETAILREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEEXTENDEDSERVICEAUTHDETAILREQUEST_H_

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
                * DescribeExtendedServiceAuthDetail请求参数结构体
                */
                class DescribeExtendedServiceAuthDetailRequest : public AbstractModel
                {
                public:
                    DescribeExtendedServiceAuthDetailRequest();
                    ~DescribeExtendedServiceAuthDetailRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<p>要查询的扩展服务类型。<br>如下所示：</p><ul><li>OPEN_SERVER_SIGN：企业静默签署</li><li>BATCH_SIGN：批量签署</li></ul>
                     * @return ExtendServiceType <p>要查询的扩展服务类型。<br>如下所示：</p><ul><li>OPEN_SERVER_SIGN：企业静默签署</li><li>BATCH_SIGN：批量签署</li></ul>
                     * 
                     */
                    std::string GetExtendServiceType() const;

                    /**
                     * 设置<p>要查询的扩展服务类型。<br>如下所示：</p><ul><li>OPEN_SERVER_SIGN：企业静默签署</li><li>BATCH_SIGN：批量签署</li></ul>
                     * @param _extendServiceType <p>要查询的扩展服务类型。<br>如下所示：</p><ul><li>OPEN_SERVER_SIGN：企业静默签署</li><li>BATCH_SIGN：批量签署</li></ul>
                     * 
                     */
                    void SetExtendServiceType(const std::string& _extendServiceType);

                    /**
                     * 判断参数 ExtendServiceType 是否已赋值
                     * @return ExtendServiceType 是否已赋值
                     * 
                     */
                    bool ExtendServiceTypeHasBeenSet() const;

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
                     * 获取<p>指定每页返回的数据条数，和Offset参数配合使用。 注：<code>1.默认值为20，单页做大值为200。</code></p>
                     * @return Limit <p>指定每页返回的数据条数，和Offset参数配合使用。 注：<code>1.默认值为20，单页做大值为200。</code></p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>指定每页返回的数据条数，和Offset参数配合使用。 注：<code>1.默认值为20，单页做大值为200。</code></p>
                     * @param _limit <p>指定每页返回的数据条数，和Offset参数配合使用。 注：<code>1.默认值为20，单页做大值为200。</code></p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>查询结果分页返回，指定从第几页返回数据，和Limit参数配合使用。 注：<code>1.offset从0开始，即第一页为0。</code> <code>2.默认从第一页返回。</code></p>
                     * @return Offset <p>查询结果分页返回，指定从第几页返回数据，和Limit参数配合使用。 注：<code>1.offset从0开始，即第一页为0。</code> <code>2.默认从第一页返回。</code></p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>查询结果分页返回，指定从第几页返回数据，和Limit参数配合使用。 注：<code>1.offset从0开始，即第一页为0。</code> <code>2.默认从第一页返回。</code></p>
                     * @param _offset <p>查询结果分页返回，指定从第几页返回数据，和Limit参数配合使用。 注：<code>1.offset从0开始，即第一页为0。</code> <code>2.默认从第一页返回。</code></p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>查询指定的合作方企业的授权信息，当ExtendServiceType=OPEN_SERVER_SIGN：企业静默签署时有效</p>
                     * @return PartnerOrganizationName <p>查询指定的合作方企业的授权信息，当ExtendServiceType=OPEN_SERVER_SIGN：企业静默签署时有效</p>
                     * 
                     */
                    std::string GetPartnerOrganizationName() const;

                    /**
                     * 设置<p>查询指定的合作方企业的授权信息，当ExtendServiceType=OPEN_SERVER_SIGN：企业静默签署时有效</p>
                     * @param _partnerOrganizationName <p>查询指定的合作方企业的授权信息，当ExtendServiceType=OPEN_SERVER_SIGN：企业静默签署时有效</p>
                     * 
                     */
                    void SetPartnerOrganizationName(const std::string& _partnerOrganizationName);

                    /**
                     * 判断参数 PartnerOrganizationName 是否已赋值
                     * @return PartnerOrganizationName 是否已赋值
                     * 
                     */
                    bool PartnerOrganizationNameHasBeenSet() const;

                private:

                    /**
                     * <p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>要查询的扩展服务类型。<br>如下所示：</p><ul><li>OPEN_SERVER_SIGN：企业静默签署</li><li>BATCH_SIGN：批量签署</li></ul>
                     */
                    std::string m_extendServiceType;
                    bool m_extendServiceTypeHasBeenSet;

                    /**
                     * <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>指定每页返回的数据条数，和Offset参数配合使用。 注：<code>1.默认值为20，单页做大值为200。</code></p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>查询结果分页返回，指定从第几页返回数据，和Limit参数配合使用。 注：<code>1.offset从0开始，即第一页为0。</code> <code>2.默认从第一页返回。</code></p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>查询指定的合作方企业的授权信息，当ExtendServiceType=OPEN_SERVER_SIGN：企业静默签署时有效</p>
                     */
                    std::string m_partnerOrganizationName;
                    bool m_partnerOrganizationNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEEXTENDEDSERVICEAUTHDETAILREQUEST_H_
