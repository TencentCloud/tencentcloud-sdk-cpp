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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DNSRECORD_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DNSRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DNS 记录
                */
                class DnsRecord : public AbstractModel
                {
                public:
                    DnsRecord();
                    ~DnsRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取记录 ID
                     * @return Id 记录 ID
                     */
                    std::string GetId() const;

                    /**
                     * 设置记录 ID
                     * @param Id 记录 ID
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取记录类型
                     * @return Type 记录类型
                     */
                    std::string GetType() const;

                    /**
                     * 设置记录类型
                     * @param Type 记录类型
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取主机记录
                     * @return Name 主机记录
                     */
                    std::string GetName() const;

                    /**
                     * 设置主机记录
                     * @param Name 主机记录
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取记录值
                     * @return Content 记录值
                     */
                    std::string GetContent() const;

                    /**
                     * 设置记录值
                     * @param Content 记录值
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取代理模式
                     * @return Mode 代理模式
                     */
                    std::string GetMode() const;

                    /**
                     * 设置代理模式
                     * @param Mode 代理模式
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取TTL 值
                     * @return Ttl TTL 值
                     */
                    int64_t GetTtl() const;

                    /**
                     * 设置TTL 值
                     * @param Ttl TTL 值
                     */
                    void SetTtl(const int64_t& _ttl);

                    /**
                     * 判断参数 Ttl 是否已赋值
                     * @return Ttl 是否已赋值
                     */
                    bool TtlHasBeenSet() const;

                    /**
                     * 获取优先级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Priority 优先级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置优先级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Priority 优先级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedOn 创建时间
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置创建时间
                     * @param CreatedOn 创建时间
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return ModifiedOn 修改时间
                     */
                    std::string GetModifiedOn() const;

                    /**
                     * 设置修改时间
                     * @param ModifiedOn 修改时间
                     */
                    void SetModifiedOn(const std::string& _modifiedOn);

                    /**
                     * 判断参数 ModifiedOn 是否已赋值
                     * @return ModifiedOn 是否已赋值
                     */
                    bool ModifiedOnHasBeenSet() const;

                    /**
                     * 获取域名锁
                     * @return Locked 域名锁
                     */
                    bool GetLocked() const;

                    /**
                     * 设置域名锁
                     * @param Locked 域名锁
                     */
                    void SetLocked(const bool& _locked);

                    /**
                     * 判断参数 Locked 是否已赋值
                     * @return Locked 是否已赋值
                     */
                    bool LockedHasBeenSet() const;

                    /**
                     * 获取站点 ID
                     * @return ZoneId 站点 ID
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID
                     * @param ZoneId 站点 ID
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取站点名称
                     * @return ZoneName 站点名称
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置站点名称
                     * @param ZoneName 站点名称
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取解析状态
active: 生效
pending: 不生效
                     * @return Status 解析状态
active: 生效
pending: 不生效
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置解析状态
active: 生效
pending: 不生效
                     * @param Status 解析状态
active: 生效
pending: 不生效
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取CNAME 地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cname CNAME 地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCname() const;

                    /**
                     * 设置CNAME 地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Cname CNAME 地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取域名是否开启了负载均衡，四层代理，安全
- lb 负载均衡
- security 安全
- l4 四层代理
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DomainStatus 域名是否开启了负载均衡，四层代理，安全
- lb 负载均衡
- security 安全
- l4 四层代理
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetDomainStatus() const;

                    /**
                     * 设置域名是否开启了负载均衡，四层代理，安全
- lb 负载均衡
- security 安全
- l4 四层代理
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DomainStatus 域名是否开启了负载均衡，四层代理，安全
- lb 负载均衡
- security 安全
- l4 四层代理
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDomainStatus(const std::vector<std::string>& _domainStatus);

                    /**
                     * 判断参数 DomainStatus 是否已赋值
                     * @return DomainStatus 是否已赋值
                     */
                    bool DomainStatusHasBeenSet() const;

                private:

                    /**
                     * 记录 ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 记录类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 主机记录
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 记录值
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 代理模式
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * TTL 值
                     */
                    int64_t m_ttl;
                    bool m_ttlHasBeenSet;

                    /**
                     * 优先级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifiedOn;
                    bool m_modifiedOnHasBeenSet;

                    /**
                     * 域名锁
                     */
                    bool m_locked;
                    bool m_lockedHasBeenSet;

                    /**
                     * 站点 ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 站点名称
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 解析状态
active: 生效
pending: 不生效
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * CNAME 地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * 域名是否开启了负载均衡，四层代理，安全
- lb 负载均衡
- security 安全
- l4 四层代理
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_domainStatus;
                    bool m_domainStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DNSRECORD_H_
