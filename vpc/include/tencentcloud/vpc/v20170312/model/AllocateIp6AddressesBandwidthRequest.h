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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ALLOCATEIP6ADDRESSESBANDWIDTHREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ALLOCATEIP6ADDRESSESBANDWIDTHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * AllocateIp6AddressesBandwidth请求参数结构体
                */
                class AllocateIp6AddressesBandwidthRequest : public AbstractModel
                {
                public:
                    AllocateIp6AddressesBandwidthRequest();
                    ~AllocateIp6AddressesBandwidthRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要开通公网访问能力的IPv6地址
                     * @return Ip6Addresses 需要开通公网访问能力的IPv6地址
                     * 
                     */
                    std::vector<std::string> GetIp6Addresses() const;

                    /**
                     * 设置需要开通公网访问能力的IPv6地址
                     * @param _ip6Addresses 需要开通公网访问能力的IPv6地址
                     * 
                     */
                    void SetIp6Addresses(const std::vector<std::string>& _ip6Addresses);

                    /**
                     * 判断参数 Ip6Addresses 是否已赋值
                     * @return Ip6Addresses 是否已赋值
                     * 
                     */
                    bool Ip6AddressesHasBeenSet() const;

                    /**
                     * 获取带宽，单位Mbps。默认是1Mbps
                     * @return InternetMaxBandwidthOut 带宽，单位Mbps。默认是1Mbps
                     * 
                     */
                    int64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置带宽，单位Mbps。默认是1Mbps
                     * @param _internetMaxBandwidthOut 带宽，单位Mbps。默认是1Mbps
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取网络计费模式。IPv6当前支持"TRAFFIC_POSTPAID_BY_HOUR"，"BANDWIDTH_PACKAGE"。默认网络计费模式是"TRAFFIC_POSTPAID_BY_HOUR"。
                     * @return InternetChargeType 网络计费模式。IPv6当前支持"TRAFFIC_POSTPAID_BY_HOUR"，"BANDWIDTH_PACKAGE"。默认网络计费模式是"TRAFFIC_POSTPAID_BY_HOUR"。
                     * 
                     */
                    std::string GetInternetChargeType() const;

                    /**
                     * 设置网络计费模式。IPv6当前支持"TRAFFIC_POSTPAID_BY_HOUR"，"BANDWIDTH_PACKAGE"。默认网络计费模式是"TRAFFIC_POSTPAID_BY_HOUR"。
                     * @param _internetChargeType 网络计费模式。IPv6当前支持"TRAFFIC_POSTPAID_BY_HOUR"，"BANDWIDTH_PACKAGE"。默认网络计费模式是"TRAFFIC_POSTPAID_BY_HOUR"。
                     * 
                     */
                    void SetInternetChargeType(const std::string& _internetChargeType);

                    /**
                     * 判断参数 InternetChargeType 是否已赋值
                     * @return InternetChargeType 是否已赋值
                     * 
                     */
                    bool InternetChargeTypeHasBeenSet() const;

                    /**
                     * 获取带宽包id，上移账号，申请带宽包计费模式的IPv6地址需要传入.
                     * @return BandwidthPackageId 带宽包id，上移账号，申请带宽包计费模式的IPv6地址需要传入.
                     * 
                     */
                    std::string GetBandwidthPackageId() const;

                    /**
                     * 设置带宽包id，上移账号，申请带宽包计费模式的IPv6地址需要传入.
                     * @param _bandwidthPackageId 带宽包id，上移账号，申请带宽包计费模式的IPv6地址需要传入.
                     * 
                     */
                    void SetBandwidthPackageId(const std::string& _bandwidthPackageId);

                    /**
                     * 判断参数 BandwidthPackageId 是否已赋值
                     * @return BandwidthPackageId 是否已赋值
                     * 
                     */
                    bool BandwidthPackageIdHasBeenSet() const;

                    /**
                     * 获取需要关联的标签列表。	
                     * @return Tags 需要关联的标签列表。	
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置需要关联的标签列表。	
                     * @param _tags 需要关联的标签列表。	
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 需要开通公网访问能力的IPv6地址
                     */
                    std::vector<std::string> m_ip6Addresses;
                    bool m_ip6AddressesHasBeenSet;

                    /**
                     * 带宽，单位Mbps。默认是1Mbps
                     */
                    int64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * 网络计费模式。IPv6当前支持"TRAFFIC_POSTPAID_BY_HOUR"，"BANDWIDTH_PACKAGE"。默认网络计费模式是"TRAFFIC_POSTPAID_BY_HOUR"。
                     */
                    std::string m_internetChargeType;
                    bool m_internetChargeTypeHasBeenSet;

                    /**
                     * 带宽包id，上移账号，申请带宽包计费模式的IPv6地址需要传入.
                     */
                    std::string m_bandwidthPackageId;
                    bool m_bandwidthPackageIdHasBeenSet;

                    /**
                     * 需要关联的标签列表。	
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ALLOCATEIP6ADDRESSESBANDWIDTHREQUEST_H_
