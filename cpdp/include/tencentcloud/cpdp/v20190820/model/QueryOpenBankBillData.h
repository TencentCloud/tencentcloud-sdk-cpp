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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKBILLDATA_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKBILLDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 云企付-分页查询对账单数据结果
                */
                class QueryOpenBankBillData : public AbstractModel
                {
                public:
                    QueryOpenBankBillData();
                    ~QueryOpenBankBillData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取交易日期
                     * @return BillDate 交易日期
                     * 
                     */
                    std::string GetBillDate() const;

                    /**
                     * 设置交易日期
                     * @param _billDate 交易日期
                     * 
                     */
                    void SetBillDate(const std::string& _billDate);

                    /**
                     * 判断参数 BillDate 是否已赋值
                     * @return BillDate 是否已赋值
                     * 
                     */
                    bool BillDateHasBeenSet() const;

                    /**
                     * 获取渠道编码
                     * @return Channel 渠道编码
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置渠道编码
                     * @param _channel 渠道编码
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取二级渠道
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubChannel 二级渠道
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubChannel() const;

                    /**
                     * 设置二级渠道
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subChannel 二级渠道
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubChannel(const std::string& _subChannel);

                    /**
                     * 判断参数 SubChannel 是否已赋值
                     * @return SubChannel 是否已赋值
                     * 
                     */
                    bool SubChannelHasBeenSet() const;

                    /**
                     * 获取系统父商户号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentMerchantId 系统父商户号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParentMerchantId() const;

                    /**
                     * 设置系统父商户号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentMerchantId 系统父商户号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentMerchantId(const std::string& _parentMerchantId);

                    /**
                     * 判断参数 ParentMerchantId 是否已赋值
                     * @return ParentMerchantId 是否已赋值
                     * 
                     */
                    bool ParentMerchantIdHasBeenSet() const;

                    /**
                     * 获取外部商户号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutMerchantId 外部商户号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutMerchantId() const;

                    /**
                     * 设置外部商户号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outMerchantId 外部商户号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutMerchantId(const std::string& _outMerchantId);

                    /**
                     * 判断参数 OutMerchantId 是否已赋值
                     * @return OutMerchantId 是否已赋值
                     * 
                     */
                    bool OutMerchantIdHasBeenSet() const;

                    /**
                     * 获取系统商户号
                     * @return MerchantId 系统商户号
                     * 
                     */
                    std::string GetMerchantId() const;

                    /**
                     * 设置系统商户号
                     * @param _merchantId 系统商户号
                     * 
                     */
                    void SetMerchantId(const std::string& _merchantId);

                    /**
                     * 判断参数 MerchantId 是否已赋值
                     * @return MerchantId 是否已赋值
                     * 
                     */
                    bool MerchantIdHasBeenSet() const;

                    /**
                     * 获取第三方商户号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndMerchantId 第三方商户号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndMerchantId() const;

                    /**
                     * 设置第三方商户号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endMerchantId 第三方商户号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndMerchantId(const std::string& _endMerchantId);

                    /**
                     * 判断参数 EndMerchantId 是否已赋值
                     * @return EndMerchantId 是否已赋值
                     * 
                     */
                    bool EndMerchantIdHasBeenSet() const;

                    /**
                     * 获取外部订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutTradeNo 外部订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutTradeNo() const;

                    /**
                     * 设置外部订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outTradeNo 外部订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutTradeNo(const std::string& _outTradeNo);

                    /**
                     * 判断参数 OutTradeNo 是否已赋值
                     * @return OutTradeNo 是否已赋值
                     * 
                     */
                    bool OutTradeNoHasBeenSet() const;

                    /**
                     * 获取系统订单号
                     * @return TradeNo 系统订单号
                     * 
                     */
                    std::string GetTradeNo() const;

                    /**
                     * 设置系统订单号
                     * @param _tradeNo 系统订单号
                     * 
                     */
                    void SetTradeNo(const std::string& _tradeNo);

                    /**
                     * 判断参数 TradeNo 是否已赋值
                     * @return TradeNo 是否已赋值
                     * 
                     */
                    bool TradeNoHasBeenSet() const;

                    /**
                     * 获取第三方订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTradeNo 第三方订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTradeNo() const;

                    /**
                     * 设置第三方订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTradeNo 第三方订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTradeNo(const std::string& _endTradeNo);

                    /**
                     * 判断参数 EndTradeNo 是否已赋值
                     * @return EndTradeNo 是否已赋值
                     * 
                     */
                    bool EndTradeNoHasBeenSet() const;

                    /**
                     * 获取收付类型，PAYMENT:付款，INCOME:收款
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentType 收付类型，PAYMENT:付款，INCOME:收款
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaymentType() const;

                    /**
                     * 设置收付类型，PAYMENT:付款，INCOME:收款
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paymentType 收付类型，PAYMENT:付款，INCOME:收款
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPaymentType(const std::string& _paymentType);

                    /**
                     * 判断参数 PaymentType 是否已赋值
                     * @return PaymentType 是否已赋值
                     * 
                     */
                    bool PaymentTypeHasBeenSet() const;

                    /**
                     * 获取业务类型，WITHDRAW:提现，PAY:支付，RECHARGE:充值，TRANSFER:转账，REFUND:退款
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BusinessType 业务类型，WITHDRAW:提现，PAY:支付，RECHARGE:充值，TRANSFER:转账，REFUND:退款
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBusinessType() const;

                    /**
                     * 设置业务类型，WITHDRAW:提现，PAY:支付，RECHARGE:充值，TRANSFER:转账，REFUND:退款
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _businessType 业务类型，WITHDRAW:提现，PAY:支付，RECHARGE:充值，TRANSFER:转账，REFUND:退款
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBusinessType(const std::string& _businessType);

                    /**
                     * 判断参数 BusinessType 是否已赋值
                     * @return BusinessType 是否已赋值
                     * 
                     */
                    bool BusinessTypeHasBeenSet() const;

                    /**
                     * 获取发起交易时间，格式yyyy-MM-dd HH:mm:ss
                     * @return TradeTime 发起交易时间，格式yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetTradeTime() const;

                    /**
                     * 设置发起交易时间，格式yyyy-MM-dd HH:mm:ss
                     * @param _tradeTime 发起交易时间，格式yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    void SetTradeTime(const std::string& _tradeTime);

                    /**
                     * 判断参数 TradeTime 是否已赋值
                     * @return TradeTime 是否已赋值
                     * 
                     */
                    bool TradeTimeHasBeenSet() const;

                    /**
                     * 获取交易完成时间，格式yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FinishTime 交易完成时间，格式yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置交易完成时间，格式yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _finishTime 交易完成时间，格式yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取交易状态，0:未知，1:成功，2:失败
                     * @return TradeStatus 交易状态，0:未知，1:成功，2:失败
                     * 
                     */
                    std::string GetTradeStatus() const;

                    /**
                     * 设置交易状态，0:未知，1:成功，2:失败
                     * @param _tradeStatus 交易状态，0:未知，1:成功，2:失败
                     * 
                     */
                    void SetTradeStatus(const std::string& _tradeStatus);

                    /**
                     * 判断参数 TradeStatus 是否已赋值
                     * @return TradeStatus 是否已赋值
                     * 
                     */
                    bool TradeStatusHasBeenSet() const;

                    /**
                     * 获取对账状态，1:成功，2:失败 3:长账 4:短账
                     * @return CheckStatus 对账状态，1:成功，2:失败 3:长账 4:短账
                     * 
                     */
                    std::string GetCheckStatus() const;

                    /**
                     * 设置对账状态，1:成功，2:失败 3:长账 4:短账
                     * @param _checkStatus 对账状态，1:成功，2:失败 3:长账 4:短账
                     * 
                     */
                    void SetCheckStatus(const std::string& _checkStatus);

                    /**
                     * 判断参数 CheckStatus 是否已赋值
                     * @return CheckStatus 是否已赋值
                     * 
                     */
                    bool CheckStatusHasBeenSet() const;

                    /**
                     * 获取对账失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckFailReason 对账失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCheckFailReason() const;

                    /**
                     * 设置对账失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _checkFailReason 对账失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCheckFailReason(const std::string& _checkFailReason);

                    /**
                     * 判断参数 CheckFailReason 是否已赋值
                     * @return CheckFailReason 是否已赋值
                     * 
                     */
                    bool CheckFailReasonHasBeenSet() const;

                    /**
                     * 获取交易金额（元）
                     * @return OrderAmount 交易金额（元）
                     * 
                     */
                    std::string GetOrderAmount() const;

                    /**
                     * 设置交易金额（元）
                     * @param _orderAmount 交易金额（元）
                     * 
                     */
                    void SetOrderAmount(const std::string& _orderAmount);

                    /**
                     * 判断参数 OrderAmount 是否已赋值
                     * @return OrderAmount 是否已赋值
                     * 
                     */
                    bool OrderAmountHasBeenSet() const;

                    /**
                     * 获取服务费（元）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceFee 服务费（元）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceFee() const;

                    /**
                     * 设置服务费（元）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceFee 服务费（元）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceFee(const std::string& _serviceFee);

                    /**
                     * 判断参数 ServiceFee 是否已赋值
                     * @return ServiceFee 是否已赋值
                     * 
                     */
                    bool ServiceFeeHasBeenSet() const;

                    /**
                     * 获取收款人账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayeeAccount 收款人账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPayeeAccount() const;

                    /**
                     * 设置收款人账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payeeAccount 收款人账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPayeeAccount(const std::string& _payeeAccount);

                    /**
                     * 判断参数 PayeeAccount 是否已赋值
                     * @return PayeeAccount 是否已赋值
                     * 
                     */
                    bool PayeeAccountHasBeenSet() const;

                    /**
                     * 获取收款人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayeeName 收款人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPayeeName() const;

                    /**
                     * 设置收款人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payeeName 收款人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPayeeName(const std::string& _payeeName);

                    /**
                     * 判断参数 PayeeName 是否已赋值
                     * @return PayeeName 是否已赋值
                     * 
                     */
                    bool PayeeNameHasBeenSet() const;

                    /**
                     * 获取付款人账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayerAccount 付款人账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPayerAccount() const;

                    /**
                     * 设置付款人账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payerAccount 付款人账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPayerAccount(const std::string& _payerAccount);

                    /**
                     * 判断参数 PayerAccount 是否已赋值
                     * @return PayerAccount 是否已赋值
                     * 
                     */
                    bool PayerAccountHasBeenSet() const;

                    /**
                     * 获取付款人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayerName 付款人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPayerName() const;

                    /**
                     * 设置付款人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payerName 付款人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPayerName(const std::string& _payerName);

                    /**
                     * 判断参数 PayerName 是否已赋值
                     * @return PayerName 是否已赋值
                     * 
                     */
                    bool PayerNameHasBeenSet() const;

                    /**
                     * 获取支付信息描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 支付信息描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置支付信息描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 支付信息描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 交易日期
                     */
                    std::string m_billDate;
                    bool m_billDateHasBeenSet;

                    /**
                     * 渠道编码
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * 二级渠道
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subChannel;
                    bool m_subChannelHasBeenSet;

                    /**
                     * 系统父商户号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentMerchantId;
                    bool m_parentMerchantIdHasBeenSet;

                    /**
                     * 外部商户号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outMerchantId;
                    bool m_outMerchantIdHasBeenSet;

                    /**
                     * 系统商户号
                     */
                    std::string m_merchantId;
                    bool m_merchantIdHasBeenSet;

                    /**
                     * 第三方商户号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endMerchantId;
                    bool m_endMerchantIdHasBeenSet;

                    /**
                     * 外部订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outTradeNo;
                    bool m_outTradeNoHasBeenSet;

                    /**
                     * 系统订单号
                     */
                    std::string m_tradeNo;
                    bool m_tradeNoHasBeenSet;

                    /**
                     * 第三方订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTradeNo;
                    bool m_endTradeNoHasBeenSet;

                    /**
                     * 收付类型，PAYMENT:付款，INCOME:收款
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentType;
                    bool m_paymentTypeHasBeenSet;

                    /**
                     * 业务类型，WITHDRAW:提现，PAY:支付，RECHARGE:充值，TRANSFER:转账，REFUND:退款
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_businessType;
                    bool m_businessTypeHasBeenSet;

                    /**
                     * 发起交易时间，格式yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_tradeTime;
                    bool m_tradeTimeHasBeenSet;

                    /**
                     * 交易完成时间，格式yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * 交易状态，0:未知，1:成功，2:失败
                     */
                    std::string m_tradeStatus;
                    bool m_tradeStatusHasBeenSet;

                    /**
                     * 对账状态，1:成功，2:失败 3:长账 4:短账
                     */
                    std::string m_checkStatus;
                    bool m_checkStatusHasBeenSet;

                    /**
                     * 对账失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_checkFailReason;
                    bool m_checkFailReasonHasBeenSet;

                    /**
                     * 交易金额（元）
                     */
                    std::string m_orderAmount;
                    bool m_orderAmountHasBeenSet;

                    /**
                     * 服务费（元）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceFee;
                    bool m_serviceFeeHasBeenSet;

                    /**
                     * 收款人账号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_payeeAccount;
                    bool m_payeeAccountHasBeenSet;

                    /**
                     * 收款人名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_payeeName;
                    bool m_payeeNameHasBeenSet;

                    /**
                     * 付款人账号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_payerAccount;
                    bool m_payerAccountHasBeenSet;

                    /**
                     * 付款人名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_payerName;
                    bool m_payerNameHasBeenSet;

                    /**
                     * 支付信息描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKBILLDATA_H_
