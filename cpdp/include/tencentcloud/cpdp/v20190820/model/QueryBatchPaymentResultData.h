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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYBATCHPAYMENTRESULTDATA_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYBATCHPAYMENTRESULTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/QueryBatchPaymentResultDataInfo.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * QueryBatchPaymentResult接口返回响应
                */
                class QueryBatchPaymentResultData : public AbstractModel
                {
                public:
                    QueryBatchPaymentResultData();
                    ~QueryBatchPaymentResultData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取批次号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BatchId 批次号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBatchId() const;

                    /**
                     * 设置批次号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _batchId 批次号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBatchId(const std::string& _batchId);

                    /**
                     * 判断参数 BatchId 是否已赋值
                     * @return BatchId 是否已赋值
                     * 
                     */
                    bool BatchIdHasBeenSet() const;

                    /**
                     * 获取批次总额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalAmount 批次总额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalAmount() const;

                    /**
                     * 设置批次总额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalAmount 批次总额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalAmount(const int64_t& _totalAmount);

                    /**
                     * 判断参数 TotalAmount 是否已赋值
                     * @return TotalAmount 是否已赋值
                     * 
                     */
                    bool TotalAmountHasBeenSet() const;

                    /**
                     * 获取批次总量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 批次总量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置批次总量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalCount 批次总量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取批次预留字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReqReserved 批次预留字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReqReserved() const;

                    /**
                     * 设置批次预留字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reqReserved 批次预留字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReqReserved(const std::string& _reqReserved);

                    /**
                     * 判断参数 ReqReserved 是否已赋值
                     * @return ReqReserved 是否已赋值
                     * 
                     */
                    bool ReqReservedHasBeenSet() const;

                    /**
                     * 获取批次备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 批次备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置批次备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 批次备注
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取渠道类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransferType 渠道类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTransferType() const;

                    /**
                     * 设置渠道类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _transferType 渠道类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTransferType(const int64_t& _transferType);

                    /**
                     * 判断参数 TransferType 是否已赋值
                     * @return TransferType 是否已赋值
                     * 
                     */
                    bool TransferTypeHasBeenSet() const;

                    /**
                     * 获取转账明细
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransferInfoList 转账明细
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<QueryBatchPaymentResultDataInfo> GetTransferInfoList() const;

                    /**
                     * 设置转账明细
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _transferInfoList 转账明细
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTransferInfoList(const std::vector<QueryBatchPaymentResultDataInfo>& _transferInfoList);

                    /**
                     * 判断参数 TransferInfoList 是否已赋值
                     * @return TransferInfoList 是否已赋值
                     * 
                     */
                    bool TransferInfoListHasBeenSet() const;

                private:

                    /**
                     * 批次号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_batchId;
                    bool m_batchIdHasBeenSet;

                    /**
                     * 批次总额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalAmount;
                    bool m_totalAmountHasBeenSet;

                    /**
                     * 批次总量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 批次预留字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reqReserved;
                    bool m_reqReservedHasBeenSet;

                    /**
                     * 批次备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 渠道类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_transferType;
                    bool m_transferTypeHasBeenSet;

                    /**
                     * 转账明细
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<QueryBatchPaymentResultDataInfo> m_transferInfoList;
                    bool m_transferInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYBATCHPAYMENTRESULTDATA_H_
