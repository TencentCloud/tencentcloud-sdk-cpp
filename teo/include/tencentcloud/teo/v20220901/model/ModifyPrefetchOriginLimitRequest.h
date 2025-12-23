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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYPREFETCHORIGINLIMITREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYPREFETCHORIGINLIMITREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyPrefetchOriginLimit请求参数结构体
                */
                class ModifyPrefetchOriginLimitRequest : public AbstractModel
                {
                public:
                    ModifyPrefetchOriginLimitRequest();
                    ~ModifyPrefetchOriginLimitRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID。
                     * @return ZoneId 站点 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID。
                     * @param _zoneId 站点 ID。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取加速域名。
                     * @return DomainName 加速域名。
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置加速域名。
                     * @param _domainName 加速域名。
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取回源限速限制的加速区域。
预热时，该加速区域将会受到配置的Bandwidth值限制。取值有：
<li>Overseas：全球可用区（不含中国大陆）；</li>
<li>MainlandChina：中国大陆可用区。</li>
                     * @return Area 回源限速限制的加速区域。
预热时，该加速区域将会受到配置的Bandwidth值限制。取值有：
<li>Overseas：全球可用区（不含中国大陆）；</li>
<li>MainlandChina：中国大陆可用区。</li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置回源限速限制的加速区域。
预热时，该加速区域将会受到配置的Bandwidth值限制。取值有：
<li>Overseas：全球可用区（不含中国大陆）；</li>
<li>MainlandChina：中国大陆可用区。</li>
                     * @param _area 回源限速限制的加速区域。
预热时，该加速区域将会受到配置的Bandwidth值限制。取值有：
<li>Overseas：全球可用区（不含中国大陆）；</li>
<li>MainlandChina：中国大陆可用区。</li>
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取回源限速带宽。
预热时回到源站的带宽上限值，取值范围 100 - 100,000，单位 Mbps。
                     * @return Bandwidth 回源限速带宽。
预热时回到源站的带宽上限值，取值范围 100 - 100,000，单位 Mbps。
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置回源限速带宽。
预热时回到源站的带宽上限值，取值范围 100 - 100,000，单位 Mbps。
                     * @param _bandwidth 回源限速带宽。
预热时回到源站的带宽上限值，取值范围 100 - 100,000，单位 Mbps。
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取回源限速限制控制开关。
用于启用/删除本条回源限速限制，取值有：
<li>on：启用限制；</li>
<li>off：删除限制。</li>
                     * @return Enabled 回源限速限制控制开关。
用于启用/删除本条回源限速限制，取值有：
<li>on：启用限制；</li>
<li>off：删除限制。</li>
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置回源限速限制控制开关。
用于启用/删除本条回源限速限制，取值有：
<li>on：启用限制；</li>
<li>off：删除限制。</li>
                     * @param _enabled 回源限速限制控制开关。
用于启用/删除本条回源限速限制，取值有：
<li>on：启用限制；</li>
<li>off：删除限制。</li>
                     * 
                     */
                    void SetEnabled(const std::string& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 加速域名。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 回源限速限制的加速区域。
预热时，该加速区域将会受到配置的Bandwidth值限制。取值有：
<li>Overseas：全球可用区（不含中国大陆）；</li>
<li>MainlandChina：中国大陆可用区。</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 回源限速带宽。
预热时回到源站的带宽上限值，取值范围 100 - 100,000，单位 Mbps。
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 回源限速限制控制开关。
用于启用/删除本条回源限速限制，取值有：
<li>on：启用限制；</li>
<li>off：删除限制。</li>
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYPREFETCHORIGINLIMITREQUEST_H_
