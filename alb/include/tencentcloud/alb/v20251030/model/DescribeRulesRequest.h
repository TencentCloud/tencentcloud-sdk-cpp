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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBERULESREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBERULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/Filter.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DescribeRules请求参数结构体
                */
                class DescribeRulesRequest : public AbstractModel
                {
                public:
                    DescribeRulesRequest();
                    ~DescribeRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取监听器 ID，格式为 lst- 后接 8 位字母数字。
                     * @return ListenerId 监听器 ID，格式为 lst- 后接 8 位字母数字。
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置监听器 ID，格式为 lst- 后接 8 位字母数字。
                     * @param _listenerId 监听器 ID，格式为 lst- 后接 8 位字母数字。
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。
                     * @return LoadBalancerId 负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。
                     * @param _loadBalancerId 负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取支持的过滤条件如下：
                     * @return Filters 支持的过滤条件如下：
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置支持的过滤条件如下：
                     * @param _filters 支持的过滤条件如下：
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
                     * 获取返回列表的数量，默认为20，最大值为100。
                     * @return MaxResults 返回列表的数量，默认为20，最大值为100。
                     * 
                     */
                    int64_t GetMaxResults() const;

                    /**
                     * 设置返回列表的数量，默认为20，最大值为100。
                     * @param _maxResults 返回列表的数量，默认为20，最大值为100。
                     * 
                     */
                    void SetMaxResults(const int64_t& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取下一次查询的Token值。第一次查询和没有下一次查询时，无需填写。如果有下一次查询，取值为上一次 API 调用返回的 NextToken 值。
                     * @return NextToken 下一次查询的Token值。第一次查询和没有下一次查询时，无需填写。如果有下一次查询，取值为上一次 API 调用返回的 NextToken 值。
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置下一次查询的Token值。第一次查询和没有下一次查询时，无需填写。如果有下一次查询，取值为上一次 API 调用返回的 NextToken 值。
                     * @param _nextToken 下一次查询的Token值。第一次查询和没有下一次查询时，无需填写。如果有下一次查询，取值为上一次 API 调用返回的 NextToken 值。
                     * 
                     */
                    void SetNextToken(const std::string& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                    /**
                     * 获取转发规则 ID 列表，ID 格式为 rule- 后接 8 位字母数字。
                     * @return RuleIds 转发规则 ID 列表，ID 格式为 rule- 后接 8 位字母数字。
                     * 
                     */
                    std::vector<std::string> GetRuleIds() const;

                    /**
                     * 设置转发规则 ID 列表，ID 格式为 rule- 后接 8 位字母数字。
                     * @param _ruleIds 转发规则 ID 列表，ID 格式为 rule- 后接 8 位字母数字。
                     * 
                     */
                    void SetRuleIds(const std::vector<std::string>& _ruleIds);

                    /**
                     * 判断参数 RuleIds 是否已赋值
                     * @return RuleIds 是否已赋值
                     * 
                     */
                    bool RuleIdsHasBeenSet() const;

                private:

                    /**
                     * 监听器 ID，格式为 lst- 后接 8 位字母数字。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 支持的过滤条件如下：
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 返回列表的数量，默认为20，最大值为100。
                     */
                    int64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * 下一次查询的Token值。第一次查询和没有下一次查询时，无需填写。如果有下一次查询，取值为上一次 API 调用返回的 NextToken 值。
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * 转发规则 ID 列表，ID 格式为 rule- 后接 8 位字母数字。
                     */
                    std::vector<std::string> m_ruleIds;
                    bool m_ruleIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBERULESREQUEST_H_
