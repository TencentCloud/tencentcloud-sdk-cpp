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

#include <tencentcloud/edgezone/v20260401/model/PublicNetworkInstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Edgezone::V20260401::Model;
using namespace std;

PublicNetworkInstanceInfo::PublicNetworkInstanceInfo() :
    m_networkInstanceIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_networkInstanceNameHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_lineHasBeenSet(false),
    m_routeModeHasBeenSet(false),
    m_serverCountHasBeenSet(false),
    m_ipv4CountHasBeenSet(false),
    m_ipv6CountHasBeenSet(false),
    m_ipv4CidrSetHasBeenSet(false),
    m_ipv6CidrSetHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

CoreInternalOutcome PublicNetworkInstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NetworkInstanceId") && !value["NetworkInstanceId"].IsNull())
    {
        if (!value["NetworkInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicNetworkInstanceInfo.NetworkInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkInstanceId = string(value["NetworkInstanceId"].GetString());
        m_networkInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicNetworkInstanceInfo.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("NetworkInstanceName") && !value["NetworkInstanceName"].IsNull())
    {
        if (!value["NetworkInstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicNetworkInstanceInfo.NetworkInstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkInstanceName = string(value["NetworkInstanceName"].GetString());
        m_networkInstanceNameHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PublicNetworkInstanceInfo.Bandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetInt64();
        m_bandwidthHasBeenSet = true;
    }

    if (value.HasMember("Line") && !value["Line"].IsNull())
    {
        if (!value["Line"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicNetworkInstanceInfo.Line` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_line = string(value["Line"].GetString());
        m_lineHasBeenSet = true;
    }

    if (value.HasMember("RouteMode") && !value["RouteMode"].IsNull())
    {
        if (!value["RouteMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicNetworkInstanceInfo.RouteMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeMode = string(value["RouteMode"].GetString());
        m_routeModeHasBeenSet = true;
    }

    if (value.HasMember("ServerCount") && !value["ServerCount"].IsNull())
    {
        if (!value["ServerCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PublicNetworkInstanceInfo.ServerCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_serverCount = value["ServerCount"].GetInt64();
        m_serverCountHasBeenSet = true;
    }

    if (value.HasMember("Ipv4Count") && !value["Ipv4Count"].IsNull())
    {
        if (!value["Ipv4Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PublicNetworkInstanceInfo.Ipv4Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ipv4Count = value["Ipv4Count"].GetInt64();
        m_ipv4CountHasBeenSet = true;
    }

    if (value.HasMember("Ipv6Count") && !value["Ipv6Count"].IsNull())
    {
        if (!value["Ipv6Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PublicNetworkInstanceInfo.Ipv6Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ipv6Count = value["Ipv6Count"].GetInt64();
        m_ipv6CountHasBeenSet = true;
    }

    if (value.HasMember("Ipv4CidrSet") && !value["Ipv4CidrSet"].IsNull())
    {
        if (!value["Ipv4CidrSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PublicNetworkInstanceInfo.Ipv4CidrSet` is not array type"));

        const rapidjson::Value &tmpValue = value["Ipv4CidrSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PublicNetworkSegment item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ipv4CidrSet.push_back(item);
        }
        m_ipv4CidrSetHasBeenSet = true;
    }

    if (value.HasMember("Ipv6CidrSet") && !value["Ipv6CidrSet"].IsNull())
    {
        if (!value["Ipv6CidrSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PublicNetworkInstanceInfo.Ipv6CidrSet` is not array type"));

        const rapidjson::Value &tmpValue = value["Ipv6CidrSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PublicNetworkSegment item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ipv6CidrSet.push_back(item);
        }
        m_ipv6CidrSetHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicNetworkInstanceInfo.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicNetworkInstanceInfo.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PublicNetworkInstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_networkInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_networkInstanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkInstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkInstanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_lineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Line";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_line.c_str(), allocator).Move(), allocator);
    }

    if (m_routeModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeMode.c_str(), allocator).Move(), allocator);
    }

    if (m_serverCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serverCount, allocator);
    }

    if (m_ipv4CountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv4Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipv4Count, allocator);
    }

    if (m_ipv6CountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipv6Count, allocator);
    }

    if (m_ipv4CidrSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv4CidrSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ipv4CidrSet.begin(); itr != m_ipv4CidrSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ipv6CidrSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6CidrSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ipv6CidrSet.begin(); itr != m_ipv6CidrSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

}


string PublicNetworkInstanceInfo::GetNetworkInstanceId() const
{
    return m_networkInstanceId;
}

void PublicNetworkInstanceInfo::SetNetworkInstanceId(const string& _networkInstanceId)
{
    m_networkInstanceId = _networkInstanceId;
    m_networkInstanceIdHasBeenSet = true;
}

bool PublicNetworkInstanceInfo::NetworkInstanceIdHasBeenSet() const
{
    return m_networkInstanceIdHasBeenSet;
}

string PublicNetworkInstanceInfo::GetZoneId() const
{
    return m_zoneId;
}

void PublicNetworkInstanceInfo::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool PublicNetworkInstanceInfo::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string PublicNetworkInstanceInfo::GetNetworkInstanceName() const
{
    return m_networkInstanceName;
}

void PublicNetworkInstanceInfo::SetNetworkInstanceName(const string& _networkInstanceName)
{
    m_networkInstanceName = _networkInstanceName;
    m_networkInstanceNameHasBeenSet = true;
}

bool PublicNetworkInstanceInfo::NetworkInstanceNameHasBeenSet() const
{
    return m_networkInstanceNameHasBeenSet;
}

int64_t PublicNetworkInstanceInfo::GetBandwidth() const
{
    return m_bandwidth;
}

void PublicNetworkInstanceInfo::SetBandwidth(const int64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool PublicNetworkInstanceInfo::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

string PublicNetworkInstanceInfo::GetLine() const
{
    return m_line;
}

void PublicNetworkInstanceInfo::SetLine(const string& _line)
{
    m_line = _line;
    m_lineHasBeenSet = true;
}

bool PublicNetworkInstanceInfo::LineHasBeenSet() const
{
    return m_lineHasBeenSet;
}

string PublicNetworkInstanceInfo::GetRouteMode() const
{
    return m_routeMode;
}

void PublicNetworkInstanceInfo::SetRouteMode(const string& _routeMode)
{
    m_routeMode = _routeMode;
    m_routeModeHasBeenSet = true;
}

bool PublicNetworkInstanceInfo::RouteModeHasBeenSet() const
{
    return m_routeModeHasBeenSet;
}

int64_t PublicNetworkInstanceInfo::GetServerCount() const
{
    return m_serverCount;
}

void PublicNetworkInstanceInfo::SetServerCount(const int64_t& _serverCount)
{
    m_serverCount = _serverCount;
    m_serverCountHasBeenSet = true;
}

bool PublicNetworkInstanceInfo::ServerCountHasBeenSet() const
{
    return m_serverCountHasBeenSet;
}

int64_t PublicNetworkInstanceInfo::GetIpv4Count() const
{
    return m_ipv4Count;
}

void PublicNetworkInstanceInfo::SetIpv4Count(const int64_t& _ipv4Count)
{
    m_ipv4Count = _ipv4Count;
    m_ipv4CountHasBeenSet = true;
}

bool PublicNetworkInstanceInfo::Ipv4CountHasBeenSet() const
{
    return m_ipv4CountHasBeenSet;
}

int64_t PublicNetworkInstanceInfo::GetIpv6Count() const
{
    return m_ipv6Count;
}

void PublicNetworkInstanceInfo::SetIpv6Count(const int64_t& _ipv6Count)
{
    m_ipv6Count = _ipv6Count;
    m_ipv6CountHasBeenSet = true;
}

bool PublicNetworkInstanceInfo::Ipv6CountHasBeenSet() const
{
    return m_ipv6CountHasBeenSet;
}

vector<PublicNetworkSegment> PublicNetworkInstanceInfo::GetIpv4CidrSet() const
{
    return m_ipv4CidrSet;
}

void PublicNetworkInstanceInfo::SetIpv4CidrSet(const vector<PublicNetworkSegment>& _ipv4CidrSet)
{
    m_ipv4CidrSet = _ipv4CidrSet;
    m_ipv4CidrSetHasBeenSet = true;
}

bool PublicNetworkInstanceInfo::Ipv4CidrSetHasBeenSet() const
{
    return m_ipv4CidrSetHasBeenSet;
}

vector<PublicNetworkSegment> PublicNetworkInstanceInfo::GetIpv6CidrSet() const
{
    return m_ipv6CidrSet;
}

void PublicNetworkInstanceInfo::SetIpv6CidrSet(const vector<PublicNetworkSegment>& _ipv6CidrSet)
{
    m_ipv6CidrSet = _ipv6CidrSet;
    m_ipv6CidrSetHasBeenSet = true;
}

bool PublicNetworkInstanceInfo::Ipv6CidrSetHasBeenSet() const
{
    return m_ipv6CidrSetHasBeenSet;
}

string PublicNetworkInstanceInfo::GetCreatedAt() const
{
    return m_createdAt;
}

void PublicNetworkInstanceInfo::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool PublicNetworkInstanceInfo::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string PublicNetworkInstanceInfo::GetUpdatedAt() const
{
    return m_updatedAt;
}

void PublicNetworkInstanceInfo::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool PublicNetworkInstanceInfo::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

