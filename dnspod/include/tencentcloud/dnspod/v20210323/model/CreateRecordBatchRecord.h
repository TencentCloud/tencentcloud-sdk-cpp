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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATERECORDBATCHRECORD_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATERECORDBATCHRECORD_H_

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
                * 批量添加记录任务中的记录信息
                */
                class CreateRecordBatchRecord : public AbstractModel
                {
                public:
                    CreateRecordBatchRecord();
                    ~CreateRecordBatchRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取记录类型, 详见 DescribeRecordType 接口
                     * @return RecordType 记录类型, 详见 DescribeRecordType 接口
                     * 
                     */
                    std::string GetRecordType() const;

                    /**
                     * 设置记录类型, 详见 DescribeRecordType 接口
                     * @param _recordType 记录类型, 详见 DescribeRecordType 接口
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
                     * 获取解析记录的线路，详见 DescribeRecordLineList 接口
                     * @return RecordLine 解析记录的线路，详见 DescribeRecordLineList 接口
                     * 
                     */
                    std::string GetRecordLine() const;

                    /**
                     * 设置解析记录的线路，详见 DescribeRecordLineList 接口
                     * @param _recordLine 解析记录的线路，详见 DescribeRecordLineList 接口
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
                     * 获取记录的 TTL 值
                     * @return TTL 记录的 TTL 值
                     * 
                     */
                    uint64_t GetTTL() const;

                    /**
                     * 设置记录的 TTL 值
                     * @param _tTL 记录的 TTL 值
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
                     * 获取记录添加状态
                     * @return Status 记录添加状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置记录添加状态
                     * @param _status 记录添加状态
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
                     * 获取操作类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Operation 操作类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operation 操作类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrMsg 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errMsg 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取此条记录在列表中的ID
                     * @return Id 此条记录在列表中的ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置此条记录在列表中的ID
                     * @param _id 此条记录在列表中的ID
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
                     * 获取记录的MX权重
                     * @return MX 记录的MX权重
                     * 
                     */
                    uint64_t GetMX() const;

                    /**
                     * 设置记录的MX权重
                     * @param _mX 记录的MX权重
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
                     * 获取记录的权重
                     * @return Weight 记录的权重
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置记录的权重
                     * @param _weight 记录的权重
                     * 
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                private:

                    /**
                     * 子域名(主机记录)。
                     */
                    std::string m_subDomain;
                    bool m_subDomainHasBeenSet;

                    /**
                     * 记录类型, 详见 DescribeRecordType 接口
                     */
                    std::string m_recordType;
                    bool m_recordTypeHasBeenSet;

                    /**
                     * 解析记录的线路，详见 DescribeRecordLineList 接口
                     */
                    std::string m_recordLine;
                    bool m_recordLineHasBeenSet;

                    /**
                     * 记录值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 记录的 TTL 值
                     */
                    uint64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * 记录添加状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 操作类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * 此条记录在列表中的ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 记录的MX权重
                     */
                    uint64_t m_mX;
                    bool m_mXHasBeenSet;

                    /**
                     * 记录的权重
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATERECORDBATCHRECORD_H_
