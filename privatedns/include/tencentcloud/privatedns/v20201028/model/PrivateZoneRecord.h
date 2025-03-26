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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_PRIVATEZONERECORD_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_PRIVATEZONERECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * 私有域信息
                */
                class PrivateZoneRecord : public AbstractModel
                {
                public:
                    PrivateZoneRecord();
                    ~PrivateZoneRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取记录id
                     * @return RecordId 记录id
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置记录id
                     * @param _recordId 记录id
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取私有域id: zone-xxxxxxxx
                     * @return ZoneId 私有域id: zone-xxxxxxxx
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置私有域id: zone-xxxxxxxx
                     * @param _zoneId 私有域id: zone-xxxxxxxx
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
                     * 获取子域名
                     * @return SubDomain 子域名
                     * 
                     */
                    std::string GetSubDomain() const;

                    /**
                     * 设置子域名
                     * @param _subDomain 子域名
                     * 
                     */
                    void SetSubDomain(const std::string& _subDomain);

                    /**
                     * 判断参数 SubDomain 是否已赋值
                     * @return SubDomain 是否已赋值
                     * 
                     */
                    bool SubDomainHasBeenSet() const;

                    /**
                     * 获取记录类型，可选的记录类型为："A", "AAAA", "CNAME", "MX", "TXT", "PTR"
                     * @return RecordType 记录类型，可选的记录类型为："A", "AAAA", "CNAME", "MX", "TXT", "PTR"
                     * 
                     */
                    std::string GetRecordType() const;

                    /**
                     * 设置记录类型，可选的记录类型为："A", "AAAA", "CNAME", "MX", "TXT", "PTR"
                     * @param _recordType 记录类型，可选的记录类型为："A", "AAAA", "CNAME", "MX", "TXT", "PTR"
                     * 
                     */
                    void SetRecordType(const std::string& _recordType);

                    /**
                     * 判断参数 RecordType 是否已赋值
                     * @return RecordType 是否已赋值
                     * 
                     */
                    bool RecordTypeHasBeenSet() const;

                    /**
                     * 获取记录值
                     * @return RecordValue 记录值
                     * 
                     */
                    std::string GetRecordValue() const;

                    /**
                     * 设置记录值
                     * @param _recordValue 记录值
                     * 
                     */
                    void SetRecordValue(const std::string& _recordValue);

                    /**
                     * 判断参数 RecordValue 是否已赋值
                     * @return RecordValue 是否已赋值
                     * 
                     */
                    bool RecordValueHasBeenSet() const;

                    /**
                     * 获取记录缓存时间，数值越小生效越快，取值1-86400s, 默认 600
                     * @return TTL 记录缓存时间，数值越小生效越快，取值1-86400s, 默认 600
                     * 
                     */
                    int64_t GetTTL() const;

                    /**
                     * 设置记录缓存时间，数值越小生效越快，取值1-86400s, 默认 600
                     * @param _tTL 记录缓存时间，数值越小生效越快，取值1-86400s, 默认 600
                     * 
                     */
                    void SetTTL(const int64_t& _tTL);

                    /**
                     * 判断参数 TTL 是否已赋值
                     * @return TTL 是否已赋值
                     * 
                     */
                    bool TTLHasBeenSet() const;

                    /**
                     * 获取MX优先级：记录类型为MX时必填。取值范围：5,10,15,20,30,40,50
                     * @return MX MX优先级：记录类型为MX时必填。取值范围：5,10,15,20,30,40,50
                     * 
                     */
                    int64_t GetMX() const;

                    /**
                     * 设置MX优先级：记录类型为MX时必填。取值范围：5,10,15,20,30,40,50
                     * @param _mX MX优先级：记录类型为MX时必填。取值范围：5,10,15,20,30,40,50
                     * 
                     */
                    void SetMX(const int64_t& _mX);

                    /**
                     * 判断参数 MX 是否已赋值
                     * @return MX 是否已赋值
                     * 
                     */
                    bool MXHasBeenSet() const;

                    /**
                     * 获取记录状态：ENABLED
                     * @return Status 记录状态：ENABLED
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置记录状态：ENABLED
                     * @param _status 记录状态：ENABLED
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
                     * 获取记录权重，值为1-100
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Weight 记录权重，值为1-100
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置记录权重，值为1-100
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weight 记录权重，值为1-100
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取记录创建时间
                     * @return CreatedOn 记录创建时间
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置记录创建时间
                     * @param _createdOn 记录创建时间
                     * 
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取记录更新时间
                     * @return UpdatedOn 记录更新时间
                     * 
                     */
                    std::string GetUpdatedOn() const;

                    /**
                     * 设置记录更新时间
                     * @param _updatedOn 记录更新时间
                     * 
                     */
                    void SetUpdatedOn(const std::string& _updatedOn);

                    /**
                     * 判断参数 UpdatedOn 是否已赋值
                     * @return UpdatedOn 是否已赋值
                     * 
                     */
                    bool UpdatedOnHasBeenSet() const;

                    /**
                     * 获取附加信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Extra 附加信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置附加信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extra 附加信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtra(const std::string& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                    /**
                     * 获取0暂停，1启用
                     * @return Enabled 0暂停，1启用
                     * 
                     */
                    uint64_t GetEnabled() const;

                    /**
                     * 设置0暂停，1启用
                     * @param _enabled 0暂停，1启用
                     * 
                     */
                    void SetEnabled(const uint64_t& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 记录id
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * 私有域id: zone-xxxxxxxx
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 子域名
                     */
                    std::string m_subDomain;
                    bool m_subDomainHasBeenSet;

                    /**
                     * 记录类型，可选的记录类型为："A", "AAAA", "CNAME", "MX", "TXT", "PTR"
                     */
                    std::string m_recordType;
                    bool m_recordTypeHasBeenSet;

                    /**
                     * 记录值
                     */
                    std::string m_recordValue;
                    bool m_recordValueHasBeenSet;

                    /**
                     * 记录缓存时间，数值越小生效越快，取值1-86400s, 默认 600
                     */
                    int64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * MX优先级：记录类型为MX时必填。取值范围：5,10,15,20,30,40,50
                     */
                    int64_t m_mX;
                    bool m_mXHasBeenSet;

                    /**
                     * 记录状态：ENABLED
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 记录权重，值为1-100
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 记录创建时间
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 记录更新时间
                     */
                    std::string m_updatedOn;
                    bool m_updatedOnHasBeenSet;

                    /**
                     * 附加信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * 0暂停，1启用
                     */
                    uint64_t m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_PRIVATEZONERECORD_H_
