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

#include <tencentcloud/cpdp/v20190820/model/QueryPayerinfoData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryPayerinfoData::QueryPayerinfoData() :
    m_merchantIdHasBeenSet(false),
    m_payerIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_failReasonHasBeenSet(false),
    m_payerTypeHasBeenSet(false),
    m_payerNameHasBeenSet(false),
    m_payerIdTypeHasBeenSet(false),
    m_payerIdNoHasBeenSet(false),
    m_payerContactNumberHasBeenSet(false),
    m_payerEmailAddressHasBeenSet(false),
    m_payerCountryCodeHasBeenSet(false),
    m_payerContactNameHasBeenSet(false)
{
}

CoreInternalOutcome QueryPayerinfoData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MerchantId") && !value["MerchantId"].IsNull())
    {
        if (!value["MerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryPayerinfoData.MerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantId = string(value["MerchantId"].GetString());
        m_merchantIdHasBeenSet = true;
    }

    if (value.HasMember("PayerId") && !value["PayerId"].IsNull())
    {
        if (!value["PayerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryPayerinfoData.PayerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payerId = string(value["PayerId"].GetString());
        m_payerIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryPayerinfoData.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("FailReason") && !value["FailReason"].IsNull())
    {
        if (!value["FailReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryPayerinfoData.FailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failReason = string(value["FailReason"].GetString());
        m_failReasonHasBeenSet = true;
    }

    if (value.HasMember("PayerType") && !value["PayerType"].IsNull())
    {
        if (!value["PayerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryPayerinfoData.PayerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payerType = string(value["PayerType"].GetString());
        m_payerTypeHasBeenSet = true;
    }

    if (value.HasMember("PayerName") && !value["PayerName"].IsNull())
    {
        if (!value["PayerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryPayerinfoData.PayerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payerName = string(value["PayerName"].GetString());
        m_payerNameHasBeenSet = true;
    }

    if (value.HasMember("PayerIdType") && !value["PayerIdType"].IsNull())
    {
        if (!value["PayerIdType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryPayerinfoData.PayerIdType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payerIdType = string(value["PayerIdType"].GetString());
        m_payerIdTypeHasBeenSet = true;
    }

    if (value.HasMember("PayerIdNo") && !value["PayerIdNo"].IsNull())
    {
        if (!value["PayerIdNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryPayerinfoData.PayerIdNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payerIdNo = string(value["PayerIdNo"].GetString());
        m_payerIdNoHasBeenSet = true;
    }

    if (value.HasMember("PayerContactNumber") && !value["PayerContactNumber"].IsNull())
    {
        if (!value["PayerContactNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryPayerinfoData.PayerContactNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payerContactNumber = string(value["PayerContactNumber"].GetString());
        m_payerContactNumberHasBeenSet = true;
    }

    if (value.HasMember("PayerEmailAddress") && !value["PayerEmailAddress"].IsNull())
    {
        if (!value["PayerEmailAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryPayerinfoData.PayerEmailAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payerEmailAddress = string(value["PayerEmailAddress"].GetString());
        m_payerEmailAddressHasBeenSet = true;
    }

    if (value.HasMember("PayerCountryCode") && !value["PayerCountryCode"].IsNull())
    {
        if (!value["PayerCountryCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryPayerinfoData.PayerCountryCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payerCountryCode = string(value["PayerCountryCode"].GetString());
        m_payerCountryCodeHasBeenSet = true;
    }

    if (value.HasMember("PayerContactName") && !value["PayerContactName"].IsNull())
    {
        if (!value["PayerContactName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryPayerinfoData.PayerContactName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payerContactName = string(value["PayerContactName"].GetString());
        m_payerContactNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryPayerinfoData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_merchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_payerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payerId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_failReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failReason.c_str(), allocator).Move(), allocator);
    }

    if (m_payerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payerType.c_str(), allocator).Move(), allocator);
    }

    if (m_payerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payerName.c_str(), allocator).Move(), allocator);
    }

    if (m_payerIdTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerIdType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payerIdType.c_str(), allocator).Move(), allocator);
    }

    if (m_payerIdNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerIdNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payerIdNo.c_str(), allocator).Move(), allocator);
    }

    if (m_payerContactNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerContactNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payerContactNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_payerEmailAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerEmailAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payerEmailAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_payerCountryCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerCountryCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payerCountryCode.c_str(), allocator).Move(), allocator);
    }

    if (m_payerContactNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerContactName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payerContactName.c_str(), allocator).Move(), allocator);
    }

}


string QueryPayerinfoData::GetMerchantId() const
{
    return m_merchantId;
}

void QueryPayerinfoData::SetMerchantId(const string& _merchantId)
{
    m_merchantId = _merchantId;
    m_merchantIdHasBeenSet = true;
}

bool QueryPayerinfoData::MerchantIdHasBeenSet() const
{
    return m_merchantIdHasBeenSet;
}

string QueryPayerinfoData::GetPayerId() const
{
    return m_payerId;
}

void QueryPayerinfoData::SetPayerId(const string& _payerId)
{
    m_payerId = _payerId;
    m_payerIdHasBeenSet = true;
}

bool QueryPayerinfoData::PayerIdHasBeenSet() const
{
    return m_payerIdHasBeenSet;
}

string QueryPayerinfoData::GetStatus() const
{
    return m_status;
}

void QueryPayerinfoData::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool QueryPayerinfoData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string QueryPayerinfoData::GetFailReason() const
{
    return m_failReason;
}

void QueryPayerinfoData::SetFailReason(const string& _failReason)
{
    m_failReason = _failReason;
    m_failReasonHasBeenSet = true;
}

bool QueryPayerinfoData::FailReasonHasBeenSet() const
{
    return m_failReasonHasBeenSet;
}

string QueryPayerinfoData::GetPayerType() const
{
    return m_payerType;
}

void QueryPayerinfoData::SetPayerType(const string& _payerType)
{
    m_payerType = _payerType;
    m_payerTypeHasBeenSet = true;
}

bool QueryPayerinfoData::PayerTypeHasBeenSet() const
{
    return m_payerTypeHasBeenSet;
}

string QueryPayerinfoData::GetPayerName() const
{
    return m_payerName;
}

void QueryPayerinfoData::SetPayerName(const string& _payerName)
{
    m_payerName = _payerName;
    m_payerNameHasBeenSet = true;
}

bool QueryPayerinfoData::PayerNameHasBeenSet() const
{
    return m_payerNameHasBeenSet;
}

string QueryPayerinfoData::GetPayerIdType() const
{
    return m_payerIdType;
}

void QueryPayerinfoData::SetPayerIdType(const string& _payerIdType)
{
    m_payerIdType = _payerIdType;
    m_payerIdTypeHasBeenSet = true;
}

bool QueryPayerinfoData::PayerIdTypeHasBeenSet() const
{
    return m_payerIdTypeHasBeenSet;
}

string QueryPayerinfoData::GetPayerIdNo() const
{
    return m_payerIdNo;
}

void QueryPayerinfoData::SetPayerIdNo(const string& _payerIdNo)
{
    m_payerIdNo = _payerIdNo;
    m_payerIdNoHasBeenSet = true;
}

bool QueryPayerinfoData::PayerIdNoHasBeenSet() const
{
    return m_payerIdNoHasBeenSet;
}

string QueryPayerinfoData::GetPayerContactNumber() const
{
    return m_payerContactNumber;
}

void QueryPayerinfoData::SetPayerContactNumber(const string& _payerContactNumber)
{
    m_payerContactNumber = _payerContactNumber;
    m_payerContactNumberHasBeenSet = true;
}

bool QueryPayerinfoData::PayerContactNumberHasBeenSet() const
{
    return m_payerContactNumberHasBeenSet;
}

string QueryPayerinfoData::GetPayerEmailAddress() const
{
    return m_payerEmailAddress;
}

void QueryPayerinfoData::SetPayerEmailAddress(const string& _payerEmailAddress)
{
    m_payerEmailAddress = _payerEmailAddress;
    m_payerEmailAddressHasBeenSet = true;
}

bool QueryPayerinfoData::PayerEmailAddressHasBeenSet() const
{
    return m_payerEmailAddressHasBeenSet;
}

string QueryPayerinfoData::GetPayerCountryCode() const
{
    return m_payerCountryCode;
}

void QueryPayerinfoData::SetPayerCountryCode(const string& _payerCountryCode)
{
    m_payerCountryCode = _payerCountryCode;
    m_payerCountryCodeHasBeenSet = true;
}

bool QueryPayerinfoData::PayerCountryCodeHasBeenSet() const
{
    return m_payerCountryCodeHasBeenSet;
}

string QueryPayerinfoData::GetPayerContactName() const
{
    return m_payerContactName;
}

void QueryPayerinfoData::SetPayerContactName(const string& _payerContactName)
{
    m_payerContactName = _payerContactName;
    m_payerContactNameHasBeenSet = true;
}

bool QueryPayerinfoData::PayerContactNameHasBeenSet() const
{
    return m_payerContactNameHasBeenSet;
}

