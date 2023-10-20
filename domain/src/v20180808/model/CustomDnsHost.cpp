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

#include <tencentcloud/domain/v20180808/model/CustomDnsHost.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

CustomDnsHost::CustomDnsHost() :
    m_dnsNameHasBeenSet(false),
    m_ipSetHasBeenSet(false)
{
}

CoreInternalOutcome CustomDnsHost::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DnsName") && !value["DnsName"].IsNull())
    {
        if (!value["DnsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomDnsHost.DnsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dnsName = string(value["DnsName"].GetString());
        m_dnsNameHasBeenSet = true;
    }

    if (value.HasMember("IpSet") && !value["IpSet"].IsNull())
    {
        if (!value["IpSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomDnsHost.IpSet` is not array type"));

        const rapidjson::Value &tmpValue = value["IpSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ipSet.push_back((*itr).GetString());
        }
        m_ipSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomDnsHost::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dnsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dnsName.c_str(), allocator).Move(), allocator);
    }

    if (m_ipSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipSet.begin(); itr != m_ipSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string CustomDnsHost::GetDnsName() const
{
    return m_dnsName;
}

void CustomDnsHost::SetDnsName(const string& _dnsName)
{
    m_dnsName = _dnsName;
    m_dnsNameHasBeenSet = true;
}

bool CustomDnsHost::DnsNameHasBeenSet() const
{
    return m_dnsNameHasBeenSet;
}

vector<string> CustomDnsHost::GetIpSet() const
{
    return m_ipSet;
}

void CustomDnsHost::SetIpSet(const vector<string>& _ipSet)
{
    m_ipSet = _ipSet;
    m_ipSetHasBeenSet = true;
}

bool CustomDnsHost::IpSetHasBeenSet() const
{
    return m_ipSetHasBeenSet;
}

