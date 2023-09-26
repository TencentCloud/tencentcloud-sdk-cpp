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

#include <tencentcloud/teo/v20220901/model/DnsVerification.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

DnsVerification::DnsVerification() :
    m_subdomainHasBeenSet(false),
    m_recordTypeHasBeenSet(false),
    m_recordValueHasBeenSet(false)
{
}

CoreInternalOutcome DnsVerification::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Subdomain") && !value["Subdomain"].IsNull())
    {
        if (!value["Subdomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DnsVerification.Subdomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subdomain = string(value["Subdomain"].GetString());
        m_subdomainHasBeenSet = true;
    }

    if (value.HasMember("RecordType") && !value["RecordType"].IsNull())
    {
        if (!value["RecordType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DnsVerification.RecordType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordType = string(value["RecordType"].GetString());
        m_recordTypeHasBeenSet = true;
    }

    if (value.HasMember("RecordValue") && !value["RecordValue"].IsNull())
    {
        if (!value["RecordValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DnsVerification.RecordValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordValue = string(value["RecordValue"].GetString());
        m_recordValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DnsVerification::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subdomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Subdomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subdomain.c_str(), allocator).Move(), allocator);
    }

    if (m_recordTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordType.c_str(), allocator).Move(), allocator);
    }

    if (m_recordValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordValue.c_str(), allocator).Move(), allocator);
    }

}


string DnsVerification::GetSubdomain() const
{
    return m_subdomain;
}

void DnsVerification::SetSubdomain(const string& _subdomain)
{
    m_subdomain = _subdomain;
    m_subdomainHasBeenSet = true;
}

bool DnsVerification::SubdomainHasBeenSet() const
{
    return m_subdomainHasBeenSet;
}

string DnsVerification::GetRecordType() const
{
    return m_recordType;
}

void DnsVerification::SetRecordType(const string& _recordType)
{
    m_recordType = _recordType;
    m_recordTypeHasBeenSet = true;
}

bool DnsVerification::RecordTypeHasBeenSet() const
{
    return m_recordTypeHasBeenSet;
}

string DnsVerification::GetRecordValue() const
{
    return m_recordValue;
}

void DnsVerification::SetRecordValue(const string& _recordValue)
{
    m_recordValue = _recordValue;
    m_recordValueHasBeenSet = true;
}

bool DnsVerification::RecordValueHasBeenSet() const
{
    return m_recordValueHasBeenSet;
}

