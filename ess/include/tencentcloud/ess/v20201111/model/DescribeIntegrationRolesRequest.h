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
                     * 获取执行本接口操作的员工信息。使用此接口时，必须填写UserId。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。
                     * @return Operator 执行本接口操作的员工信息。使用此接口时，必须填写UserId。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置执行本接口操作的员工信息。使用此接口时，必须填写UserId。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。
                     * @param _operator 执行本接口操作的员工信息。使用此接口时，必须填写UserId。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。
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
                     * 获取指定分页每页返回的数据条数，单页最大支持 200。
                     * @return Limit 指定分页每页返回的数据条数，单页最大支持 200。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置指定分页每页返回的数据条数，单页最大支持 200。
                     * @param _limit 指定分页每页返回的数据条数，单页最大支持 200。
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
                     * 获取代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * @return Agent 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * @param _agent 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
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
                     * 获取查询的关键字段，支持Key-Value单值查询。可选键值对如下：
<ul>
  <li>Key:"RoleType"，查询角色类型，Values可选：
    <ul><li>**"1"**：查询系统角色</li><li>**"2"**：查询自定义角色</li></ul>
  </li><li>Key:"RoleStatus"，查询角色状态，Values可选：
    <ul><li>**"1"**：查询启用角色</li><li>**"2"**：查询禁用角色</li></ul>
  </li><li>Key:"IsGroupRole"，是否查询集团角色，Values可选：
    <ul><li>**"0"**：查询非集团角色</li><li>**"1"**：查询集团角色</li></ul>
  </li><li>Key:"IsReturnPermissionGroup"，是否返回角色对应权限树，Values可选：
    <ul><li>**"0"**：接口不返回角色对应的权限树字段</li><li>**"1"**：接口返回角色对应的权限树字段</li></ul>
  </li>
</ul>
                     * @return Filters 查询的关键字段，支持Key-Value单值查询。可选键值对如下：
<ul>
  <li>Key:"RoleType"，查询角色类型，Values可选：
    <ul><li>**"1"**：查询系统角色</li><li>**"2"**：查询自定义角色</li></ul>
  </li><li>Key:"RoleStatus"，查询角色状态，Values可选：
    <ul><li>**"1"**：查询启用角色</li><li>**"2"**：查询禁用角色</li></ul>
  </li><li>Key:"IsGroupRole"，是否查询集团角色，Values可选：
    <ul><li>**"0"**：查询非集团角色</li><li>**"1"**：查询集团角色</li></ul>
  </li><li>Key:"IsReturnPermissionGroup"，是否返回角色对应权限树，Values可选：
    <ul><li>**"0"**：接口不返回角色对应的权限树字段</li><li>**"1"**：接口返回角色对应的权限树字段</li></ul>
  </li>
</ul>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置查询的关键字段，支持Key-Value单值查询。可选键值对如下：
<ul>
  <li>Key:"RoleType"，查询角色类型，Values可选：
    <ul><li>**"1"**：查询系统角色</li><li>**"2"**：查询自定义角色</li></ul>
  </li><li>Key:"RoleStatus"，查询角色状态，Values可选：
    <ul><li>**"1"**：查询启用角色</li><li>**"2"**：查询禁用角色</li></ul>
  </li><li>Key:"IsGroupRole"，是否查询集团角色，Values可选：
    <ul><li>**"0"**：查询非集团角色</li><li>**"1"**：查询集团角色</li></ul>
  </li><li>Key:"IsReturnPermissionGroup"，是否返回角色对应权限树，Values可选：
    <ul><li>**"0"**：接口不返回角色对应的权限树字段</li><li>**"1"**：接口返回角色对应的权限树字段</li></ul>
  </li>
</ul>
                     * @param _filters 查询的关键字段，支持Key-Value单值查询。可选键值对如下：
<ul>
  <li>Key:"RoleType"，查询角色类型，Values可选：
    <ul><li>**"1"**：查询系统角色</li><li>**"2"**：查询自定义角色</li></ul>
  </li><li>Key:"RoleStatus"，查询角色状态，Values可选：
    <ul><li>**"1"**：查询启用角色</li><li>**"2"**：查询禁用角色</li></ul>
  </li><li>Key:"IsGroupRole"，是否查询集团角色，Values可选：
    <ul><li>**"0"**：查询非集团角色</li><li>**"1"**：查询集团角色</li></ul>
  </li><li>Key:"IsReturnPermissionGroup"，是否返回角色对应权限树，Values可选：
    <ul><li>**"0"**：接口不返回角色对应的权限树字段</li><li>**"1"**：接口返回角色对应的权限树字段</li></ul>
  </li>
</ul>
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
                     * 获取OFFSET 用于指定查询结果的偏移量，如果不传默认偏移为0,最大2000。
分页参数, 需要limit, offset 配合使用
例如:
您希望得到第三页的数据, 且每页限制最多10条
您可以使用 LIMIT 10 OFFSET 20

                     * @return Offset OFFSET 用于指定查询结果的偏移量，如果不传默认偏移为0,最大2000。
分页参数, 需要limit, offset 配合使用
例如:
您希望得到第三页的数据, 且每页限制最多10条
您可以使用 LIMIT 10 OFFSET 20

                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置OFFSET 用于指定查询结果的偏移量，如果不传默认偏移为0,最大2000。
分页参数, 需要limit, offset 配合使用
例如:
您希望得到第三页的数据, 且每页限制最多10条
您可以使用 LIMIT 10 OFFSET 20

                     * @param _offset OFFSET 用于指定查询结果的偏移量，如果不传默认偏移为0,最大2000。
分页参数, 需要limit, offset 配合使用
例如:
您希望得到第三页的数据, 且每页限制最多10条
您可以使用 LIMIT 10 OFFSET 20

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
                     * 执行本接口操作的员工信息。使用此接口时，必须填写UserId。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 指定分页每页返回的数据条数，单页最大支持 200。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 查询的关键字段，支持Key-Value单值查询。可选键值对如下：
<ul>
  <li>Key:"RoleType"，查询角色类型，Values可选：
    <ul><li>**"1"**：查询系统角色</li><li>**"2"**：查询自定义角色</li></ul>
  </li><li>Key:"RoleStatus"，查询角色状态，Values可选：
    <ul><li>**"1"**：查询启用角色</li><li>**"2"**：查询禁用角色</li></ul>
  </li><li>Key:"IsGroupRole"，是否查询集团角色，Values可选：
    <ul><li>**"0"**：查询非集团角色</li><li>**"1"**：查询集团角色</li></ul>
  </li><li>Key:"IsReturnPermissionGroup"，是否返回角色对应权限树，Values可选：
    <ul><li>**"0"**：接口不返回角色对应的权限树字段</li><li>**"1"**：接口返回角色对应的权限树字段</li></ul>
  </li>
</ul>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * OFFSET 用于指定查询结果的偏移量，如果不传默认偏移为0,最大2000。
分页参数, 需要limit, offset 配合使用
例如:
您希望得到第三页的数据, 且每页限制最多10条
您可以使用 LIMIT 10 OFFSET 20

                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEINTEGRATIONROLESREQUEST_H_
