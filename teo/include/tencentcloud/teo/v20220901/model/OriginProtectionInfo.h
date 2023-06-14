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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINPROTECTIONINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINPROTECTIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/IPWhitelist.h>
#include <tencentcloud/teo/v20220901/model/DiffIPWhitelist.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 源站防护信息
                */
                class OriginProtectionInfo : public AbstractModel
                {
                public:
                    OriginProtectionInfo();
                    ~OriginProtectionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取站点ID。
                     * @return ZoneId 站点ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点ID。
                     * @param _zoneId 站点ID。
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
                     * 获取域名列表。
                     * @return Hosts 域名列表。
                     * 
                     */
                    std::vector<std::string> GetHosts() const;

                    /**
                     * 设置域名列表。
                     * @param _hosts 域名列表。
                     * 
                     */
                    void SetHosts(const std::vector<std::string>& _hosts);

                    /**
                     * 判断参数 Hosts 是否已赋值
                     * @return Hosts 是否已赋值
                     * 
                     */
                    bool HostsHasBeenSet() const;

                    /**
                     * 获取代理ID列表。
                     * @return ProxyIds 代理ID列表。
                     * 
                     */
                    std::vector<std::string> GetProxyIds() const;

                    /**
                     * 设置代理ID列表。
                     * @param _proxyIds 代理ID列表。
                     * 
                     */
                    void SetProxyIds(const std::vector<std::string>& _proxyIds);

                    /**
                     * 判断参数 ProxyIds 是否已赋值
                     * @return ProxyIds 是否已赋值
                     * 
                     */
                    bool ProxyIdsHasBeenSet() const;

                    /**
                     * 获取当前版本的IP白名单。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurrentIPWhitelist 当前版本的IP白名单。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    IPWhitelist GetCurrentIPWhitelist() const;

                    /**
                     * 设置当前版本的IP白名单。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _currentIPWhitelist 当前版本的IP白名单。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCurrentIPWhitelist(const IPWhitelist& _currentIPWhitelist);

                    /**
                     * 判断参数 CurrentIPWhitelist 是否已赋值
                     * @return CurrentIPWhitelist 是否已赋值
                     * 
                     */
                    bool CurrentIPWhitelistHasBeenSet() const;

                    /**
                     * 获取该站点是否需要更新源站白名单，取值有：
<li>true ：需要更新IP白名单 ；</li>
<li>false ：无需更新IP白名单。</li>
                     * @return NeedUpdate 该站点是否需要更新源站白名单，取值有：
<li>true ：需要更新IP白名单 ；</li>
<li>false ：无需更新IP白名单。</li>
                     * 
                     */
                    bool GetNeedUpdate() const;

                    /**
                     * 设置该站点是否需要更新源站白名单，取值有：
<li>true ：需要更新IP白名单 ；</li>
<li>false ：无需更新IP白名单。</li>
                     * @param _needUpdate 该站点是否需要更新源站白名单，取值有：
<li>true ：需要更新IP白名单 ；</li>
<li>false ：无需更新IP白名单。</li>
                     * 
                     */
                    void SetNeedUpdate(const bool& _needUpdate);

                    /**
                     * 判断参数 NeedUpdate 是否已赋值
                     * @return NeedUpdate 是否已赋值
                     * 
                     */
                    bool NeedUpdateHasBeenSet() const;

                    /**
                     * 获取源站防护状态，取值有：
<li>online ：源站防护启用中 ；</li>
<li>offline ：源站防护已停用 ；</li>
<li>nonactivate ：源站防护未激活，仅在从未使用过源站防护功能的站点调用中返回。</li>
                     * @return Status 源站防护状态，取值有：
<li>online ：源站防护启用中 ；</li>
<li>offline ：源站防护已停用 ；</li>
<li>nonactivate ：源站防护未激活，仅在从未使用过源站防护功能的站点调用中返回。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置源站防护状态，取值有：
<li>online ：源站防护启用中 ；</li>
<li>offline ：源站防护已停用 ；</li>
<li>nonactivate ：源站防护未激活，仅在从未使用过源站防护功能的站点调用中返回。</li>
                     * @param _status 源站防护状态，取值有：
<li>online ：源站防护启用中 ；</li>
<li>offline ：源站防护已停用 ；</li>
<li>nonactivate ：源站防护未激活，仅在从未使用过源站防护功能的站点调用中返回。</li>
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
                     * 获取站点套餐是否支持源站防护，取值有：
<li>true ：支持 ；</li>
<li>false ：不支持。</li>
                     * @return PlanSupport 站点套餐是否支持源站防护，取值有：
<li>true ：支持 ；</li>
<li>false ：不支持。</li>
                     * 
                     */
                    bool GetPlanSupport() const;

                    /**
                     * 设置站点套餐是否支持源站防护，取值有：
<li>true ：支持 ；</li>
<li>false ：不支持。</li>
                     * @param _planSupport 站点套餐是否支持源站防护，取值有：
<li>true ：支持 ；</li>
<li>false ：不支持。</li>
                     * 
                     */
                    void SetPlanSupport(const bool& _planSupport);

                    /**
                     * 判断参数 PlanSupport 是否已赋值
                     * @return PlanSupport 是否已赋值
                     * 
                     */
                    bool PlanSupportHasBeenSet() const;

                    /**
                     * 获取最新IP白名单与当前IP白名单的对比。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiffIPWhitelist 最新IP白名单与当前IP白名单的对比。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DiffIPWhitelist GetDiffIPWhitelist() const;

                    /**
                     * 设置最新IP白名单与当前IP白名单的对比。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diffIPWhitelist 最新IP白名单与当前IP白名单的对比。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiffIPWhitelist(const DiffIPWhitelist& _diffIPWhitelist);

                    /**
                     * 判断参数 DiffIPWhitelist 是否已赋值
                     * @return DiffIPWhitelist 是否已赋值
                     * 
                     */
                    bool DiffIPWhitelistHasBeenSet() const;

                private:

                    /**
                     * 站点ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 域名列表。
                     */
                    std::vector<std::string> m_hosts;
                    bool m_hostsHasBeenSet;

                    /**
                     * 代理ID列表。
                     */
                    std::vector<std::string> m_proxyIds;
                    bool m_proxyIdsHasBeenSet;

                    /**
                     * 当前版本的IP白名单。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IPWhitelist m_currentIPWhitelist;
                    bool m_currentIPWhitelistHasBeenSet;

                    /**
                     * 该站点是否需要更新源站白名单，取值有：
<li>true ：需要更新IP白名单 ；</li>
<li>false ：无需更新IP白名单。</li>
                     */
                    bool m_needUpdate;
                    bool m_needUpdateHasBeenSet;

                    /**
                     * 源站防护状态，取值有：
<li>online ：源站防护启用中 ；</li>
<li>offline ：源站防护已停用 ；</li>
<li>nonactivate ：源站防护未激活，仅在从未使用过源站防护功能的站点调用中返回。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 站点套餐是否支持源站防护，取值有：
<li>true ：支持 ；</li>
<li>false ：不支持。</li>
                     */
                    bool m_planSupport;
                    bool m_planSupportHasBeenSet;

                    /**
                     * 最新IP白名单与当前IP白名单的对比。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiffIPWhitelist m_diffIPWhitelist;
                    bool m_diffIPWhitelistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINPROTECTIONINFO_H_
