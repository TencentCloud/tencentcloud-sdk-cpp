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

#include <tencentcloud/tcb/v20180608/model/OwnershipVerificationInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

OwnershipVerificationInfo::OwnershipVerificationInfo() :
    m_domainHasBeenSet(false),
    m_dnsVerificationHasBeenSet(false),
    m_fileVerificationHasBeenSet(false)
{
}

CoreInternalOutcome OwnershipVerificationInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OwnershipVerificationInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("DnsVerification") && !value["DnsVerification"].IsNull())
    {
        if (!value["DnsVerification"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OwnershipVerificationInfo.DnsVerification` is not array type"));

        const rapidjson::Value &tmpValue = value["DnsVerification"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OwnershipVerificationDnsInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dnsVerification.push_back(item);
        }
        m_dnsVerificationHasBeenSet = true;
    }

    if (value.HasMember("FileVerification") && !value["FileVerification"].IsNull())
    {
        if (!value["FileVerification"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OwnershipVerificationInfo.FileVerification` is not array type"));

        const rapidjson::Value &tmpValue = value["FileVerification"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OwnershipVerificationFileInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fileVerification.push_back(item);
        }
        m_fileVerificationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OwnershipVerificationInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_dnsVerificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsVerification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dnsVerification.begin(); itr != m_dnsVerification.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_fileVerificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileVerification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fileVerification.begin(); itr != m_fileVerification.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string OwnershipVerificationInfo::GetDomain() const
{
    return m_domain;
}

void OwnershipVerificationInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool OwnershipVerificationInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

vector<OwnershipVerificationDnsInfo> OwnershipVerificationInfo::GetDnsVerification() const
{
    return m_dnsVerification;
}

void OwnershipVerificationInfo::SetDnsVerification(const vector<OwnershipVerificationDnsInfo>& _dnsVerification)
{
    m_dnsVerification = _dnsVerification;
    m_dnsVerificationHasBeenSet = true;
}

bool OwnershipVerificationInfo::DnsVerificationHasBeenSet() const
{
    return m_dnsVerificationHasBeenSet;
}

vector<OwnershipVerificationFileInfo> OwnershipVerificationInfo::GetFileVerification() const
{
    return m_fileVerification;
}

void OwnershipVerificationInfo::SetFileVerification(const vector<OwnershipVerificationFileInfo>& _fileVerification)
{
    m_fileVerification = _fileVerification;
    m_fileVerificationHasBeenSet = true;
}

bool OwnershipVerificationInfo::FileVerificationHasBeenSet() const
{
    return m_fileVerificationHasBeenSet;
}

