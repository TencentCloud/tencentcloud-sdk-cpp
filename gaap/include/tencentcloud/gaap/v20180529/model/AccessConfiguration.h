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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_ACCESSCONFIGURATION_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_ACCESSCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 通道组加速地域列表，包括加速地域，以及该加速地域对应的带宽和并发配置。
                */
                class AccessConfiguration : public AbstractModel
                {
                public:
                    AccessConfiguration();
                    ~AccessConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取加速地域。
                     * @return AccessRegion 加速地域。
                     * 
                     */
                    std::string GetAccessRegion() const;

                    /**
                     * 设置加速地域。
                     * @param _accessRegion 加速地域。
                     * 
                     */
                    void SetAccessRegion(const std::string& _accessRegion);

                    /**
                     * 判断参数 AccessRegion 是否已赋值
                     * @return AccessRegion 是否已赋值
                     * 
                     */
                    bool AccessRegionHasBeenSet() const;

                    /**
                     * 获取通道带宽上限，单位：Mbps。
                     * @return Bandwidth 通道带宽上限，单位：Mbps。
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置通道带宽上限，单位：Mbps。
                     * @param _bandwidth 通道带宽上限，单位：Mbps。
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
                     * 获取通道并发量上限，表示同时在线的连接数，单位：万。
                     * @return Concurrent 通道并发量上限，表示同时在线的连接数，单位：万。
                     * 
                     */
                    uint64_t GetConcurrent() const;

                    /**
                     * 设置通道并发量上限，表示同时在线的连接数，单位：万。
                     * @param _concurrent 通道并发量上限，表示同时在线的连接数，单位：万。
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
                     * 获取网络类型，可取值：normal、cn2，默认值为normal
                     * @return NetworkType 网络类型，可取值：normal、cn2，默认值为normal
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置网络类型，可取值：normal、cn2，默认值为normal
                     * @param _networkType 网络类型，可取值：normal、cn2，默认值为normal
                     * 
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     * 
                     */
                    bool NetworkTypeHasBeenSet() const;

                private:

                    /**
                     * 加速地域。
                     */
                    std::string m_accessRegion;
                    bool m_accessRegionHasBeenSet;

                    /**
                     * 通道带宽上限，单位：Mbps。
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 通道并发量上限，表示同时在线的连接数，单位：万。
                     */
                    uint64_t m_concurrent;
                    bool m_concurrentHasBeenSet;

                    /**
                     * 网络类型，可取值：normal、cn2，默认值为normal
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_ACCESSCONFIGURATION_H_
