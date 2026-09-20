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

#include <tencentcloud/cls/v20201016/model/PrivateDomainNames.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

PrivateDomainNames::PrivateDomainNames() :
    m_domainNameHasBeenSet(false),
    m_ipAddrHasBeenSet(false)
{
}

CoreInternalOutcome PrivateDomainNames::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DomainName") && !value["DomainName"].IsNull())
    {
        if (!value["DomainName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateDomainNames.DomainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainName = string(value["DomainName"].GetString());
        m_domainNameHasBeenSet = true;
    }

    if (value.HasMember("IpAddr") && !value["IpAddr"].IsNull())
    {
        if (!value["IpAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateDomainNames.IpAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipAddr = string(value["IpAddr"].GetString());
        m_ipAddrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrivateDomainNames::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_ipAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipAddr.c_str(), allocator).Move(), allocator);
    }

}


string PrivateDomainNames::GetDomainName() const
{
    return m_domainName;
}

void PrivateDomainNames::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool PrivateDomainNames::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

string PrivateDomainNames::GetIpAddr() const
{
    return m_ipAddr;
}

void PrivateDomainNames::SetIpAddr(const string& _ipAddr)
{
    m_ipAddr = _ipAddr;
    m_ipAddrHasBeenSet = true;
}

bool PrivateDomainNames::IpAddrHasBeenSet() const
{
    return m_ipAddrHasBeenSet;
}

