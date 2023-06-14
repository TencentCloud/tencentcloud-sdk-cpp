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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBELOADBALANCERSRESPONSE_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBELOADBALANCERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmlb/v20180625/model/LoadBalancer.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
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
                     * 获取返回负载均衡信息列表。
                     * @return LoadBalancerSet 返回负载均衡信息列表。
                     * 
                     */
                    std::vector<LoadBalancer> GetLoadBalancerSet() const;

                    /**
                     * 判断参数 LoadBalancerSet 是否已赋值
                     * @return LoadBalancerSet 是否已赋值
                     * 
                     */
                    bool LoadBalancerSetHasBeenSet() const;

                    /**
                     * 获取符合条件的负载均衡总数。
                     * @return TotalCount 符合条件的负载均衡总数。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 返回负载均衡信息列表。
                     */
                    std::vector<LoadBalancer> m_loadBalancerSet;
                    bool m_loadBalancerSetHasBeenSet;

                    /**
                     * 符合条件的负载均衡总数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBELOADBALANCERSRESPONSE_H_
