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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_ACCELERATORAREAS_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_ACCELERATORAREAS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ga2/v20250115/model/IpAddressInfoSet.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * 加速地域信息
                */
                class AcceleratorAreas : public AbstractModel
                {
                public:
                    AcceleratorAreas();
                    ~AcceleratorAreas() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>加速地域。</p>
                     * @return AccelerateRegion <p>加速地域。</p>
                     * 
                     */
                    std::string GetAccelerateRegion() const;

                    /**
                     * 设置<p>加速地域。</p>
                     * @param _accelerateRegion <p>加速地域。</p>
                     * 
                     */
                    void SetAccelerateRegion(const std::string& _accelerateRegion);

                    /**
                     * 判断参数 AccelerateRegion 是否已赋值
                     * @return AccelerateRegion 是否已赋值
                     * 
                     */
                    bool AccelerateRegionHasBeenSet() const;

                    /**
                     * 获取<p>带宽。</p>
                     * @return Bandwidth <p>带宽。</p>
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置<p>带宽。</p>
                     * @param _bandwidth <p>带宽。</p>
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
                     * 获取<p>支持&#39;BGP&#39;, &#39;QUALITY_BGP&#39;, &#39;STATIC_IP&#39;，默认BGP。</p><p>枚举值：</p><ul><li>BGP： BGP</li><li>STATIC_IP： 三网</li><li>QUALITY_BGP： 精品BGP</li></ul>
                     * @return IspType <p>支持&#39;BGP&#39;, &#39;QUALITY_BGP&#39;, &#39;STATIC_IP&#39;，默认BGP。</p><p>枚举值：</p><ul><li>BGP： BGP</li><li>STATIC_IP： 三网</li><li>QUALITY_BGP： 精品BGP</li></ul>
                     * 
                     */
                    std::string GetIspType() const;

                    /**
                     * 设置<p>支持&#39;BGP&#39;, &#39;QUALITY_BGP&#39;, &#39;STATIC_IP&#39;，默认BGP。</p><p>枚举值：</p><ul><li>BGP： BGP</li><li>STATIC_IP： 三网</li><li>QUALITY_BGP： 精品BGP</li></ul>
                     * @param _ispType <p>支持&#39;BGP&#39;, &#39;QUALITY_BGP&#39;, &#39;STATIC_IP&#39;，默认BGP。</p><p>枚举值：</p><ul><li>BGP： BGP</li><li>STATIC_IP： 三网</li><li>QUALITY_BGP： 精品BGP</li></ul>
                     * 
                     */
                    void SetIspType(const std::string& _ispType);

                    /**
                     * 判断参数 IspType 是否已赋值
                     * @return IspType 是否已赋值
                     * 
                     */
                    bool IspTypeHasBeenSet() const;

                    /**
                     * 获取<p>仅支持IPv4，默认是IPv4。</p>
                     * @return IpVersion <p>仅支持IPv4，默认是IPv4。</p>
                     * 
                     */
                    std::string GetIpVersion() const;

                    /**
                     * 设置<p>仅支持IPv4，默认是IPv4。</p>
                     * @param _ipVersion <p>仅支持IPv4，默认是IPv4。</p>
                     * 
                     */
                    void SetIpVersion(const std::string& _ipVersion);

                    /**
                     * 判断参数 IpVersion 是否已赋值
                     * @return IpVersion 是否已赋值
                     * 
                     */
                    bool IpVersionHasBeenSet() const;

                    /**
                     * 获取<p>加速地域ID。</p>
                     * @return AcceleratorAreaId <p>加速地域ID。</p>
                     * 
                     */
                    std::string GetAcceleratorAreaId() const;

                    /**
                     * 设置<p>加速地域ID。</p>
                     * @param _acceleratorAreaId <p>加速地域ID。</p>
                     * 
                     */
                    void SetAcceleratorAreaId(const std::string& _acceleratorAreaId);

                    /**
                     * 判断参数 AcceleratorAreaId 是否已赋值
                     * @return AcceleratorAreaId 是否已赋值
                     * 
                     */
                    bool AcceleratorAreaIdHasBeenSet() const;

                    /**
                     * 获取<p>IP。</p>
                     * @return IpAddress <p>IP。</p>
                     * 
                     */
                    std::vector<std::string> GetIpAddress() const;

                    /**
                     * 设置<p>IP。</p>
                     * @param _ipAddress <p>IP。</p>
                     * 
                     */
                    void SetIpAddress(const std::vector<std::string>& _ipAddress);

                    /**
                     * 判断参数 IpAddress 是否已赋值
                     * @return IpAddress 是否已赋值
                     * 
                     */
                    bool IpAddressHasBeenSet() const;

                    /**
                     * 获取<p>IP信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpAddressInfoSet <p>IP信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<IpAddressInfoSet> GetIpAddressInfoSet() const;

                    /**
                     * 设置<p>IP信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipAddressInfoSet <p>IP信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpAddressInfoSet(const std::vector<IpAddressInfoSet>& _ipAddressInfoSet);

                    /**
                     * 判断参数 IpAddressInfoSet 是否已赋值
                     * @return IpAddressInfoSet 是否已赋值
                     * 
                     */
                    bool IpAddressInfoSetHasBeenSet() const;

                private:

                    /**
                     * <p>加速地域。</p>
                     */
                    std::string m_accelerateRegion;
                    bool m_accelerateRegionHasBeenSet;

                    /**
                     * <p>带宽。</p>
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * <p>支持&#39;BGP&#39;, &#39;QUALITY_BGP&#39;, &#39;STATIC_IP&#39;，默认BGP。</p><p>枚举值：</p><ul><li>BGP： BGP</li><li>STATIC_IP： 三网</li><li>QUALITY_BGP： 精品BGP</li></ul>
                     */
                    std::string m_ispType;
                    bool m_ispTypeHasBeenSet;

                    /**
                     * <p>仅支持IPv4，默认是IPv4。</p>
                     */
                    std::string m_ipVersion;
                    bool m_ipVersionHasBeenSet;

                    /**
                     * <p>加速地域ID。</p>
                     */
                    std::string m_acceleratorAreaId;
                    bool m_acceleratorAreaIdHasBeenSet;

                    /**
                     * <p>IP。</p>
                     */
                    std::vector<std::string> m_ipAddress;
                    bool m_ipAddressHasBeenSet;

                    /**
                     * <p>IP信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IpAddressInfoSet> m_ipAddressInfoSet;
                    bool m_ipAddressInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_ACCELERATORAREAS_H_
