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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEBATCHTASKDETAIL_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEBATCHTASKDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/BatchRecordInfo.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 查看任务详情返回结构
                */
                class DescribeBatchTaskDetail : public AbstractModel
                {
                public:
                    DescribeBatchTaskDetail();
                    ~DescribeBatchTaskDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取见BatchRecordInfo
                     * @return RecordList 见BatchRecordInfo
                     * 
                     */
                    std::vector<BatchRecordInfo> GetRecordList() const;

                    /**
                     * 设置见BatchRecordInfo
                     * @param _recordList 见BatchRecordInfo
                     * 
                     */
                    void SetRecordList(const std::vector<BatchRecordInfo>& _recordList);

                    /**
                     * 判断参数 RecordList 是否已赋值
                     * @return RecordList 是否已赋值
                     * 
                     */
                    bool RecordListHasBeenSet() const;

                    /**
                     * 获取任务编号
                     * @return Id 任务编号
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置任务编号
                     * @param _id 任务编号
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
                     * 获取域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Domain 域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domain 域名
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取域名等级
                     * @return DomainGrade 域名等级
                     * 
                     */
                    std::string GetDomainGrade() const;

                    /**
                     * 设置域名等级
                     * @param _domainGrade 域名等级
                     * 
                     */
                    void SetDomainGrade(const std::string& _domainGrade);

                    /**
                     * 判断参数 DomainGrade 是否已赋值
                     * @return DomainGrade 是否已赋值
                     * 
                     */
                    bool DomainGradeHasBeenSet() const;

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
                     * 获取该条任务运行状态
                     * @return Status 该条任务运行状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置该条任务运行状态
                     * @param _status 该条任务运行状态
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
                     * 获取域名ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DomainId 域名ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDomainId() const;

                    /**
                     * 设置域名ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domainId 域名ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 见BatchRecordInfo
                     */
                    std::vector<BatchRecordInfo> m_recordList;
                    bool m_recordListHasBeenSet;

                    /**
                     * 任务编号
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 域名等级
                     */
                    std::string m_domainGrade;
                    bool m_domainGradeHasBeenSet;

                    /**
                     * 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * 该条任务运行状态
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
                     * 域名ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEBATCHTASKDETAIL_H_
