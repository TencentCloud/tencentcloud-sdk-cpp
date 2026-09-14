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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELDESCRIBEROLESREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELDESCRIBEROLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>
#include <tencentcloud/essbasic/v20210526/model/Filter.h>
#include <tencentcloud/essbasic/v20210526/model/UserInfo.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * ChannelDescribeRoles请求参数结构体
                */
                class ChannelDescribeRolesRequest : public AbstractModel
                {
                public:
                    ChannelDescribeRolesRequest();
                    ~ChannelDescribeRolesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li></ul>第三方平台子客企业和员工必须已经经过实名认证
                     * @return Agent <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li></ul>第三方平台子客企业和员工必须已经经过实名认证
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置<p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li></ul>第三方平台子客企业和员工必须已经经过实名认证
                     * @param _agent <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li></ul>第三方平台子客企业和员工必须已经经过实名认证
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
                     * 获取<p>指定每页返回的数据条数，和Offset参数配合使用，单页最大200。</p><p>注: <code>因为历史原因, 此字段为字符串类型</code></p>
                     * @return Limit <p>指定每页返回的数据条数，和Offset参数配合使用，单页最大200。</p><p>注: <code>因为历史原因, 此字段为字符串类型</code></p>
                     * 
                     */
                    std::string GetLimit() const;

                    /**
                     * 设置<p>指定每页返回的数据条数，和Offset参数配合使用，单页最大200。</p><p>注: <code>因为历史原因, 此字段为字符串类型</code></p>
                     * @param _limit <p>指定每页返回的数据条数，和Offset参数配合使用，单页最大200。</p><p>注: <code>因为历史原因, 此字段为字符串类型</code></p>
                     * 
                     */
                    void SetLimit(const std::string& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>查询的关键字段:<br>Key:&quot;<strong>RoleType</strong>&quot;,Values:[&quot;<strong>1</strong>&quot;]查询系统角色，<br>Key:&quot;<strong>RoleType</strong>&quot;,Values:[&quot;<strong>2</strong>&quot;]查询自定义角色<br>Key:&quot;<strong>RoleStatus</strong>&quot;,Values:[&quot;<strong>1</strong>&quot;]查询启用角色<br>Key:&quot;<strong>RoleStatus</strong>&quot;,Values:[&quot;<strong>2</strong>&quot;]查询禁用角色<br>Key:&quot;<strong>IsReturnPermissionGroup</strong>&quot;，Values:[&quot;<strong>0</strong>&quot;]表示接口不返回角色对应的权限树字段<br>Key:&quot;<strong>IsReturnPermissionGroup</strong>&quot;，Values:[&quot;<strong>1</strong>&quot;]表示接口返回角色对应的权限树字段</p><p>注: <code>同名字的Key的过滤条件会冲突, 只能填写一个</code></p>
                     * @return Filters <p>查询的关键字段:<br>Key:&quot;<strong>RoleType</strong>&quot;,Values:[&quot;<strong>1</strong>&quot;]查询系统角色，<br>Key:&quot;<strong>RoleType</strong>&quot;,Values:[&quot;<strong>2</strong>&quot;]查询自定义角色<br>Key:&quot;<strong>RoleStatus</strong>&quot;,Values:[&quot;<strong>1</strong>&quot;]查询启用角色<br>Key:&quot;<strong>RoleStatus</strong>&quot;,Values:[&quot;<strong>2</strong>&quot;]查询禁用角色<br>Key:&quot;<strong>IsReturnPermissionGroup</strong>&quot;，Values:[&quot;<strong>0</strong>&quot;]表示接口不返回角色对应的权限树字段<br>Key:&quot;<strong>IsReturnPermissionGroup</strong>&quot;，Values:[&quot;<strong>1</strong>&quot;]表示接口返回角色对应的权限树字段</p><p>注: <code>同名字的Key的过滤条件会冲突, 只能填写一个</code></p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>查询的关键字段:<br>Key:&quot;<strong>RoleType</strong>&quot;,Values:[&quot;<strong>1</strong>&quot;]查询系统角色，<br>Key:&quot;<strong>RoleType</strong>&quot;,Values:[&quot;<strong>2</strong>&quot;]查询自定义角色<br>Key:&quot;<strong>RoleStatus</strong>&quot;,Values:[&quot;<strong>1</strong>&quot;]查询启用角色<br>Key:&quot;<strong>RoleStatus</strong>&quot;,Values:[&quot;<strong>2</strong>&quot;]查询禁用角色<br>Key:&quot;<strong>IsReturnPermissionGroup</strong>&quot;，Values:[&quot;<strong>0</strong>&quot;]表示接口不返回角色对应的权限树字段<br>Key:&quot;<strong>IsReturnPermissionGroup</strong>&quot;，Values:[&quot;<strong>1</strong>&quot;]表示接口返回角色对应的权限树字段</p><p>注: <code>同名字的Key的过滤条件会冲突, 只能填写一个</code></p>
                     * @param _filters <p>查询的关键字段:<br>Key:&quot;<strong>RoleType</strong>&quot;,Values:[&quot;<strong>1</strong>&quot;]查询系统角色，<br>Key:&quot;<strong>RoleType</strong>&quot;,Values:[&quot;<strong>2</strong>&quot;]查询自定义角色<br>Key:&quot;<strong>RoleStatus</strong>&quot;,Values:[&quot;<strong>1</strong>&quot;]查询启用角色<br>Key:&quot;<strong>RoleStatus</strong>&quot;,Values:[&quot;<strong>2</strong>&quot;]查询禁用角色<br>Key:&quot;<strong>IsReturnPermissionGroup</strong>&quot;，Values:[&quot;<strong>0</strong>&quot;]表示接口不返回角色对应的权限树字段<br>Key:&quot;<strong>IsReturnPermissionGroup</strong>&quot;，Values:[&quot;<strong>1</strong>&quot;]表示接口返回角色对应的权限树字段</p><p>注: <code>同名字的Key的过滤条件会冲突, 只能填写一个</code></p>
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
                     * 获取<p>查询结果分页返回，指定从第几页返回数据，和Limit参数配合使用，最大2000条。</p><p>注：<br>1.<code>offset从0开始，即第一页为0。</code><br>2.<code>默认从第一页返回。</code></p>
                     * @return Offset <p>查询结果分页返回，指定从第几页返回数据，和Limit参数配合使用，最大2000条。</p><p>注：<br>1.<code>offset从0开始，即第一页为0。</code><br>2.<code>默认从第一页返回。</code></p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>查询结果分页返回，指定从第几页返回数据，和Limit参数配合使用，最大2000条。</p><p>注：<br>1.<code>offset从0开始，即第一页为0。</code><br>2.<code>默认从第一页返回。</code></p>
                     * @param _offset <p>查询结果分页返回，指定从第几页返回数据，和Limit参数配合使用，最大2000条。</p><p>注：<br>1.<code>offset从0开始，即第一页为0。</code><br>2.<code>默认从第一页返回。</code></p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>操作人信息</p>
                     * @return Operator <p>操作人信息</p>
                     * @deprecated
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置<p>操作人信息</p>
                     * @param _operator <p>操作人信息</p>
                     * @deprecated
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * @deprecated
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li></ul>第三方平台子客企业和员工必须已经经过实名认证
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>指定每页返回的数据条数，和Offset参数配合使用，单页最大200。</p><p>注: <code>因为历史原因, 此字段为字符串类型</code></p>
                     */
                    std::string m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>查询的关键字段:<br>Key:&quot;<strong>RoleType</strong>&quot;,Values:[&quot;<strong>1</strong>&quot;]查询系统角色，<br>Key:&quot;<strong>RoleType</strong>&quot;,Values:[&quot;<strong>2</strong>&quot;]查询自定义角色<br>Key:&quot;<strong>RoleStatus</strong>&quot;,Values:[&quot;<strong>1</strong>&quot;]查询启用角色<br>Key:&quot;<strong>RoleStatus</strong>&quot;,Values:[&quot;<strong>2</strong>&quot;]查询禁用角色<br>Key:&quot;<strong>IsReturnPermissionGroup</strong>&quot;，Values:[&quot;<strong>0</strong>&quot;]表示接口不返回角色对应的权限树字段<br>Key:&quot;<strong>IsReturnPermissionGroup</strong>&quot;，Values:[&quot;<strong>1</strong>&quot;]表示接口返回角色对应的权限树字段</p><p>注: <code>同名字的Key的过滤条件会冲突, 只能填写一个</code></p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>查询结果分页返回，指定从第几页返回数据，和Limit参数配合使用，最大2000条。</p><p>注：<br>1.<code>offset从0开始，即第一页为0。</code><br>2.<code>默认从第一页返回。</code></p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>操作人信息</p>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELDESCRIBEROLESREQUEST_H_
