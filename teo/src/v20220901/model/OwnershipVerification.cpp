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

#include <tencentcloud/teo/v20220901/model/OwnershipVerification.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

OwnershipVerification::OwnershipVerification() :
    m_dnsVerificationHasBeenSet(false),
    m_fileVerificationHasBeenSet(false),
    m_nsVerificationHasBeenSet(false)
{
}

CoreInternalOutcome OwnershipVerification::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DnsVerification") && !value["DnsVerification"].IsNull())
    {
        if (!value["DnsVerification"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OwnershipVerification.DnsVerification` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dnsVerification.Deserialize(value["DnsVerification"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dnsVerificationHasBeenSet = true;
    }

    if (value.HasMember("FileVerification") && !value["FileVerification"].IsNull())
    {
        if (!value["FileVerification"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OwnershipVerification.FileVerification` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fileVerification.Deserialize(value["FileVerification"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fileVerificationHasBeenSet = true;
    }

    if (value.HasMember("NsVerification") && !value["NsVerification"].IsNull())
    {
        if (!value["NsVerification"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OwnershipVerification.NsVerification` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_nsVerification.Deserialize(value["NsVerification"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nsVerificationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OwnershipVerification::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dnsVerificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsVerification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dnsVerification.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fileVerificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileVerification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fileVerification.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nsVerificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NsVerification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nsVerification.ToJsonObject(value[key.c_str()], allocator);
    }

}


DnsVerification OwnershipVerification::GetDnsVerification() const
{
    return m_dnsVerification;
}

void OwnershipVerification::SetDnsVerification(const DnsVerification& _dnsVerification)
{
    m_dnsVerification = _dnsVerification;
    m_dnsVerificationHasBeenSet = true;
}

bool OwnershipVerification::DnsVerificationHasBeenSet() const
{
    return m_dnsVerificationHasBeenSet;
}

FileVerification OwnershipVerification::GetFileVerification() const
{
    return m_fileVerification;
}

void OwnershipVerification::SetFileVerification(const FileVerification& _fileVerification)
{
    m_fileVerification = _fileVerification;
    m_fileVerificationHasBeenSet = true;
}

bool OwnershipVerification::FileVerificationHasBeenSet() const
{
    return m_fileVerificationHasBeenSet;
}

NsVerification OwnershipVerification::GetNsVerification() const
{
    return m_nsVerification;
}

void OwnershipVerification::SetNsVerification(const NsVerification& _nsVerification)
{
    m_nsVerification = _nsVerification;
    m_nsVerificationHasBeenSet = true;
}

bool OwnershipVerification::NsVerificationHasBeenSet() const
{
    return m_nsVerificationHasBeenSet;
}

