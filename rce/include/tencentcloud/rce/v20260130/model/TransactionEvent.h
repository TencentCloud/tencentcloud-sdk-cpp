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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_TRANSACTIONEVENT_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_TRANSACTIONEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/Amount.h>
#include <tencentcloud/rce/v20260130/model/PaymentMethod.h>
#include <tencentcloud/rce/v20260130/model/Billing.h>
#include <tencentcloud/rce/v20260130/model/Delivery.h>
#include <tencentcloud/rce/v20260130/model/Merchant.h>
#include <tencentcloud/rce/v20260130/model/PaymentResult.h>
#include <tencentcloud/rce/v20260130/model/Address.h>
#include <tencentcloud/rce/v20260130/model/DigitalOrder.h>
#include <tencentcloud/rce/v20260130/model/Wallet.h>
#include <tencentcloud/rce/v20260130/model/Cust.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 交易事件详情
                */
                class TransactionEvent : public AbstractModel
                {
                public:
                    TransactionEvent();
                    ~TransactionEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>交易唯一标识</p>
                     * @return TransactionId <p>交易唯一标识</p>
                     * 
                     */
                    std::string GetTransactionId() const;

                    /**
                     * 设置<p>交易唯一标识</p>
                     * @param _transactionId <p>交易唯一标识</p>
                     * 
                     */
                    void SetTransactionId(const std::string& _transactionId);

                    /**
                     * 判断参数 TransactionId 是否已赋值
                     * @return TransactionId 是否已赋值
                     * 
                     */
                    bool TransactionIdHasBeenSet() const;

                    /**
                     * 获取<p>您系统中的订单 ID，当一笔交易关联多个订单（合并支付）时请输入所有订单ID</p>
                     * @return OrderId <p>您系统中的订单 ID，当一笔交易关联多个订单（合并支付）时请输入所有订单ID</p>
                     * 
                     */
                    std::vector<std::string> GetOrderId() const;

                    /**
                     * 设置<p>您系统中的订单 ID，当一笔交易关联多个订单（合并支付）时请输入所有订单ID</p>
                     * @param _orderId <p>您系统中的订单 ID，当一笔交易关联多个订单（合并支付）时请输入所有订单ID</p>
                     * 
                     */
                    void SetOrderId(const std::vector<std::string>& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取<p>交易金额</p>
                     * @return PaymentAmount <p>交易金额</p>
                     * 
                     */
                    Amount GetPaymentAmount() const;

                    /**
                     * 设置<p>交易金额</p>
                     * @param _paymentAmount <p>交易金额</p>
                     * 
                     */
                    void SetPaymentAmount(const Amount& _paymentAmount);

                    /**
                     * 判断参数 PaymentAmount 是否已赋值
                     * @return PaymentAmount 是否已赋值
                     * 
                     */
                    bool PaymentAmountHasBeenSet() const;

                    /**
                     * 获取<p>支付方式，支持多种支付方式</p>
                     * @return PaymentMethod <p>支付方式，支持多种支付方式</p>
                     * 
                     */
                    PaymentMethod GetPaymentMethod() const;

                    /**
                     * 设置<p>支付方式，支持多种支付方式</p>
                     * @param _paymentMethod <p>支付方式，支持多种支付方式</p>
                     * 
                     */
                    void SetPaymentMethod(const PaymentMethod& _paymentMethod);

                    /**
                     * 判断参数 PaymentMethod 是否已赋值
                     * @return PaymentMethod 是否已赋值
                     * 
                     */
                    bool PaymentMethodHasBeenSet() const;

                    /**
                     * 获取<p>交易类型</p><p>枚举值：</p><ul><li>sale： 一次性完成授权与扣款（最常见）</li><li>authorize： 仅授权（冻结金额）</li><li>capture： 执行扣款（在授权后）</li><li>void： 取消待处理的授权或扣款</li><li>refund： 退款（部分或全部）</li><li>deposit： 向账户存款</li><li>withdrawal： 从账户提现</li><li>transfer： 账户间转账</li><li>buy： 购买资产（如加密货币）</li><li>sell： 出售资产</li><li>send： 发送资金/资产（如跨钱包转账）</li><li>receive： 接收资金/资产</li></ul><p>默认值：sale</p>
                     * @return TransactionType <p>交易类型</p><p>枚举值：</p><ul><li>sale： 一次性完成授权与扣款（最常见）</li><li>authorize： 仅授权（冻结金额）</li><li>capture： 执行扣款（在授权后）</li><li>void： 取消待处理的授权或扣款</li><li>refund： 退款（部分或全部）</li><li>deposit： 向账户存款</li><li>withdrawal： 从账户提现</li><li>transfer： 账户间转账</li><li>buy： 购买资产（如加密货币）</li><li>sell： 出售资产</li><li>send： 发送资金/资产（如跨钱包转账）</li><li>receive： 接收资金/资产</li></ul><p>默认值：sale</p>
                     * 
                     */
                    std::string GetTransactionType() const;

                    /**
                     * 设置<p>交易类型</p><p>枚举值：</p><ul><li>sale： 一次性完成授权与扣款（最常见）</li><li>authorize： 仅授权（冻结金额）</li><li>capture： 执行扣款（在授权后）</li><li>void： 取消待处理的授权或扣款</li><li>refund： 退款（部分或全部）</li><li>deposit： 向账户存款</li><li>withdrawal： 从账户提现</li><li>transfer： 账户间转账</li><li>buy： 购买资产（如加密货币）</li><li>sell： 出售资产</li><li>send： 发送资金/资产（如跨钱包转账）</li><li>receive： 接收资金/资产</li></ul><p>默认值：sale</p>
                     * @param _transactionType <p>交易类型</p><p>枚举值：</p><ul><li>sale： 一次性完成授权与扣款（最常见）</li><li>authorize： 仅授权（冻结金额）</li><li>capture： 执行扣款（在授权后）</li><li>void： 取消待处理的授权或扣款</li><li>refund： 退款（部分或全部）</li><li>deposit： 向账户存款</li><li>withdrawal： 从账户提现</li><li>transfer： 账户间转账</li><li>buy： 购买资产（如加密货币）</li><li>sell： 出售资产</li><li>send： 发送资金/资产（如跨钱包转账）</li><li>receive： 接收资金/资产</li></ul><p>默认值：sale</p>
                     * 
                     */
                    void SetTransactionType(const std::string& _transactionType);

                    /**
                     * 判断参数 TransactionType 是否已赋值
                     * @return TransactionType 是否已赋值
                     * 
                     */
                    bool TransactionTypeHasBeenSet() const;

                    /**
                     * 获取<p>账单信息</p>
                     * @return Billing <p>账单信息</p>
                     * 
                     */
                    Billing GetBilling() const;

                    /**
                     * 设置<p>账单信息</p>
                     * @param _billing <p>账单信息</p>
                     * 
                     */
                    void SetBilling(const Billing& _billing);

                    /**
                     * 判断参数 Billing 是否已赋值
                     * @return Billing 是否已赋值
                     * 
                     */
                    bool BillingHasBeenSet() const;

                    /**
                     * 获取<p>物流信息</p>
                     * @return Delivery <p>物流信息</p>
                     * 
                     */
                    Delivery GetDelivery() const;

                    /**
                     * 设置<p>物流信息</p>
                     * @param _delivery <p>物流信息</p>
                     * 
                     */
                    void SetDelivery(const Delivery& _delivery);

                    /**
                     * 判断参数 Delivery 是否已赋值
                     * @return Delivery 是否已赋值
                     * 
                     */
                    bool DeliveryHasBeenSet() const;

                    /**
                     * 获取<p>商家信息</p>
                     * @return Merchant <p>商家信息</p>
                     * 
                     */
                    Merchant GetMerchant() const;

                    /**
                     * 设置<p>商家信息</p>
                     * @param _merchant <p>商家信息</p>
                     * 
                     */
                    void SetMerchant(const Merchant& _merchant);

                    /**
                     * 判断参数 Merchant 是否已赋值
                     * @return Merchant 是否已赋值
                     * 
                     */
                    bool MerchantHasBeenSet() const;

                    /**
                     * 获取<p>支付结果</p>
                     * @return PaymentResult <p>支付结果</p>
                     * 
                     */
                    PaymentResult GetPaymentResult() const;

                    /**
                     * 设置<p>支付结果</p>
                     * @param _paymentResult <p>支付结果</p>
                     * 
                     */
                    void SetPaymentResult(const PaymentResult& _paymentResult);

                    /**
                     * 判断参数 PaymentResult 是否已赋值
                     * @return PaymentResult 是否已赋值
                     * 
                     */
                    bool PaymentResultHasBeenSet() const;

                    /**
                     * 获取<p>接收方的用户ID，适用于 transfer 交易类型</p>
                     * @return TransferRecipientUserId <p>接收方的用户ID，适用于 transfer 交易类型</p>
                     * 
                     */
                    std::string GetTransferRecipientUserId() const;

                    /**
                     * 设置<p>接收方的用户ID，适用于 transfer 交易类型</p>
                     * @param _transferRecipientUserId <p>接收方的用户ID，适用于 transfer 交易类型</p>
                     * 
                     */
                    void SetTransferRecipientUserId(const std::string& _transferRecipientUserId);

                    /**
                     * 判断参数 TransferRecipientUserId 是否已赋值
                     * @return TransferRecipientUserId 是否已赋值
                     * 
                     */
                    bool TransferRecipientUserIdHasBeenSet() const;

                    /**
                     * 获取<p>发送方的物理地址，适用于 transfer 交易类型</p>
                     * @return TransferSentAddress <p>发送方的物理地址，适用于 transfer 交易类型</p>
                     * 
                     */
                    Address GetTransferSentAddress() const;

                    /**
                     * 设置<p>发送方的物理地址，适用于 transfer 交易类型</p>
                     * @param _transferSentAddress <p>发送方的物理地址，适用于 transfer 交易类型</p>
                     * 
                     */
                    void SetTransferSentAddress(const Address& _transferSentAddress);

                    /**
                     * 判断参数 TransferSentAddress 是否已赋值
                     * @return TransferSentAddress 是否已赋值
                     * 
                     */
                    bool TransferSentAddressHasBeenSet() const;

                    /**
                     * 获取<p>接收方的物理地址，适用于 transfer 交易类型</p>
                     * @return TransferReceivedAddress <p>接收方的物理地址，适用于 transfer 交易类型</p>
                     * 
                     */
                    Address GetTransferReceivedAddress() const;

                    /**
                     * 设置<p>接收方的物理地址，适用于 transfer 交易类型</p>
                     * @param _transferReceivedAddress <p>接收方的物理地址，适用于 transfer 交易类型</p>
                     * 
                     */
                    void SetTransferReceivedAddress(const Address& _transferReceivedAddress);

                    /**
                     * 判断参数 TransferReceivedAddress 是否已赋值
                     * @return TransferReceivedAddress 是否已赋值
                     * 
                     */
                    bool TransferReceivedAddressHasBeenSet() const;

                    /**
                     * 获取<p>数字订单列表</p>
                     * @return DigitalOrders <p>数字订单列表</p>
                     * 
                     */
                    std::vector<DigitalOrder> GetDigitalOrders() const;

                    /**
                     * 设置<p>数字订单列表</p>
                     * @param _digitalOrders <p>数字订单列表</p>
                     * 
                     */
                    void SetDigitalOrders(const std::vector<DigitalOrder>& _digitalOrders);

                    /**
                     * 判断参数 DigitalOrders 是否已赋值
                     * @return DigitalOrders 是否已赋值
                     * 
                     */
                    bool DigitalOrdersHasBeenSet() const;

                    /**
                     * 获取<p>接收加密货币的钱包</p>
                     * @return ReceiverWallet <p>接收加密货币的钱包</p>
                     * 
                     */
                    Wallet GetReceiverWallet() const;

                    /**
                     * 设置<p>接收加密货币的钱包</p>
                     * @param _receiverWallet <p>接收加密货币的钱包</p>
                     * 
                     */
                    void SetReceiverWallet(const Wallet& _receiverWallet);

                    /**
                     * 判断参数 ReceiverWallet 是否已赋值
                     * @return ReceiverWallet 是否已赋值
                     * 
                     */
                    bool ReceiverWalletHasBeenSet() const;

                    /**
                     * 获取<p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * @return Cust <p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * 
                     */
                    std::vector<Cust> GetCust() const;

                    /**
                     * 设置<p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * @param _cust <p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * 
                     */
                    void SetCust(const std::vector<Cust>& _cust);

                    /**
                     * 判断参数 Cust 是否已赋值
                     * @return Cust 是否已赋值
                     * 
                     */
                    bool CustHasBeenSet() const;

                private:

                    /**
                     * <p>交易唯一标识</p>
                     */
                    std::string m_transactionId;
                    bool m_transactionIdHasBeenSet;

                    /**
                     * <p>您系统中的订单 ID，当一笔交易关联多个订单（合并支付）时请输入所有订单ID</p>
                     */
                    std::vector<std::string> m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * <p>交易金额</p>
                     */
                    Amount m_paymentAmount;
                    bool m_paymentAmountHasBeenSet;

                    /**
                     * <p>支付方式，支持多种支付方式</p>
                     */
                    PaymentMethod m_paymentMethod;
                    bool m_paymentMethodHasBeenSet;

                    /**
                     * <p>交易类型</p><p>枚举值：</p><ul><li>sale： 一次性完成授权与扣款（最常见）</li><li>authorize： 仅授权（冻结金额）</li><li>capture： 执行扣款（在授权后）</li><li>void： 取消待处理的授权或扣款</li><li>refund： 退款（部分或全部）</li><li>deposit： 向账户存款</li><li>withdrawal： 从账户提现</li><li>transfer： 账户间转账</li><li>buy： 购买资产（如加密货币）</li><li>sell： 出售资产</li><li>send： 发送资金/资产（如跨钱包转账）</li><li>receive： 接收资金/资产</li></ul><p>默认值：sale</p>
                     */
                    std::string m_transactionType;
                    bool m_transactionTypeHasBeenSet;

                    /**
                     * <p>账单信息</p>
                     */
                    Billing m_billing;
                    bool m_billingHasBeenSet;

                    /**
                     * <p>物流信息</p>
                     */
                    Delivery m_delivery;
                    bool m_deliveryHasBeenSet;

                    /**
                     * <p>商家信息</p>
                     */
                    Merchant m_merchant;
                    bool m_merchantHasBeenSet;

                    /**
                     * <p>支付结果</p>
                     */
                    PaymentResult m_paymentResult;
                    bool m_paymentResultHasBeenSet;

                    /**
                     * <p>接收方的用户ID，适用于 transfer 交易类型</p>
                     */
                    std::string m_transferRecipientUserId;
                    bool m_transferRecipientUserIdHasBeenSet;

                    /**
                     * <p>发送方的物理地址，适用于 transfer 交易类型</p>
                     */
                    Address m_transferSentAddress;
                    bool m_transferSentAddressHasBeenSet;

                    /**
                     * <p>接收方的物理地址，适用于 transfer 交易类型</p>
                     */
                    Address m_transferReceivedAddress;
                    bool m_transferReceivedAddressHasBeenSet;

                    /**
                     * <p>数字订单列表</p>
                     */
                    std::vector<DigitalOrder> m_digitalOrders;
                    bool m_digitalOrdersHasBeenSet;

                    /**
                     * <p>接收加密货币的钱包</p>
                     */
                    Wallet m_receiverWallet;
                    bool m_receiverWalletHasBeenSet;

                    /**
                     * <p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     */
                    std::vector<Cust> m_cust;
                    bool m_custHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_TRANSACTIONEVENT_H_
