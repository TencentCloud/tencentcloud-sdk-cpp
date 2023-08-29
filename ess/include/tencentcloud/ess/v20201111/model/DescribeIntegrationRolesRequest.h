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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEINTEGRATIONROLESREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEINTEGRATIONROLESREQUEST_H_

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
                * DescribeIntegrationRoles请求参数结构体
                */
                class DescribeIntegrationRolesRequest : public AbstractModel
                {
                public:
                    DescribeIntegrationRolesRequest();
                    ~DescribeIntegrationRolesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取操作人信息，UserId必填
                     * @return Operator 操作人信息，UserId必填
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作人信息，UserId必填
                     * @param _operator 操作人信息，UserId必填
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
                     * 获取指定每页多少条数据，单页最大200
                     * @return Limit 指定每页多少条数据，单页最大200
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置指定每页多少条数据，单页最大200
                     * @param _limit 指定每页多少条数据，单页最大200
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

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
                     * 获取查询的关键字段:
Key:"RoleType",Values:["1"]查询系统角色，Values:["2"]查询自定义角色
Key:"RoleStatus",Values:["1"]查询启用角色，Values:["2"]查询禁用角色
Key:"IsGroupRole"，Values:["0"]:查询非集团角色，Values:["1"]表示查询集团角色
Key:"IsReturnPermissionGroup"，Values:["0"]:表示接口不返回角色对应的权限树字段，Values:["1"]表示接口返回角色对应的权限树字段
                     * @return Filters 查询的关键字段:
Key:"RoleType",Values:["1"]查询系统角色，Values:["2"]查询自定义角色
Key:"RoleStatus",Values:["1"]查询启用角色，Values:["2"]查询禁用角色
Key:"IsGroupRole"，Values:["0"]:查询非集团角色，Values:["1"]表示查询集团角色
Key:"IsReturnPermissionGroup"，Values:["0"]:表示接口不返回角色对应的权限树字段，Values:["1"]表示接口返回角色对应的权限树字段
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置查询的关键字段:
Key:"RoleType",Values:["1"]查询系统角色，Values:["2"]查询自定义角色
Key:"RoleStatus",Values:["1"]查询启用角色，Values:["2"]查询禁用角色
Key:"IsGroupRole"，Values:["0"]:查询非集团角色，Values:["1"]表示查询集团角色
Key:"IsReturnPermissionGroup"，Values:["0"]:表示接口不返回角色对应的权限树字段，Values:["1"]表示接口返回角色对应的权限树字段
                     * @param _filters 查询的关键字段:
Key:"RoleType",Values:["1"]查询系统角色，Values:["2"]查询自定义角色
Key:"RoleStatus",Values:["1"]查询启用角色，Values:["2"]查询禁用角色
Key:"IsGroupRole"，Values:["0"]:查询非集团角色，Values:["1"]表示查询集团角色
Key:"IsReturnPermissionGroup"，Values:["0"]:表示接口不返回角色对应的权限树字段，Values:["1"]表示接口返回角色对应的权限树字段
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
                     * 获取查询结果分页返回，此处指定第几页，如果不传默认从第一页返回。页码从 0 开始，即首页为 0，最大2000
                     * @return Offset 查询结果分页返回，此处指定第几页，如果不传默认从第一页返回。页码从 0 开始，即首页为 0，最大2000
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置查询结果分页返回，此处指定第几页，如果不传默认从第一页返回。页码从 0 开始，即首页为 0，最大2000
                     * @param _offset 查询结果分页返回，此处指定第几页，如果不传默认从第一页返回。页码从 0 开始，即首页为 0，最大2000
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 操作人信息，UserId必填
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 指定每页多少条数据，单页最大200
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 查询的关键字段:
Key:"RoleType",Values:["1"]查询系统角色，Values:["2"]查询自定义角色
Key:"RoleStatus",Values:["1"]查询启用角色，Values:["2"]查询禁用角色
Key:"IsGroupRole"，Values:["0"]:查询非集团角色，Values:["1"]表示查询集团角色
Key:"IsReturnPermissionGroup"，Values:["0"]:表示接口不返回角色对应的权限树字段，Values:["1"]表示接口返回角色对应的权限树字段
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 查询结果分页返回，此处指定第几页，如果不传默认从第一页返回。页码从 0 开始，即首页为 0，最大2000
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEINTEGRATIONROLESREQUEST_H_
