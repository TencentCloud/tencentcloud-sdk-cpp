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

#include <tencentcloud/teo/v20220901/model/OriginProtectionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

OriginProtectionInfo::OriginProtectionInfo() :
    m_zoneIdHasBeenSet(false),
    m_hostsHasBeenSet(false),
    m_proxyIdsHasBeenSet(false),
    m_currentIPWhitelistHasBeenSet(false),
    m_needUpdateHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_planSupportHasBeenSet(false),
    m_diffIPWhitelistHasBeenSet(false)
{
}

CoreInternalOutcome OriginProtectionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginProtectionInfo.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("Hosts") && !value["Hosts"].IsNull())
    {
        if (!value["Hosts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OriginProtectionInfo.Hosts` is not array type"));

        const rapidjson::Value &tmpValue = value["Hosts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_hosts.push_back((*itr).GetString());
        }
        m_hostsHasBeenSet = true;
    }

    if (value.HasMember("ProxyIds") && !value["ProxyIds"].IsNull())
    {
        if (!value["ProxyIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OriginProtectionInfo.ProxyIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ProxyIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_proxyIds.push_back((*itr).GetString());
        }
        m_proxyIdsHasBeenSet = true;
    }

    if (value.HasMember("CurrentIPWhitelist") && !value["CurrentIPWhitelist"].IsNull())
    {
        if (!value["CurrentIPWhitelist"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OriginProtectionInfo.CurrentIPWhitelist` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_currentIPWhitelist.Deserialize(value["CurrentIPWhitelist"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_currentIPWhitelistHasBeenSet = true;
    }

    if (value.HasMember("NeedUpdate") && !value["NeedUpdate"].IsNull())
    {
        if (!value["NeedUpdate"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `OriginProtectionInfo.NeedUpdate` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_needUpdate = value["NeedUpdate"].GetBool();
        m_needUpdateHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginProtectionInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("PlanSupport") && !value["PlanSupport"].IsNull())
    {
        if (!value["PlanSupport"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `OriginProtectionInfo.PlanSupport` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_planSupport = value["PlanSupport"].GetBool();
        m_planSupportHasBeenSet = true;
    }

    if (value.HasMember("DiffIPWhitelist") && !value["DiffIPWhitelist"].IsNull())
    {
        if (!value["DiffIPWhitelist"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OriginProtectionInfo.DiffIPWhitelist` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_diffIPWhitelist.Deserialize(value["DiffIPWhitelist"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_diffIPWhitelistHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OriginProtectionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_hostsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hosts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hosts.begin(); itr != m_hosts.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_proxyIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_proxyIds.begin(); itr != m_proxyIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_currentIPWhitelistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentIPWhitelist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_currentIPWhitelist.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_needUpdateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedUpdate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needUpdate, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_planSupportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanSupport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_planSupport, allocator);
    }

    if (m_diffIPWhitelistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiffIPWhitelist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_diffIPWhitelist.ToJsonObject(value[key.c_str()], allocator);
    }

}


string OriginProtectionInfo::GetZoneId() const
{
    return m_zoneId;
}

void OriginProtectionInfo::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool OriginProtectionInfo::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

vector<string> OriginProtectionInfo::GetHosts() const
{
    return m_hosts;
}

void OriginProtectionInfo::SetHosts(const vector<string>& _hosts)
{
    m_hosts = _hosts;
    m_hostsHasBeenSet = true;
}

bool OriginProtectionInfo::HostsHasBeenSet() const
{
    return m_hostsHasBeenSet;
}

vector<string> OriginProtectionInfo::GetProxyIds() const
{
    return m_proxyIds;
}

void OriginProtectionInfo::SetProxyIds(const vector<string>& _proxyIds)
{
    m_proxyIds = _proxyIds;
    m_proxyIdsHasBeenSet = true;
}

bool OriginProtectionInfo::ProxyIdsHasBeenSet() const
{
    return m_proxyIdsHasBeenSet;
}

IPWhitelist OriginProtectionInfo::GetCurrentIPWhitelist() const
{
    return m_currentIPWhitelist;
}

void OriginProtectionInfo::SetCurrentIPWhitelist(const IPWhitelist& _currentIPWhitelist)
{
    m_currentIPWhitelist = _currentIPWhitelist;
    m_currentIPWhitelistHasBeenSet = true;
}

bool OriginProtectionInfo::CurrentIPWhitelistHasBeenSet() const
{
    return m_currentIPWhitelistHasBeenSet;
}

bool OriginProtectionInfo::GetNeedUpdate() const
{
    return m_needUpdate;
}

void OriginProtectionInfo::SetNeedUpdate(const bool& _needUpdate)
{
    m_needUpdate = _needUpdate;
    m_needUpdateHasBeenSet = true;
}

bool OriginProtectionInfo::NeedUpdateHasBeenSet() const
{
    return m_needUpdateHasBeenSet;
}

string OriginProtectionInfo::GetStatus() const
{
    return m_status;
}

void OriginProtectionInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool OriginProtectionInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool OriginProtectionInfo::GetPlanSupport() const
{
    return m_planSupport;
}

void OriginProtectionInfo::SetPlanSupport(const bool& _planSupport)
{
    m_planSupport = _planSupport;
    m_planSupportHasBeenSet = true;
}

bool OriginProtectionInfo::PlanSupportHasBeenSet() const
{
    return m_planSupportHasBeenSet;
}

DiffIPWhitelist OriginProtectionInfo::GetDiffIPWhitelist() const
{
    return m_diffIPWhitelist;
}

void OriginProtectionInfo::SetDiffIPWhitelist(const DiffIPWhitelist& _diffIPWhitelist)
{
    m_diffIPWhitelist = _diffIPWhitelist;
    m_diffIPWhitelistHasBeenSet = true;
}

bool OriginProtectionInfo::DiffIPWhitelistHasBeenSet() const
{
    return m_diffIPWhitelistHasBeenSet;
}

