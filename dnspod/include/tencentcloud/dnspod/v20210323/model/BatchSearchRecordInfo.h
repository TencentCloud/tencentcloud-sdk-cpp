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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_BATCHSEARCHRECORDINFO_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_BATCHSEARCHRECORDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 批量操作筛选记录信息
                */
                class BatchSearchRecordInfo : public AbstractModel
                {
                public:
                    BatchSearchRecordInfo();
                    ~BatchSearchRecordInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取解析记录 ID
                     * @return RecordId 解析记录 ID
                     * 
                     */
                    uint64_t GetRecordId() const;

                    /**
                     * 设置解析记录 ID
                     * @param _recordId 解析记录 ID
                     * 
                     */
                    void SetRecordId(const uint64_t& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取解析线路
                     * @return Area 解析线路
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置解析线路
                     * @param _area 解析线路
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
                     * 获取记录备注
                     * @return Remark 记录备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置记录备注
                     * @param _remark 记录备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取TTL(秒)
                     * @return TTL TTL(秒)
                     * 
                     */
                    uint64_t GetTTL() const;

                    /**
                     * 设置TTL(秒)
                     * @param _tTL TTL(秒)
                     * 
                     */
                    void SetTTL(const uint64_t& _tTL);

                    /**
                     * 判断参数 TTL 是否已赋值
                     * @return TTL 是否已赋值
                     * 
                     */
                    bool TTLHasBeenSet() const;

                    /**
                     * 获取记录类型
                     * @return RecordType 记录类型
                     * 
                     */
                    std::string GetRecordType() const;

                    /**
                     * 设置记录类型
                     * @param _recordType 记录类型
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
                     * 获取记录是否启用
                     * @return Enabled 记录是否启用
                     * 
                     */
                    uint64_t GetEnabled() const;

                    /**
                     * 设置记录是否启用
                     * @param _enabled 记录是否启用
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
                     * 获取权重
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Weight 权重
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置权重
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weight 权重
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取记录分组 ID
                     * @return GroupId 记录分组 ID
                     * 
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置记录分组 ID
                     * @param _groupId 记录分组 ID
                     * 
                     */
                    void SetGroupId(const uint64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

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
                     * 获取解析值
                     * @return Value 解析值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置解析值
                     * @param _value 解析值
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取MX优先级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MX MX优先级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMX() const;

                    /**
                     * 设置MX优先级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mX MX优先级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMX(const uint64_t& _mX);

                    /**
                     * 判断参数 MX 是否已赋值
                     * @return MX 是否已赋值
                     * 
                     */
                    bool MXHasBeenSet() const;

                private:

                    /**
                     * 解析记录 ID
                     */
                    uint64_t m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * 解析线路
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 记录备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * TTL(秒)
                     */
                    uint64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * 记录类型
                     */
                    std::string m_recordType;
                    bool m_recordTypeHasBeenSet;

                    /**
                     * 记录是否启用
                     */
                    uint64_t m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 权重
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 记录分组 ID
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 子域名
                     */
                    std::string m_subDomain;
                    bool m_subDomainHasBeenSet;

                    /**
                     * 解析值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * MX优先级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_mX;
                    bool m_mXHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_BATCHSEARCHRECORDINFO_H_
