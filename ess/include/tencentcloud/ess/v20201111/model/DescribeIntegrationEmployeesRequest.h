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
                     * 获取执行本接口操作的员工信息。使用此接口时，必须填写UserId。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @return Operator 执行本接口操作的员工信息。使用此接口时，必须填写UserId。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置执行本接口操作的员工信息。使用此接口时，必须填写UserId。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @param _operator 执行本接口操作的员工信息。使用此接口时，必须填写UserId。
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
                     * 获取指定分页每页返回的数据条数，单页最大支持 20。
                     * @return Limit 指定分页每页返回的数据条数，单页最大支持 20。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置指定分页每页返回的数据条数，单页最大支持 20。
                     * @param _limit 指定分页每页返回的数据条数，单页最大支持 20。
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
                     * 获取查询的关键字段，支持Key-Values查询。可选键值如下：
<ul>
  <li>Key:**"Status"**，根据实名状态查询员工，Values可选：
    <ul><li>**["IsVerified"]**：查询已实名的员工</li><li>**["NotVerified"]**：查询未实名的员工</li></ul></li>
  <li>Key:**"DepartmentId"**，根据部门ID查询部门下的员工，Values为指定的部门ID：**["DepartmentId"]**</li>
  <li>Key:**"UserId"**，根据用户ID查询员工，Values为指定的用户ID：**["UserId"]**</li>
  <li>Key:**"UserWeWorkOpenId"**，根据用户企微账号ID查询员工，Values为指定用户的企微账号ID：**["UserWeWorkOpenId"]**</li>
  <li>Key:**"StaffOpenId"**，根据第三方系统用户OpenId查询员工，Values为第三方系统用户OpenId列表：**["OpenId1","OpenId2",...]**</li>
  <li>Key:**"RoleId"**，根据电子签角色ID查询员工，Values为指定的角色ID，满足其中任意一个角色即可：**["RoleId1","RoleId2",...]**</li>
</ul>
                     * @return Filters 查询的关键字段，支持Key-Values查询。可选键值如下：
<ul>
  <li>Key:**"Status"**，根据实名状态查询员工，Values可选：
    <ul><li>**["IsVerified"]**：查询已实名的员工</li><li>**["NotVerified"]**：查询未实名的员工</li></ul></li>
  <li>Key:**"DepartmentId"**，根据部门ID查询部门下的员工，Values为指定的部门ID：**["DepartmentId"]**</li>
  <li>Key:**"UserId"**，根据用户ID查询员工，Values为指定的用户ID：**["UserId"]**</li>
  <li>Key:**"UserWeWorkOpenId"**，根据用户企微账号ID查询员工，Values为指定用户的企微账号ID：**["UserWeWorkOpenId"]**</li>
  <li>Key:**"StaffOpenId"**，根据第三方系统用户OpenId查询员工，Values为第三方系统用户OpenId列表：**["OpenId1","OpenId2",...]**</li>
  <li>Key:**"RoleId"**，根据电子签角色ID查询员工，Values为指定的角色ID，满足其中任意一个角色即可：**["RoleId1","RoleId2",...]**</li>
</ul>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置查询的关键字段，支持Key-Values查询。可选键值如下：
<ul>
  <li>Key:**"Status"**，根据实名状态查询员工，Values可选：
    <ul><li>**["IsVerified"]**：查询已实名的员工</li><li>**["NotVerified"]**：查询未实名的员工</li></ul></li>
  <li>Key:**"DepartmentId"**，根据部门ID查询部门下的员工，Values为指定的部门ID：**["DepartmentId"]**</li>
  <li>Key:**"UserId"**，根据用户ID查询员工，Values为指定的用户ID：**["UserId"]**</li>
  <li>Key:**"UserWeWorkOpenId"**，根据用户企微账号ID查询员工，Values为指定用户的企微账号ID：**["UserWeWorkOpenId"]**</li>
  <li>Key:**"StaffOpenId"**，根据第三方系统用户OpenId查询员工，Values为第三方系统用户OpenId列表：**["OpenId1","OpenId2",...]**</li>
  <li>Key:**"RoleId"**，根据电子签角色ID查询员工，Values为指定的角色ID，满足其中任意一个角色即可：**["RoleId1","RoleId2",...]**</li>
