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
                * 七层加速域名/四层代理实例与回源 IP 网段的绑定关系，以及回源 IP 网段详情。
                */
                class OriginACLInfo : public AbstractModel
                {
                public:
                    OriginACLInfo();
                    ~OriginACLInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取启用了特定回源 IP 网段回源的七层加速域名列表。源站防护未开启时为空。
                     * @return L7Hosts 启用了特定回源 IP 网段回源的七层加速域名列表。源站防护未开启时为空。
                     * 
                     */
                    std::vector<std::string> GetL7Hosts() const;

                    /**
                     * 设置启用了特定回源 IP 网段回源的七层加速域名列表。源站防护未开启时为空。
                     * @param _l7Hosts 启用了特定回源 IP 网段回源的七层加速域名列表。源站防护未开启时为空。
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
                     * 获取启用了特定回源 IP 网段回源的四层代理实例列表。源站防护未开启时为空。
                     * @return L4ProxyIds 启用了特定回源 IP 网段回源的四层代理实例列表。源站防护未开启时为空。
                     * 
                     */
                    std::vector<std::string> GetL4ProxyIds() const;

                    /**
                     * 设置启用了特定回源 IP 网段回源的四层代理实例列表。源站防护未开启时为空。
                     * @param _l4ProxyIds 启用了特定回源 IP 网段回源的四层代理实例列表。源站防护未开启时为空。
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
                     * 获取当前生效的回源 IP 网段。源站防护未开启时为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurrentOriginACL 当前生效的回源 IP 网段。源站防护未开启时为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CurrentOriginACL GetCurrentOriginACL() const;

                    /**
                     * 设置当前生效的回源 IP 网段。源站防护未开启时为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _currentOriginACL 当前生效的回源 IP 网段。源站防护未开启时为空。
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
                     * 获取当回源 IP 网段发生更新时，该字段会返回下一个版本将要生效的回源 IP 网段，包含与当前回源 IP 网段的对比。无更新或者源站防护未开启时该字段为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NextOriginACL 当回源 IP 网段发生更新时，该字段会返回下一个版本将要生效的回源 IP 网段，包含与当前回源 IP 网段的对比。无更新或者源站防护未开启时该字段为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    NextOriginACL GetNextOriginACL() const;

                    /**
                     * 设置当回源 IP 网段发生更新时，该字段会返回下一个版本将要生效的回源 IP 网段，包含与当前回源 IP 网段的对比。无更新或者源站防护未开启时该字段为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nextOriginACL 当回源 IP 网段发生更新时，该字段会返回下一个版本将要生效的回源 IP 网段，包含与当前回源 IP 网段的对比。无更新或者源站防护未开启时该字段为空。
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
                     * 获取源站防护状态，取值有：
<li>online：已生效；</li>
<li>offline：已停用；</li>
<li>updating: 配置部署中。</li>
                     * @return Status 源站防护状态，取值有：
<li>online：已生效；</li>
<li>offline：已停用；</li>
<li>updating: 配置部署中。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置源站防护状态，取值有：
<li>online：已生效；</li>
<li>offline：已停用；</li>
<li>updating: 配置部署中。</li>
                     * @param _status 源站防护状态，取值有：
<li>online：已生效；</li>
<li>offline：已停用；</li>
<li>updating: 配置部署中。</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 启用了特定回源 IP 网段回源的七层加速域名列表。源站防护未开启时为空。
                     */
                    std::vector<std::string> m_l7Hosts;
                    bool m_l7HostsHasBeenSet;

                    /**
                     * 启用了特定回源 IP 网段回源的四层代理实例列表。源站防护未开启时为空。
                     */
                    std::vector<std::string> m_l4ProxyIds;
                    bool m_l4ProxyIdsHasBeenSet;

                    /**
                     * 当前生效的回源 IP 网段。源站防护未开启时为空。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CurrentOriginACL m_currentOriginACL;
                    bool m_currentOriginACLHasBeenSet;

                    /**
                     * 当回源 IP 网段发生更新时，该字段会返回下一个版本将要生效的回源 IP 网段，包含与当前回源 IP 网段的对比。无更新或者源站防护未开启时该字段为空。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NextOriginACL m_nextOriginACL;
                    bool m_nextOriginACLHasBeenSet;

                    /**
                     * 源站防护状态，取值有：
<li>online：已生效；</li>
<li>offline：已停用；</li>
<li>updating: 配置部署中。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINACLINFO_H_
