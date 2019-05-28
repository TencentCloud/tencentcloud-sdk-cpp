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

#include <tencentcloud/emr/v20190103/model/ClusterInstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace rapidjson;
using namespace std;

ClusterInstanceInfo::ClusterInstanceInfo() :
    m_clusterIdHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_addtimeHasBeenSet(false),
    m_runtimeHasBeenSet(false),
    m_configHasBeenSet(false),
    m_masterIpHasBeenSet(false),
    m_emrVersionHasBeenSet(false),
    m_chargeTypeHasBeenSet(false)
{
}

CoreInternalOutcome ClusterInstanceInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterInstanceInfo.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterInstanceInfo.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterInstanceInfo.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ClusterInstanceInfo.ZoneId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetUint64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ClusterInstanceInfo.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Addtime") && !value["Addtime"].IsNull())
    {
        if (!value["Addtime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterInstanceInfo.Addtime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addtime = string(value["Addtime"].GetString());
        m_addtimeHasBeenSet = true;
    }

    if (value.HasMember("Runtime") && !value["Runtime"].IsNull())
    {
        if (!value["Runtime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterInstanceInfo.Runtime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtime = string(value["Runtime"].GetString());
        m_runtimeHasBeenSet = true;
    }

    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ClusterInstanceInfo.Config` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_config.Deserialize(value["Config"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_configHasBeenSet = true;
    }

    if (value.HasMember("MasterIp") && !value["MasterIp"].IsNull())
    {
        if (!value["MasterIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterInstanceInfo.MasterIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_masterIp = string(value["MasterIp"].GetString());
        m_masterIpHasBeenSet = true;
    }

    if (value.HasMember("EmrVersion") && !value["EmrVersion"].IsNull())
    {
        if (!value["EmrVersion"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterInstanceInfo.EmrVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_emrVersion = string(value["EmrVersion"].GetString());
        m_emrVersionHasBeenSet = true;
    }

    if (value.HasMember("ChargeType") && !value["ChargeType"].IsNull())
    {
        if (!value["ChargeType"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ClusterInstanceInfo.ChargeType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_chargeType = value["ChargeType"].GetUint64();
        m_chargeTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterInstanceInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusDescHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_statusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_addtimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Addtime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_addtime.c_str(), allocator).Move(), allocator);
    }

    if (m_runtimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Runtime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_runtime.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_config.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_masterIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MasterIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_masterIp.c_str(), allocator).Move(), allocator);
    }

    if (m_emrVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EmrVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_emrVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chargeType, allocator);
    }

}


string ClusterInstanceInfo::GetClusterId() const
{
    return m_clusterId;
}

void ClusterInstanceInfo::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ClusterInstanceInfo::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ClusterInstanceInfo::GetStatusDesc() const
{
    return m_statusDesc;
}

void ClusterInstanceInfo::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool ClusterInstanceInfo::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

string ClusterInstanceInfo::GetClusterName() const
{
    return m_clusterName;
}

void ClusterInstanceInfo::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool ClusterInstanceInfo::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

uint64_t ClusterInstanceInfo::GetZoneId() const
{
    return m_zoneId;
}

void ClusterInstanceInfo::SetZoneId(const uint64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ClusterInstanceInfo::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

uint64_t ClusterInstanceInfo::GetAppId() const
{
    return m_appId;
}

void ClusterInstanceInfo::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ClusterInstanceInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string ClusterInstanceInfo::GetAddtime() const
{
    return m_addtime;
}

void ClusterInstanceInfo::SetAddtime(const string& _addtime)
{
    m_addtime = _addtime;
    m_addtimeHasBeenSet = true;
}

bool ClusterInstanceInfo::AddtimeHasBeenSet() const
{
    return m_addtimeHasBeenSet;
}

string ClusterInstanceInfo::GetRuntime() const
{
    return m_runtime;
}

void ClusterInstanceInfo::SetRuntime(const string& _runtime)
{
    m_runtime = _runtime;
    m_runtimeHasBeenSet = true;
}

bool ClusterInstanceInfo::RuntimeHasBeenSet() const
{
    return m_runtimeHasBeenSet;
}

EMRProductConfigSettings ClusterInstanceInfo::GetConfig() const
{
    return m_config;
}

void ClusterInstanceInfo::SetConfig(const EMRProductConfigSettings& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool ClusterInstanceInfo::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

string ClusterInstanceInfo::GetMasterIp() const
{
    return m_masterIp;
}

void ClusterInstanceInfo::SetMasterIp(const string& _masterIp)
{
    m_masterIp = _masterIp;
    m_masterIpHasBeenSet = true;
}

bool ClusterInstanceInfo::MasterIpHasBeenSet() const
{
    return m_masterIpHasBeenSet;
}

string ClusterInstanceInfo::GetEmrVersion() const
{
    return m_emrVersion;
}

void ClusterInstanceInfo::SetEmrVersion(const string& _emrVersion)
{
    m_emrVersion = _emrVersion;
    m_emrVersionHasBeenSet = true;
}

bool ClusterInstanceInfo::EmrVersionHasBeenSet() const
{
    return m_emrVersionHasBeenSet;
}

uint64_t ClusterInstanceInfo::GetChargeType() const
{
    return m_chargeType;
}

void ClusterInstanceInfo::SetChargeType(const uint64_t& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool ClusterInstanceInfo::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

