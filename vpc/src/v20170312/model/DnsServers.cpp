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

#include <tencentcloud/vpc/v20170312/model/DnsServers.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DnsServers::DnsServers() :
    m_primaryDnsHasBeenSet(false),
    m_secondaryDnsHasBeenSet(false)
{
}

CoreInternalOutcome DnsServers::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PrimaryDns") && !value["PrimaryDns"].IsNull())
    {
        if (!value["PrimaryDns"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DnsServers.PrimaryDns` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_primaryDns = string(value["PrimaryDns"].GetString());
        m_primaryDnsHasBeenSet = true;
    }

    if (value.HasMember("SecondaryDns") && !value["SecondaryDns"].IsNull())
    {
        if (!value["SecondaryDns"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DnsServers.SecondaryDns` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secondaryDns = string(value["SecondaryDns"].GetString());
        m_secondaryDnsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DnsServers::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_primaryDnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrimaryDns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_primaryDns.c_str(), allocator).Move(), allocator);
    }

    if (m_secondaryDnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondaryDns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secondaryDns.c_str(), allocator).Move(), allocator);
    }

}


string DnsServers::GetPrimaryDns() const
{
    return m_primaryDns;
}

void DnsServers::SetPrimaryDns(const string& _primaryDns)
{
    m_primaryDns = _primaryDns;
    m_primaryDnsHasBeenSet = true;
}

bool DnsServers::PrimaryDnsHasBeenSet() const
{
    return m_primaryDnsHasBeenSet;
}

string DnsServers::GetSecondaryDns() const
{
    return m_secondaryDns;
}

void DnsServers::SetSecondaryDns(const string& _secondaryDns)
{
    m_secondaryDns = _secondaryDns;
    m_secondaryDnsHasBeenSet = true;
}

bool DnsServers::SecondaryDnsHasBeenSet() const
{
    return m_secondaryDnsHasBeenSet;
}

