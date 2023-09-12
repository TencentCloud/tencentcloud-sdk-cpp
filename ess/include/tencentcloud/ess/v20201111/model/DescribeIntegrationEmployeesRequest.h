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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEINTEGRATIONEMPLOYEESREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEINTEGRATIONEMPLOYEESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/Agent.h>
#include <tencentcloud/ess/v20201111/model/Filter.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeIntegrationEmployees请求参数结构体
                */
                class DescribeIntegrationEmployeesRequest : public AbstractModel
                {
                public:
                    DescribeIntegrationEmployeesRequest();
                    ~DescribeIntegrationEmployeesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取操作人信息，userId必填
                     * @return Operator 操作人信息，userId必填
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作人信息，userId必填
                     * @param _operator 操作人信息，userId必填
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
                     * 获取指定每页多少条数据，单页最大20
                     * @return Limit 指定每页多少条数据，单页最大20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置指定每页多少条数据，单页最大20
                     * @param _limit 指定每页多少条数据，单页最大20
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
                     * 获取代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     * @return Agent 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     * @param _agent 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
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
                     * 获取查询过滤实名用户，Key为Status，Values为["IsVerified"]，查询过滤未实名用户，Key为Status，Values为["NotVerified"]
查询某个部门的用户，Key为DepartmentId，Values为["DepartmentId"]
根据用户Id查询员工时，Key为UserId，Values为["UserId"]
根据第三方系统openId过滤查询员工时,Key为StaffOpenId,Values为["OpenId","OpenId",...]
                     * @return Filters 查询过滤实名用户，Key为Status，Values为["IsVerified"]，查询过滤未实名用户，Key为Status，Values为["NotVerified"]
查询某个部门的用户，Key为DepartmentId，Values为["DepartmentId"]
根据用户Id查询员工时，Key为UserId，Values为["UserId"]
根据第三方系统openId过滤查询员工时,Key为StaffOpenId,Values为["OpenId","OpenId",...]
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置查询过滤实名用户，Key为Status，Values为["IsVerified"]，查询过滤未实名用户，Key为Status，Values为["NotVerified"]
查询某个部门的用户，Key为DepartmentId，Values为["DepartmentId"]
根据用户Id查询员工时，Key为UserId，Values为["UserId"]
根据第三方系统openId过滤查询员工时,Key为StaffOpenId,Values为["OpenId","OpenId",...]
                     * @param _filters 查询过滤实名用户，Key为Status，Values为["IsVerified"]，查询过滤未实名用户，Key为Status，Values为["NotVerified"]
查询某个部门的用户，Key为DepartmentId，Values为["DepartmentId"]
根据用户Id查询员工时，Key为UserId，Values为["UserId"]
根据第三方系统openId过滤查询员工时,Key为StaffOpenId,Values为["OpenId","OpenId",...]
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取查询结果分页返回，此处指定第几页，如果不传默认从第一页返回。页码从 0 开始，即首页为 0，最大20000
                     * @return Offset 查询结果分页返回，此处指定第几页，如果不传默认从第一页返回。页码从 0 开始，即首页为 0，最大20000
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置查询结果分页返回，此处指定第几页，如果不传默认从第一页返回。页码从 0 开始，即首页为 0，最大20000
                     * @param _offset 查询结果分页返回，此处指定第几页，如果不传默认从第一页返回。页码从 0 开始，即首页为 0，最大20000
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 操作人信息，userId必填
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 指定每页多少条数据，单页最大20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 查询过滤实名用户，Key为Status，Values为["IsVerified"]，查询过滤未实名用户，Key为Status，Values为["NotVerified"]
查询某个部门的用户，Key为DepartmentId，Values为["DepartmentId"]
根据用户Id查询员工时，Key为UserId，Values为["UserId"]
根据第三方系统openId过滤查询员工时,Key为StaffOpenId,Values为["OpenId","OpenId",...]
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 查询结果分页返回，此处指定第几页，如果不传默认从第一页返回。页码从 0 开始，即首页为 0，最大20000
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEINTEGRATIONEMPLOYEESREQUEST_H_
