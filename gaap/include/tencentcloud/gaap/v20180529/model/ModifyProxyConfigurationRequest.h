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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYPROXYCONFIGURATIONREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYPROXYCONFIGURATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * ModifyProxyConfiguration请求参数结构体
                */
                class ModifyProxyConfigurationRequest : public AbstractModel
                {
                public:
                    ModifyProxyConfigurationRequest();
                    ~ModifyProxyConfigurationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>（旧参数，请切换到ProxyId）通道的实例ID。</p>
                     * @return InstanceId <p>（旧参数，请切换到ProxyId）通道的实例ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>（旧参数，请切换到ProxyId）通道的实例ID。</p>
                     * @param _instanceId <p>（旧参数，请切换到ProxyId）通道的实例ID。</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>需要调整到的目标带宽，单位：Mbps。Bandwidth与Concurrent必须至少设置一个。取值范围根据DescribeAccessRegionsByDestRegion接口获取得到</p>
                     * @return Bandwidth <p>需要调整到的目标带宽，单位：Mbps。Bandwidth与Concurrent必须至少设置一个。取值范围根据DescribeAccessRegionsByDestRegion接口获取得到</p>
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置<p>需要调整到的目标带宽，单位：Mbps。Bandwidth与Concurrent必须至少设置一个。取值范围根据DescribeAccessRegionsByDestRegion接口获取得到</p>
                     * @param _bandwidth <p>需要调整到的目标带宽，单位：Mbps。Bandwidth与Concurrent必须至少设置一个。取值范围根据DescribeAccessRegionsByDestRegion接口获取得到</p>
                     * 
                     */
                    void SetBandwidth(const uint64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取<p>需要调整到的目标并发值，单位：万。Bandwidth与Concurrent必须至少设置一个。取值范围根据DescribeAccessRegionsByDestRegion接口获取得到</p>
                     * @return Concurrent <p>需要调整到的目标并发值，单位：万。Bandwidth与Concurrent必须至少设置一个。取值范围根据DescribeAccessRegionsByDestRegion接口获取得到</p>
                     * 
                     */
                    uint64_t GetConcurrent() const;

                    /**
                     * 设置<p>需要调整到的目标并发值，单位：万。Bandwidth与Concurrent必须至少设置一个。取值范围根据DescribeAccessRegionsByDestRegion接口获取得到</p>
                     * @param _concurrent <p>需要调整到的目标并发值，单位：万。Bandwidth与Concurrent必须至少设置一个。取值范围根据DescribeAccessRegionsByDestRegion接口获取得到</p>
                     * 
                     */
                    void SetConcurrent(const uint64_t& _concurrent);

                    /**
                     * 判断参数 Concurrent 是否已赋值
                     * @return Concurrent 是否已赋值
                     * 
                     */
                    bool ConcurrentHasBeenSet() const;

                    /**
                     * 获取<p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。更多详细信息请参阅：如何保证幂等性。</p>
                     * @return ClientToken <p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。更多详细信息请参阅：如何保证幂等性。</p>
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置<p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。更多详细信息请参阅：如何保证幂等性。</p>
                     * @param _clientToken <p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。更多详细信息请参阅：如何保证幂等性。</p>
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取<p>（新参数）通道的实例ID。</p>
                     * @return ProxyId <p>（新参数）通道的实例ID。</p>
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置<p>（新参数）通道的实例ID。</p>
                     * @param _proxyId <p>（新参数）通道的实例ID。</p>
                     * 
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     * 
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取<p>计费方式 (0:按带宽计费，1:按流量计费 默认按带宽计费）</p>
                     * @return BillingType <p>计费方式 (0:按带宽计费，1:按流量计费 默认按带宽计费）</p>
                     * 
                     */
                    int64_t GetBillingType() const;

                    /**
                     * 设置<p>计费方式 (0:按带宽计费，1:按流量计费 默认按带宽计费）</p>
                     * @param _billingType <p>计费方式 (0:按带宽计费，1:按流量计费 默认按带宽计费）</p>
                     * 
                     */
                    void SetBillingType(const int64_t& _billingType);

                    /**
                     * 判断参数 BillingType 是否已赋值
                     * @return BillingType 是否已赋值
                     * 
                     */
                    bool BillingTypeHasBeenSet() const;

                private:

                    /**
                     * <p>（旧参数，请切换到ProxyId）通道的实例ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>需要调整到的目标带宽，单位：Mbps。Bandwidth与Concurrent必须至少设置一个。取值范围根据DescribeAccessRegionsByDestRegion接口获取得到</p>
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * <p>需要调整到的目标并发值，单位：万。Bandwidth与Concurrent必须至少设置一个。取值范围根据DescribeAccessRegionsByDestRegion接口获取得到</p>
                     */
                    uint64_t m_concurrent;
                    bool m_concurrentHasBeenSet;

                    /**
                     * <p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。更多详细信息请参阅：如何保证幂等性。</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * <p>（新参数）通道的实例ID。</p>
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * <p>计费方式 (0:按带宽计费，1:按流量计费 默认按带宽计费）</p>
                     */
                    int64_t m_billingType;
                    bool m_billingTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYPROXYCONFIGURATIONREQUEST_H_