</ul>
                     * @param _filters 查询的关键字段，支持Key-Values查询。可选键值如下：
<ul>
  <li>Key:**"Status"**，根据实名状态查询员工，Values可选：
    <ul><li>**["IsVerified"]**：查询已实名的员工</li><li>**["NotVerified"]**：查询未实名的员工</li></ul></li>
  <li>Key:**"DepartmentId"**，根据部门ID查询部门下的员工，Values为指定的部门ID：**["DepartmentId"]**</li>
  <li>Key:**"UserId"**，根据用户ID查询员工，Values为指定的用户ID：**["UserId"]**</li>
  <li>Key:**"UserWeWorkOpenId"**，根据用户企微账号ID查询员工，Values为指定用户的企微账号ID：**["UserWeWorkOpenId"]**</li>
  <li>Key:**"StaffOpenId"**，根据第三方系统用户OpenId查询员工，Values为第三方系统用户OpenId列表：**["OpenId1","OpenId2",...]**</li>
  <li>Key:**"RoleId"**，根据电子签角色ID查询员工，Values为指定的角色ID，满足其中任意一个角色即可：**["RoleId1","RoleId2",...]**</li>
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
                     * 获取偏移量，默认为0，最大20000。关于<code>Offset</code>的更进一步介绍请参考 API <a href="https://cloud.tencent.com/document/api/213/15688" target="_blank">简介</a>中的相关小节。
                     * @return Offset 偏移量，默认为0，最大20000。关于<code>Offset</code>的更进一步介绍请参考 API <a href="https://cloud.tencent.com/document/api/213/15688" target="_blank">简介</a>中的相关小节。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0，最大20000。关于<code>Offset</code>的更进一步介绍请参考 API <a href="https://cloud.tencent.com/document/api/213/15688" target="_blank">简介</a>中的相关小节。
                     * @param _offset 偏移量，默认为0，最大20000。关于<code>Offset</code>的更进一步介绍请参考 API <a href="https://cloud.tencent.com/document/api/213/15688" target="_blank">简介</a>中的相关小节。
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
                     * 执行本接口操作的员工信息。使用此接口时，必须填写UserId。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 指定分页每页返回的数据条数，单页最大支持 20。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 查询的关键字段，支持Key-Values查询。可选键值如下：
<ul>
  <li>Key:**"Status"**，根据实名状态查询员工，Values可选：
    <ul><li>**["IsVerified"]**：查询已实名的员工</li><li>**["NotVerified"]**：查询未实名的员工</li></ul></li>
  <li>Key:**"DepartmentId"**，根据部门ID查询部门下的员工，Values为指定的部门ID：**["DepartmentId"]**</li>
  <li>Key:**"UserId"**，根据用户ID查询员工，Values为指定的用户ID：**["UserId"]**</li>
  <li>Key:**"UserWeWorkOpenId"**，根据用户企微账号ID查询员工，Values为指定用户的企微账号ID：**["UserWeWorkOpenId"]**</li>
  <li>Key:**"StaffOpenId"**，根据第三方系统用户OpenId查询员工，Values为第三方系统用户OpenId列表：**["OpenId1","OpenId2",...]**</li>
  <li>Key:**"RoleId"**，根据电子签角色ID查询员工，Values为指定的角色ID，满足其中任意一个角色即可：**["RoleId1","RoleId2",...]**</li>
</ul>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认为0，最大20000。关于<code>Offset</code>的更进一步介绍请参考 API <a href="https://cloud.tencent.com/document/api/213/15688" target="_blank">简介</a>中的相关小节。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEINTEGRATIONEMPLOYEESREQUEST_H_
