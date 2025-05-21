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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DELETELOADBALANCERREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DELETELOADBALANCERREQUEST_H_

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
                * DeleteLoadBalancer请求参数结构体
                */
                class DeleteLoadBalancerRequest : public AbstractModel
                {
                public:
                    DeleteLoadBalancerRequest();
                    ~DeleteLoadBalancerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要删除的负载均衡实例 ID 数组，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口获取，数组大小最大支持20。
                     * @return LoadBalancerIds 要删除的负载均衡实例 ID 数组，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口获取，数组大小最大支持20。
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerIds() const;

                    /**
                     * 设置要删除的负载均衡实例 ID 数组，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口获取，数组大小最大支持20。
                     * @param _loadBalancerIds 要删除的负载均衡实例 ID 数组，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口获取，数组大小最大支持20。
                     * 
                     */
                    void SetLoadBalancerIds(const std::vector<std::string>& _loadBalancerIds);

                    /**
                     * 判断参数 LoadBalancerIds 是否已赋值
                     * @return LoadBalancerIds 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdsHasBeenSet() const;

                    /**
                     * 获取是否强制删除clb。True表示强制删除，False表示不是强制删除，需要做拦截校验。
默认为 False。
以下几种情况会默认拦截删除操作，如果确认强制删除则需要传强制校验参数ForceDelete为True。
1、删除后端绑定大于等于 20 个 RS 的实例时。
2、删除后端有 RS 且 5 分钟 内“出/入带宽”峰值取大 > 10Mbps 的实例时。
3、单地域内 5 分钟 内删除大于等于 30 个实例时。
                     * @return ForceDelete 是否强制删除clb。True表示强制删除，False表示不是强制删除，需要做拦截校验。
默认为 False。
以下几种情况会默认拦截删除操作，如果确认强制删除则需要传强制校验参数ForceDelete为True。
1、删除后端绑定大于等于 20 个 RS 的实例时。
2、删除后端有 RS 且 5 分钟 内“出/入带宽”峰值取大 > 10Mbps 的实例时。
3、单地域内 5 分钟 内删除大于等于 30 个实例时。
                     * 
                     */
                    bool GetForceDelete() const;

                    /**
                     * 设置是否强制删除clb。True表示强制删除，False表示不是强制删除，需要做拦截校验。
默认为 False。
以下几种情况会默认拦截删除操作，如果确认强制删除则需要传强制校验参数ForceDelete为True。
1、删除后端绑定大于等于 20 个 RS 的实例时。
2、删除后端有 RS 且 5 分钟 内“出/入带宽”峰值取大 > 10Mbps 的实例时。
3、单地域内 5 分钟 内删除大于等于 30 个实例时。
                     * @param _forceDelete 是否强制删除clb。True表示强制删除，False表示不是强制删除，需要做拦截校验。
默认为 False。
以下几种情况会默认拦截删除操作，如果确认强制删除则需要传强制校验参数ForceDelete为True。
1、删除后端绑定大于等于 20 个 RS 的实例时。
2、删除后端有 RS 且 5 分钟 内“出/入带宽”峰值取大 > 10Mbps 的实例时。
3、单地域内 5 分钟 内删除大于等于 30 个实例时。
                     * 
                     */
                    void SetForceDelete(const bool& _forceDelete);

                    /**
                     * 判断参数 ForceDelete 是否已赋值
                     * @return ForceDelete 是否已赋值
                     * 
                     */
                    bool ForceDeleteHasBeenSet() const;

                private:

                    /**
                     * 要删除的负载均衡实例 ID 数组，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口获取，数组大小最大支持20。
                     */
                    std::vector<std::string> m_loadBalancerIds;
                    bool m_loadBalancerIdsHasBeenSet;

                    /**
                     * 是否强制删除clb。True表示强制删除，False表示不是强制删除，需要做拦截校验。
默认为 False。
以下几种情况会默认拦截删除操作，如果确认强制删除则需要传强制校验参数ForceDelete为True。
1、删除后端绑定大于等于 20 个 RS 的实例时。
2、删除后端有 RS 且 5 分钟 内“出/入带宽”峰值取大 > 10Mbps 的实例时。
3、单地域内 5 分钟 内删除大于等于 30 个实例时。
                     */
                    bool m_forceDelete;
                    bool m_forceDeleteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DELETELOADBALANCERREQUEST_H_
