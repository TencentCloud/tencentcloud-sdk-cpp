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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBELOADBALANCERSRESPONSE_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBELOADBALANCERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/LoadBalancer.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DescribeLoadBalancers返回参数结构体
                */
                class DescribeLoadBalancersResponse : public AbstractModel
                {
                public:
                    DescribeLoadBalancersResponse();
                    ~DescribeLoadBalancersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用型负载均衡实例列表。</p>
                     * @return LoadBalancers <p>应用型负载均衡实例列表。</p>
                     * 
                     */
                    std::vector<LoadBalancer> GetLoadBalancers() const;

                    /**
                     * 判断参数 LoadBalancers 是否已赋值
                     * @return LoadBalancers 是否已赋值
                     * 
                     */
                    bool LoadBalancersHasBeenSet() const;

                    /**
                     * 获取<p>分批次查询时每次显示的条目数。</p>
                     * @return MaxResults <p>分批次查询时每次显示的条目数。</p>
                     * 
                     */
                    int64_t GetMaxResults() const;

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取<p>是否拥有下一次查询的令牌（Token）。取值：</p><ul><li>如果<strong>NextToken</strong>为空表示没有下一次查询。</li><li>如果<strong>NextToken</strong>有返回值，该取值表示下一次查询开始的令牌。</li></ul>
                     * @return NextToken <p>是否拥有下一次查询的令牌（Token）。取值：</p><ul><li>如果<strong>NextToken</strong>为空表示没有下一次查询。</li><li>如果<strong>NextToken</strong>有返回值，该取值表示下一次查询开始的令牌。</li></ul>
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                    /**
                     * 获取<p>列表条目数。</p>
                     * @return TotalCount <p>列表条目数。</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>应用型负载均衡实例列表。</p>
                     */
                    std::vector<LoadBalancer> m_loadBalancers;
                    bool m_loadBalancersHasBeenSet;

                    /**
                     * <p>分批次查询时每次显示的条目数。</p>
                     */
                    int64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * <p>是否拥有下一次查询的令牌（Token）。取值：</p><ul><li>如果<strong>NextToken</strong>为空表示没有下一次查询。</li><li>如果<strong>NextToken</strong>有返回值，该取值表示下一次查询开始的令牌。</li></ul>
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * <p>列表条目数。</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBELOADBALANCERSRESPONSE_H_
