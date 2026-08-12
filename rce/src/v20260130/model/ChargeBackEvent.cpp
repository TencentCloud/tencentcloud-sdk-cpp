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

#include <tencentcloud/rce/v20260130/model/ChargeBackEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

ChargeBackEvent::ChargeBackEvent() :
    m_transactionIdHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_chargeBackCodeHasBeenSet(false),
    m_chargeBackReasonHasBeenSet(false),
    m_chargeBackProcessHasBeenSet(false),
    m_chargeBackAmountHasBeenSet(false),
    m_custHasBeenSet(false)
{
}

CoreInternalOutcome ChargeBackEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TransactionId") && !value["TransactionId"].IsNull())
    {
        if (!value["TransactionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChargeBackEvent.TransactionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transactionId = string(value["TransactionId"].GetString());
        m_transactionIdHasBeenSet = true;
    }

    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ChargeBackEvent.OrderId` is not array type"));

        const rapidjson::Value &tmpValue = value["OrderId"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_orderId.push_back((*itr).GetString());
        }
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("ChargeBackCode") && !value["ChargeBackCode"].IsNull())
    {
        if (!value["ChargeBackCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChargeBackEvent.ChargeBackCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeBackCode = string(value["ChargeBackCode"].GetString());
        m_chargeBackCodeHasBeenSet = true;
    }

    if (value.HasMember("ChargeBackReason") && !value["ChargeBackReason"].IsNull())
    {
        if (!value["ChargeBackReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChargeBackEvent.ChargeBackReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeBackReason = string(value["ChargeBackReason"].GetString());
        m_chargeBackReasonHasBeenSet = true;
    }

    if (value.HasMember("ChargeBackProcess") && !value["ChargeBackProcess"].IsNull())
    {
        if (!value["ChargeBackProcess"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChargeBackEvent.ChargeBackProcess` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeBackProcess = string(value["ChargeBackProcess"].GetString());
        m_chargeBackProcessHasBeenSet = true;
    }

    if (value.HasMember("ChargeBackAmount") && !value["ChargeBackAmount"].IsNull())
    {
        if (!value["ChargeBackAmount"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChargeBackEvent.ChargeBackAmount` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_chargeBackAmount.Deserialize(value["ChargeBackAmount"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_chargeBackAmountHasBeenSet = true;
    }

    if (value.HasMember("Cust") && !value["Cust"].IsNull())
    {
        if (!value["Cust"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ChargeBackEvent.Cust` is not array type"));

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

void ChargeBackEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_chargeBackCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeBackCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeBackCode.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeBackReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeBackReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeBackReason.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeBackProcessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeBackProcess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeBackProcess.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeBackAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeBackAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_chargeBackAmount.ToJsonObject(value[key.c_str()], allocator);
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


string ChargeBackEvent::GetTransactionId() const
{
    return m_transactionId;
}

void ChargeBackEvent::SetTransactionId(const string& _transactionId)
{
    m_transactionId = _transactionId;
    m_transactionIdHasBeenSet = true;
}

bool ChargeBackEvent::TransactionIdHasBeenSet() const
{
    return m_transactionIdHasBeenSet;
}

vector<string> ChargeBackEvent::GetOrderId() const
{
    return m_orderId;
}

void ChargeBackEvent::SetOrderId(const vector<string>& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool ChargeBackEvent::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string ChargeBackEvent::GetChargeBackCode() const
{
    return m_chargeBackCode;
}

void ChargeBackEvent::SetChargeBackCode(const string& _chargeBackCode)
{
    m_chargeBackCode = _chargeBackCode;
    m_chargeBackCodeHasBeenSet = true;
}

bool ChargeBackEvent::ChargeBackCodeHasBeenSet() const
{
    return m_chargeBackCodeHasBeenSet;
}

string ChargeBackEvent::GetChargeBackReason() const
{
    return m_chargeBackReason;
}

void ChargeBackEvent::SetChargeBackReason(const string& _chargeBackReason)
{
    m_chargeBackReason = _chargeBackReason;
    m_chargeBackReasonHasBeenSet = true;
}

bool ChargeBackEvent::ChargeBackReasonHasBeenSet() const
{
    return m_chargeBackReasonHasBeenSet;
}

string ChargeBackEvent::GetChargeBackProcess() const
{
    return m_chargeBackProcess;
}

void ChargeBackEvent::SetChargeBackProcess(const string& _chargeBackProcess)
{
    m_chargeBackProcess = _chargeBackProcess;
    m_chargeBackProcessHasBeenSet = true;
}

bool ChargeBackEvent::ChargeBackProcessHasBeenSet() const
{
    return m_chargeBackProcessHasBeenSet;
}

Amount ChargeBackEvent::GetChargeBackAmount() const
{
    return m_chargeBackAmount;
}

void ChargeBackEvent::SetChargeBackAmount(const Amount& _chargeBackAmount)
{
    m_chargeBackAmount = _chargeBackAmount;
    m_chargeBackAmountHasBeenSet = true;
}

bool ChargeBackEvent::ChargeBackAmountHasBeenSet() const
{
    return m_chargeBackAmountHasBeenSet;
}

vector<Cust> ChargeBackEvent::GetCust() const
{
    return m_cust;
}

void ChargeBackEvent::SetCust(const vector<Cust>& _cust)
{
    m_cust = _cust;
    m_custHasBeenSet = true;
}

bool ChargeBackEvent::CustHasBeenSet() const
{
    return m_custHasBeenSet;
}

