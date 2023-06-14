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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKPAYMENTORDERRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKPAYMENTORDERRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/OpenBankRedirectInfo.h>
#include <tencentcloud/cpdp/v20190820/model/OpenBankApprovalGuideInfo.h>
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
                * 云企付-查询订单支付结果
                */
                class QueryOpenBankPaymentOrderResult : public AbstractModel
                {
                public:
                    QueryOpenBankPaymentOrderResult();
                    ~QueryOpenBankPaymentOrderResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取渠道商户号。外部接入平台入驻云企付平台下发
                     * @return ChannelMerchantId 渠道商户号。外部接入平台入驻云企付平台下发
                     * 
                     */
                    std::string GetChannelMerchantId() const;

                    /**
                     * 设置渠道商户号。外部接入平台入驻云企付平台下发
                     * @param _channelMerchantId 渠道商户号。外部接入平台入驻云企付平台下发
                     * 
                     */
                    void SetChannelMerchantId(const std::string& _channelMerchantId);

                    /**
                     * 判断参数 ChannelMerchantId 是否已赋值
                     * @return ChannelMerchantId 是否已赋值
                     * 
                     */
                    bool ChannelMerchantIdHasBeenSet() const;

                    /**
                     * 获取外部商户订单号
                     * @return OutOrderId 外部商户订单号
                     * 
                     */
                    std::string GetOutOrderId() const;

                    /**
                     * 设置外部商户订单号
                     * @param _outOrderId 外部商户订单号
                     * 
                     */
                    void SetOutOrderId(const std::string& _outOrderId);

                    /**
                     * 判断参数 OutOrderId 是否已赋值
                     * @return OutOrderId 是否已赋值
                     * 
                     */
                    bool OutOrderIdHasBeenSet() const;

                    /**
                     * 获取云企付平台订单号
                     * @return ChannelOrderId 云企付平台订单号
                     * 
                     */
                    std::string GetChannelOrderId() const;

                    /**
                     * 设置云企付平台订单号
                     * @param _channelOrderId 云企付平台订单号
                     * 
                     */
                    void SetChannelOrderId(const std::string& _channelOrderId);

                    /**
                     * 判断参数 ChannelOrderId 是否已赋值
                     * @return ChannelOrderId 是否已赋值
                     * 
                     */
                    bool ChannelOrderIdHasBeenSet() const;

                    /**
                     * 获取第三方支付平台订单号
                     * @return ThirdPayOrderId 第三方支付平台订单号
                     * 
                     */
                    std::string GetThirdPayOrderId() const;

                    /**
                     * 设置第三方支付平台订单号
                     * @param _thirdPayOrderId 第三方支付平台订单号
                     * 
                     */
                    void SetThirdPayOrderId(const std::string& _thirdPayOrderId);

                    /**
                     * 判断参数 ThirdPayOrderId 是否已赋值
                     * @return ThirdPayOrderId 是否已赋值
                     * 
                     */
                    bool ThirdPayOrderIdHasBeenSet() const;

                    /**
                     * 获取订单状态。
INIT：初始化
PAYING：支付中
ACCEPTED：支付受理成功
SUCCESS：支付成功
CLOSED：关单
PAY_FAIL：支付失败
REVOKE：退票
PART_REFUND：部分退款
FULL_REFUND：全部退款
                     * @return OrderStatus 订单状态。
INIT：初始化
PAYING：支付中
ACCEPTED：支付受理成功
SUCCESS：支付成功
CLOSED：关单
PAY_FAIL：支付失败
REVOKE：退票
PART_REFUND：部分退款
FULL_REFUND：全部退款
                     * 
                     */
                    std::string GetOrderStatus() const;

                    /**
                     * 设置订单状态。
INIT：初始化
PAYING：支付中
ACCEPTED：支付受理成功
SUCCESS：支付成功
CLOSED：关单
PAY_FAIL：支付失败
REVOKE：退票
PART_REFUND：部分退款
FULL_REFUND：全部退款
                     * @param _orderStatus 订单状态。
INIT：初始化
PAYING：支付中
ACCEPTED：支付受理成功
SUCCESS：支付成功
CLOSED：关单
PAY_FAIL：支付失败
REVOKE：退票
PART_REFUND：部分退款
FULL_REFUND：全部退款
                     * 
                     */
                    void SetOrderStatus(const std::string& _orderStatus);

                    /**
                     * 判断参数 OrderStatus 是否已赋值
                     * @return OrderStatus 是否已赋值
                     * 
                     */
                    bool OrderStatusHasBeenSet() const;

                    /**
                     * 获取支付渠道名称，如TENPAY
                     * @return ChannelName 支付渠道名称，如TENPAY
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置支付渠道名称，如TENPAY
                     * @param _channelName 支付渠道名称，如TENPAY
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取付款方式。如EBANK_PAYMENT
OPENBANK_PAYMENT
                     * @return PaymentMethod 付款方式。如EBANK_PAYMENT
OPENBANK_PAYMENT
                     * 
                     */
                    std::string GetPaymentMethod() const;

                    /**
                     * 设置付款方式。如EBANK_PAYMENT
OPENBANK_PAYMENT
                     * @param _paymentMethod 付款方式。如EBANK_PAYMENT
OPENBANK_PAYMENT
                     * 
                     */
                    void SetPaymentMethod(const std::string& _paymentMethod);

                    /**
                     * 判断参数 PaymentMethod 是否已赋值
                     * @return PaymentMethod 是否已赋值
                     * 
                     */
                    bool PaymentMethodHasBeenSet() const;

                    /**
                     * 获取订单金额。单位分
                     * @return TotalAmount 订单金额。单位分
                     * 
                     */
                    int64_t GetTotalAmount() const;

                    /**
                     * 设置订单金额。单位分
                     * @param _totalAmount 订单金额。单位分
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
                     * 获取实际支付金额。单位分，支付成功时返回
                     * @return PayAmount 实际支付金额。单位分，支付成功时返回
                     * 
                     */
                    int64_t GetPayAmount() const;

                    /**
                     * 设置实际支付金额。单位分，支付成功时返回
                     * @param _payAmount 实际支付金额。单位分，支付成功时返回
                     * 
                     */
                    void SetPayAmount(const int64_t& _payAmount);

                    /**
                     * 判断参数 PayAmount 是否已赋值
                     * @return PayAmount 是否已赋值
                     * 
                     */
                    bool PayAmountHasBeenSet() const;

                    /**
                     * 获取失败原因，若失败的返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailReason 失败原因，若失败的返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置失败原因，若失败的返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failReason 失败原因，若失败的返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFailReason(const std::string& _failReason);

                    /**
                     * 判断参数 FailReason 是否已赋值
                     * @return FailReason 是否已赋值
                     * 
                     */
                    bool FailReasonHasBeenSet() const;

                    /**
                     * 获取附加信息，查询时原样透传
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Attachment 附加信息，查询时原样透传
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAttachment() const;

                    /**
                     * 设置附加信息，查询时原样透传
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attachment 附加信息，查询时原样透传
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttachment(const std::string& _attachment);

                    /**
                     * 判断参数 Attachment 是否已赋值
                     * @return Attachment 是否已赋值
                     * 
                     */
                    bool AttachmentHasBeenSet() const;

                    /**
                     * 获取重定向参数，用于客户端跳转，订单未支付时返回该参数
渠道为TENPAY，付款方式为EBANK_PAYMENT时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RedirectInfo 重定向参数，用于客户端跳转，订单未支付时返回该参数
渠道为TENPAY，付款方式为EBANK_PAYMENT时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OpenBankRedirectInfo GetRedirectInfo() const;

                    /**
                     * 设置重定向参数，用于客户端跳转，订单未支付时返回该参数
渠道为TENPAY，付款方式为EBANK_PAYMENT时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _redirectInfo 重定向参数，用于客户端跳转，订单未支付时返回该参数
渠道为TENPAY，付款方式为EBANK_PAYMENT时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRedirectInfo(const OpenBankRedirectInfo& _redirectInfo);

                    /**
                     * 判断参数 RedirectInfo 是否已赋值
                     * @return RedirectInfo 是否已赋值
                     * 
                     */
                    bool RedirectInfoHasBeenSet() const;

                    /**
                     * 获取第三方渠道返回信息，见渠道特殊说明,详情见附录-复杂类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalReturnData 第三方渠道返回信息，见渠道特殊说明,详情见附录-复杂类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExternalReturnData() const;

                    /**
                     * 设置第三方渠道返回信息，见渠道特殊说明,详情见附录-复杂类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _externalReturnData 第三方渠道返回信息，见渠道特殊说明,详情见附录-复杂类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExternalReturnData(const std::string& _externalReturnData);

                    /**
                     * 判断参数 ExternalReturnData 是否已赋值
                     * @return ExternalReturnData 是否已赋值
                     * 
                     */
                    bool ExternalReturnDataHasBeenSet() const;

                    /**
                     * 获取银行复核指引。当TENPAY下OPENBANT_PAYMENT时，下单受理成功是返回。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BankApprovalGuideInfo 银行复核指引。当TENPAY下OPENBANT_PAYMENT时，下单受理成功是返回。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OpenBankApprovalGuideInfo GetBankApprovalGuideInfo() const;

                    /**
                     * 设置银行复核指引。当TENPAY下OPENBANT_PAYMENT时，下单受理成功是返回。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bankApprovalGuideInfo 银行复核指引。当TENPAY下OPENBANT_PAYMENT时，下单受理成功是返回。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBankApprovalGuideInfo(const OpenBankApprovalGuideInfo& _bankApprovalGuideInfo);

                    /**
                     * 判断参数 BankApprovalGuideInfo 是否已赋值
                     * @return BankApprovalGuideInfo 是否已赋值
                     * 
                     */
                    bool BankApprovalGuideInfoHasBeenSet() const;

                    /**
                     * 获取手续费金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FeeAmount 手续费金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFeeAmount() const;

                    /**
                     * 设置手续费金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _feeAmount 手续费金额
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
                     * 获取手续费费率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FeeRate 手续费费率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFeeRate() const;

                    /**
                     * 设置手续费费率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _feeRate 手续费费率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFeeRate(const int64_t& _feeRate);

                    /**
                     * 判断参数 FeeRate 是否已赋值
                     * @return FeeRate 是否已赋值
                     * 
                     */
                    bool FeeRateHasBeenSet() const;

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

                    /**
                     * 获取支付完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeFinish 支付完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTimeFinish() const;

                    /**
                     * 设置支付完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeFinish 支付完成时间
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

                private:

                    /**
                     * 渠道商户号。外部接入平台入驻云企付平台下发
                     */
                    std::string m_channelMerchantId;
                    bool m_channelMerchantIdHasBeenSet;

                    /**
                     * 外部商户订单号
                     */
                    std::string m_outOrderId;
                    bool m_outOrderIdHasBeenSet;

                    /**
                     * 云企付平台订单号
                     */
                    std::string m_channelOrderId;
                    bool m_channelOrderIdHasBeenSet;

                    /**
                     * 第三方支付平台订单号
                     */
                    std::string m_thirdPayOrderId;
                    bool m_thirdPayOrderIdHasBeenSet;

                    /**
                     * 订单状态。
INIT：初始化
PAYING：支付中
ACCEPTED：支付受理成功
SUCCESS：支付成功
CLOSED：关单
PAY_FAIL：支付失败
REVOKE：退票
PART_REFUND：部分退款
FULL_REFUND：全部退款
                     */
                    std::string m_orderStatus;
                    bool m_orderStatusHasBeenSet;

                    /**
                     * 支付渠道名称，如TENPAY
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 付款方式。如EBANK_PAYMENT
OPENBANK_PAYMENT
                     */
                    std::string m_paymentMethod;
                    bool m_paymentMethodHasBeenSet;

                    /**
                     * 订单金额。单位分
                     */
                    int64_t m_totalAmount;
                    bool m_totalAmountHasBeenSet;

                    /**
                     * 实际支付金额。单位分，支付成功时返回
                     */
                    int64_t m_payAmount;
                    bool m_payAmountHasBeenSet;

                    /**
                     * 失败原因，若失败的返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                    /**
                     * 附加信息，查询时原样透传
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attachment;
                    bool m_attachmentHasBeenSet;

                    /**
                     * 重定向参数，用于客户端跳转，订单未支付时返回该参数
渠道为TENPAY，付款方式为EBANK_PAYMENT时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OpenBankRedirectInfo m_redirectInfo;
                    bool m_redirectInfoHasBeenSet;

                    /**
                     * 第三方渠道返回信息，见渠道特殊说明,详情见附录-复杂类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_externalReturnData;
                    bool m_externalReturnDataHasBeenSet;

                    /**
                     * 银行复核指引。当TENPAY下OPENBANT_PAYMENT时，下单受理成功是返回。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OpenBankApprovalGuideInfo m_bankApprovalGuideInfo;
                    bool m_bankApprovalGuideInfoHasBeenSet;

                    /**
                     * 手续费金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_feeAmount;
                    bool m_feeAmountHasBeenSet;

                    /**
                     * 手续费费率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_feeRate;
                    bool m_feeRateHasBeenSet;

                    /**
                     * 分账信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OpenBankProfitShareRespInfo> m_profitShareRespInfoList;
                    bool m_profitShareRespInfoListHasBeenSet;

                    /**
                     * 支付完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timeFinish;
                    bool m_timeFinishHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKPAYMENTORDERRESULT_H_
