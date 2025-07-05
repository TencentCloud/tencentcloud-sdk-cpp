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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DELETERECORDBATCHDETAIL_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DELETERECORDBATCHDETAIL_H_

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
                * 批量删除记录详情
                */
                class DeleteRecordBatchDetail : public AbstractModel
                {
                public:
                    DeleteRecordBatchDetail();
                    ~DeleteRecordBatchDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名 ID
                     * @return DomainId 域名 ID
                     * 
                     */
                    uint64_t GetDomainId() const;

                    /**
                     * 设置域名 ID
                     * @param _domainId 域名 ID
                     * 
                     */
                    void SetDomainId(const uint64_t& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Error 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetError() const;

                    /**
                     * 设置错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _error 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetError(const std::string& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     * 
                     */
                    bool ErrorHasBeenSet() const;

                    /**
                     * 获取删除状态
                     * @return Status 删除状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置删除状态
                     * @param _status 删除状态
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
                     * 获取操作
                     * @return Operation 操作
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作
                     * @param _operation 操作
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
                     * 获取解析记录列表，json 序列化之后的字符串形式
                     * @return RecordList 解析记录列表，json 序列化之后的字符串形式
                     * 
                     */
                    std::string GetRecordList() const;

                    /**
                     * 设置解析记录列表，json 序列化之后的字符串形式
                     * @param _recordList 解析记录列表，json 序列化之后的字符串形式
                     * 
                     */
                    void SetRecordList(const std::string& _recordList);

                    /**
                     * 判断参数 RecordList 是否已赋值
                     * @return RecordList 是否已赋值
                     * 
                     */
                    bool RecordListHasBeenSet() const;

                private:

                    /**
                     * 域名 ID
                     */
                    uint64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_error;
                    bool m_errorHasBeenSet;

                    /**
                     * 删除状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 操作
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 解析记录列表，json 序列化之后的字符串形式
                     */
                    std::string m_recordList;
                    bool m_recordListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DELETERECORDBATCHDETAIL_H_
