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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINACLINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINACLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CurrentOriginACL.h>
#include <tencentcloud/teo/v20220901/model/NextOriginACL.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 七层加速域名/四层代理实例与回源 IP 网段的绑定关系，同时包含回源 IP 网段详情和选择可切换的回源 IP 网段列表。
                */
                class OriginACLInfo : public AbstractModel
                {
                public:
                    OriginACLInfo();
                    ~OriginACLInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>七层加速域名源站防护模式，取值有：<li>all：自动纳入防护模式，站点内所有七层加速域名已纳入源站防护列表，包含后续新增的七层加速域名；</li><li>specific：指定加入防护模式，仅防护已绑定的七层加速域名。</li></p>
                     * @return L7EnableMode <p>七层加速域名源站防护模式，取值有：<li>all：自动纳入防护模式，站点内所有七层加速域名已纳入源站防护列表，包含后续新增的七层加速域名；</li><li>specific：指定加入防护模式，仅防护已绑定的七层加速域名。</li></p>
                     * 
                     */
                    std::string GetL7EnableMode() const;

                    /**
                     * 设置<p>七层加速域名源站防护模式，取值有：<li>all：自动纳入防护模式，站点内所有七层加速域名已纳入源站防护列表，包含后续新增的七层加速域名；</li><li>specific：指定加入防护模式，仅防护已绑定的七层加速域名。</li></p>
                     * @param _l7EnableMode <p>七层加速域名源站防护模式，取值有：<li>all：自动纳入防护模式，站点内所有七层加速域名已纳入源站防护列表，包含后续新增的七层加速域名；</li><li>specific：指定加入防护模式，仅防护已绑定的七层加速域名。</li></p>
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
                     * 获取<p>启用了特定回源 IP 网段回源的七层加速域名列表。源站防护未开启时为空。</p>
                     * @return L7Hosts <p>启用了特定回源 IP 网段回源的七层加速域名列表。源站防护未开启时为空。</p>
                     * 
                     */
                    std::vector<std::string> GetL7Hosts() const;

                    /**
                     * 设置<p>启用了特定回源 IP 网段回源的七层加速域名列表。源站防护未开启时为空。</p>
                     * @param _l7Hosts <p>启用了特定回源 IP 网段回源的七层加速域名列表。源站防护未开启时为空。</p>
                     * 
                     */
                    void SetL7Hosts(const std::vector<std::string>& _l7Hosts);

                    /**
                     * 判断参数 L7Hosts 是否已赋值
                     * @return L7Hosts 是否已赋值
                     * 
                     */
                    bool L7HostsHasBeenSet() const;

                    /**
                     * 获取<p>四层代理实例源站防护模式，取值有：<li>all：自动纳入防护模式，站点内所有四层代理实例已纳入源站防护列表，包含后续新增的四层代理实例；</li><li>specific：指定加入防护模式，仅防护已绑定的四层代理实例。</li></p>
                     * @return L4EnableMode <p>四层代理实例源站防护模式，取值有：<li>all：自动纳入防护模式，站点内所有四层代理实例已纳入源站防护列表，包含后续新增的四层代理实例；</li><li>specific：指定加入防护模式，仅防护已绑定的四层代理实例。</li></p>
                     * 
                     */
                    std::string GetL4EnableMode() const;

                    /**
                     * 设置<p>四层代理实例源站防护模式，取值有：<li>all：自动纳入防护模式，站点内所有四层代理实例已纳入源站防护列表，包含后续新增的四层代理实例；</li><li>specific：指定加入防护模式，仅防护已绑定的四层代理实例。</li></p>
                     * @param _l4EnableMode <p>四层代理实例源站防护模式，取值有：<li>all：自动纳入防护模式，站点内所有四层代理实例已纳入源站防护列表，包含后续新增的四层代理实例；</li><li>specific：指定加入防护模式，仅防护已绑定的四层代理实例。</li></p>
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
                     * 获取<p>启用了特定回源 IP 网段回源的四层代理实例列表。源站防护未开启时为空。</p>
                     * @return L4ProxyIds <p>启用了特定回源 IP 网段回源的四层代理实例列表。源站防护未开启时为空。</p>
                     * 
                     */
                    std::vector<std::string> GetL4ProxyIds() const;

                    /**
                     * 设置<p>启用了特定回源 IP 网段回源的四层代理实例列表。源站防护未开启时为空。</p>
                     * @param _l4ProxyIds <p>启用了特定回源 IP 网段回源的四层代理实例列表。源站防护未开启时为空。</p>
                     * 
                     */
                    void SetL4ProxyIds(const std::vector<std::string>& _l4ProxyIds);

                    /**
                     * 判断参数 L4ProxyIds 是否已赋值
                     * @return L4ProxyIds 是否已赋值
                     * 
                     */
                    bool L4ProxyIdsHasBeenSet() const;

                    /**
                     * 获取<p>当前生效的回源 IP 网段。源站防护未开启时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurrentOriginACL <p>当前生效的回源 IP 网段。源站防护未开启时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CurrentOriginACL GetCurrentOriginACL() const;

                    /**
                     * 设置<p>当前生效的回源 IP 网段。源站防护未开启时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _currentOriginACL <p>当前生效的回源 IP 网段。源站防护未开启时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCurrentOriginACL(const CurrentOriginACL& _currentOriginACL);

                    /**
                     * 判断参数 CurrentOriginACL 是否已赋值
                     * @return CurrentOriginACL 是否已赋值
                     * 
                     */
                    bool CurrentOriginACLHasBeenSet() const;

                    /**
                     * 获取<p>当回源 IP 网段发生更新时，该字段会返回下一个版本将要生效的回源 IP 网段，包含与当前回源 IP 网段的对比。无更新或者源站防护未开启时该字段为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NextOriginACL <p>当回源 IP 网段发生更新时，该字段会返回下一个版本将要生效的回源 IP 网段，包含与当前回源 IP 网段的对比。无更新或者源站防护未开启时该字段为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    NextOriginACL GetNextOriginACL() const;

                    /**
                     * 设置<p>当回源 IP 网段发生更新时，该字段会返回下一个版本将要生效的回源 IP 网段，包含与当前回源 IP 网段的对比。无更新或者源站防护未开启时该字段为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nextOriginACL <p>当回源 IP 网段发生更新时，该字段会返回下一个版本将要生效的回源 IP 网段，包含与当前回源 IP 网段的对比。无更新或者源站防护未开启时该字段为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNextOriginACL(const NextOriginACL& _nextOriginACL);

                    /**
                     * 判断参数 NextOriginACL 是否已赋值
                     * @return NextOriginACL 是否已赋值
                     * 
                     */
                    bool NextOriginACLHasBeenSet() const;

                    /**
                     * 获取<p>源站防护状态，取值有：</p><li>online：已生效；</li><li>offline：已停用；</li><li>updating: 配置部署中。</li>
                     * @return Status <p>源站防护状态，取值有：</p><li>online：已生效；</li><li>offline：已停用；</li><li>updating: 配置部署中。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>源站防护状态，取值有：</p><li>online：已生效；</li><li>offline：已停用；</li><li>updating: 配置部署中。</li>
                     * @param _status <p>源站防护状态，取值有：</p><li>online：已生效；</li><li>offline：已停用；</li><li>updating: 配置部署中。</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>源站防护回源ACL控制域。</p>
                     * @return OriginACLFamily <p>源站防护回源ACL控制域。</p>
                     * 
                     */
                    std::string GetOriginACLFamily() const;

                    /**
                     * 设置<p>源站防护回源ACL控制域。</p>
                     * @param _originACLFamily <p>源站防护回源ACL控制域。</p>
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
                     * <p>七层加速域名源站防护模式，取值有：<li>all：自动纳入防护模式，站点内所有七层加速域名已纳入源站防护列表，包含后续新增的七层加速域名；</li><li>specific：指定加入防护模式，仅防护已绑定的七层加速域名。</li></p>
                     */
                    std::string m_l7EnableMode;
                    bool m_l7EnableModeHasBeenSet;

                    /**
                     * <p>启用了特定回源 IP 网段回源的七层加速域名列表。源站防护未开启时为空。</p>
                     */
                    std::vector<std::string> m_l7Hosts;
                    bool m_l7HostsHasBeenSet;

                    /**
                     * <p>四层代理实例源站防护模式，取值有：<li>all：自动纳入防护模式，站点内所有四层代理实例已纳入源站防护列表，包含后续新增的四层代理实例；</li><li>specific：指定加入防护模式，仅防护已绑定的四层代理实例。</li></p>
                     */
                    std::string m_l4EnableMode;
                    bool m_l4EnableModeHasBeenSet;

                    /**
                     * <p>启用了特定回源 IP 网段回源的四层代理实例列表。源站防护未开启时为空。</p>
                     */
                    std::vector<std::string> m_l4ProxyIds;
                    bool m_l4ProxyIdsHasBeenSet;

                    /**
                     * <p>当前生效的回源 IP 网段。源站防护未开启时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CurrentOriginACL m_currentOriginACL;
                    bool m_currentOriginACLHasBeenSet;

                    /**
                     * <p>当回源 IP 网段发生更新时，该字段会返回下一个版本将要生效的回源 IP 网段，包含与当前回源 IP 网段的对比。无更新或者源站防护未开启时该字段为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NextOriginACL m_nextOriginACL;
                    bool m_nextOriginACLHasBeenSet;

                    /**
                     * <p>源站防护状态，取值有：</p><li>online：已生效；</li><li>offline：已停用；</li><li>updating: 配置部署中。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>源站防护回源ACL控制域。</p>
                     */
                    std::string m_originACLFamily;
                    bool m_originACLFamilyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINACLINFO_H_
