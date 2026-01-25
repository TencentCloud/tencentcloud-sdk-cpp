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

#include <tencentcloud/mna/v20210119/model/DestIpInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

DestIpInfo::DestIpInfo() :
    m_timeHasBeenSet(false),
    m_gatewayIpHasBeenSet(false),
    m_gatewaySiteHasBeenSet(false),
    m_ipCountHasBeenSet(false),
    m_ipListHasBeenSet(false)
{
}

CoreInternalOutcome DestIpInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DestIpInfo.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("GatewayIp") && !value["GatewayIp"].IsNull())
    {
        if (!value["GatewayIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DestIpInfo.GatewayIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayIp = string(value["GatewayIp"].GetString());
        m_gatewayIpHasBeenSet = true;
    }

    if (value.HasMember("GatewaySite") && !value["GatewaySite"].IsNull())
    {
        if (!value["GatewaySite"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DestIpInfo.GatewaySite` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewaySite = string(value["GatewaySite"].GetString());
        m_gatewaySiteHasBeenSet = true;
    }

    if (value.HasMember("IpCount") && !value["IpCount"].IsNull())
    {
        if (!value["IpCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DestIpInfo.IpCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ipCount = value["IpCount"].GetInt64();
        m_ipCountHasBeenSet = true;
    }

    if (value.HasMember("IpList") && !value["IpList"].IsNull())
    {
        if (!value["IpList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DestIpInfo.IpList` is not array type"));

        const rapidjson::Value &tmpValue = value["IpList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ipList.push_back((*itr).GetString());
        }
        m_ipListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DestIpInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayIp.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewaySiteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewaySite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewaySite.c_str(), allocator).Move(), allocator);
    }

    if (m_ipCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipCount, allocator);
    }

    if (m_ipListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipList.begin(); itr != m_ipList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string DestIpInfo::GetTime() const
{
    return m_time;
}

void DestIpInfo::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool DestIpInfo::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string DestIpInfo::GetGatewayIp() const
{
    return m_gatewayIp;
}

void DestIpInfo::SetGatewayIp(const string& _gatewayIp)
{
    m_gatewayIp = _gatewayIp;
    m_gatewayIpHasBeenSet = true;
}

bool DestIpInfo::GatewayIpHasBeenSet() const
{
    return m_gatewayIpHasBeenSet;
}

string DestIpInfo::GetGatewaySite() const
{
    return m_gatewaySite;
}

void DestIpInfo::SetGatewaySite(const string& _gatewaySite)
{
    m_gatewaySite = _gatewaySite;
    m_gatewaySiteHasBeenSet = true;
}

bool DestIpInfo::GatewaySiteHasBeenSet() const
{
    return m_gatewaySiteHasBeenSet;
}

int64_t DestIpInfo::GetIpCount() const
{
    return m_ipCount;
}

void DestIpInfo::SetIpCount(const int64_t& _ipCount)
{
    m_ipCount = _ipCount;
    m_ipCountHasBeenSet = true;
}

bool DestIpInfo::IpCountHasBeenSet() const
{
    return m_ipCountHasBeenSet;
}

vector<string> DestIpInfo::GetIpList() const
{
    return m_ipList;
}

void DestIpInfo::SetIpList(const vector<string>& _ipList)
{
    m_ipList = _ipList;
    m_ipListHasBeenSet = true;
}

bool DestIpInfo::IpListHasBeenSet() const
{
    return m_ipListHasBeenSet;
}

