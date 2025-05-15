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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEIDLELOADBALANCERSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEIDLELOADBALANCERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeIdleLoadBalancers请求参数结构体
                */
                class DescribeIdleLoadBalancersRequest : public AbstractModel
                {
                public:
                    DescribeIdleLoadBalancersRequest();
                    ~DescribeIdleLoadBalancersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据偏移量，默认为0。
                     * @return Offset 数据偏移量，默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置数据偏移量，默认为0。
                     * @param _offset 数据偏移量，默认为0。
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
                     * 获取返回负载均衡实例的数量，默认为20，最大值为100。
                     * @return Limit 返回负载均衡实例的数量，默认为20，最大值为100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回负载均衡实例的数量，默认为20，最大值为100。
                     * @param _limit 返回负载均衡实例的数量，默认为20，最大值为100。
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
                     * 获取负载均衡所在地域，可以通过 [DescribeRegions](https://cloud.tencent.com/document/product/1596/77930) 接口返回值 `RegionSet.Region` 字段获取。
                     * @return LoadBalancerRegion 负载均衡所在地域，可以通过 [DescribeRegions](https://cloud.tencent.com/document/product/1596/77930) 接口返回值 `RegionSet.Region` 字段获取。
                     * 
                     */
                    std::string GetLoadBalancerRegion() const;

                    /**
                     * 设置负载均衡所在地域，可以通过 [DescribeRegions](https://cloud.tencent.com/document/product/1596/77930) 接口返回值 `RegionSet.Region` 字段获取。
                     * @param _loadBalancerRegion 负载均衡所在地域，可以通过 [DescribeRegions](https://cloud.tencent.com/document/product/1596/77930) 接口返回值 `RegionSet.Region` 字段获取。
                     * 
                     */
                    void SetLoadBalancerRegion(const std::string& _loadBalancerRegion);

                    /**
                     * 判断参数 LoadBalancerRegion 是否已赋值
                     * @return LoadBalancerRegion 是否已赋值
                     * 
                     */
                    bool LoadBalancerRegionHasBeenSet() const;

                private:

                    /**
                     * 数据偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回负载均衡实例的数量，默认为20，最大值为100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 负载均衡所在地域，可以通过 [DescribeRegions](https://cloud.tencent.com/document/product/1596/77930) 接口返回值 `RegionSet.Region` 字段获取。
                     */
                    std::string m_loadBalancerRegion;
                    bool m_loadBalancerRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEIDLELOADBALANCERSREQUEST_H_
