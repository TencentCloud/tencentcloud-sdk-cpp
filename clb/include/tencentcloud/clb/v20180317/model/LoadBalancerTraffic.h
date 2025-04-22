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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_LOADBALANCERTRAFFIC_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_LOADBALANCERTRAFFIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 负载均衡流量数据。
                */
                class LoadBalancerTraffic : public AbstractModel
                {
                public:
                    LoadBalancerTraffic();
                    ~LoadBalancerTraffic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取负载均衡ID
                     * @return LoadBalancerId 负载均衡ID
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡ID
                     * @param _loadBalancerId 负载均衡ID
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
                     * 获取负载均衡名字
                     * @return LoadBalancerName 负载均衡名字
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置负载均衡名字
                     * @param _loadBalancerName 负载均衡名字
                     * 
                     */
                    void SetLoadBalancerName(const std::string& _loadBalancerName);

                    /**
                     * 判断参数 LoadBalancerName 是否已赋值
                     * @return LoadBalancerName 是否已赋值
                     * 
                     */
                    bool LoadBalancerNameHasBeenSet() const;

                    /**
                     * 获取负载均衡所在地域
                     * @return Region 负载均衡所在地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置负载均衡所在地域
                     * @param _region 负载均衡所在地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取负载均衡的vip
                     * @return Vip 负载均衡的vip
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置负载均衡的vip
                     * @param _vip 负载均衡的vip
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取最大出带宽，单位：Mbps
                     * @return OutBandwidth 最大出带宽，单位：Mbps
                     * 
                     */
                    double GetOutBandwidth() const;

                    /**
                     * 设置最大出带宽，单位：Mbps
                     * @param _outBandwidth 最大出带宽，单位：Mbps
                     * 
                     */
                    void SetOutBandwidth(const double& _outBandwidth);

                    /**
                     * 判断参数 OutBandwidth 是否已赋值
                     * @return OutBandwidth 是否已赋值
                     * 
                     */
                    bool OutBandwidthHasBeenSet() const;

                    /**
                     * 获取CLB域名
                     * @return Domain CLB域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置CLB域名
                     * @param _domain CLB域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * 负载均衡ID
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 负载均衡名字
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * 负载均衡所在地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 负载均衡的vip
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 最大出带宽，单位：Mbps
                     */
                    double m_outBandwidth;
                    bool m_outBandwidthHasBeenSet;

                    /**
                     * CLB域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_LOADBALANCERTRAFFIC_H_
