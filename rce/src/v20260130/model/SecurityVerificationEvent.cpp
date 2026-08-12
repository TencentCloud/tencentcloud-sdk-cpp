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

#include <tencentcloud/rce/v20260130/model/SecurityVerificationEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

SecurityVerificationEvent::SecurityVerificationEvent() :
    m_verificationEventHasBeenSet(false),
    m_verificationTypeHasBeenSet(false),
    m_verificationContentHasBeenSet(false),
    m_verificationResultHasBeenSet(false),
    m_custHasBeenSet(false)
{
}

CoreInternalOutcome SecurityVerificationEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VerificationEvent") && !value["VerificationEvent"].IsNull())
    {
        if (!value["VerificationEvent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityVerificationEvent.VerificationEvent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verificationEvent = string(value["VerificationEvent"].GetString());
        m_verificationEventHasBeenSet = true;
    }

    if (value.HasMember("VerificationType") && !value["VerificationType"].IsNull())
    {
        if (!value["VerificationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityVerificationEvent.VerificationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verificationType = string(value["VerificationType"].GetString());
        m_verificationTypeHasBeenSet = true;
    }

    if (value.HasMember("VerificationContent") && !value["VerificationContent"].IsNull())
    {
        if (!value["VerificationContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityVerificationEvent.VerificationContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verificationContent = string(value["VerificationContent"].GetString());
        m_verificationContentHasBeenSet = true;
    }

    if (value.HasMember("VerificationResult") && !value["VerificationResult"].IsNull())
    {
        if (!value["VerificationResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityVerificationEvent.VerificationResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_verificationResult.Deserialize(value["VerificationResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_verificationResultHasBeenSet = true;
    }

    if (value.HasMember("Cust") && !value["Cust"].IsNull())
    {
        if (!value["Cust"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecurityVerificationEvent.Cust` is not array type"));

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

void SecurityVerificationEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_verificationEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerificationEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verificationEvent.c_str(), allocator).Move(), allocator);
    }

    if (m_verificationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerificationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verificationType.c_str(), allocator).Move(), allocator);
    }

    if (m_verificationContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerificationContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verificationContent.c_str(), allocator).Move(), allocator);
    }

    if (m_verificationResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerificationResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_verificationResult.ToJsonObject(value[key.c_str()], allocator);
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


string SecurityVerificationEvent::GetVerificationEvent() const
{
    return m_verificationEvent;
}

void SecurityVerificationEvent::SetVerificationEvent(const string& _verificationEvent)
{
    m_verificationEvent = _verificationEvent;
    m_verificationEventHasBeenSet = true;
}

bool SecurityVerificationEvent::VerificationEventHasBeenSet() const
{
    return m_verificationEventHasBeenSet;
}

string SecurityVerificationEvent::GetVerificationType() const
{
    return m_verificationType;
}

void SecurityVerificationEvent::SetVerificationType(const string& _verificationType)
{
    m_verificationType = _verificationType;
    m_verificationTypeHasBeenSet = true;
}

bool SecurityVerificationEvent::VerificationTypeHasBeenSet() const
{
    return m_verificationTypeHasBeenSet;
}

string SecurityVerificationEvent::GetVerificationContent() const
{
    return m_verificationContent;
}

void SecurityVerificationEvent::SetVerificationContent(const string& _verificationContent)
{
    m_verificationContent = _verificationContent;
    m_verificationContentHasBeenSet = true;
}

bool SecurityVerificationEvent::VerificationContentHasBeenSet() const
{
    return m_verificationContentHasBeenSet;
}

Result SecurityVerificationEvent::GetVerificationResult() const
{
    return m_verificationResult;
}

void SecurityVerificationEvent::SetVerificationResult(const Result& _verificationResult)
{
    m_verificationResult = _verificationResult;
    m_verificationResultHasBeenSet = true;
}

bool SecurityVerificationEvent::VerificationResultHasBeenSet() const
{
    return m_verificationResultHasBeenSet;
}

vector<Cust> SecurityVerificationEvent::GetCust() const
{
    return m_cust;
}

void SecurityVerificationEvent::SetCust(const vector<Cust>& _cust)
{
    m_cust = _cust;
    m_custHasBeenSet = true;
}

bool SecurityVerificationEvent::CustHasBeenSet() const
{
    return m_custHasBeenSet;
}

