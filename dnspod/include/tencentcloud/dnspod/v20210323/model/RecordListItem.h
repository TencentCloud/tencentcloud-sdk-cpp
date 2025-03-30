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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_RECORDLISTITEM_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_RECORDLISTITEM_H_

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
                * 记录列表元素
                */
                class RecordListItem : public AbstractModel
                {
                public:
                    RecordListItem();
                    ~RecordListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取记录Id
                     * @return RecordId 记录Id
                     * 
                     */
                    uint64_t GetRecordId() const;

                    /**
                     * 设置记录Id
                     * @param _recordId 记录Id
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
                     * 获取记录值
                     * @return Value 记录值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置记录值
                     * @param _value 记录值
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
                     * 获取记录状态，启用：ENABLE，暂停：DISABLE
                     * @return Status 记录状态，启用：ENABLE，暂停：DISABLE
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置记录状态，启用：ENABLE，暂停：DISABLE
                     * @param _status 记录状态，启用：ENABLE，暂停：DISABLE
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
                     * 获取更新时间
                     * @return UpdatedOn 更新时间
                     * 
                     */
                    std::string GetUpdatedOn() const;

                    /**
                     * 设置更新时间
                     * @param _updatedOn 更新时间
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
                     * 获取主机名
                     * @return Name 主机名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置主机名
                     * @param _name 主机名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取记录线路
                     * @return Line 记录线路
                     * 
                     */
                    std::string GetLine() const;

                    /**
                     * 设置记录线路
                     * @param _line 记录线路
                     * 
                     */
                    void SetLine(const std::string& _line);

                    /**
                     * 判断参数 Line 是否已赋值
                     * @return Line 是否已赋值
                     * 
                     */
                    bool LineHasBeenSet() const;

                    /**
                     * 获取线路Id
                     * @return LineId 线路Id
                     * 
                     */
                    std::string GetLineId() const;

                    /**
                     * 设置线路Id
                     * @param _lineId 线路Id
                     * 
                     */
                    void SetLineId(const std::string& _lineId);

                    /**
                     * 判断参数 LineId 是否已赋值
                     * @return LineId 是否已赋值
                     * 
                     */
                    bool LineIdHasBeenSet() const;

                    /**
                     * 获取记录类型
                     * @return Type 记录类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置记录类型
                     * @param _type 记录类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取记录权重，用于负载均衡记录
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Weight 记录权重，用于负载均衡记录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置记录权重，用于负载均衡记录
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weight 记录权重，用于负载均衡记录
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
                     * 获取记录监控状态，正常：OK，告警：WARN，宕机：DOWN，未设置监控或监控暂停则为空
                     * @return MonitorStatus 记录监控状态，正常：OK，告警：WARN，宕机：DOWN，未设置监控或监控暂停则为空
                     * 
                     */
                    std::string GetMonitorStatus() const;

                    /**
                     * 设置记录监控状态，正常：OK，告警：WARN，宕机：DOWN，未设置监控或监控暂停则为空
                     * @param _monitorStatus 记录监控状态，正常：OK，告警：WARN，宕机：DOWN，未设置监控或监控暂停则为空
                     * 
                     */
                    void SetMonitorStatus(const std::string& _monitorStatus);

                    /**
                     * 判断参数 MonitorStatus 是否已赋值
                     * @return MonitorStatus 是否已赋值
                     * 
                     */
                    bool MonitorStatusHasBeenSet() const;

                    /**
                     * 获取记录备注说明
                     * @return Remark 记录备注说明
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置记录备注说明
                     * @param _remark 记录备注说明
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
                     * 获取记录缓存时间
                     * @return TTL 记录缓存时间
                     * 
                     */
                    uint64_t GetTTL() const;

                    /**
                     * 设置记录缓存时间
                     * @param _tTL 记录缓存时间
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
                     * 获取MX值，只有MX记录有
                     * @return MX MX值，只有MX记录有
                     * 
                     */
                    uint64_t GetMX() const;

                    /**
                     * 设置MX值，只有MX记录有
                     * @param _mX MX值，只有MX记录有
                     * 
                     */
                    void SetMX(const uint64_t& _mX);

                    /**
                     * 判断参数 MX 是否已赋值
                     * @return MX 是否已赋值
                     * 
                     */
                    bool MXHasBeenSet() const;

                    /**
                     * 获取是否是默认的ns记录
                     * @return DefaultNS 是否是默认的ns记录
                     * 
                     */
                    bool GetDefaultNS() const;

                    /**
                     * 设置是否是默认的ns记录
                     * @param _defaultNS 是否是默认的ns记录
                     * 
                     */
                    void SetDefaultNS(const bool& _defaultNS);

                    /**
                     * 判断参数 DefaultNS 是否已赋值
                     * @return DefaultNS 是否已赋值
                     * 
                     */
                    bool DefaultNSHasBeenSet() const;

                private:

                    /**
                     * 记录Id
                     */
                    uint64_t m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * 记录值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 记录状态，启用：ENABLE，暂停：DISABLE
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updatedOn;
                    bool m_updatedOnHasBeenSet;

                    /**
                     * 主机名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 记录线路
                     */
                    std::string m_line;
                    bool m_lineHasBeenSet;

                    /**
                     * 线路Id
                     */
                    std::string m_lineId;
                    bool m_lineIdHasBeenSet;

                    /**
                     * 记录类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 记录权重，用于负载均衡记录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 记录监控状态，正常：OK，告警：WARN，宕机：DOWN，未设置监控或监控暂停则为空
                     */
                    std::string m_monitorStatus;
                    bool m_monitorStatusHasBeenSet;

                    /**
                     * 记录备注说明
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 记录缓存时间
                     */
                    uint64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * MX值，只有MX记录有
                     */
                    uint64_t m_mX;
                    bool m_mXHasBeenSet;

                    /**
                     * 是否是默认的ns记录
                     */
                    bool m_defaultNS;
                    bool m_defaultNSHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_RECORDLISTITEM_H_
