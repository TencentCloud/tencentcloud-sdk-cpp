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

#include <tencentcloud/csip/v20221121/model/PortViewPortRisk.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

PortViewPortRisk::PortViewPortRisk() :
    m_noHandleCountHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_componentHasBeenSet(false),
    m_portHasBeenSet(false),
    m_recentTimeHasBeenSet(false),
    m_firstTimeHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_affectAssetCountHasBeenSet(false),
    m_idHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_nickHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_serviceHasBeenSet(false)
{
}

CoreInternalOutcome PortViewPortRisk::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NoHandleCount") && !value["NoHandleCount"].IsNull())
    {
        if (!value["NoHandleCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PortViewPortRisk.NoHandleCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_noHandleCount = value["NoHandleCount"].GetInt64();
        m_noHandleCountHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortViewPortRisk.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortViewPortRisk.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Component") && !value["Component"].IsNull())
    {
        if (!value["Component"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortViewPortRisk.Component` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_component = string(value["Component"].GetString());
        m_componentHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PortViewPortRisk.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("RecentTime") && !value["RecentTime"].IsNull())
    {
        if (!value["RecentTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortViewPortRisk.RecentTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recentTime = string(value["RecentTime"].GetString());
        m_recentTimeHasBeenSet = true;
    }

    if (value.HasMember("FirstTime") && !value["FirstTime"].IsNull())
    {
        if (!value["FirstTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortViewPortRisk.FirstTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstTime = string(value["FirstTime"].GetString());
        m_firstTimeHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PortViewPortRisk.Suggestion` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = value["Suggestion"].GetUint64();
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("AffectAssetCount") && !value["AffectAssetCount"].IsNull())
    {
        if (!value["AffectAssetCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortViewPortRisk.AffectAssetCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_affectAssetCount = string(value["AffectAssetCount"].GetString());
        m_affectAssetCountHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortViewPortRisk.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("From") && !value["From"].IsNull())
    {
        if (!value["From"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortViewPortRisk.From` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_from = string(value["From"].GetString());
        m_fromHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortViewPortRisk.Index` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_index = string(value["Index"].GetString());
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortViewPortRisk.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Nick") && !value["Nick"].IsNull())
    {
        if (!value["Nick"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortViewPortRisk.Nick` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nick = string(value["Nick"].GetString());
        m_nickHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortViewPortRisk.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("Service") && !value["Service"].IsNull())
    {
        if (!value["Service"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortViewPortRisk.Service` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_service = string(value["Service"].GetString());
        m_serviceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PortViewPortRisk::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_noHandleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoHandleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_noHandleCount, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_componentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Component";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_component.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_recentTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecentTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recentTime.c_str(), allocator).Move(), allocator);
    }

    if (m_firstTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstTime.c_str(), allocator).Move(), allocator);
    }

    if (m_suggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_suggestion, allocator);
    }

    if (m_affectAssetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectAssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_affectAssetCount.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_fromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "From";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_from.c_str(), allocator).Move(), allocator);
    }

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_index.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_nickHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nick";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nick.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Service";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_service.c_str(), allocator).Move(), allocator);
    }

}


int64_t PortViewPortRisk::GetNoHandleCount() const
{
    return m_noHandleCount;
}

void PortViewPortRisk::SetNoHandleCount(const int64_t& _noHandleCount)
{
    m_noHandleCount = _noHandleCount;
    m_noHandleCountHasBeenSet = true;
}

bool PortViewPortRisk::NoHandleCountHasBeenSet() const
{
    return m_noHandleCountHasBeenSet;
}

string PortViewPortRisk::GetLevel() const
{
    return m_level;
}

void PortViewPortRisk::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool PortViewPortRisk::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string PortViewPortRisk::GetProtocol() const
{
    return m_protocol;
}

void PortViewPortRisk::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool PortViewPortRisk::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string PortViewPortRisk::GetComponent() const
{
    return m_component;
}

void PortViewPortRisk::SetComponent(const string& _component)
{
    m_component = _component;
    m_componentHasBeenSet = true;
}

bool PortViewPortRisk::ComponentHasBeenSet() const
{
    return m_componentHasBeenSet;
}

int64_t PortViewPortRisk::GetPort() const
{
    return m_port;
}

void PortViewPortRisk::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool PortViewPortRisk::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string PortViewPortRisk::GetRecentTime() const
{
    return m_recentTime;
}

void PortViewPortRisk::SetRecentTime(const string& _recentTime)
{
    m_recentTime = _recentTime;
    m_recentTimeHasBeenSet = true;
}

bool PortViewPortRisk::RecentTimeHasBeenSet() const
{
    return m_recentTimeHasBeenSet;
}

string PortViewPortRisk::GetFirstTime() const
{
    return m_firstTime;
}

void PortViewPortRisk::SetFirstTime(const string& _firstTime)
{
    m_firstTime = _firstTime;
    m_firstTimeHasBeenSet = true;
}

bool PortViewPortRisk::FirstTimeHasBeenSet() const
{
    return m_firstTimeHasBeenSet;
}

uint64_t PortViewPortRisk::GetSuggestion() const
{
    return m_suggestion;
}

void PortViewPortRisk::SetSuggestion(const uint64_t& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool PortViewPortRisk::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

string PortViewPortRisk::GetAffectAssetCount() const
{
    return m_affectAssetCount;
}

void PortViewPortRisk::SetAffectAssetCount(const string& _affectAssetCount)
{
    m_affectAssetCount = _affectAssetCount;
    m_affectAssetCountHasBeenSet = true;
}

bool PortViewPortRisk::AffectAssetCountHasBeenSet() const
{
    return m_affectAssetCountHasBeenSet;
}

string PortViewPortRisk::GetId() const
{
    return m_id;
}

void PortViewPortRisk::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool PortViewPortRisk::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string PortViewPortRisk::GetFrom() const
{
    return m_from;
}

void PortViewPortRisk::SetFrom(const string& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool PortViewPortRisk::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

string PortViewPortRisk::GetIndex() const
{
    return m_index;
}

void PortViewPortRisk::SetIndex(const string& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool PortViewPortRisk::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string PortViewPortRisk::GetAppId() const
{
    return m_appId;
}

void PortViewPortRisk::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool PortViewPortRisk::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string PortViewPortRisk::GetNick() const
{
    return m_nick;
}

void PortViewPortRisk::SetNick(const string& _nick)
{
    m_nick = _nick;
    m_nickHasBeenSet = true;
}

bool PortViewPortRisk::NickHasBeenSet() const
{
    return m_nickHasBeenSet;
}

string PortViewPortRisk::GetUin() const
{
    return m_uin;
}

void PortViewPortRisk::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool PortViewPortRisk::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string PortViewPortRisk::GetService() const
{
    return m_service;
}

void PortViewPortRisk::SetService(const string& _service)
{
    m_service = _service;
    m_serviceHasBeenSet = true;
}

bool PortViewPortRisk::ServiceHasBeenSet() const
{
    return m_serviceHasBeenSet;
}

