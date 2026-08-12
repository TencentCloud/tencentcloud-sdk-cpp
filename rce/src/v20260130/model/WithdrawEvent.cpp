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

#include <tencentcloud/rce/v20260130/model/WithdrawEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

WithdrawEvent::WithdrawEvent() :
    m_amountHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_cardHasBeenSet(false),
    m_walletHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_custHasBeenSet(false)
{
}

CoreInternalOutcome WithdrawEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Amount") && !value["Amount"].IsNull())
    {
        if (!value["Amount"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WithdrawEvent.Amount` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_amount.Deserialize(value["Amount"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_amountHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WithdrawEvent.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("Card") && !value["Card"].IsNull())
    {
        if (!value["Card"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WithdrawEvent.Card` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_card.Deserialize(value["Card"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cardHasBeenSet = true;
    }

    if (value.HasMember("Wallet") && !value["Wallet"].IsNull())
    {
        if (!value["Wallet"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WithdrawEvent.Wallet` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_wallet.Deserialize(value["Wallet"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_walletHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WithdrawEvent.Result` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_result.Deserialize(value["Result"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resultHasBeenSet = true;
    }

    if (value.HasMember("Cust") && !value["Cust"].IsNull())
    {
        if (!value["Cust"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WithdrawEvent.Cust` is not array type"));

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

void WithdrawEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_amountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Amount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_amount.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_cardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Card";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_card.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_walletHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Wallet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_wallet.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_result.ToJsonObject(value[key.c_str()], allocator);
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


Amount WithdrawEvent::GetAmount() const
{
    return m_amount;
}

void WithdrawEvent::SetAmount(const Amount& _amount)
{
    m_amount = _amount;
    m_amountHasBeenSet = true;
}

bool WithdrawEvent::AmountHasBeenSet() const
{
    return m_amountHasBeenSet;
}

string WithdrawEvent::GetMethod() const
{
    return m_method;
}

void WithdrawEvent::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool WithdrawEvent::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

Card WithdrawEvent::GetCard() const
{
    return m_card;
}

void WithdrawEvent::SetCard(const Card& _card)
{
    m_card = _card;
    m_cardHasBeenSet = true;
}

bool WithdrawEvent::CardHasBeenSet() const
{
    return m_cardHasBeenSet;
}

Wallet WithdrawEvent::GetWallet() const
{
    return m_wallet;
}

void WithdrawEvent::SetWallet(const Wallet& _wallet)
{
    m_wallet = _wallet;
    m_walletHasBeenSet = true;
}

bool WithdrawEvent::WalletHasBeenSet() const
{
    return m_walletHasBeenSet;
}

Result WithdrawEvent::GetResult() const
{
    return m_result;
}

void WithdrawEvent::SetResult(const Result& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool WithdrawEvent::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

vector<Cust> WithdrawEvent::GetCust() const
{
    return m_cust;
}

void WithdrawEvent::SetCust(const vector<Cust>& _cust)
{
    m_cust = _cust;
    m_custHasBeenSet = true;
}

bool WithdrawEvent::CustHasBeenSet() const
{
    return m_custHasBeenSet;
}

