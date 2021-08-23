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

#include <tencentcloud/cpdp/v20190820/model/ApplyPayerinfoData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

ApplyPayerinfoData::ApplyPayerinfoData() :
    m_merchantIdHasBeenSet(false),
    m_payerIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_failReasonHasBeenSet(false)
{
}

CoreInternalOutcome ApplyPayerinfoData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MerchantId") && !value["MerchantId"].IsNull())
    {
        if (!value["MerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyPayerinfoData.MerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantId = string(value["MerchantId"].GetString());
        m_merchantIdHasBeenSet = true;
    }

    if (value.HasMember("PayerId") && !value["PayerId"].IsNull())
    {
        if (!value["PayerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyPayerinfoData.PayerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payerId = string(value["PayerId"].GetString());
        m_payerIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyPayerinfoData.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("FailReason") && !value["FailReason"].IsNull())
    {
        if (!value["FailReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyPayerinfoData.FailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failReason = string(value["FailReason"].GetString());
        m_failReasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApplyPayerinfoData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string ApplyPayerinfoData::GetMerchantId() const
{
    return m_merchantId;
}

void ApplyPayerinfoData::SetMerchantId(const string& _merchantId)
{
    m_merchantId = _merchantId;
    m_merchantIdHasBeenSet = true;
}

bool ApplyPayerinfoData::MerchantIdHasBeenSet() const
{
    return m_merchantIdHasBeenSet;
}

string ApplyPayerinfoData::GetPayerId() const
{
    return m_payerId;
}

void ApplyPayerinfoData::SetPayerId(const string& _payerId)
{
    m_payerId = _payerId;
    m_payerIdHasBeenSet = true;
}

bool ApplyPayerinfoData::PayerIdHasBeenSet() const
{
    return m_payerIdHasBeenSet;
}

string ApplyPayerinfoData::GetStatus() const
{
    return m_status;
}

void ApplyPayerinfoData::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ApplyPayerinfoData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ApplyPayerinfoData::GetFailReason() const
{
    return m_failReason;
}

void ApplyPayerinfoData::SetFailReason(const string& _failReason)
{
    m_failReason = _failReason;
    m_failReasonHasBeenSet = true;
}

bool ApplyPayerinfoData::FailReasonHasBeenSet() const
{
    return m_failReasonHasBeenSet;
}

