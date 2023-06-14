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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_SNAPSHOTRECORD_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_SNAPSHOTRECORD_H_

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
                * 快照解析记录
                */
                class SnapshotRecord : public AbstractModel
                {
                public:
                    SnapshotRecord();
                    ~SnapshotRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取解析线路
                     * @return RecordLine 解析线路
                     * 
                     */
                    std::string GetRecordLine() const;

                    /**
                     * 设置解析线路
                     * @param _recordLine 解析线路
                     * 
                     */
                    void SetRecordLine(const std::string& _recordLine);

                    /**
                     * 判断参数 RecordLine 是否已赋值
                     * @return RecordLine 是否已赋值
                     * 
                     */
                    bool RecordLineHasBeenSet() const;

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
                     * 获取TTL(秒)
                     * @return TTL TTL(秒)
                     * 
                     */
                    std::string GetTTL() const;

                    /**
                     * 设置TTL(秒)
                     * @param _tTL TTL(秒)
                     * 
                     */
                    void SetTTL(const std::string& _tTL);

                    /**
                     * 判断参数 TTL 是否已赋值
                     * @return TTL 是否已赋值
                     * 
                     */
                    bool TTLHasBeenSet() const;

                    /**
                     * 获取解析记录 ID
                     * @return RecordId 解析记录 ID
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置解析记录 ID
                     * @param _recordId 解析记录 ID
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
                     * 获取MX优先级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MX MX优先级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMX() const;

                    /**
                     * 设置MX优先级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mX MX优先级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMX(const std::string& _mX);

                    /**
                     * 判断参数 MX 是否已赋值
                     * @return MX 是否已赋值
                     * 
                     */
                    bool MXHasBeenSet() const;

                    /**
                     * 获取权重
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Weight 权重
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWeight() const;

                    /**
                     * 设置权重
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weight 权重
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWeight(const std::string& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Reason 失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reason 失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * 子域名
                     */
                    std::string m_subDomain;
                    bool m_subDomainHasBeenSet;

                    /**
                     * 记录类型
                     */
                    std::string m_recordType;
                    bool m_recordTypeHasBeenSet;

                    /**
                     * 解析线路
                     */
                    std::string m_recordLine;
                    bool m_recordLineHasBeenSet;

                    /**
                     * 解析值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * TTL(秒)
                     */
                    std::string m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * 解析记录 ID
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * MX优先级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mX;
                    bool m_mXHasBeenSet;

                    /**
                     * 权重
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_SNAPSHOTRECORD_H_
