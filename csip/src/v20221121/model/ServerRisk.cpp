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

#include <tencentcloud/csip/v20221121/model/ServerRisk.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ServerRisk::ServerRisk() :
    m_serviceTagHasBeenSet(false),
    m_portHasBeenSet(false),
    m_affectAssetHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_componentHasBeenSet(false),
    m_serviceHasBeenSet(false),
    m_recentTimeHasBeenSet(false),
    m_firstTimeHasBeenSet(false),
    m_riskDetailsHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_idHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_nickHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_serviceSnapshotHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_riskListHasBeenSet(false),
    m_suggestionListHasBeenSet(false),
    m_statusCodeHasBeenSet(false),
    m_newLevelHasBeenSet(false),
    m_xspmStatusHasBeenSet(false)
{
}

CoreInternalOutcome ServerRisk::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceTag") && !value["ServiceTag"].IsNull())
    {
        if (!value["ServiceTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerRisk.ServiceTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceTag = string(value["ServiceTag"].GetString());
        m_serviceTagHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerRisk.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("AffectAsset") && !value["AffectAsset"].IsNull())
    {
        if (!value["AffectAsset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerRisk.AffectAsset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_affectAsset = string(value["AffectAsset"].GetString());
        m_affectAssetHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerRisk.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerRisk.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerRisk.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerRisk.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerRisk.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Component") && !value["Component"].IsNull())
    {
        if (!value["Component"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerRisk.Component` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_component = string(value["Component"].GetString());
        m_componentHasBeenSet = true;
    }

    if (value.HasMember("Service") && !value["Service"].IsNull())
    {
        if (!value["Service"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerRisk.Service` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_service = string(value["Service"].GetString());
        m_serviceHasBeenSet = true;
    }

    if (value.HasMember("RecentTime") && !value["RecentTime"].IsNull())
    {
        if (!value["RecentTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerRisk.RecentTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recentTime = string(value["RecentTime"].GetString());
        m_recentTimeHasBeenSet = true;
    }

    if (value.HasMember("FirstTime") && !value["FirstTime"].IsNull())
    {
        if (!value["FirstTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerRisk.FirstTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstTime = string(value["FirstTime"].GetString());
        m_firstTimeHasBeenSet = true;
    }

    if (value.HasMember("RiskDetails") && !value["RiskDetails"].IsNull())
    {
        if (!value["RiskDetails"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerRisk.RiskDetails` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskDetails = string(value["RiskDetails"].GetString());
        m_riskDetailsHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerRisk.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerRisk.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerRisk.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerRisk.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Nick") && !value["Nick"].IsNull())
    {
        if (!value["Nick"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerRisk.Nick` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nick = string(value["Nick"].GetString());
        m_nickHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerRisk.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("ServiceSnapshot") && !value["ServiceSnapshot"].IsNull())
    {
        if (!value["ServiceSnapshot"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerRisk.ServiceSnapshot` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceSnapshot = string(value["ServiceSnapshot"].GetString());
        m_serviceSnapshotHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerRisk.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerRisk.Index` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_index = string(value["Index"].GetString());
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("RiskList") && !value["RiskList"].IsNull())
    {
        if (!value["RiskList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServerRisk.RiskList` is not array type"));

        const rapidjson::Value &tmpValue = value["RiskList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ServerRiskSuggestion item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_riskList.push_back(item);
        }
        m_riskListHasBeenSet = true;
    }

    if (value.HasMember("SuggestionList") && !value["SuggestionList"].IsNull())
    {
        if (!value["SuggestionList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServerRisk.SuggestionList` is not array type"));

        const rapidjson::Value &tmpValue = value["SuggestionList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ServerRiskSuggestion item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_suggestionList.push_back(item);
        }
        m_suggestionListHasBeenSet = true;
    }

    if (value.HasMember("StatusCode") && !value["StatusCode"].IsNull())
    {
        if (!value["StatusCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerRisk.StatusCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusCode = string(value["StatusCode"].GetString());
        m_statusCodeHasBeenSet = true;
    }

    if (value.HasMember("NewLevel") && !value["NewLevel"].IsNull())
    {
        if (!value["NewLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerRisk.NewLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newLevel = string(value["NewLevel"].GetString());
        m_newLevelHasBeenSet = true;
    }

    if (value.HasMember("XspmStatus") && !value["XspmStatus"].IsNull())
    {
        if (!value["XspmStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerRisk.XspmStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_xspmStatus = value["XspmStatus"].GetUint64();
        m_xspmStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServerRisk::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceTag.c_str(), allocator).Move(), allocator);
    }

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

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
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

    if (m_riskDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskDetails.c_str(), allocator).Move(), allocator);
    }

    if (m_suggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestion.c_str(), allocator).Move(), allocator);
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

    if (m_serviceSnapshotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceSnapshot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceSnapshot.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_index.c_str(), allocator).Move(), allocator);
    }

    if (m_riskListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_riskList.begin(); itr != m_riskList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_suggestionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuggestionList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_suggestionList.begin(); itr != m_suggestionList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusCode.c_str(), allocator).Move(), allocator);
    }

    if (m_newLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_xspmStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XspmStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_xspmStatus, allocator);
    }

}


string ServerRisk::GetServiceTag() const
{
    return m_serviceTag;
}

void ServerRisk::SetServiceTag(const string& _serviceTag)
{
    m_serviceTag = _serviceTag;
    m_serviceTagHasBeenSet = true;
}

bool ServerRisk::ServiceTagHasBeenSet() const
{
    return m_serviceTagHasBeenSet;
}

uint64_t ServerRisk::GetPort() const
{
    return m_port;
}

void ServerRisk::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool ServerRisk::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string ServerRisk::GetAffectAsset() const
{
    return m_affectAsset;
}

void ServerRisk::SetAffectAsset(const string& _affectAsset)
{
    m_affectAsset = _affectAsset;
    m_affectAssetHasBeenSet = true;
}

bool ServerRisk::AffectAssetHasBeenSet() const
{
    return m_affectAssetHasBeenSet;
}

string ServerRisk::GetInstanceId() const
{
    return m_instanceId;
}

void ServerRisk::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ServerRisk::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ServerRisk::GetInstanceName() const
{
    return m_instanceName;
}

void ServerRisk::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool ServerRisk::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string ServerRisk::GetInstanceType() const
{
    return m_instanceType;
}

void ServerRisk::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool ServerRisk::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string ServerRisk::GetLevel() const
{
    return m_level;
}

void ServerRisk::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool ServerRisk::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string ServerRisk::GetProtocol() const
{
    return m_protocol;
}

void ServerRisk::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool ServerRisk::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string ServerRisk::GetComponent() const
{
    return m_component;
}

void ServerRisk::SetComponent(const string& _component)
{
    m_component = _component;
    m_componentHasBeenSet = true;
}

bool ServerRisk::ComponentHasBeenSet() const
{
    return m_componentHasBeenSet;
}

string ServerRisk::GetService() const
{
    return m_service;
}

void ServerRisk::SetService(const string& _service)
{
    m_service = _service;
    m_serviceHasBeenSet = true;
}

bool ServerRisk::ServiceHasBeenSet() const
{
    return m_serviceHasBeenSet;
}

string ServerRisk::GetRecentTime() const
{
    return m_recentTime;
}

void ServerRisk::SetRecentTime(const string& _recentTime)
{
    m_recentTime = _recentTime;
    m_recentTimeHasBeenSet = true;
}

bool ServerRisk::RecentTimeHasBeenSet() const
{
    return m_recentTimeHasBeenSet;
}

string ServerRisk::GetFirstTime() const
{
    return m_firstTime;
}

void ServerRisk::SetFirstTime(const string& _firstTime)
{
    m_firstTime = _firstTime;
    m_firstTimeHasBeenSet = true;
}

bool ServerRisk::FirstTimeHasBeenSet() const
{
    return m_firstTimeHasBeenSet;
}

string ServerRisk::GetRiskDetails() const
{
    return m_riskDetails;
}

void ServerRisk::SetRiskDetails(const string& _riskDetails)
{
    m_riskDetails = _riskDetails;
    m_riskDetailsHasBeenSet = true;
}

bool ServerRisk::RiskDetailsHasBeenSet() const
{
    return m_riskDetailsHasBeenSet;
}

string ServerRisk::GetSuggestion() const
{
    return m_suggestion;
}

void ServerRisk::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool ServerRisk::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

uint64_t ServerRisk::GetStatus() const
{
    return m_status;
}

void ServerRisk::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ServerRisk::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ServerRisk::GetId() const
{
    return m_id;
}

void ServerRisk::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ServerRisk::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ServerRisk::GetAppId() const
{
    return m_appId;
}

void ServerRisk::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ServerRisk::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string ServerRisk::GetNick() const
{
    return m_nick;
}

void ServerRisk::SetNick(const string& _nick)
{
    m_nick = _nick;
    m_nickHasBeenSet = true;
}

bool ServerRisk::NickHasBeenSet() const
{
    return m_nickHasBeenSet;
}

string ServerRisk::GetUin() const
{
    return m_uin;
}

void ServerRisk::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool ServerRisk::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string ServerRisk::GetServiceSnapshot() const
{
    return m_serviceSnapshot;
}

void ServerRisk::SetServiceSnapshot(const string& _serviceSnapshot)
{
    m_serviceSnapshot = _serviceSnapshot;
    m_serviceSnapshotHasBeenSet = true;
}

bool ServerRisk::ServiceSnapshotHasBeenSet() const
{
    return m_serviceSnapshotHasBeenSet;
}

string ServerRisk::GetUrl() const
{
    return m_url;
}

void ServerRisk::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool ServerRisk::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string ServerRisk::GetIndex() const
{
    return m_index;
}

void ServerRisk::SetIndex(const string& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool ServerRisk::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

vector<ServerRiskSuggestion> ServerRisk::GetRiskList() const
{
    return m_riskList;
}

void ServerRisk::SetRiskList(const vector<ServerRiskSuggestion>& _riskList)
{
    m_riskList = _riskList;
    m_riskListHasBeenSet = true;
}

bool ServerRisk::RiskListHasBeenSet() const
{
    return m_riskListHasBeenSet;
}

vector<ServerRiskSuggestion> ServerRisk::GetSuggestionList() const
{
    return m_suggestionList;
}

void ServerRisk::SetSuggestionList(const vector<ServerRiskSuggestion>& _suggestionList)
{
    m_suggestionList = _suggestionList;
    m_suggestionListHasBeenSet = true;
}

bool ServerRisk::SuggestionListHasBeenSet() const
{
    return m_suggestionListHasBeenSet;
}

string ServerRisk::GetStatusCode() const
{
    return m_statusCode;
}

void ServerRisk::SetStatusCode(const string& _statusCode)
{
    m_statusCode = _statusCode;
    m_statusCodeHasBeenSet = true;
}

bool ServerRisk::StatusCodeHasBeenSet() const
{
    return m_statusCodeHasBeenSet;
}

string ServerRisk::GetNewLevel() const
{
    return m_newLevel;
}

void ServerRisk::SetNewLevel(const string& _newLevel)
{
    m_newLevel = _newLevel;
    m_newLevelHasBeenSet = true;
}

bool ServerRisk::NewLevelHasBeenSet() const
{
    return m_newLevelHasBeenSet;
}

uint64_t ServerRisk::GetXspmStatus() const
{
    return m_xspmStatus;
}

void ServerRisk::SetXspmStatus(const uint64_t& _xspmStatus)
{
    m_xspmStatus = _xspmStatus;
    m_xspmStatusHasBeenSet = true;
}

bool ServerRisk::XspmStatusHasBeenSet() const
{
    return m_xspmStatusHasBeenSet;
}

