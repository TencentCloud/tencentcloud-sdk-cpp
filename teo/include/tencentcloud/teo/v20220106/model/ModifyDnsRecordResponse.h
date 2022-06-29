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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYDNSRECORDRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYDNSRECORDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyDnsRecord返回参数结构体
                */
                class ModifyDnsRecordResponse : public AbstractModel
                {
                public:
                    ModifyDnsRecordResponse();
                    ~ModifyDnsRecordResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取记录 ID
                     * @return Id 记录 ID
                     */
                    std::string GetId() const;

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
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取记录名称
                     * @return Name 记录名称
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取记录内容
                     * @return Content 记录内容
                     */
                    std::string GetContent() const;

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取生存时间值
                     * @return Ttl 生存时间值
                     */
                    int64_t GetTtl() const;

                    /**
                     * 判断参数 Ttl 是否已赋值
                     * @return Ttl 是否已赋值
                     */
                    bool TtlHasBeenSet() const;

                    /**
                     * 获取优先级
                     * @return Priority 优先级
                     */
                    int64_t GetPriority() const;

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取代理模式
                     * @return Mode 代理模式
                     */
                    std::string GetMode() const;

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取解析状态
                     * @return Status 解析状态
                     */
                    std::string GetStatus() const;

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
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取锁定状态
                     * @return Locked 锁定状态
                     */
                    bool GetLocked() const;

                    /**
                     * 判断参数 Locked 是否已赋值
                     * @return Locked 是否已赋值
                     */
                    bool LockedHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedOn 创建时间
                     */
                    std::string GetCreatedOn() const;

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
                     * 判断参数 ModifiedOn 是否已赋值
                     * @return ModifiedOn 是否已赋值
                     */
                    bool ModifiedOnHasBeenSet() const;

                    /**
                     * 获取站点 ID
                     * @return ZoneId 站点 ID
                     */
                    std::string GetZoneId() const;

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
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     */
                    bool ZoneNameHasBeenSet() const;

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
                     * 记录名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 记录内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 生存时间值
                     */
                    int64_t m_ttl;
                    bool m_ttlHasBeenSet;

                    /**
                     * 优先级
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 代理模式
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 解析状态
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
                     * 锁定状态
                     */
                    bool m_locked;
                    bool m_lockedHasBeenSet;

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
                     * 站点 ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 站点名称
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYDNSRECORDRESPONSE_H_
