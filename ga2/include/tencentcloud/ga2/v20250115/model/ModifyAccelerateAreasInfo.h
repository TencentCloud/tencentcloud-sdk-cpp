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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYACCELERATEAREASINFO_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYACCELERATEAREASINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * 修改加速地域信息
                */
                class ModifyAccelerateAreasInfo : public AbstractModel
                {
                public:
                    ModifyAccelerateAreasInfo();
                    ~ModifyAccelerateAreasInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>加速地域</p>
                     * @return AccelerateRegion <p>加速地域</p>
                     * 
                     */
                    std::string GetAccelerateRegion() const;

                    /**
                     * 设置<p>加速地域</p>
                     * @param _accelerateRegion <p>加速地域</p>
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
                     * 获取<p>带宽</p><p>单位：Mbps</p>
                     * @return Bandwidth <p>带宽</p><p>单位：Mbps</p>
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置<p>带宽</p><p>单位：Mbps</p>
                     * @param _bandwidth <p>带宽</p><p>单位：Mbps</p>
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
                     * 获取<p>公网质量类型</p><p>枚举值：</p><ul><li>BGP： BGP</li><li>QUALITY_BGP： 精品BGP</li><li>STATIC_IP： 三网</li></ul>
                     * @return IspType <p>公网质量类型</p><p>枚举值：</p><ul><li>BGP： BGP</li><li>QUALITY_BGP： 精品BGP</li><li>STATIC_IP： 三网</li></ul>
                     * 
                     */
                    std::string GetIspType() const;

                    /**
                     * 设置<p>公网质量类型</p><p>枚举值：</p><ul><li>BGP： BGP</li><li>QUALITY_BGP： 精品BGP</li><li>STATIC_IP： 三网</li></ul>
                     * @param _ispType <p>公网质量类型</p><p>枚举值：</p><ul><li>BGP： BGP</li><li>QUALITY_BGP： 精品BGP</li><li>STATIC_IP： 三网</li></ul>
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
                     * 获取<p>IP 地址协议</p><p>枚举值：</p><ul><li>IPv4： IPv4</li></ul>
                     * @return IpVersion <p>IP 地址协议</p><p>枚举值：</p><ul><li>IPv4： IPv4</li></ul>
                     * 
                     */
                    std::string GetIpVersion() const;

                    /**
                     * 设置<p>IP 地址协议</p><p>枚举值：</p><ul><li>IPv4： IPv4</li></ul>
                     * @param _ipVersion <p>IP 地址协议</p><p>枚举值：</p><ul><li>IPv4： IPv4</li></ul>
                     * 
                     */
                    void SetIpVersion(const std::string& _ipVersion);

                    /**
                     * 判断参数 IpVersion 是否已赋值
                     * @return IpVersion 是否已赋值
                     * 
                     */
                    bool IpVersionHasBeenSet() const;

                private:

                    /**
                     * <p>加速地域</p>
                     */
                    std::string m_accelerateRegion;
                    bool m_accelerateRegionHasBeenSet;

                    /**
                     * <p>带宽</p><p>单位：Mbps</p>
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * <p>公网质量类型</p><p>枚举值：</p><ul><li>BGP： BGP</li><li>QUALITY_BGP： 精品BGP</li><li>STATIC_IP： 三网</li></ul>
                     */
                    std::string m_ispType;
                    bool m_ispTypeHasBeenSet;

                    /**
                     * <p>IP 地址协议</p><p>枚举值：</p><ul><li>IPv4： IPv4</li></ul>
                     */
                    std::string m_ipVersion;
                    bool m_ipVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYACCELERATEAREASINFO_H_
