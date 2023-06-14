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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKQUERYREFUNDORDERRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKQUERYREFUNDORDERRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/OpenBankProfitShareRespInfo.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 云企付-退款查询结果
                */
                class OpenBankQueryRefundOrderResult : public AbstractModel
                {
                public:
                    OpenBankQueryRefundOrderResult();
                    ~OpenBankQueryRefundOrderResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取外部商户退款单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutRefundId 外部商户退款单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutRefundId() const;

                    /**
                     * 设置外部商户退款单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outRefundId 外部商户退款单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutRefundId(const std::string& _outRefundId);

                    /**
                     * 判断参数 OutRefundId 是否已赋值
                     * @return OutRefundId 是否已赋值
                     * 
                     */
                    bool OutRefundIdHasBeenSet() const;

                    /**
                     * 获取渠道退款单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelRefundId 渠道退款单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelRefundId() const;

                    /**
                     * 设置渠道退款单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelRefundId 渠道退款单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChannelRefundId(const std::string& _channelRefundId);

                    /**
                     * 判断参数 ChannelRefundId 是否已赋值
                     * @return ChannelRefundId 是否已赋值
                     * 
                     */
                    bool ChannelRefundIdHasBeenSet() const;

                    /**
                     * 获取退款原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RefundReason 退款原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRefundReason() const;

                    /**
                     * 设置退款原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _refundReason 退款原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRefundReason(const std::string& _refundReason);

                    /**
                     * 判断参数 RefundReason 是否已赋值
                     * @return RefundReason 是否已赋值
                     * 
                     */
                    bool RefundReasonHasBeenSet() const;

                    /**
                     * 获取退款金额，单位分
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RefundAmount 退款金额，单位分
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRefundAmount() const;

                    /**
                     * 设置退款金额，单位分
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _refundAmount 退款金额，单位分
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRefundAmount(const int64_t& _refundAmount);

                    /**
                     * 判断参数 RefundAmount 是否已赋值
                     * @return RefundAmount 是否已赋值
                     * 
                     */
                    bool RefundAmountHasBeenSet() const;

                    /**
                     * 获取实际退款金额，单位分
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RealRefundAmount 实际退款金额，单位分
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRealRefundAmount() const;

                    /**
                     * 设置实际退款金额，单位分
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _realRefundAmount 实际退款金额，单位分
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRealRefundAmount(const int64_t& _realRefundAmount);

                    /**
                     * 判断参数 RealRefundAmount 是否已赋值
                     * @return RealRefundAmount 是否已赋值
                     * 
                     */
                    bool RealRefundAmountHasBeenSet() const;

                    /**
                     * 获取原支付订单总金额，单位分
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalAmount 原支付订单总金额，单位分
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalAmount() const;

                    /**
                     * 设置原支付订单总金额，单位分
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalAmount 原支付订单总金额，单位分
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
                     * 获取退款完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeFinish 退款完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTimeFinish() const;

                    /**
                     * 设置退款完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeFinish 退款完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeFinish(const std::string& _timeFinish);

                    /**
                     * 判断参数 TimeFinish 是否已赋值
                     * @return TimeFinish 是否已赋值
                     * 
                     */
                    bool TimeFinishHasBeenSet() const;

                    /**
                     * 获取退款订单状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RefundStatus 退款订单状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRefundStatus() const;

                    /**
                     * 设置退款订单状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _refundStatus 退款订单状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRefundStatus(const std::string& _refundStatus);

                    /**
                     * 判断参数 RefundStatus 是否已赋值
                     * @return RefundStatus 是否已赋值
                     * 
                     */
                    bool RefundStatusHasBeenSet() const;

                    /**
                     * 获取退款明细信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RefundInfo 退款明细信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRefundInfo() const;

                    /**
                     * 设置退款明细信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _refundInfo 退款明细信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRefundInfo(const std::string& _refundInfo);

                    /**
                     * 判断参数 RefundInfo 是否已赋值
                     * @return RefundInfo 是否已赋值
                     * 
                     */
                    bool RefundInfoHasBeenSet() const;

                    /**
                     * 获取退款手续费金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FeeAmount 退款手续费金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFeeAmount() const;

                    /**
                     * 设置退款手续费金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _feeAmount 退款手续费金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFeeAmount(const int64_t& _feeAmount);

                    /**
                     * 判断参数 FeeAmount 是否已赋值
                     * @return FeeAmount 是否已赋值
                     * 
                     */
                    bool FeeAmountHasBeenSet() const;

                    /**
                     * 获取退款返回描述，比如失败原因等。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RefundMessage 退款返回描述，比如失败原因等。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRefundMessage() const;

                    /**
                     * 设置退款返回描述，比如失败原因等。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _refundMessage 退款返回描述，比如失败原因等。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRefundMessage(const std::string& _refundMessage);

                    /**
                     * 判断参数 RefundMessage 是否已赋值
                     * @return RefundMessage 是否已赋值
                     * 
                     */
                    bool RefundMessageHasBeenSet() const;

                    /**
                     * 获取分账信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProfitShareRespInfoList 分账信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<OpenBankProfitShareRespInfo> GetProfitShareRespInfoList() const;

                    /**
                     * 设置分账信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _profitShareRespInfoList 分账信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProfitShareRespInfoList(const std::vector<OpenBankProfitShareRespInfo>& _profitShareRespInfoList);

                    /**
                     * 判断参数 ProfitShareRespInfoList 是否已赋值
                     * @return ProfitShareRespInfoList 是否已赋值
                     * 
                     */
                    bool ProfitShareRespInfoListHasBeenSet() const;

                private:

                    /**
                     * 外部商户退款单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outRefundId;
                    bool m_outRefundIdHasBeenSet;

                    /**
                     * 渠道退款单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelRefundId;
                    bool m_channelRefundIdHasBeenSet;

                    /**
                     * 退款原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_refundReason;
                    bool m_refundReasonHasBeenSet;

                    /**
                     * 退款金额，单位分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_refundAmount;
                    bool m_refundAmountHasBeenSet;

                    /**
                     * 实际退款金额，单位分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_realRefundAmount;
                    bool m_realRefundAmountHasBeenSet;

                    /**
                     * 原支付订单总金额，单位分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalAmount;
                    bool m_totalAmountHasBeenSet;

                    /**
                     * 退款完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timeFinish;
                    bool m_timeFinishHasBeenSet;

                    /**
                     * 退款订单状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_refundStatus;
                    bool m_refundStatusHasBeenSet;

                    /**
                     * 退款明细信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_refundInfo;
                    bool m_refundInfoHasBeenSet;

                    /**
                     * 退款手续费金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_feeAmount;
                    bool m_feeAmountHasBeenSet;

                    /**
                     * 退款返回描述，比如失败原因等。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_refundMessage;
                    bool m_refundMessageHasBeenSet;

                    /**
                     * 分账信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OpenBankProfitShareRespInfo> m_profitShareRespInfoList;
                    bool m_profitShareRespInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKQUERYREFUNDORDERRESULT_H_
