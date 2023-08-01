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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEFLOWTEMPLATESREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEFLOWTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/Agent.h>
#include <tencentcloud/ess/v20201111/model/Filter.h>
#include <tencentcloud/ess/v20201111/model/OrganizationInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeFlowTemplates请求参数结构体
                */
                class DescribeFlowTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeFlowTemplatesRequest();
                    ~DescribeFlowTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取调用方员工/经办人信息
UserId 必填，在企业控制台组织架构中可以查到员工的UserId
注：请保证员工有相关的角色权限
                     * @return Operator 调用方员工/经办人信息
UserId 必填，在企业控制台组织架构中可以查到员工的UserId
注：请保证员工有相关的角色权限
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置调用方员工/经办人信息
UserId 必填，在企业控制台组织架构中可以查到员工的UserId
注：请保证员工有相关的角色权限
                     * @param _operator 调用方员工/经办人信息
UserId 必填，在企业控制台组织架构中可以查到员工的UserId
注：请保证员工有相关的角色权限
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
                     * 获取代理相关应用信息
如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     * @return Agent 代理相关应用信息
如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置代理相关应用信息
如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     * @param _agent 代理相关应用信息
如集团主企业代子企业操作的场景中ProxyOrganizationId必填
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
                     * 获取查询内容类型
0-模板列表及详情（默认）
1-仅模板列表
                     * @return ContentType 查询内容类型
0-模板列表及详情（默认）
1-仅模板列表
                     * 
                     */
                    int64_t GetContentType() const;

                    /**
                     * 设置查询内容类型
0-模板列表及详情（默认）
1-仅模板列表
                     * @param _contentType 查询内容类型
0-模板列表及详情（默认）
1-仅模板列表
                     * 
                     */
                    void SetContentType(const int64_t& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                    /**
                     * 获取搜索条件，本字段用于指定模板Id进行查询。
Key：template-id
Values：需要查询的模板Id列表
                     * @return Filters 搜索条件，本字段用于指定模板Id进行查询。
Key：template-id
Values：需要查询的模板Id列表
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置搜索条件，本字段用于指定模板Id进行查询。
Key：template-id
Values：需要查询的模板Id列表
                     * @param _filters 搜索条件，本字段用于指定模板Id进行查询。
Key：template-id
Values：需要查询的模板Id列表
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
                     * 获取查询结果分页返回，此处指定第几页，如果不传默从第一页返回。页码从0开始，即首页为0。
                     * @return Offset 查询结果分页返回，此处指定第几页，如果不传默从第一页返回。页码从0开始，即首页为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置查询结果分页返回，此处指定第几页，如果不传默从第一页返回。页码从0开始，即首页为0。
                     * @param _offset 查询结果分页返回，此处指定第几页，如果不传默从第一页返回。页码从0开始，即首页为0。
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
                     * 获取指定每页多少条数据，如果不传默认为20，单页最大200。
                     * @return Limit 指定每页多少条数据，如果不传默认为20，单页最大200。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置指定每页多少条数据，如果不传默认为20，单页最大200。
                     * @param _limit 指定每页多少条数据，如果不传默认为20，单页最大200。
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
                     * 获取用于查询指定应用号下单模板列表。
ApplicationId不为空，查询指定应用下的模板列表
ApplicationId为空，查询所有应用下的模板列表
                     * @return ApplicationId 用于查询指定应用号下单模板列表。
ApplicationId不为空，查询指定应用下的模板列表
ApplicationId为空，查询所有应用下的模板列表
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置用于查询指定应用号下单模板列表。
ApplicationId不为空，查询指定应用下的模板列表
ApplicationId为空，查询所有应用下的模板列表
                     * @param _applicationId 用于查询指定应用号下单模板列表。
ApplicationId不为空，查询指定应用下的模板列表
ApplicationId为空，查询所有应用下的模板列表
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取默认为false，查询SaaS模板库列表；
为true，查询第三方应用集成平台企业模板库管理列表
                     * @return IsChannel 默认为false，查询SaaS模板库列表；
为true，查询第三方应用集成平台企业模板库管理列表
                     * @deprecated
                     */
                    bool GetIsChannel() const;

                    /**
                     * 设置默认为false，查询SaaS模板库列表；
为true，查询第三方应用集成平台企业模板库管理列表
                     * @param _isChannel 默认为false，查询SaaS模板库列表；
为true，查询第三方应用集成平台企业模板库管理列表
                     * @deprecated
                     */
                    void SetIsChannel(const bool& _isChannel);

                    /**
                     * 判断参数 IsChannel 是否已赋值
                     * @return IsChannel 是否已赋值
                     * @deprecated
                     */
                    bool IsChannelHasBeenSet() const;

                    /**
                     * 获取暂未开放
                     * @return Organization 暂未开放
                     * @deprecated
                     */
                    OrganizationInfo GetOrganization() const;

                    /**
                     * 设置暂未开放
                     * @param _organization 暂未开放
                     * @deprecated
                     */
                    void SetOrganization(const OrganizationInfo& _organization);

                    /**
                     * 判断参数 Organization 是否已赋值
                     * @return Organization 是否已赋值
                     * @deprecated
                     */
                    bool OrganizationHasBeenSet() const;

                    /**
                     * 获取暂未开放
                     * @return GenerateSource 暂未开放
                     * @deprecated
                     */
                    uint64_t GetGenerateSource() const;

                    /**
                     * 设置暂未开放
                     * @param _generateSource 暂未开放
                     * @deprecated
                     */
                    void SetGenerateSource(const uint64_t& _generateSource);

                    /**
                     * 判断参数 GenerateSource 是否已赋值
                     * @return GenerateSource 是否已赋值
                     * @deprecated
                     */
                    bool GenerateSourceHasBeenSet() const;

                private:

                    /**
                     * 调用方员工/经办人信息
UserId 必填，在企业控制台组织架构中可以查到员工的UserId
注：请保证员工有相关的角色权限
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 代理相关应用信息
如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 查询内容类型
0-模板列表及详情（默认）
1-仅模板列表
                     */
                    int64_t m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * 搜索条件，本字段用于指定模板Id进行查询。
Key：template-id
Values：需要查询的模板Id列表
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 查询结果分页返回，此处指定第几页，如果不传默从第一页返回。页码从0开始，即首页为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 指定每页多少条数据，如果不传默认为20，单页最大200。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 用于查询指定应用号下单模板列表。
ApplicationId不为空，查询指定应用下的模板列表
ApplicationId为空，查询所有应用下的模板列表
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 默认为false，查询SaaS模板库列表；
为true，查询第三方应用集成平台企业模板库管理列表
                     */
                    bool m_isChannel;
                    bool m_isChannelHasBeenSet;

                    /**
                     * 暂未开放
                     */
                    OrganizationInfo m_organization;
                    bool m_organizationHasBeenSet;

                    /**
                     * 暂未开放
                     */
                    uint64_t m_generateSource;
                    bool m_generateSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEFLOWTEMPLATESREQUEST_H_
