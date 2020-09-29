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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEBANDWIDTHPACKAGEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEBANDWIDTHPACKAGEREQUEST_H_

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
                * CreateBandwidthPackage请求参数结构体
                */
                class CreateBandwidthPackageRequest : public AbstractModel
                {
                public:
                    CreateBandwidthPackageRequest();
                    ~CreateBandwidthPackageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取带宽包类型，包括'BGP'，'SINGLEISP'，'ANYCAST'
                     * @return NetworkType 带宽包类型，包括'BGP'，'SINGLEISP'，'ANYCAST'
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置带宽包类型，包括'BGP'，'SINGLEISP'，'ANYCAST'
                     * @param NetworkType 带宽包类型，包括'BGP'，'SINGLEISP'，'ANYCAST'
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取带宽包计费类型，包括‘TOP5_POSTPAID_BY_MONTH’，‘PERCENT95_POSTPAID_BY_MONTH’
                     * @return ChargeType 带宽包计费类型，包括‘TOP5_POSTPAID_BY_MONTH’，‘PERCENT95_POSTPAID_BY_MONTH’
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置带宽包计费类型，包括‘TOP5_POSTPAID_BY_MONTH’，‘PERCENT95_POSTPAID_BY_MONTH’
                     * @param ChargeType 带宽包计费类型，包括‘TOP5_POSTPAID_BY_MONTH’，‘PERCENT95_POSTPAID_BY_MONTH’
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取带宽包名字
                     * @return BandwidthPackageName 带宽包名字
                     */
                    std::string GetBandwidthPackageName() const;

                    /**
                     * 设置带宽包名字
                     * @param BandwidthPackageName 带宽包名字
                     */
                    void SetBandwidthPackageName(const std::string& _bandwidthPackageName);

                    /**
                     * 判断参数 BandwidthPackageName 是否已赋值
                     * @return BandwidthPackageName 是否已赋值
                     */
                    bool BandwidthPackageNameHasBeenSet() const;

                    /**
                     * 获取带宽包数量(传统账户类型只能填1)
                     * @return BandwidthPackageCount 带宽包数量(传统账户类型只能填1)
                     */
                    uint64_t GetBandwidthPackageCount() const;

                    /**
                     * 设置带宽包数量(传统账户类型只能填1)
                     * @param BandwidthPackageCount 带宽包数量(传统账户类型只能填1)
                     */
                    void SetBandwidthPackageCount(const uint64_t& _bandwidthPackageCount);

                    /**
                     * 判断参数 BandwidthPackageCount 是否已赋值
                     * @return BandwidthPackageCount 是否已赋值
                     */
                    bool BandwidthPackageCountHasBeenSet() const;

                    /**
                     * 获取带宽包限速大小。单位：Mbps，-1表示不限速。
                     * @return InternetMaxBandwidth 带宽包限速大小。单位：Mbps，-1表示不限速。
                     */
                    int64_t GetInternetMaxBandwidth() const;

                    /**
                     * 设置带宽包限速大小。单位：Mbps，-1表示不限速。
                     * @param InternetMaxBandwidth 带宽包限速大小。单位：Mbps，-1表示不限速。
                     */
                    void SetInternetMaxBandwidth(const int64_t& _internetMaxBandwidth);

                    /**
                     * 判断参数 InternetMaxBandwidth 是否已赋值
                     * @return InternetMaxBandwidth 是否已赋值
                     */
                    bool InternetMaxBandwidthHasBeenSet() const;

                    /**
                     * 获取需要关联的标签列表。
                     * @return Tags 需要关联的标签列表。
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置需要关联的标签列表。
                     * @param Tags 需要关联的标签列表。
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取带宽包协议类型。当前支持'ipv4'和'ipv6'协议带宽包，默认值是'ipv4'。
                     * @return Protocol 带宽包协议类型。当前支持'ipv4'和'ipv6'协议带宽包，默认值是'ipv4'。
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置带宽包协议类型。当前支持'ipv4'和'ipv6'协议带宽包，默认值是'ipv4'。
                     * @param Protocol 带宽包协议类型。当前支持'ipv4'和'ipv6'协议带宽包，默认值是'ipv4'。
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                private:

                    /**
                     * 带宽包类型，包括'BGP'，'SINGLEISP'，'ANYCAST'
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * 带宽包计费类型，包括‘TOP5_POSTPAID_BY_MONTH’，‘PERCENT95_POSTPAID_BY_MONTH’
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 带宽包名字
                     */
                    std::string m_bandwidthPackageName;
                    bool m_bandwidthPackageNameHasBeenSet;

                    /**
                     * 带宽包数量(传统账户类型只能填1)
                     */
                    uint64_t m_bandwidthPackageCount;
                    bool m_bandwidthPackageCountHasBeenSet;

                    /**
                     * 带宽包限速大小。单位：Mbps，-1表示不限速。
                     */
                    int64_t m_internetMaxBandwidth;
                    bool m_internetMaxBandwidthHasBeenSet;

                    /**
                     * 需要关联的标签列表。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 带宽包协议类型。当前支持'ipv4'和'ipv6'协议带宽包，默认值是'ipv4'。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEBANDWIDTHPACKAGEREQUEST_H_
