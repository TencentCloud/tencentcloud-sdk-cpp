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

#include <tencentcloud/cpdp/v20190820/model/ApplyDeclareData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

ApplyDeclareData::ApplyDeclareData() :
    m_merchantIdHasBeenSet(false),
    m_transactionIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_declareIdHasBeenSet(false),
    m_originalDeclareIdHasBeenSet(false),
    m_payerIdHasBeenSet(false)
{
}

CoreInternalOutcome ApplyDeclareData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MerchantId") && !value["MerchantId"].IsNull())
    {
        if (!value["MerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyDeclareData.MerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantId = string(value["MerchantId"].GetString());
        m_merchantIdHasBeenSet = true;
    }

    if (value.HasMember("TransactionId") && !value["TransactionId"].IsNull())
    {
        if (!value["TransactionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyDeclareData.TransactionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transactionId = string(value["TransactionId"].GetString());
        m_transactionIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyDeclareData.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("DeclareId") && !value["DeclareId"].IsNull())
    {
        if (!value["DeclareId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyDeclareData.DeclareId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_declareId = string(value["DeclareId"].GetString());
        m_declareIdHasBeenSet = true;
    }

    if (value.HasMember("OriginalDeclareId") && !value["OriginalDeclareId"].IsNull())
    {
        if (!value["OriginalDeclareId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyDeclareData.OriginalDeclareId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalDeclareId = string(value["OriginalDeclareId"].GetString());
        m_originalDeclareIdHasBeenSet = true;
    }

    if (value.HasMember("PayerId") && !value["PayerId"].IsNull())
    {
        if (!value["PayerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyDeclareData.PayerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payerId = string(value["PayerId"].GetString());
        m_payerIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApplyDeclareData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_merchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_transactionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transactionId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_declareIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeclareId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_declareId.c_str(), allocator).Move(), allocator);
    }

    if (m_originalDeclareIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalDeclareId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalDeclareId.c_str(), allocator).Move(), allocator);
    }

    if (m_payerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payerId.c_str(), allocator).Move(), allocator);
    }

}


string ApplyDeclareData::GetMerchantId() const
{
    return m_merchantId;
}

void ApplyDeclareData::SetMerchantId(const string& _merchantId)
{
    m_merchantId = _merchantId;
    m_merchantIdHasBeenSet = true;
}

bool ApplyDeclareData::MerchantIdHasBeenSet() const
{
    return m_merchantIdHasBeenSet;
}

string ApplyDeclareData::GetTransactionId() const
{
    return m_transactionId;
}

void ApplyDeclareData::SetTransactionId(const string& _transactionId)
{
    m_transactionId = _transactionId;
    m_transactionIdHasBeenSet = true;
}

bool ApplyDeclareData::TransactionIdHasBeenSet() const
{
    return m_transactionIdHasBeenSet;
}

string ApplyDeclareData::GetStatus() const
{
    return m_status;
}

void ApplyDeclareData::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ApplyDeclareData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ApplyDeclareData::GetDeclareId() const
{
    return m_declareId;
}

void ApplyDeclareData::SetDeclareId(const string& _declareId)
{
    m_declareId = _declareId;
    m_declareIdHasBeenSet = true;
}

bool ApplyDeclareData::DeclareIdHasBeenSet() const
{
    return m_declareIdHasBeenSet;
}

string ApplyDeclareData::GetOriginalDeclareId() const
{
    return m_originalDeclareId;
}

void ApplyDeclareData::SetOriginalDeclareId(const string& _originalDeclareId)
{
    m_originalDeclareId = _originalDeclareId;
    m_originalDeclareIdHasBeenSet = true;
}

bool ApplyDeclareData::OriginalDeclareIdHasBeenSet() const
{
    return m_originalDeclareIdHasBeenSet;
}

string ApplyDeclareData::GetPayerId() const
{
    return m_payerId;
}

void ApplyDeclareData::SetPayerId(const string& _payerId)
{
    m_payerId = _payerId;
    m_payerIdHasBeenSet = true;
}

bool ApplyDeclareData::PayerIdHasBeenSet() const
{
    return m_payerIdHasBeenSet;
}

