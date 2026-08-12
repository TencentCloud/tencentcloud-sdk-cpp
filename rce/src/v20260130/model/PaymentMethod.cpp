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

#include <tencentcloud/rce/v20260130/model/PaymentMethod.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

PaymentMethod::PaymentMethod() :
    m_paymentTypeHasBeenSet(false),
    m_paymentChannelHasBeenSet(false),
    m_cardHasBeenSet(false),
    m_sEPADirectDebitMandateHasBeenSet(false),
    m_digitalWalletHasBeenSet(false)
{
}

CoreInternalOutcome PaymentMethod::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PaymentType") && !value["PaymentType"].IsNull())
    {
        if (!value["PaymentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PaymentMethod.PaymentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentType = string(value["PaymentType"].GetString());
        m_paymentTypeHasBeenSet = true;
    }

    if (value.HasMember("PaymentChannel") && !value["PaymentChannel"].IsNull())
    {
        if (!value["PaymentChannel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PaymentMethod.PaymentChannel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentChannel = string(value["PaymentChannel"].GetString());
        m_paymentChannelHasBeenSet = true;
    }

    if (value.HasMember("Card") && !value["Card"].IsNull())
    {
        if (!value["Card"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PaymentMethod.Card` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_card.Deserialize(value["Card"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cardHasBeenSet = true;
    }

    if (value.HasMember("SEPADirectDebitMandate") && !value["SEPADirectDebitMandate"].IsNull())
    {
        if (!value["SEPADirectDebitMandate"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PaymentMethod.SEPADirectDebitMandate` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_sEPADirectDebitMandate = value["SEPADirectDebitMandate"].GetBool();
        m_sEPADirectDebitMandateHasBeenSet = true;
    }

    if (value.HasMember("DigitalWallet") && !value["DigitalWallet"].IsNull())
    {
        if (!value["DigitalWallet"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PaymentMethod.DigitalWallet` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_digitalWallet.Deserialize(value["DigitalWallet"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_digitalWalletHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PaymentMethod::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_paymentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentType.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentChannel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentChannel.c_str(), allocator).Move(), allocator);
    }

    if (m_cardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Card";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_card.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sEPADirectDebitMandateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SEPADirectDebitMandate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sEPADirectDebitMandate, allocator);
    }

    if (m_digitalWalletHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DigitalWallet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_digitalWallet.ToJsonObject(value[key.c_str()], allocator);
    }

}


string PaymentMethod::GetPaymentType() const
{
    return m_paymentType;
}

void PaymentMethod::SetPaymentType(const string& _paymentType)
{
    m_paymentType = _paymentType;
    m_paymentTypeHasBeenSet = true;
}

bool PaymentMethod::PaymentTypeHasBeenSet() const
{
    return m_paymentTypeHasBeenSet;
}

string PaymentMethod::GetPaymentChannel() const
{
    return m_paymentChannel;
}

void PaymentMethod::SetPaymentChannel(const string& _paymentChannel)
{
    m_paymentChannel = _paymentChannel;
    m_paymentChannelHasBeenSet = true;
}

bool PaymentMethod::PaymentChannelHasBeenSet() const
{
    return m_paymentChannelHasBeenSet;
}

Card PaymentMethod::GetCard() const
{
    return m_card;
}

void PaymentMethod::SetCard(const Card& _card)
{
    m_card = _card;
    m_cardHasBeenSet = true;
}

bool PaymentMethod::CardHasBeenSet() const
{
    return m_cardHasBeenSet;
}

bool PaymentMethod::GetSEPADirectDebitMandate() const
{
    return m_sEPADirectDebitMandate;
}

void PaymentMethod::SetSEPADirectDebitMandate(const bool& _sEPADirectDebitMandate)
{
    m_sEPADirectDebitMandate = _sEPADirectDebitMandate;
    m_sEPADirectDebitMandateHasBeenSet = true;
}

bool PaymentMethod::SEPADirectDebitMandateHasBeenSet() const
{
    return m_sEPADirectDebitMandateHasBeenSet;
}

Wallet PaymentMethod::GetDigitalWallet() const
{
    return m_digitalWallet;
}

void PaymentMethod::SetDigitalWallet(const Wallet& _digitalWallet)
{
    m_digitalWallet = _digitalWallet;
    m_digitalWalletHasBeenSet = true;
}

bool PaymentMethod::DigitalWalletHasBeenSet() const
{
    return m_digitalWalletHasBeenSet;
}

