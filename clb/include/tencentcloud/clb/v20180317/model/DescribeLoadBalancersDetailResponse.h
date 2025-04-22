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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCERSDETAILRESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCERSDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/LoadBalancerDetail.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeLoadBalancersDetail返回参数结构体
                */
                class DescribeLoadBalancersDetailResponse : public AbstractModel
                {
                public:
                    DescribeLoadBalancersDetailResponse();
                    ~DescribeLoadBalancersDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取负载均衡详情列表总数。
                     * @return TotalCount 负载均衡详情列表总数。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取负载均衡详情列表。
                     * @return LoadBalancerDetailSet 负载均衡详情列表。
                     * 
                     */
                    std::vector<LoadBalancerDetail> GetLoadBalancerDetailSet() const;

                    /**
                     * 判断参数 LoadBalancerDetailSet 是否已赋值
                     * @return LoadBalancerDetailSet 是否已赋值
                     * 
                     */
                    bool LoadBalancerDetailSetHasBeenSet() const;

                private:

                    /**
                     * 负载均衡详情列表总数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 负载均衡详情列表。
                     */
                    std::vector<LoadBalancerDetail> m_loadBalancerDetailSet;
                    bool m_loadBalancerDetailSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCERSDETAILRESPONSE_H_
