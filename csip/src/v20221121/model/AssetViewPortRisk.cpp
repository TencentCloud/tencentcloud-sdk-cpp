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

#include <tencentcloud/csip/v20221121/model/AssetViewPortRisk.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AssetViewPortRisk::AssetViewPortRisk() :
    m_portHasBeenSet(false),
    m_affectAssetHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_componentHasBeenSet(false),
    m_serviceHasBeenSet(false),
    m_recentTimeHasBeenSet(false),
    m_firstTimeHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_idHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_nickHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_serviceJudgeHasBeenSet(false),
    m_xspmStatusHasBeenSet(false)
{
}

CoreInternalOutcome AssetViewPortRisk::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewPortRisk.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("AffectAsset") && !value["AffectAsset"].IsNull())
    {
        if (!value["AffectAsset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewPortRisk.AffectAsset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_affectAsset = string(value["AffectAsset"].GetString());
        m_affectAssetHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewPortRisk.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewPortRisk.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewPortRisk.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Component") && !value["Component"].IsNull())
    {
        if (!value["Component"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewPortRisk.Component` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_component = string(value["Component"].GetString());
        m_componentHasBeenSet = true;
    }

    if (value.HasMember("Service") && !value["Service"].IsNull())
    {
        if (!value["Service"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewPortRisk.Service` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_service = string(value["Service"].GetString());
        m_serviceHasBeenSet = true;
    }

    if (value.HasMember("RecentTime") && !value["RecentTime"].IsNull())
    {
        if (!value["RecentTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewPortRisk.RecentTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recentTime = string(value["RecentTime"].GetString());
        m_recentTimeHasBeenSet = true;
    }

    if (value.HasMember("FirstTime") && !value["FirstTime"].IsNull())
    {
        if (!value["FirstTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewPortRisk.FirstTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstTime = string(value["FirstTime"].GetString());
        m_firstTimeHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewPortRisk.Suggestion` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = value["Suggestion"].GetUint64();
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewPortRisk.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewPortRisk.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewPortRisk.Index` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_index = string(value["Index"].GetString());
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewPortRisk.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewPortRisk.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewPortRisk.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Nick") && !value["Nick"].IsNull())
    {
        if (!value["Nick"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewPortRisk.Nick` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nick = string(value["Nick"].GetString());
        m_nickHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewPortRisk.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("From") && !value["From"].IsNull())
    {
        if (!value["From"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewPortRisk.From` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_from = string(value["From"].GetString());
        m_fromHasBeenSet = true;
    }

    if (value.HasMember("ServiceJudge") && !value["ServiceJudge"].IsNull())
    {
        if (!value["ServiceJudge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewPortRisk.ServiceJudge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceJudge = string(value["ServiceJudge"].GetString());
        m_serviceJudgeHasBeenSet = true;
    }

    if (value.HasMember("XspmStatus") && !value["XspmStatus"].IsNull())
    {
        if (!value["XspmStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewPortRisk.XspmStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_xspmStatus = value["XspmStatus"].GetUint64();
        m_xspmStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetViewPortRisk::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_affectAssetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectAsset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_affectAsset.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
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

    if (m_serviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Service";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_service.c_str(), allocator).Move(), allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_index.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
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

    if (m_fromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "From";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_from.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceJudgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceJudge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceJudge.c_str(), allocator).Move(), allocator);
    }

    if (m_xspmStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XspmStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_xspmStatus, allocator);
    }

}


uint64_t AssetViewPortRisk::GetPort() const
{
    return m_port;
}

void AssetViewPortRisk::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool AssetViewPortRisk::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string AssetViewPortRisk::GetAffectAsset() const
{
    return m_affectAsset;
}

void AssetViewPortRisk::SetAffectAsset(const string& _affectAsset)
{
    m_affectAsset = _affectAsset;
    m_affectAssetHasBeenSet = true;
}

bool AssetViewPortRisk::AffectAssetHasBeenSet() const
{
    return m_affectAssetHasBeenSet;
}

string AssetViewPortRisk::GetLevel() const
{
    return m_level;
}

void AssetViewPortRisk::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool AssetViewPortRisk::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string AssetViewPortRisk::GetInstanceType() const
{
    return m_instanceType;
}

void AssetViewPortRisk::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool AssetViewPortRisk::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string AssetViewPortRisk::GetProtocol() const
{
    return m_protocol;
}

void AssetViewPortRisk::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool AssetViewPortRisk::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string AssetViewPortRisk::GetComponent() const
{
    return m_component;
}

void AssetViewPortRisk::SetComponent(const string& _component)
{
    m_component = _component;
    m_componentHasBeenSet = true;
}

bool AssetViewPortRisk::ComponentHasBeenSet() const
{
    return m_componentHasBeenSet;
}

string AssetViewPortRisk::GetService() const
{
    return m_service;
}

void AssetViewPortRisk::SetService(const string& _service)
{
    m_service = _service;
    m_serviceHasBeenSet = true;
}

bool AssetViewPortRisk::ServiceHasBeenSet() const
{
    return m_serviceHasBeenSet;
}

string AssetViewPortRisk::GetRecentTime() const
{
    return m_recentTime;
}

void AssetViewPortRisk::SetRecentTime(const string& _recentTime)
{
    m_recentTime = _recentTime;
    m_recentTimeHasBeenSet = true;
}

bool AssetViewPortRisk::RecentTimeHasBeenSet() const
{
    return m_recentTimeHasBeenSet;
}

string AssetViewPortRisk::GetFirstTime() const
{
    return m_firstTime;
}

void AssetViewPortRisk::SetFirstTime(const string& _firstTime)
{
    m_firstTime = _firstTime;
    m_firstTimeHasBeenSet = true;
}

bool AssetViewPortRisk::FirstTimeHasBeenSet() const
{
    return m_firstTimeHasBeenSet;
}

uint64_t AssetViewPortRisk::GetSuggestion() const
{
    return m_suggestion;
}

void AssetViewPortRisk::SetSuggestion(const uint64_t& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool AssetViewPortRisk::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

uint64_t AssetViewPortRisk::GetStatus() const
{
    return m_status;
}

void AssetViewPortRisk::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AssetViewPortRisk::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AssetViewPortRisk::GetId() const
{
    return m_id;
}

void AssetViewPortRisk::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AssetViewPortRisk::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string AssetViewPortRisk::GetIndex() const
{
    return m_index;
}

void AssetViewPortRisk::SetIndex(const string& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool AssetViewPortRisk::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string AssetViewPortRisk::GetInstanceId() const
{
    return m_instanceId;
}

void AssetViewPortRisk::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AssetViewPortRisk::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string AssetViewPortRisk::GetInstanceName() const
{
    return m_instanceName;
}

void AssetViewPortRisk::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool AssetViewPortRisk::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string AssetViewPortRisk::GetAppId() const
{
    return m_appId;
}

void AssetViewPortRisk::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool AssetViewPortRisk::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string AssetViewPortRisk::GetNick() const
{
    return m_nick;
}

void AssetViewPortRisk::SetNick(const string& _nick)
{
    m_nick = _nick;
    m_nickHasBeenSet = true;
}

bool AssetViewPortRisk::NickHasBeenSet() const
{
    return m_nickHasBeenSet;
}

string AssetViewPortRisk::GetUin() const
{
    return m_uin;
}

void AssetViewPortRisk::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool AssetViewPortRisk::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string AssetViewPortRisk::GetFrom() const
{
    return m_from;
}

void AssetViewPortRisk::SetFrom(const string& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool AssetViewPortRisk::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

string AssetViewPortRisk::GetServiceJudge() const
{
    return m_serviceJudge;
}

void AssetViewPortRisk::SetServiceJudge(const string& _serviceJudge)
{
    m_serviceJudge = _serviceJudge;
    m_serviceJudgeHasBeenSet = true;
}

bool AssetViewPortRisk::ServiceJudgeHasBeenSet() const
{
    return m_serviceJudgeHasBeenSet;
}

uint64_t AssetViewPortRisk::GetXspmStatus() const
{
    return m_xspmStatus;
}

void AssetViewPortRisk::SetXspmStatus(const uint64_t& _xspmStatus)
{
    m_xspmStatus = _xspmStatus;
    m_xspmStatusHasBeenSet = true;
}

bool AssetViewPortRisk::XspmStatusHasBeenSet() const
{
    return m_xspmStatusHasBeenSet;
}

