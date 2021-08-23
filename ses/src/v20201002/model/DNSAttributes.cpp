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

#include <tencentcloud/ses/v20201002/model/DNSAttributes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ses::V20201002::Model;
using namespace std;

DNSAttributes::DNSAttributes() :
    m_typeHasBeenSet(false),
    m_sendDomainHasBeenSet(false),
    m_expectedValueHasBeenSet(false),
    m_currentValueHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome DNSAttributes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DNSAttributes.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("SendDomain") && !value["SendDomain"].IsNull())
    {
        if (!value["SendDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DNSAttributes.SendDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sendDomain = string(value["SendDomain"].GetString());
        m_sendDomainHasBeenSet = true;
    }

    if (value.HasMember("ExpectedValue") && !value["ExpectedValue"].IsNull())
    {
        if (!value["ExpectedValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DNSAttributes.ExpectedValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expectedValue = string(value["ExpectedValue"].GetString());
        m_expectedValueHasBeenSet = true;
    }

    if (value.HasMember("CurrentValue") && !value["CurrentValue"].IsNull())
    {
        if (!value["CurrentValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DNSAttributes.CurrentValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentValue = string(value["CurrentValue"].GetString());
        m_currentValueHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DNSAttributes.Status` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetBool();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DNSAttributes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_sendDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sendDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_expectedValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpectedValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expectedValue.c_str(), allocator).Move(), allocator);
    }

    if (m_currentValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentValue.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


string DNSAttributes::GetType() const
{
    return m_type;
}

void DNSAttributes::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DNSAttributes::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DNSAttributes::GetSendDomain() const
{
    return m_sendDomain;
}

void DNSAttributes::SetSendDomain(const string& _sendDomain)
{
    m_sendDomain = _sendDomain;
    m_sendDomainHasBeenSet = true;
}

bool DNSAttributes::SendDomainHasBeenSet() const
{
    return m_sendDomainHasBeenSet;
}

string DNSAttributes::GetExpectedValue() const
{
    return m_expectedValue;
}

void DNSAttributes::SetExpectedValue(const string& _expectedValue)
{
    m_expectedValue = _expectedValue;
    m_expectedValueHasBeenSet = true;
}

bool DNSAttributes::ExpectedValueHasBeenSet() const
{
    return m_expectedValueHasBeenSet;
}

string DNSAttributes::GetCurrentValue() const
{
    return m_currentValue;
}

void DNSAttributes::SetCurrentValue(const string& _currentValue)
{
    m_currentValue = _currentValue;
    m_currentValueHasBeenSet = true;
}

bool DNSAttributes::CurrentValueHasBeenSet() const
{
    return m_currentValueHasBeenSet;
}

bool DNSAttributes::GetStatus() const
{
    return m_status;
}

void DNSAttributes::SetStatus(const bool& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DNSAttributes::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

