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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_ALLOCATEADDRESSESREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_ALLOCATEADDRESSESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Tag.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * AllocateAddresses请求参数结构体
                */
                class AllocateAddressesRequest : public AbstractModel
                {
                public:
                    AllocateAddressesRequest();
                    ~AllocateAddressesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ECM 地域
                     * @return EcmRegion ECM 地域
                     */
                    std::string GetEcmRegion() const;

                    /**
                     * 设置ECM 地域
                     * @param EcmRegion ECM 地域
                     */
                    void SetEcmRegion(const std::string& _ecmRegion);

                    /**
                     * 判断参数 EcmRegion 是否已赋值
                     * @return EcmRegion 是否已赋值
                     */
                    bool EcmRegionHasBeenSet() const;

                    /**
                     * 获取EIP数量。默认值：1。
                     * @return AddressCount EIP数量。默认值：1。
                     */
                    uint64_t GetAddressCount() const;

                    /**
                     * 设置EIP数量。默认值：1。
                     * @param AddressCount EIP数量。默认值：1。
                     */
                    void SetAddressCount(const uint64_t& _addressCount);

                    /**
                     * 判断参数 AddressCount 是否已赋值
                     * @return AddressCount 是否已赋值
                     */
                    bool AddressCountHasBeenSet() const;

                    /**
                     * 获取CMCC：中国移动
CTCC：中国电信
CUCC：中国联通
                     * @return InternetServiceProvider CMCC：中国移动
CTCC：中国电信
CUCC：中国联通
                     */
                    std::string GetInternetServiceProvider() const;

                    /**
                     * 设置CMCC：中国移动
CTCC：中国电信
CUCC：中国联通
                     * @param InternetServiceProvider CMCC：中国移动
CTCC：中国电信
CUCC：中国联通
                     */
                    void SetInternetServiceProvider(const std::string& _internetServiceProvider);

                    /**
                     * 判断参数 InternetServiceProvider 是否已赋值
                     * @return InternetServiceProvider 是否已赋值
                     */
                    bool InternetServiceProviderHasBeenSet() const;

                    /**
                     * 获取1 Mbps 至 5000 Mbps，默认值：1 Mbps。
                     * @return InternetMaxBandwidthOut 1 Mbps 至 5000 Mbps，默认值：1 Mbps。
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置1 Mbps 至 5000 Mbps，默认值：1 Mbps。
                     * @param InternetMaxBandwidthOut 1 Mbps 至 5000 Mbps，默认值：1 Mbps。
                     */
                    void SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

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

                private:

                    /**
                     * ECM 地域
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                    /**
                     * EIP数量。默认值：1。
                     */
                    uint64_t m_addressCount;
                    bool m_addressCountHasBeenSet;

                    /**
                     * CMCC：中国移动
CTCC：中国电信
CUCC：中国联通
                     */
                    std::string m_internetServiceProvider;
                    bool m_internetServiceProviderHasBeenSet;

                    /**
                     * 1 Mbps 至 5000 Mbps，默认值：1 Mbps。
                     */
                    uint64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

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

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_ALLOCATEADDRESSESREQUEST_H_
