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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYORIGINACLREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYORIGINACLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/OriginACLEntity.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyOriginACL请求参数结构体
                */
                class ModifyOriginACLRequest : public AbstractModel
                {
                public:
                    ModifyOriginACLRequest();
                    ~ModifyOriginACLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>站点 ID。</p>
                     * @return ZoneId <p>站点 ID。</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>站点 ID。</p>
                     * @param _zoneId <p>站点 ID。</p>
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
                     * 获取<p>七层加速域名源站防护模式，默认值: specific。<li>all：<strong>自动纳入防护模式</strong>，站点内所有七层加速域名将自动加入到源站防护列表中，包含后续新增的七层加速域名；</li><li>specific：<strong>指定加入防护模式</strong>，需要人工指定期望加入到源站防护的七层加速域名（通过 L7Hosts 参数指定），未指定的资源不会加入到源站防护列表中，后续的防护资源调整可通过 ModifyOriginACL 接口进行。</li>注意：取值为 all 时，L7Hosts 请保留为空；当站点下七层加速域名数量超过 200 时，请先通过 specific 模式启用，剩余资源通过 ModifyOriginACL 接口启用后，再通过 ModifyOriginACL 接口切换为 all。</p>
                     * @return L7EnableMode <p>七层加速域名源站防护模式，默认值: specific。<li>all：<strong>自动纳入防护模式</strong>，站点内所有七层加速域名将自动加入到源站防护列表中，包含后续新增的七层加速域名；</li><li>specific：<strong>指定加入防护模式</strong>，需要人工指定期望加入到源站防护的七层加速域名（通过 L7Hosts 参数指定），未指定的资源不会加入到源站防护列表中，后续的防护资源调整可通过 ModifyOriginACL 接口进行。</li>注意：取值为 all 时，L7Hosts 请保留为空；当站点下七层加速域名数量超过 200 时，请先通过 specific 模式启用，剩余资源通过 ModifyOriginACL 接口启用后，再通过 ModifyOriginACL 接口切换为 all。</p>
                     * 
                     */
                    std::string GetL7EnableMode() const;

                    /**
                     * 设置<p>七层加速域名源站防护模式，默认值: specific。<li>all：<strong>自动纳入防护模式</strong>，站点内所有七层加速域名将自动加入到源站防护列表中，包含后续新增的七层加速域名；</li><li>specific：<strong>指定加入防护模式</strong>，需要人工指定期望加入到源站防护的七层加速域名（通过 L7Hosts 参数指定），未指定的资源不会加入到源站防护列表中，后续的防护资源调整可通过 ModifyOriginACL 接口进行。</li>注意：取值为 all 时，L7Hosts 请保留为空；当站点下七层加速域名数量超过 200 时，请先通过 specific 模式启用，剩余资源通过 ModifyOriginACL 接口启用后，再通过 ModifyOriginACL 接口切换为 all。</p>
                     * @param _l7EnableMode <p>七层加速域名源站防护模式，默认值: specific。<li>all：<strong>自动纳入防护模式</strong>，站点内所有七层加速域名将自动加入到源站防护列表中，包含后续新增的七层加速域名；</li><li>specific：<strong>指定加入防护模式</strong>，需要人工指定期望加入到源站防护的七层加速域名（通过 L7Hosts 参数指定），未指定的资源不会加入到源站防护列表中，后续的防护资源调整可通过 ModifyOriginACL 接口进行。</li>注意：取值为 all 时，L7Hosts 请保留为空；当站点下七层加速域名数量超过 200 时，请先通过 specific 模式启用，剩余资源通过 ModifyOriginACL 接口启用后，再通过 ModifyOriginACL 接口切换为 all。</p>
                     * 
                     */
                    void SetL7EnableMode(const std::string& _l7EnableMode);

                    /**
                     * 判断参数 L7EnableMode 是否已赋值
                     * @return L7EnableMode 是否已赋值
                     * 
                     */
                    bool L7EnableModeHasBeenSet() const;

                    /**
                     * 获取<p>四层代理实例源站防护模式，默认值: specific。<li>all：<strong>自动纳入防护模式</strong>，站点内所有四层代理实例将自动加入到源站防护列表中，包含后续新增的四层代理实例资源；</li><li>specific：<strong>指定加入防护模式</strong>，需要人工指定期望加入到源站防护的四层代理实例（通过 L4ProxyIds 参数指定），未指定的资源不会加入到源站防护列表中，后续的防护资源调整可通过 ModifyOriginACL 接口进行。</li>注意：取值为 all 时，L4ProxyIds 请保留为空；当站点下四层代理实例数量超过 100 时，请先通过 specific 模式启用，剩余资源通过 ModifyOriginACL 接口启用后，再通过 ModifyOriginACL 接口切换为 all。</p>
                     * @return L4EnableMode <p>四层代理实例源站防护模式，默认值: specific。<li>all：<strong>自动纳入防护模式</strong>，站点内所有四层代理实例将自动加入到源站防护列表中，包含后续新增的四层代理实例资源；</li><li>specific：<strong>指定加入防护模式</strong>，需要人工指定期望加入到源站防护的四层代理实例（通过 L4ProxyIds 参数指定），未指定的资源不会加入到源站防护列表中，后续的防护资源调整可通过 ModifyOriginACL 接口进行。</li>注意：取值为 all 时，L4ProxyIds 请保留为空；当站点下四层代理实例数量超过 100 时，请先通过 specific 模式启用，剩余资源通过 ModifyOriginACL 接口启用后，再通过 ModifyOriginACL 接口切换为 all。</p>
                     * 
                     */
                    std::string GetL4EnableMode() const;

                    /**
                     * 设置<p>四层代理实例源站防护模式，默认值: specific。<li>all：<strong>自动纳入防护模式</strong>，站点内所有四层代理实例将自动加入到源站防护列表中，包含后续新增的四层代理实例资源；</li><li>specific：<strong>指定加入防护模式</strong>，需要人工指定期望加入到源站防护的四层代理实例（通过 L4ProxyIds 参数指定），未指定的资源不会加入到源站防护列表中，后续的防护资源调整可通过 ModifyOriginACL 接口进行。</li>注意：取值为 all 时，L4ProxyIds 请保留为空；当站点下四层代理实例数量超过 100 时，请先通过 specific 模式启用，剩余资源通过 ModifyOriginACL 接口启用后，再通过 ModifyOriginACL 接口切换为 all。</p>
                     * @param _l4EnableMode <p>四层代理实例源站防护模式，默认值: specific。<li>all：<strong>自动纳入防护模式</strong>，站点内所有四层代理实例将自动加入到源站防护列表中，包含后续新增的四层代理实例资源；</li><li>specific：<strong>指定加入防护模式</strong>，需要人工指定期望加入到源站防护的四层代理实例（通过 L4ProxyIds 参数指定），未指定的资源不会加入到源站防护列表中，后续的防护资源调整可通过 ModifyOriginACL 接口进行。</li>注意：取值为 all 时，L4ProxyIds 请保留为空；当站点下四层代理实例数量超过 100 时，请先通过 specific 模式启用，剩余资源通过 ModifyOriginACL 接口启用后，再通过 ModifyOriginACL 接口切换为 all。</p>
                     * 
                     */
                    void SetL4EnableMode(const std::string& _l4EnableMode);

                    /**
                     * 判断参数 L4EnableMode 是否已赋值
                     * @return L4EnableMode 是否已赋值
                     * 
                     */
                    bool L4EnableModeHasBeenSet() const;

                    /**
                     * 获取<p>需要启用/关闭特定回源 IP 网段回源的实例。<br>注意：本参数仅适用于 <strong>指定加入防护模式</strong> 下的资源调整；当对应层级的源站防护模式为 all 时，该类型的资源列表由系统自动维护，本参数中请勿包含该类型的资源，如需手动调整，请先通过 L7EnableMode/L4EnableMode 将对应层级切换为 specific。</p>
                     * @return OriginACLEntities <p>需要启用/关闭特定回源 IP 网段回源的实例。<br>注意：本参数仅适用于 <strong>指定加入防护模式</strong> 下的资源调整；当对应层级的源站防护模式为 all 时，该类型的资源列表由系统自动维护，本参数中请勿包含该类型的资源，如需手动调整，请先通过 L7EnableMode/L4EnableMode 将对应层级切换为 specific。</p>
                     * 
                     */
                    std::vector<OriginACLEntity> GetOriginACLEntities() const;

                    /**
                     * 设置<p>需要启用/关闭特定回源 IP 网段回源的实例。<br>注意：本参数仅适用于 <strong>指定加入防护模式</strong> 下的资源调整；当对应层级的源站防护模式为 all 时，该类型的资源列表由系统自动维护，本参数中请勿包含该类型的资源，如需手动调整，请先通过 L7EnableMode/L4EnableMode 将对应层级切换为 specific。</p>
                     * @param _originACLEntities <p>需要启用/关闭特定回源 IP 网段回源的实例。<br>注意：本参数仅适用于 <strong>指定加入防护模式</strong> 下的资源调整；当对应层级的源站防护模式为 all 时，该类型的资源列表由系统自动维护，本参数中请勿包含该类型的资源，如需手动调整，请先通过 L7EnableMode/L4EnableMode 将对应层级切换为 specific。</p>
                     * 
                     */
                    void SetOriginACLEntities(const std::vector<OriginACLEntity>& _originACLEntities);

                    /**
                     * 判断参数 OriginACLEntities 是否已赋值
                     * @return OriginACLEntities 是否已赋值
                     * 
                     */
                    bool OriginACLEntitiesHasBeenSet() const;

                    /**
                     * 获取<p>源站防护回源ACL控制域，不填则默认不变；控制域信息可以通过DescribeAvailableOriginACLFamily接口查询获得。<br>具体取值说明如下：</p><li>gaz：标准全球可用区控制域；</li><li>mlc：标准中国大陆可用区控制域；</li><li>emc：标准全球(不含中国大陆)可用区控制域；</li><li>plat-gaz：精简全球可用区控制域；</li><li>plat-mlc：精简中国大陆可用区控制域；</li><li>plat-emc：精简全球(不含中国大陆)可用区控制域；</li>
                     * @return OriginACLFamily <p>源站防护回源ACL控制域，不填则默认不变；控制域信息可以通过DescribeAvailableOriginACLFamily接口查询获得。<br>具体取值说明如下：</p><li>gaz：标准全球可用区控制域；</li><li>mlc：标准中国大陆可用区控制域；</li><li>emc：标准全球(不含中国大陆)可用区控制域；</li><li>plat-gaz：精简全球可用区控制域；</li><li>plat-mlc：精简中国大陆可用区控制域；</li><li>plat-emc：精简全球(不含中国大陆)可用区控制域；</li>
                     * 
                     */
                    std::string GetOriginACLFamily() const;

                    /**
                     * 设置<p>源站防护回源ACL控制域，不填则默认不变；控制域信息可以通过DescribeAvailableOriginACLFamily接口查询获得。<br>具体取值说明如下：</p><li>gaz：标准全球可用区控制域；</li><li>mlc：标准中国大陆可用区控制域；</li><li>emc：标准全球(不含中国大陆)可用区控制域；</li><li>plat-gaz：精简全球可用区控制域；</li><li>plat-mlc：精简中国大陆可用区控制域；</li><li>plat-emc：精简全球(不含中国大陆)可用区控制域；</li>
                     * @param _originACLFamily <p>源站防护回源ACL控制域，不填则默认不变；控制域信息可以通过DescribeAvailableOriginACLFamily接口查询获得。<br>具体取值说明如下：</p><li>gaz：标准全球可用区控制域；</li><li>mlc：标准中国大陆可用区控制域；</li><li>emc：标准全球(不含中国大陆)可用区控制域；</li><li>plat-gaz：精简全球可用区控制域；</li><li>plat-mlc：精简中国大陆可用区控制域；</li><li>plat-emc：精简全球(不含中国大陆)可用区控制域；</li>
                     * 
                     */
                    void SetOriginACLFamily(const std::string& _originACLFamily);

                    /**
                     * 判断参数 OriginACLFamily 是否已赋值
                     * @return OriginACLFamily 是否已赋值
                     * 
                     */
                    bool OriginACLFamilyHasBeenSet() const;

                private:

                    /**
                     * <p>站点 ID。</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>七层加速域名源站防护模式，默认值: specific。<li>all：<strong>自动纳入防护模式</strong>，站点内所有七层加速域名将自动加入到源站防护列表中，包含后续新增的七层加速域名；</li><li>specific：<strong>指定加入防护模式</strong>，需要人工指定期望加入到源站防护的七层加速域名（通过 L7Hosts 参数指定），未指定的资源不会加入到源站防护列表中，后续的防护资源调整可通过 ModifyOriginACL 接口进行。</li>注意：取值为 all 时，L7Hosts 请保留为空；当站点下七层加速域名数量超过 200 时，请先通过 specific 模式启用，剩余资源通过 ModifyOriginACL 接口启用后，再通过 ModifyOriginACL 接口切换为 all。</p>
                     */
                    std::string m_l7EnableMode;
                    bool m_l7EnableModeHasBeenSet;

                    /**
                     * <p>四层代理实例源站防护模式，默认值: specific。<li>all：<strong>自动纳入防护模式</strong>，站点内所有四层代理实例将自动加入到源站防护列表中，包含后续新增的四层代理实例资源；</li><li>specific：<strong>指定加入防护模式</strong>，需要人工指定期望加入到源站防护的四层代理实例（通过 L4ProxyIds 参数指定），未指定的资源不会加入到源站防护列表中，后续的防护资源调整可通过 ModifyOriginACL 接口进行。</li>注意：取值为 all 时，L4ProxyIds 请保留为空；当站点下四层代理实例数量超过 100 时，请先通过 specific 模式启用，剩余资源通过 ModifyOriginACL 接口启用后，再通过 ModifyOriginACL 接口切换为 all。</p>
                     */
                    std::string m_l4EnableMode;
                    bool m_l4EnableModeHasBeenSet;

                    /**
                     * <p>需要启用/关闭特定回源 IP 网段回源的实例。<br>注意：本参数仅适用于 <strong>指定加入防护模式</strong> 下的资源调整；当对应层级的源站防护模式为 all 时，该类型的资源列表由系统自动维护，本参数中请勿包含该类型的资源，如需手动调整，请先通过 L7EnableMode/L4EnableMode 将对应层级切换为 specific。</p>
                     */
                    std::vector<OriginACLEntity> m_originACLEntities;
                    bool m_originACLEntitiesHasBeenSet;

                    /**
                     * <p>源站防护回源ACL控制域，不填则默认不变；控制域信息可以通过DescribeAvailableOriginACLFamily接口查询获得。<br>具体取值说明如下：</p><li>gaz：标准全球可用区控制域；</li><li>mlc：标准中国大陆可用区控制域；</li><li>emc：标准全球(不含中国大陆)可用区控制域；</li><li>plat-gaz：精简全球可用区控制域；</li><li>plat-mlc：精简中国大陆可用区控制域；</li><li>plat-emc：精简全球(不含中国大陆)可用区控制域；</li>
                     */
                    std::string m_originACLFamily;
                    bool m_originACLFamilyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYORIGINACLREQUEST_H_
