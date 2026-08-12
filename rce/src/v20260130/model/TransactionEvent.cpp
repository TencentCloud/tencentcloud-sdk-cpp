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

#include <tencentcloud/rce/v20260130/model/TransactionEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

TransactionEvent::TransactionEvent() :
    m_transactionIdHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_paymentAmountHasBeenSet(false),
    m_paymentMethodHasBeenSet(false),
    m_transactionTypeHasBeenSet(false),
    m_billingHasBeenSet(false),
    m_deliveryHasBeenSet(false),
    m_merchantHasBeenSet(false),
    m_paymentResultHasBeenSet(false),
    m_transferRecipientUserIdHasBeenSet(false),
    m_transferSentAddressHasBeenSet(false),
    m_transferReceivedAddressHasBeenSet(false),
    m_digitalOrdersHasBeenSet(false),
    m_receiverWalletHasBeenSet(false),
    m_custHasBeenSet(false)
{
}

CoreInternalOutcome TransactionEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TransactionId") && !value["TransactionId"].IsNull())
    {
        if (!value["TransactionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionEvent.TransactionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transactionId = string(value["TransactionId"].GetString());
        m_transactionIdHasBeenSet = true;
    }

    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TransactionEvent.OrderId` is not array type"));

        const rapidjson::Value &tmpValue = value["OrderId"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_orderId.push_back((*itr).GetString());
        }
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("PaymentAmount") && !value["PaymentAmount"].IsNull())
    {
        if (!value["PaymentAmount"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionEvent.PaymentAmount` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_paymentAmount.Deserialize(value["PaymentAmount"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_paymentAmountHasBeenSet = true;
    }

    if (value.HasMember("PaymentMethod") && !value["PaymentMethod"].IsNull())
    {
        if (!value["PaymentMethod"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionEvent.PaymentMethod` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_paymentMethod.Deserialize(value["PaymentMethod"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_paymentMethodHasBeenSet = true;
    }

    if (value.HasMember("TransactionType") && !value["TransactionType"].IsNull())
    {
        if (!value["TransactionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionEvent.TransactionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transactionType = string(value["TransactionType"].GetString());
        m_transactionTypeHasBeenSet = true;
    }

    if (value.HasMember("Billing") && !value["Billing"].IsNull())
    {
        if (!value["Billing"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionEvent.Billing` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_billing.Deserialize(value["Billing"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_billingHasBeenSet = true;
    }

    if (value.HasMember("Delivery") && !value["Delivery"].IsNull())
    {
        if (!value["Delivery"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionEvent.Delivery` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_delivery.Deserialize(value["Delivery"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_deliveryHasBeenSet = true;
    }

    if (value.HasMember("Merchant") && !value["Merchant"].IsNull())
    {
        if (!value["Merchant"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionEvent.Merchant` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_merchant.Deserialize(value["Merchant"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_merchantHasBeenSet = true;
    }

    if (value.HasMember("PaymentResult") && !value["PaymentResult"].IsNull())
    {
        if (!value["PaymentResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionEvent.PaymentResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_paymentResult.Deserialize(value["PaymentResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_paymentResultHasBeenSet = true;
    }

    if (value.HasMember("TransferRecipientUserId") && !value["TransferRecipientUserId"].IsNull())
    {
        if (!value["TransferRecipientUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionEvent.TransferRecipientUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transferRecipientUserId = string(value["TransferRecipientUserId"].GetString());
        m_transferRecipientUserIdHasBeenSet = true;
    }

    if (value.HasMember("TransferSentAddress") && !value["TransferSentAddress"].IsNull())
    {
        if (!value["TransferSentAddress"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionEvent.TransferSentAddress` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_transferSentAddress.Deserialize(value["TransferSentAddress"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_transferSentAddressHasBeenSet = true;
    }

    if (value.HasMember("TransferReceivedAddress") && !value["TransferReceivedAddress"].IsNull())
    {
        if (!value["TransferReceivedAddress"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionEvent.TransferReceivedAddress` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_transferReceivedAddress.Deserialize(value["TransferReceivedAddress"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_transferReceivedAddressHasBeenSet = true;
    }

    if (value.HasMember("DigitalOrders") && !value["DigitalOrders"].IsNull())
    {
        if (!value["DigitalOrders"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TransactionEvent.DigitalOrders` is not array type"));

        const rapidjson::Value &tmpValue = value["DigitalOrders"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DigitalOrder item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_digitalOrders.push_back(item);
        }
        m_digitalOrdersHasBeenSet = true;
    }

    if (value.HasMember("ReceiverWallet") && !value["ReceiverWallet"].IsNull())
    {
        if (!value["ReceiverWallet"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionEvent.ReceiverWallet` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_receiverWallet.Deserialize(value["ReceiverWallet"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_receiverWalletHasBeenSet = true;
    }

    if (value.HasMember("Cust") && !value["Cust"].IsNull())
    {
        if (!value["Cust"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TransactionEvent.Cust` is not array type"));

        const rapidjson::Value &tmpValue = value["Cust"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Cust item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cust.push_back(item);
        }
        m_custHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TransactionEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_transactionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transactionId.c_str(), allocator).Move(), allocator);
    }

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_orderId.begin(); itr != m_orderId.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_paymentAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_paymentAmount.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_paymentMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_paymentMethod.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_transactionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transactionType.c_str(), allocator).Move(), allocator);
    }

    if (m_billingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Billing";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_billing.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_deliveryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Delivery";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_delivery.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_merchantHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Merchant";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_merchant.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_paymentResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_paymentResult.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_transferRecipientUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferRecipientUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transferRecipientUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_transferSentAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferSentAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_transferSentAddress.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_transferReceivedAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferReceivedAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_transferReceivedAddress.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_digitalOrdersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DigitalOrders";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_digitalOrders.begin(); itr != m_digitalOrders.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_receiverWalletHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverWallet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_receiverWallet.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_custHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cust";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cust.begin(); itr != m_cust.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string TransactionEvent::GetTransactionId() const
{
    return m_transactionId;
}

void TransactionEvent::SetTransactionId(const string& _transactionId)
{
    m_transactionId = _transactionId;
    m_transactionIdHasBeenSet = true;
}

bool TransactionEvent::TransactionIdHasBeenSet() const
{
    return m_transactionIdHasBeenSet;
}

vector<string> TransactionEvent::GetOrderId() const
{
    return m_orderId;
}

void TransactionEvent::SetOrderId(const vector<string>& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool TransactionEvent::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

Amount TransactionEvent::GetPaymentAmount() const
{
    return m_paymentAmount;
}

void TransactionEvent::SetPaymentAmount(const Amount& _paymentAmount)
{
    m_paymentAmount = _paymentAmount;
    m_paymentAmountHasBeenSet = true;
}

bool TransactionEvent::PaymentAmountHasBeenSet() const
{
    return m_paymentAmountHasBeenSet;
}

PaymentMethod TransactionEvent::GetPaymentMethod() const
{
    return m_paymentMethod;
}

void TransactionEvent::SetPaymentMethod(const PaymentMethod& _paymentMethod)
{
    m_paymentMethod = _paymentMethod;
    m_paymentMethodHasBeenSet = true;
}

bool TransactionEvent::PaymentMethodHasBeenSet() const
{
    return m_paymentMethodHasBeenSet;
}

string TransactionEvent::GetTransactionType() const
{
    return m_transactionType;
}

void TransactionEvent::SetTransactionType(const string& _transactionType)
{
    m_transactionType = _transactionType;
    m_transactionTypeHasBeenSet = true;
}

bool TransactionEvent::TransactionTypeHasBeenSet() const
{
    return m_transactionTypeHasBeenSet;
}

Billing TransactionEvent::GetBilling() const
{
    return m_billing;
}

void TransactionEvent::SetBilling(const Billing& _billing)
{
    m_billing = _billing;
    m_billingHasBeenSet = true;
}

bool TransactionEvent::BillingHasBeenSet() const
{
    return m_billingHasBeenSet;
}

Delivery TransactionEvent::GetDelivery() const
{
    return m_delivery;
}

void TransactionEvent::SetDelivery(const Delivery& _delivery)
{
    m_delivery = _delivery;
    m_deliveryHasBeenSet = true;
}

bool TransactionEvent::DeliveryHasBeenSet() const
{
    return m_deliveryHasBeenSet;
}

Merchant TransactionEvent::GetMerchant() const
{
    return m_merchant;
}

void TransactionEvent::SetMerchant(const Merchant& _merchant)
{
    m_merchant = _merchant;
    m_merchantHasBeenSet = true;
}

bool TransactionEvent::MerchantHasBeenSet() const
{
    return m_merchantHasBeenSet;
}

PaymentResult TransactionEvent::GetPaymentResult() const
{
    return m_paymentResult;
}

void TransactionEvent::SetPaymentResult(const PaymentResult& _paymentResult)
{
    m_paymentResult = _paymentResult;
    m_paymentResultHasBeenSet = true;
}

bool TransactionEvent::PaymentResultHasBeenSet() const
{
    return m_paymentResultHasBeenSet;
}

string TransactionEvent::GetTransferRecipientUserId() const
{
    return m_transferRecipientUserId;
}

void TransactionEvent::SetTransferRecipientUserId(const string& _transferRecipientUserId)
{
    m_transferRecipientUserId = _transferRecipientUserId;
    m_transferRecipientUserIdHasBeenSet = true;
}

bool TransactionEvent::TransferRecipientUserIdHasBeenSet() const
{
    return m_transferRecipientUserIdHasBeenSet;
}

Address TransactionEvent::GetTransferSentAddress() const
{
    return m_transferSentAddress;
}

void TransactionEvent::SetTransferSentAddress(const Address& _transferSentAddress)
{
    m_transferSentAddress = _transferSentAddress;
    m_transferSentAddressHasBeenSet = true;
}

bool TransactionEvent::TransferSentAddressHasBeenSet() const
{
    return m_transferSentAddressHasBeenSet;
}

Address TransactionEvent::GetTransferReceivedAddress() const
{
    return m_transferReceivedAddress;
}

void TransactionEvent::SetTransferReceivedAddress(const Address& _transferReceivedAddress)
{
    m_transferReceivedAddress = _transferReceivedAddress;
    m_transferReceivedAddressHasBeenSet = true;
}

bool TransactionEvent::TransferReceivedAddressHasBeenSet() const
{
    return m_transferReceivedAddressHasBeenSet;
}

vector<DigitalOrder> TransactionEvent::GetDigitalOrders() const
{
    return m_digitalOrders;
}

void TransactionEvent::SetDigitalOrders(const vector<DigitalOrder>& _digitalOrders)
{
    m_digitalOrders = _digitalOrders;
    m_digitalOrdersHasBeenSet = true;
}

bool TransactionEvent::DigitalOrdersHasBeenSet() const
{
    return m_digitalOrdersHasBeenSet;
}

Wallet TransactionEvent::GetReceiverWallet() const
{
    return m_receiverWallet;
}

void TransactionEvent::SetReceiverWallet(const Wallet& _receiverWallet)
{
    m_receiverWallet = _receiverWallet;
    m_receiverWalletHasBeenSet = true;
}

bool TransactionEvent::ReceiverWalletHasBeenSet() const
{
    return m_receiverWalletHasBeenSet;
}

vector<Cust> TransactionEvent::GetCust() const
{
    return m_cust;
}

void TransactionEvent::SetCust(const vector<Cust>& _cust)
{
    m_cust = _cust;
    m_custHasBeenSet = true;
}

bool TransactionEvent::CustHasBeenSet() const
{
    return m_custHasBeenSet;
}

