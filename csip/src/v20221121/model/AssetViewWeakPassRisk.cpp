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

#include <tencentcloud/csip/v20221121/model/AssetViewWeakPassRisk.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AssetViewWeakPassRisk::AssetViewWeakPassRisk() :
    m_affectAssetHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_componentHasBeenSet(false),
    m_serviceHasBeenSet(false),
    m_recentTimeHasBeenSet(false),
    m_firstTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_idHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_nickHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_passwordTypeHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_vULTypeHasBeenSet(false),
    m_vULURLHasBeenSet(false),
    m_fixHasBeenSet(false),
    m_payloadHasBeenSet(false),
    m_portHasBeenSet(false)
{
}

CoreInternalOutcome AssetViewWeakPassRisk::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AffectAsset") && !value["AffectAsset"].IsNull())
    {
        if (!value["AffectAsset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewWeakPassRisk.AffectAsset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_affectAsset = string(value["AffectAsset"].GetString());
        m_affectAssetHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewWeakPassRisk.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewWeakPassRisk.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("Component") && !value["Component"].IsNull())
    {
        if (!value["Component"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewWeakPassRisk.Component` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_component = string(value["Component"].GetString());
        m_componentHasBeenSet = true;
    }

    if (value.HasMember("Service") && !value["Service"].IsNull())
    {
        if (!value["Service"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewWeakPassRisk.Service` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_service = string(value["Service"].GetString());
        m_serviceHasBeenSet = true;
    }

    if (value.HasMember("RecentTime") && !value["RecentTime"].IsNull())
    {
        if (!value["RecentTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewWeakPassRisk.RecentTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recentTime = string(value["RecentTime"].GetString());
        m_recentTimeHasBeenSet = true;
    }

    if (value.HasMember("FirstTime") && !value["FirstTime"].IsNull())
    {
        if (!value["FirstTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewWeakPassRisk.FirstTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstTime = string(value["FirstTime"].GetString());
        m_firstTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewWeakPassRisk.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewWeakPassRisk.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewWeakPassRisk.Index` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_index = string(value["Index"].GetString());
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewWeakPassRisk.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewWeakPassRisk.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewWeakPassRisk.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Nick") && !value["Nick"].IsNull())
    {
        if (!value["Nick"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewWeakPassRisk.Nick` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nick = string(value["Nick"].GetString());
        m_nickHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewWeakPassRisk.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("PasswordType") && !value["PasswordType"].IsNull())
    {
        if (!value["PasswordType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewWeakPassRisk.PasswordType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passwordType = string(value["PasswordType"].GetString());
        m_passwordTypeHasBeenSet = true;
    }

    if (value.HasMember("From") && !value["From"].IsNull())
    {
        if (!value["From"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewWeakPassRisk.From` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_from = string(value["From"].GetString());
        m_fromHasBeenSet = true;
    }

    if (value.HasMember("VULType") && !value["VULType"].IsNull())
    {
        if (!value["VULType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewWeakPassRisk.VULType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vULType = string(value["VULType"].GetString());
        m_vULTypeHasBeenSet = true;
    }

    if (value.HasMember("VULURL") && !value["VULURL"].IsNull())
    {
        if (!value["VULURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewWeakPassRisk.VULURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vULURL = string(value["VULURL"].GetString());
        m_vULURLHasBeenSet = true;
    }

    if (value.HasMember("Fix") && !value["Fix"].IsNull())
    {
        if (!value["Fix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewWeakPassRisk.Fix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fix = string(value["Fix"].GetString());
        m_fixHasBeenSet = true;
    }

    if (value.HasMember("Payload") && !value["Payload"].IsNull())
    {
        if (!value["Payload"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewWeakPassRisk.Payload` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payload = string(value["Payload"].GetString());
        m_payloadHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewWeakPassRisk.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetViewWeakPassRisk::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_passwordTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PasswordType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_passwordType.c_str(), allocator).Move(), allocator);
    }

    if (m_fromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "From";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_from.c_str(), allocator).Move(), allocator);
    }

    if (m_vULTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VULType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vULType.c_str(), allocator).Move(), allocator);
    }

    if (m_vULURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VULURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vULURL.c_str(), allocator).Move(), allocator);
    }

    if (m_fixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fix.c_str(), allocator).Move(), allocator);
    }

    if (m_payloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Payload";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payload.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

}


string AssetViewWeakPassRisk::GetAffectAsset() const
{
    return m_affectAsset;
}

void AssetViewWeakPassRisk::SetAffectAsset(const string& _affectAsset)
{
    m_affectAsset = _affectAsset;
    m_affectAssetHasBeenSet = true;
}

bool AssetViewWeakPassRisk::AffectAssetHasBeenSet() const
{
    return m_affectAssetHasBeenSet;
}

string AssetViewWeakPassRisk::GetLevel() const
{
    return m_level;
}

void AssetViewWeakPassRisk::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool AssetViewWeakPassRisk::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string AssetViewWeakPassRisk::GetInstanceType() const
{
    return m_instanceType;
}

void AssetViewWeakPassRisk::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool AssetViewWeakPassRisk::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string AssetViewWeakPassRisk::GetComponent() const
{
    return m_component;
}

void AssetViewWeakPassRisk::SetComponent(const string& _component)
{
    m_component = _component;
    m_componentHasBeenSet = true;
}

bool AssetViewWeakPassRisk::ComponentHasBeenSet() const
{
    return m_componentHasBeenSet;
}

string AssetViewWeakPassRisk::GetService() const
{
    return m_service;
}

void AssetViewWeakPassRisk::SetService(const string& _service)
{
    m_service = _service;
    m_serviceHasBeenSet = true;
}

bool AssetViewWeakPassRisk::ServiceHasBeenSet() const
{
    return m_serviceHasBeenSet;
}

string AssetViewWeakPassRisk::GetRecentTime() const
{
    return m_recentTime;
}

void AssetViewWeakPassRisk::SetRecentTime(const string& _recentTime)
{
    m_recentTime = _recentTime;
    m_recentTimeHasBeenSet = true;
}

bool AssetViewWeakPassRisk::RecentTimeHasBeenSet() const
{
    return m_recentTimeHasBeenSet;
}

string AssetViewWeakPassRisk::GetFirstTime() const
{
    return m_firstTime;
}

void AssetViewWeakPassRisk::SetFirstTime(const string& _firstTime)
{
    m_firstTime = _firstTime;
    m_firstTimeHasBeenSet = true;
}

bool AssetViewWeakPassRisk::FirstTimeHasBeenSet() const
{
    return m_firstTimeHasBeenSet;
}

uint64_t AssetViewWeakPassRisk::GetStatus() const
{
    return m_status;
}

void AssetViewWeakPassRisk::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AssetViewWeakPassRisk::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AssetViewWeakPassRisk::GetId() const
{
    return m_id;
}

void AssetViewWeakPassRisk::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AssetViewWeakPassRisk::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string AssetViewWeakPassRisk::GetIndex() const
{
    return m_index;
}

void AssetViewWeakPassRisk::SetIndex(const string& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool AssetViewWeakPassRisk::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string AssetViewWeakPassRisk::GetInstanceId() const
{
    return m_instanceId;
}

void AssetViewWeakPassRisk::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AssetViewWeakPassRisk::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string AssetViewWeakPassRisk::GetInstanceName() const
{
    return m_instanceName;
}

void AssetViewWeakPassRisk::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool AssetViewWeakPassRisk::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string AssetViewWeakPassRisk::GetAppId() const
{
    return m_appId;
}

void AssetViewWeakPassRisk::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool AssetViewWeakPassRisk::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string AssetViewWeakPassRisk::GetNick() const
{
    return m_nick;
}

void AssetViewWeakPassRisk::SetNick(const string& _nick)
{
    m_nick = _nick;
    m_nickHasBeenSet = true;
}

bool AssetViewWeakPassRisk::NickHasBeenSet() const
{
    return m_nickHasBeenSet;
}

string AssetViewWeakPassRisk::GetUin() const
{
    return m_uin;
}

void AssetViewWeakPassRisk::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool AssetViewWeakPassRisk::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string AssetViewWeakPassRisk::GetPasswordType() const
{
    return m_passwordType;
}

void AssetViewWeakPassRisk::SetPasswordType(const string& _passwordType)
{
    m_passwordType = _passwordType;
    m_passwordTypeHasBeenSet = true;
}

bool AssetViewWeakPassRisk::PasswordTypeHasBeenSet() const
{
    return m_passwordTypeHasBeenSet;
}

string AssetViewWeakPassRisk::GetFrom() const
{
    return m_from;
}

void AssetViewWeakPassRisk::SetFrom(const string& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool AssetViewWeakPassRisk::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

string AssetViewWeakPassRisk::GetVULType() const
{
    return m_vULType;
}

void AssetViewWeakPassRisk::SetVULType(const string& _vULType)
{
    m_vULType = _vULType;
    m_vULTypeHasBeenSet = true;
}

bool AssetViewWeakPassRisk::VULTypeHasBeenSet() const
{
    return m_vULTypeHasBeenSet;
}

string AssetViewWeakPassRisk::GetVULURL() const
{
    return m_vULURL;
}

void AssetViewWeakPassRisk::SetVULURL(const string& _vULURL)
{
    m_vULURL = _vULURL;
    m_vULURLHasBeenSet = true;
}

bool AssetViewWeakPassRisk::VULURLHasBeenSet() const
{
    return m_vULURLHasBeenSet;
}

string AssetViewWeakPassRisk::GetFix() const
{
    return m_fix;
}

void AssetViewWeakPassRisk::SetFix(const string& _fix)
{
    m_fix = _fix;
    m_fixHasBeenSet = true;
}

bool AssetViewWeakPassRisk::FixHasBeenSet() const
{
    return m_fixHasBeenSet;
}

string AssetViewWeakPassRisk::GetPayload() const
{
    return m_payload;
}

void AssetViewWeakPassRisk::SetPayload(const string& _payload)
{
    m_payload = _payload;
    m_payloadHasBeenSet = true;
}

bool AssetViewWeakPassRisk::PayloadHasBeenSet() const
{
    return m_payloadHasBeenSet;
}

int64_t AssetViewWeakPassRisk::GetPort() const
{
    return m_port;
}

void AssetViewWeakPassRisk::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool AssetViewWeakPassRisk::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

