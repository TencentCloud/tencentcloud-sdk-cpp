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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYTRANSFERBATCHRESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYTRANSFERBATCHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/TransferDetailResponse.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * QueryTransferBatch返回参数结构体
                */
                class QueryTransferBatchResponse : public AbstractModel
                {
                public:
                    QueryTransferBatchResponse();
                    ~QueryTransferBatchResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取商户号。
示例值：19300009329
                     * @return MerchantId 商户号。
示例值：19300009329
                     * 
                     */
                    std::string GetMerchantId() const;

                    /**
                     * 判断参数 MerchantId 是否已赋值
                     * @return MerchantId 是否已赋值
                     * 
                     */
                    bool MerchantIdHasBeenSet() const;

                    /**
                     * 获取商家批次单号。
商户系统内部的商家批次单号，此参数只能由数字、字母组成，商户系统内部唯一，UTF8编码，最多32个字符。
示例值：plfk2020042013
                     * @return MerchantBatchNo 商家批次单号。
商户系统内部的商家批次单号，此参数只能由数字、字母组成，商户系统内部唯一，UTF8编码，最多32个字符。
示例值：plfk2020042013
                     * 
                     */
                    std::string GetMerchantBatchNo() const;

                    /**
                     * 判断参数 MerchantBatchNo 是否已赋值
                     * @return MerchantBatchNo 是否已赋值
                     * 
                     */
                    bool MerchantBatchNoHasBeenSet() const;

                    /**
                     * 获取微信批次单号。
微信商家转账系统返回的唯一标识。
示例值：1030000071100999991182020050700019480001
                     * @return BatchId 微信批次单号。
微信商家转账系统返回的唯一标识。
示例值：1030000071100999991182020050700019480001
                     * 
                     */
                    std::string GetBatchId() const;

                    /**
                     * 判断参数 BatchId 是否已赋值
                     * @return BatchId 是否已赋值
                     * 
                     */
                    bool BatchIdHasBeenSet() const;

                    /**
                     * 获取直连商户appId。
商户号绑定的appid。
示例值：wxf636efh567hg4356
                     * @return MerchantAppId 直连商户appId。
商户号绑定的appid。
示例值：wxf636efh567hg4356
                     * 
                     */
                    std::string GetMerchantAppId() const;

                    /**
                     * 判断参数 MerchantAppId 是否已赋值
                     * @return MerchantAppId 是否已赋值
                     * 
                     */
                    bool MerchantAppIdHasBeenSet() const;

                    /**
                     * 获取批次状态。
ACCEPTED:已受理，批次已受理成功，若发起批量转账的30分钟后，转账批次单仍处于该状态，可能原因是商户账户余额不足等。商户可查询账户资金流水，若该笔转账批次单的扣款已经发生，则表示批次已经进入转账中，请再次查单确认；
PROCESSING:转账中，已开始处理批次内的转账明细单；
FINISHED:已完成，批次内的所有转账明细单都已处理完成；
CLOSED:已关闭，可查询具体的批次关闭原因确认；
示例值：ACCEPTED
                     * @return BatchStatus 批次状态。
ACCEPTED:已受理，批次已受理成功，若发起批量转账的30分钟后，转账批次单仍处于该状态，可能原因是商户账户余额不足等。商户可查询账户资金流水，若该笔转账批次单的扣款已经发生，则表示批次已经进入转账中，请再次查单确认；
PROCESSING:转账中，已开始处理批次内的转账明细单；
FINISHED:已完成，批次内的所有转账明细单都已处理完成；
CLOSED:已关闭，可查询具体的批次关闭原因确认；
示例值：ACCEPTED
                     * 
                     */
                    std::string GetBatchStatus() const;

                    /**
                     * 判断参数 BatchStatus 是否已赋值
                     * @return BatchStatus 是否已赋值
                     * 
                     */
                    bool BatchStatusHasBeenSet() const;

                    /**
                     * 获取批次关闭原因。
如果批次单状态为“CLOSED”（已关闭），则有关闭原因；
MERCHANT_REVOCATION：商户主动撤销；
OVERDUE_CLOSE：系统超时关闭。
示例值：OVERDUE_CLOSE
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CloseReason 批次关闭原因。
如果批次单状态为“CLOSED”（已关闭），则有关闭原因；
MERCHANT_REVOCATION：商户主动撤销；
OVERDUE_CLOSE：系统超时关闭。
示例值：OVERDUE_CLOSE
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCloseReason() const;

                    /**
                     * 判断参数 CloseReason 是否已赋值
                     * @return CloseReason 是否已赋值
                     * 
                     */
                    bool CloseReasonHasBeenSet() const;

                    /**
                     * 获取转账总金额。
转账金额，单位为分。
示例值：4000000
                     * @return TotalAmount 转账总金额。
转账金额，单位为分。
示例值：4000000
                     * 
                     */
                    uint64_t GetTotalAmount() const;

                    /**
                     * 判断参数 TotalAmount 是否已赋值
                     * @return TotalAmount 是否已赋值
                     * 
                     */
                    bool TotalAmountHasBeenSet() const;

                    /**
                     * 获取转账总笔数。
一个转账批次最多允许发起三千笔转账。
示例值：200
                     * @return TotalNum 转账总笔数。
一个转账批次最多允许发起三千笔转账。
示例值：200
                     * 
                     */
                    uint64_t GetTotalNum() const;

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     * 
                     */
                    bool TotalNumHasBeenSet() const;

                    /**
                     * 获取批次受理成功时返回，遵循rfc3339标准格式。格式为YYYY-MM-DDTHH:mm:ss.sss+TIMEZONE，YYYY-MM-DD表示年月日，T出现在字符串中，表示time元素的开头，HH:mm:ss.sss表示时分秒毫秒，TIMEZONE表示时区（+08:00表示东八区时间，领先UTC 8小时，即北京时间）。例如：2015-05-20T13:29:35.120+08:00表示北京时间2015年05月20日13点29分35秒。
示例值：2015-05-20T13:29:35.120+08:00
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 批次受理成功时返回，遵循rfc3339标准格式。格式为YYYY-MM-DDTHH:mm:ss.sss+TIMEZONE，YYYY-MM-DD表示年月日，T出现在字符串中，表示time元素的开头，HH:mm:ss.sss表示时分秒毫秒，TIMEZONE表示时区（+08:00表示东八区时间，领先UTC 8小时，即北京时间）。例如：2015-05-20T13:29:35.120+08:00表示北京时间2015年05月20日13点29分35秒。
示例值：2015-05-20T13:29:35.120+08:00
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取批次最近一次更新时间，遵循rfc3339标准格式。格式为YYYY-MM-DDTHH:mm:ss.sss+TIMEZONE，YYYY-MM-DD表示年月日，T出现在字符串中，表示time元素的开头，HH:mm:ss.sss表示时分秒毫秒，TIMEZONE表示时区（+08:00表示东八区时间，领先UTC 8小时，即北京时间）。例如：2015-05-20T13:29:35.120+08:00表示北京时间2015年05月20日13点29分35秒。
示例值：2015-05-20T13:29:35.120+08:00
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 批次最近一次更新时间，遵循rfc3339标准格式。格式为YYYY-MM-DDTHH:mm:ss.sss+TIMEZONE，YYYY-MM-DD表示年月日，T出现在字符串中，表示time元素的开头，HH:mm:ss.sss表示时分秒毫秒，TIMEZONE表示时区（+08:00表示东八区时间，领先UTC 8小时，即北京时间）。例如：2015-05-20T13:29:35.120+08:00表示北京时间2015年05月20日13点29分35秒。
示例值：2015-05-20T13:29:35.120+08:00
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取转账成功金额。
转账成功的金额，单位为分，可能随时变化。
示例值：4000000
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuccessAmount 转账成功金额。
转账成功的金额，单位为分，可能随时变化。
示例值：4000000
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSuccessAmount() const;

                    /**
                     * 判断参数 SuccessAmount 是否已赋值
                     * @return SuccessAmount 是否已赋值
                     * 
                     */
                    bool SuccessAmountHasBeenSet() const;

                    /**
                     * 获取转账成功的笔数。
可能随时变化。
示例值：200
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuccessNum 转账成功的笔数。
可能随时变化。
示例值：200
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSuccessNum() const;

                    /**
                     * 判断参数 SuccessNum 是否已赋值
                     * @return SuccessNum 是否已赋值
                     * 
                     */
                    bool SuccessNumHasBeenSet() const;

                    /**
                     * 获取转账失败金额。
转账失败的金额，单位为分，可能随时变化。
示例值：4000000
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailAmount 转账失败金额。
转账失败的金额，单位为分，可能随时变化。
示例值：4000000
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFailAmount() const;

                    /**
                     * 判断参数 FailAmount 是否已赋值
                     * @return FailAmount 是否已赋值
                     * 
                     */
                    bool FailAmountHasBeenSet() const;

                    /**
                     * 获取转账失败笔数。
可能随时变化。
示例值：200
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailNum 转账失败笔数。
可能随时变化。
示例值：200
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFailNum() const;

                    /**
                     * 判断参数 FailNum 是否已赋值
                     * @return FailNum 是否已赋值
                     * 
                     */
                    bool FailNumHasBeenSet() const;

                    /**
                     * 获取转账明细列表。
返回明细详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransferDetails 转账明细列表。
返回明细详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TransferDetailResponse> GetTransferDetails() const;

                    /**
                     * 判断参数 TransferDetails 是否已赋值
                     * @return TransferDetails 是否已赋值
                     * 
                     */
                    bool TransferDetailsHasBeenSet() const;

                    /**
                     * 获取批次类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BatchType 批次类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBatchType() const;

                    /**
                     * 判断参数 BatchType 是否已赋值
                     * @return BatchType 是否已赋值
                     * 
                     */
                    bool BatchTypeHasBeenSet() const;

                    /**
                     * 获取批次名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BatchName 批次名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBatchName() const;

                    /**
                     * 判断参数 BatchName 是否已赋值
                     * @return BatchName 是否已赋值
                     * 
                     */
                    bool BatchNameHasBeenSet() const;

                    /**
                     * 获取批次标注。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BatchRemark 批次标注。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBatchRemark() const;

                    /**
                     * 判断参数 BatchRemark 是否已赋值
                     * @return BatchRemark 是否已赋值
                     * 
                     */
                    bool BatchRemarkHasBeenSet() const;

                private:

                    /**
                     * 商户号。
示例值：19300009329
                     */
                    std::string m_merchantId;
                    bool m_merchantIdHasBeenSet;

                    /**
                     * 商家批次单号。
商户系统内部的商家批次单号，此参数只能由数字、字母组成，商户系统内部唯一，UTF8编码，最多32个字符。
示例值：plfk2020042013
                     */
                    std::string m_merchantBatchNo;
                    bool m_merchantBatchNoHasBeenSet;

                    /**
                     * 微信批次单号。
微信商家转账系统返回的唯一标识。
示例值：1030000071100999991182020050700019480001
                     */
                    std::string m_batchId;
                    bool m_batchIdHasBeenSet;

                    /**
                     * 直连商户appId。
商户号绑定的appid。
示例值：wxf636efh567hg4356
                     */
                    std::string m_merchantAppId;
                    bool m_merchantAppIdHasBeenSet;

                    /**
                     * 批次状态。
ACCEPTED:已受理，批次已受理成功，若发起批量转账的30分钟后，转账批次单仍处于该状态，可能原因是商户账户余额不足等。商户可查询账户资金流水，若该笔转账批次单的扣款已经发生，则表示批次已经进入转账中，请再次查单确认；
PROCESSING:转账中，已开始处理批次内的转账明细单；
FINISHED:已完成，批次内的所有转账明细单都已处理完成；
CLOSED:已关闭，可查询具体的批次关闭原因确认；
示例值：ACCEPTED
                     */
                    std::string m_batchStatus;
                    bool m_batchStatusHasBeenSet;

                    /**
                     * 批次关闭原因。
如果批次单状态为“CLOSED”（已关闭），则有关闭原因；
MERCHANT_REVOCATION：商户主动撤销；
OVERDUE_CLOSE：系统超时关闭。
示例值：OVERDUE_CLOSE
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_closeReason;
                    bool m_closeReasonHasBeenSet;

                    /**
                     * 转账总金额。
转账金额，单位为分。
示例值：4000000
                     */
                    uint64_t m_totalAmount;
                    bool m_totalAmountHasBeenSet;

                    /**
                     * 转账总笔数。
一个转账批次最多允许发起三千笔转账。
示例值：200
                     */
                    uint64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                    /**
                     * 批次受理成功时返回，遵循rfc3339标准格式。格式为YYYY-MM-DDTHH:mm:ss.sss+TIMEZONE，YYYY-MM-DD表示年月日，T出现在字符串中，表示time元素的开头，HH:mm:ss.sss表示时分秒毫秒，TIMEZONE表示时区（+08:00表示东八区时间，领先UTC 8小时，即北京时间）。例如：2015-05-20T13:29:35.120+08:00表示北京时间2015年05月20日13点29分35秒。
示例值：2015-05-20T13:29:35.120+08:00
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 批次最近一次更新时间，遵循rfc3339标准格式。格式为YYYY-MM-DDTHH:mm:ss.sss+TIMEZONE，YYYY-MM-DD表示年月日，T出现在字符串中，表示time元素的开头，HH:mm:ss.sss表示时分秒毫秒，TIMEZONE表示时区（+08:00表示东八区时间，领先UTC 8小时，即北京时间）。例如：2015-05-20T13:29:35.120+08:00表示北京时间2015年05月20日13点29分35秒。
示例值：2015-05-20T13:29:35.120+08:00
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 转账成功金额。
转账成功的金额，单位为分，可能随时变化。
示例值：4000000
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_successAmount;
                    bool m_successAmountHasBeenSet;

                    /**
                     * 转账成功的笔数。
可能随时变化。
示例值：200
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_successNum;
                    bool m_successNumHasBeenSet;

                    /**
                     * 转账失败金额。
转账失败的金额，单位为分，可能随时变化。
示例值：4000000
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_failAmount;
                    bool m_failAmountHasBeenSet;

                    /**
                     * 转账失败笔数。
可能随时变化。
示例值：200
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_failNum;
                    bool m_failNumHasBeenSet;

                    /**
                     * 转账明细列表。
返回明细详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TransferDetailResponse> m_transferDetails;
                    bool m_transferDetailsHasBeenSet;

                    /**
                     * 批次类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_batchType;
                    bool m_batchTypeHasBeenSet;

                    /**
                     * 批次名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_batchName;
                    bool m_batchNameHasBeenSet;

                    /**
                     * 批次标注。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_batchRemark;
                    bool m_batchRemarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYTRANSFERBATCHRESPONSE_H_
