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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_RECORDINFO_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_RECORDINFO_H_

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
                * 记录信息
                */
                class RecordInfo : public AbstractModel
                {
                public:
                    RecordInfo();
                    ~RecordInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取记录 ID 。
                     * @return Id 记录 ID 。
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置记录 ID 。
                     * @param _id 记录 ID 。
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取子域名(主机记录)。
                     * @return SubDomain 子域名(主机记录)。
                     * 
                     */
                    std::string GetSubDomain() const;

                    /**
                     * 设置子域名(主机记录)。
                     * @param _subDomain 子域名(主机记录)。
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
                     * 获取记录类型, 详见 DescribeRecordType 接口。
                     * @return RecordType 记录类型, 详见 DescribeRecordType 接口。
                     * 
                     */
                    std::string GetRecordType() const;

                    /**
                     * 设置记录类型, 详见 DescribeRecordType 接口。
                     * @param _recordType 记录类型, 详见 DescribeRecordType 接口。
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
                     * 获取解析记录的线路，详见 DescribeRecordLineList 接口。
                     * @return RecordLine 解析记录的线路，详见 DescribeRecordLineList 接口。
                     * 
                     */
                    std::string GetRecordLine() const;

                    /**
                     * 设置解析记录的线路，详见 DescribeRecordLineList 接口。
                     * @param _recordLine 解析记录的线路，详见 DescribeRecordLineList 接口。
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
                     * 获取解析记录的线路 ID ，详见 DescribeRecordLineList 接口。
                     * @return RecordLineId 解析记录的线路 ID ，详见 DescribeRecordLineList 接口。
                     * 
                     */
                    std::string GetRecordLineId() const;

                    /**
                     * 设置解析记录的线路 ID ，详见 DescribeRecordLineList 接口。
                     * @param _recordLineId 解析记录的线路 ID ，详见 DescribeRecordLineList 接口。
                     * 
                     */
                    void SetRecordLineId(const std::string& _recordLineId);

                    /**
                     * 判断参数 RecordLineId 是否已赋值
                     * @return RecordLineId 是否已赋值
                     * 
                     */
                    bool RecordLineIdHasBeenSet() const;

                    /**
                     * 获取记录值。
                     * @return Value 记录值。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置记录值。
                     * @param _value 记录值。
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
                     * 获取记录权重值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Weight 记录权重值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置记录权重值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weight 记录权重值。
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
                     * 获取记录的 MX 记录值，非 MX 记录类型，默认为 0。
                     * @return MX 记录的 MX 记录值，非 MX 记录类型，默认为 0。
                     * 
                     */
                    uint64_t GetMX() const;

                    /**
                     * 设置记录的 MX 记录值，非 MX 记录类型，默认为 0。
                     * @param _mX 记录的 MX 记录值，非 MX 记录类型，默认为 0。
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
                     * 获取记录的 TTL 值。
                     * @return TTL 记录的 TTL 值。
                     * 
                     */
                    uint64_t GetTTL() const;

                    /**
                     * 设置记录的 TTL 值。
                     * @param _tTL 记录的 TTL 值。
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
                     * 获取记录状态。0表示禁用，1表示启用。
                     * @return Enabled 记录状态。0表示禁用，1表示启用。
                     * 
                     */
                    uint64_t GetEnabled() const;

                    /**
                     * 设置记录状态。0表示禁用，1表示启用。
                     * @param _enabled 记录状态。0表示禁用，1表示启用。
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
                     * 获取该记录的 D 监控状态。
"Ok" : 服务器正常。
"Warn" : 该记录有报警, 服务器返回 4XX。
"Down" : 服务器宕机。
"" : 该记录未开启 D 监控。
                     * @return MonitorStatus 该记录的 D 监控状态。
"Ok" : 服务器正常。
"Warn" : 该记录有报警, 服务器返回 4XX。
"Down" : 服务器宕机。
"" : 该记录未开启 D 监控。
                     * 
                     */
                    std::string GetMonitorStatus() const;

                    /**
                     * 设置该记录的 D 监控状态。
"Ok" : 服务器正常。
"Warn" : 该记录有报警, 服务器返回 4XX。
"Down" : 服务器宕机。
"" : 该记录未开启 D 监控。
                     * @param _monitorStatus 该记录的 D 监控状态。
"Ok" : 服务器正常。
"Warn" : 该记录有报警, 服务器返回 4XX。
"Down" : 服务器宕机。
"" : 该记录未开启 D 监控。
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
                     * 获取记录的备注。
                     * @return Remark 记录的备注。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置记录的备注。
                     * @param _remark 记录的备注。
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
                     * 获取记录最后更新时间。
                     * @return UpdatedOn 记录最后更新时间。
                     * 
                     */
                    std::string GetUpdatedOn() const;

                    /**
                     * 设置记录最后更新时间。
                     * @param _updatedOn 记录最后更新时间。
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
                     * 获取域名 ID 。
                     * @return DomainId 域名 ID 。
                     * 
                     */
                    uint64_t GetDomainId() const;

                    /**
                     * 设置域名 ID 。
                     * @param _domainId 域名 ID 。
                     * 
                     */
                    void SetDomainId(const uint64_t& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                private:

                    /**
                     * 记录 ID 。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 子域名(主机记录)。
                     */
                    std::string m_subDomain;
                    bool m_subDomainHasBeenSet;

                    /**
                     * 记录类型, 详见 DescribeRecordType 接口。
                     */
                    std::string m_recordType;
                    bool m_recordTypeHasBeenSet;

                    /**
                     * 解析记录的线路，详见 DescribeRecordLineList 接口。
                     */
                    std::string m_recordLine;
                    bool m_recordLineHasBeenSet;

                    /**
                     * 解析记录的线路 ID ，详见 DescribeRecordLineList 接口。
                     */
                    std::string m_recordLineId;
                    bool m_recordLineIdHasBeenSet;

                    /**
                     * 记录值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 记录权重值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 记录的 MX 记录值，非 MX 记录类型，默认为 0。
                     */
                    uint64_t m_mX;
                    bool m_mXHasBeenSet;

                    /**
                     * 记录的 TTL 值。
                     */
                    uint64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * 记录状态。0表示禁用，1表示启用。
                     */
                    uint64_t m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 该记录的 D 监控状态。
"Ok" : 服务器正常。
"Warn" : 该记录有报警, 服务器返回 4XX。
"Down" : 服务器宕机。
"" : 该记录未开启 D 监控。
                     */
                    std::string m_monitorStatus;
                    bool m_monitorStatusHasBeenSet;

                    /**
                     * 记录的备注。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 记录最后更新时间。
                     */
                    std::string m_updatedOn;
                    bool m_updatedOnHasBeenSet;

                    /**
                     * 域名 ID 。
                     */
                    uint64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_RECORDINFO_H_
