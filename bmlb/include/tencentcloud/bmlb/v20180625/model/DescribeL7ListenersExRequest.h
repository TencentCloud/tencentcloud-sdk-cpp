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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBEL7LISTENERSEXREQUEST_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBEL7LISTENERSEXREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmlb/v20180625/model/Filter.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * DescribeL7ListenersEx请求参数结构体
                */
                class DescribeL7ListenersExRequest : public AbstractModel
                {
                public:
                    DescribeL7ListenersExRequest();
                    ~DescribeL7ListenersExRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取返回的监听器中标识是否绑定在此流量镜像中。
                     * @return TrafficMirrorId 返回的监听器中标识是否绑定在此流量镜像中。
                     * 
                     */
                    std::string GetTrafficMirrorId() const;

                    /**
                     * 设置返回的监听器中标识是否绑定在此流量镜像中。
                     * @param _trafficMirrorId 返回的监听器中标识是否绑定在此流量镜像中。
                     * 
                     */
                    void SetTrafficMirrorId(const std::string& _trafficMirrorId);

                    /**
                     * 判断参数 TrafficMirrorId 是否已赋值
                     * @return TrafficMirrorId 是否已赋值
                     * 
                     */
                    bool TrafficMirrorIdHasBeenSet() const;

                    /**
                     * 获取待获取监听器所在的VPC的ID。
                     * @return VpcId 待获取监听器所在的VPC的ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置待获取监听器所在的VPC的ID。
                     * @param _vpcId 待获取监听器所在的VPC的ID。
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取此VPC中获取负载均衡的偏移。
                     * @return Offset 此VPC中获取负载均衡的偏移。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置此VPC中获取负载均衡的偏移。
                     * @param _offset 此VPC中获取负载均衡的偏移。
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
                     * 获取此VPC中获取负载均衡的数量。
                     * @return Limit 此VPC中获取负载均衡的数量。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置此VPC中获取负载均衡的数量。
                     * @param _limit 此VPC中获取负载均衡的数量。
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
                     * 获取过滤条件。
LoadBalancerId - String - （过滤条件）负载均衡ID。
LoadBalancerName - String - （过滤条件）负载均衡名称。
Vip - String - （过滤条件）VIP。
ListenerId - String - （过滤条件）监听器ID。
ListenerName -  String - （过滤条件）监听器名称。
Protocol -  String - （过滤条件）七层协议。
LoadBalancerPort -  String - （过滤条件）监听器端口。
                     * @return Filters 过滤条件。
LoadBalancerId - String - （过滤条件）负载均衡ID。
LoadBalancerName - String - （过滤条件）负载均衡名称。
Vip - String - （过滤条件）VIP。
ListenerId - String - （过滤条件）监听器ID。
ListenerName -  String - （过滤条件）监听器名称。
Protocol -  String - （过滤条件）七层协议。
LoadBalancerPort -  String - （过滤条件）监听器端口。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件。
LoadBalancerId - String - （过滤条件）负载均衡ID。
LoadBalancerName - String - （过滤条件）负载均衡名称。
Vip - String - （过滤条件）VIP。
ListenerId - String - （过滤条件）监听器ID。
ListenerName -  String - （过滤条件）监听器名称。
Protocol -  String - （过滤条件）七层协议。
LoadBalancerPort -  String - （过滤条件）监听器端口。
                     * @param _filters 过滤条件。
LoadBalancerId - String - （过滤条件）负载均衡ID。
LoadBalancerName - String - （过滤条件）负载均衡名称。
Vip - String - （过滤条件）VIP。
ListenerId - String - （过滤条件）监听器ID。
ListenerName -  String - （过滤条件）监听器名称。
Protocol -  String - （过滤条件）七层协议。
LoadBalancerPort -  String - （过滤条件）监听器端口。
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 返回的监听器中标识是否绑定在此流量镜像中。
                     */
                    std::string m_trafficMirrorId;
                    bool m_trafficMirrorIdHasBeenSet;

                    /**
                     * 待获取监听器所在的VPC的ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 此VPC中获取负载均衡的偏移。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 此VPC中获取负载均衡的数量。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤条件。
LoadBalancerId - String - （过滤条件）负载均衡ID。
LoadBalancerName - String - （过滤条件）负载均衡名称。
Vip - String - （过滤条件）VIP。
ListenerId - String - （过滤条件）监听器ID。
ListenerName -  String - （过滤条件）监听器名称。
Protocol -  String - （过滤条件）七层协议。
LoadBalancerPort -  String - （过滤条件）监听器端口。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBEL7LISTENERSEXREQUEST_H_
