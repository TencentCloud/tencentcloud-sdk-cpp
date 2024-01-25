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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEL4PROXYREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEL4PROXYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/DDosProtectionConfig.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreateL4Proxy请求参数结构体
                */
                class CreateL4ProxyRequest : public AbstractModel
                {
                public:
                    CreateL4ProxyRequest();
                    ~CreateL4ProxyRequest() = default;
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
                     * 获取四层代理实例名称，可输入 1-50 个字符，允许的字符为 a-z、0-9、-，且 - 不能单独注册或连续使用，不能放在开头或结尾。创建完成后不支持修改。

                     * @return ProxyName 四层代理实例名称，可输入 1-50 个字符，允许的字符为 a-z、0-9、-，且 - 不能单独注册或连续使用，不能放在开头或结尾。创建完成后不支持修改。

                     * 
                     */
                    std::string GetProxyName() const;

                    /**
                     * 设置四层代理实例名称，可输入 1-50 个字符，允许的字符为 a-z、0-9、-，且 - 不能单独注册或连续使用，不能放在开头或结尾。创建完成后不支持修改。

                     * @param _proxyName 四层代理实例名称，可输入 1-50 个字符，允许的字符为 a-z、0-9、-，且 - 不能单独注册或连续使用，不能放在开头或结尾。创建完成后不支持修改。

                     * 
                     */
                    void SetProxyName(const std::string& _proxyName);

                    /**
                     * 判断参数 ProxyName 是否已赋值
                     * @return ProxyName 是否已赋值
                     * 
                     */
                    bool ProxyNameHasBeenSet() const;

                    /**
                     * 获取四层代理实例加速区域。
<li>mainland：中国大陆可用区；</li>
<li>overseas：全球可用区（不含中国大陆）；</li>
<li>global：全球可用区。</li>
                     * @return Area 四层代理实例加速区域。
<li>mainland：中国大陆可用区；</li>
<li>overseas：全球可用区（不含中国大陆）；</li>
<li>global：全球可用区。</li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置四层代理实例加速区域。
<li>mainland：中国大陆可用区；</li>
<li>overseas：全球可用区（不含中国大陆）；</li>
<li>global：全球可用区。</li>
                     * @param _area 四层代理实例加速区域。
<li>mainland：中国大陆可用区；</li>
<li>overseas：全球可用区（不含中国大陆）；</li>
<li>global：全球可用区。</li>
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
                     * 获取是否开启 IPv6 访问，不填写时默认为 off。该配置仅在部分加速区域和安全防护配置下支持开启，详情请参考 [新建四层代理实例](https://cloud.tencent.com/document/product/1552/90025) 。取值为：
<li>on：开启；</li>
<li>off：关闭。</li>


                     * @return Ipv6 是否开启 IPv6 访问，不填写时默认为 off。该配置仅在部分加速区域和安全防护配置下支持开启，详情请参考 [新建四层代理实例](https://cloud.tencent.com/document/product/1552/90025) 。取值为：
<li>on：开启；</li>
<li>off：关闭。</li>


                     * 
                     */
                    std::string GetIpv6() const;

                    /**
                     * 设置是否开启 IPv6 访问，不填写时默认为 off。该配置仅在部分加速区域和安全防护配置下支持开启，详情请参考 [新建四层代理实例](https://cloud.tencent.com/document/product/1552/90025) 。取值为：
<li>on：开启；</li>
<li>off：关闭。</li>


                     * @param _ipv6 是否开启 IPv6 访问，不填写时默认为 off。该配置仅在部分加速区域和安全防护配置下支持开启，详情请参考 [新建四层代理实例](https://cloud.tencent.com/document/product/1552/90025) 。取值为：
<li>on：开启；</li>
<li>off：关闭。</li>


                     * 
                     */
                    void SetIpv6(const std::string& _ipv6);

                    /**
                     * 判断参数 Ipv6 是否已赋值
                     * @return Ipv6 是否已赋值
                     * 
                     */
                    bool Ipv6HasBeenSet() const;

                    /**
                     * 获取是否开启固定 IP，不填写时默认为 off。该配置仅在部分加速区域和安全防护配置下支持开启，详情请参考 [新建四层代理实例](https://cloud.tencent.com/document/product/1552/90025) 。取值为：
<li>on：开启；</li>
<li>off：关闭。</li>

                     * @return StaticIp 是否开启固定 IP，不填写时默认为 off。该配置仅在部分加速区域和安全防护配置下支持开启，详情请参考 [新建四层代理实例](https://cloud.tencent.com/document/product/1552/90025) 。取值为：
<li>on：开启；</li>
<li>off：关闭。</li>

                     * 
                     */
                    std::string GetStaticIp() const;

                    /**
                     * 设置是否开启固定 IP，不填写时默认为 off。该配置仅在部分加速区域和安全防护配置下支持开启，详情请参考 [新建四层代理实例](https://cloud.tencent.com/document/product/1552/90025) 。取值为：
<li>on：开启；</li>
<li>off：关闭。</li>

                     * @param _staticIp 是否开启固定 IP，不填写时默认为 off。该配置仅在部分加速区域和安全防护配置下支持开启，详情请参考 [新建四层代理实例](https://cloud.tencent.com/document/product/1552/90025) 。取值为：
<li>on：开启；</li>
<li>off：关闭。</li>

                     * 
                     */
                    void SetStaticIp(const std::string& _staticIp);

                    /**
                     * 判断参数 StaticIp 是否已赋值
                     * @return StaticIp 是否已赋值
                     * 
                     */
                    bool StaticIpHasBeenSet() const;

                    /**
                     * 获取是否开启中国大陆网络优化，不填写时默认为 off。该配置仅在部分加速区域和安全防护配置下支持开启，详情请参考 [新建四层代理实例](https://cloud.tencent.com/document/product/1552/90025) 。取值为：
<li>on：开启；</li>
<li>off：关闭。</li>

                     * @return AccelerateMainland 是否开启中国大陆网络优化，不填写时默认为 off。该配置仅在部分加速区域和安全防护配置下支持开启，详情请参考 [新建四层代理实例](https://cloud.tencent.com/document/product/1552/90025) 。取值为：
<li>on：开启；</li>
<li>off：关闭。</li>

                     * 
                     */
                    std::string GetAccelerateMainland() const;

                    /**
                     * 设置是否开启中国大陆网络优化，不填写时默认为 off。该配置仅在部分加速区域和安全防护配置下支持开启，详情请参考 [新建四层代理实例](https://cloud.tencent.com/document/product/1552/90025) 。取值为：
<li>on：开启；</li>
<li>off：关闭。</li>

                     * @param _accelerateMainland 是否开启中国大陆网络优化，不填写时默认为 off。该配置仅在部分加速区域和安全防护配置下支持开启，详情请参考 [新建四层代理实例](https://cloud.tencent.com/document/product/1552/90025) 。取值为：
<li>on：开启；</li>
<li>off：关闭。</li>

                     * 
                     */
                    void SetAccelerateMainland(const std::string& _accelerateMainland);

                    /**
                     * 判断参数 AccelerateMainland 是否已赋值
                     * @return AccelerateMainland 是否已赋值
                     * 
                     */
                    bool AccelerateMainlandHasBeenSet() const;

                    /**
                     * 获取L3/L4 DDoS 防护配置，不填写时默认使用平台默认防护选项。详情参考 [独立 DDoS 防护](https://cloud.tencent.com/document/product/1552/95994)。
                     * @return DDosProtectionConfig L3/L4 DDoS 防护配置，不填写时默认使用平台默认防护选项。详情参考 [独立 DDoS 防护](https://cloud.tencent.com/document/product/1552/95994)。
                     * 
                     */
                    DDosProtectionConfig GetDDosProtectionConfig() const;

                    /**
                     * 设置L3/L4 DDoS 防护配置，不填写时默认使用平台默认防护选项。详情参考 [独立 DDoS 防护](https://cloud.tencent.com/document/product/1552/95994)。
                     * @param _dDosProtectionConfig L3/L4 DDoS 防护配置，不填写时默认使用平台默认防护选项。详情参考 [独立 DDoS 防护](https://cloud.tencent.com/document/product/1552/95994)。
                     * 
                     */
                    void SetDDosProtectionConfig(const DDosProtectionConfig& _dDosProtectionConfig);

                    /**
                     * 判断参数 DDosProtectionConfig 是否已赋值
                     * @return DDosProtectionConfig 是否已赋值
                     * 
                     */
                    bool DDosProtectionConfigHasBeenSet() const;

                private:

                    /**
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 四层代理实例名称，可输入 1-50 个字符，允许的字符为 a-z、0-9、-，且 - 不能单独注册或连续使用，不能放在开头或结尾。创建完成后不支持修改。

                     */
                    std::string m_proxyName;
                    bool m_proxyNameHasBeenSet;

                    /**
                     * 四层代理实例加速区域。
<li>mainland：中国大陆可用区；</li>
<li>overseas：全球可用区（不含中国大陆）；</li>
<li>global：全球可用区。</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 是否开启 IPv6 访问，不填写时默认为 off。该配置仅在部分加速区域和安全防护配置下支持开启，详情请参考 [新建四层代理实例](https://cloud.tencent.com/document/product/1552/90025) 。取值为：
<li>on：开启；</li>
<li>off：关闭。</li>


                     */
                    std::string m_ipv6;
                    bool m_ipv6HasBeenSet;

                    /**
                     * 是否开启固定 IP，不填写时默认为 off。该配置仅在部分加速区域和安全防护配置下支持开启，详情请参考 [新建四层代理实例](https://cloud.tencent.com/document/product/1552/90025) 。取值为：
<li>on：开启；</li>
<li>off：关闭。</li>

                     */
                    std::string m_staticIp;
                    bool m_staticIpHasBeenSet;

                    /**
                     * 是否开启中国大陆网络优化，不填写时默认为 off。该配置仅在部分加速区域和安全防护配置下支持开启，详情请参考 [新建四层代理实例](https://cloud.tencent.com/document/product/1552/90025) 。取值为：
<li>on：开启；</li>
<li>off：关闭。</li>

                     */
                    std::string m_accelerateMainland;
                    bool m_accelerateMainlandHasBeenSet;

                    /**
                     * L3/L4 DDoS 防护配置，不填写时默认使用平台默认防护选项。详情参考 [独立 DDoS 防护](https://cloud.tencent.com/document/product/1552/95994)。
                     */
                    DDosProtectionConfig m_dDosProtectionConfig;
                    bool m_dDosProtectionConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEL4PROXYREQUEST_H_
