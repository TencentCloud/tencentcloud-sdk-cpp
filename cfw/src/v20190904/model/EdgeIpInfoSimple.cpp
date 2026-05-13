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

#include <tencentcloud/cfw/v20190904/model/EdgeIpInfoSimple.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

EdgeIpInfoSimple::EdgeIpInfoSimple() :
    m_publicIpHasBeenSet(false),
    m_publicIpTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_switchModeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_assetTypeHasBeenSet(false)
{
}

CoreInternalOutcome EdgeIpInfoSimple::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeIpInfoSimple.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("PublicIpType") && !value["PublicIpType"].IsNull())
    {
        if (!value["PublicIpType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeIpInfoSimple.PublicIpType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_publicIpType = value["PublicIpType"].GetInt64();
        m_publicIpTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeIpInfoSimple.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeIpInfoSimple.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeIpInfoSimple.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SwitchMode") && !value["SwitchMode"].IsNull())
    {
        if (!value["SwitchMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeIpInfoSimple.SwitchMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_switchMode = value["SwitchMode"].GetInt64();
        m_switchModeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeIpInfoSimple.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeIpInfoSimple.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EdgeIpInfoSimple::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIpType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publicIpType, allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_switchModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_switchMode, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

}


string EdgeIpInfoSimple::GetPublicIp() const
{
    return m_publicIp;
}

void EdgeIpInfoSimple::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool EdgeIpInfoSimple::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

int64_t EdgeIpInfoSimple::GetPublicIpType() const
{
    return m_publicIpType;
}

void EdgeIpInfoSimple::SetPublicIpType(const int64_t& _publicIpType)
{
    m_publicIpType = _publicIpType;
    m_publicIpTypeHasBeenSet = true;
}

bool EdgeIpInfoSimple::PublicIpTypeHasBeenSet() const
{
    return m_publicIpTypeHasBeenSet;
}

string EdgeIpInfoSimple::GetInstanceId() const
{
    return m_instanceId;
}

void EdgeIpInfoSimple::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool EdgeIpInfoSimple::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string EdgeIpInfoSimple::GetInstanceName() const
{
    return m_instanceName;
}

void EdgeIpInfoSimple::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool EdgeIpInfoSimple::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

int64_t EdgeIpInfoSimple::GetStatus() const
{
    return m_status;
}

void EdgeIpInfoSimple::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool EdgeIpInfoSimple::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t EdgeIpInfoSimple::GetSwitchMode() const
{
    return m_switchMode;
}

void EdgeIpInfoSimple::SetSwitchMode(const int64_t& _switchMode)
{
    m_switchMode = _switchMode;
    m_switchModeHasBeenSet = true;
}

bool EdgeIpInfoSimple::SwitchModeHasBeenSet() const
{
    return m_switchModeHasBeenSet;
}

string EdgeIpInfoSimple::GetRegion() const
{
    return m_region;
}

void EdgeIpInfoSimple::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool EdgeIpInfoSimple::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string EdgeIpInfoSimple::GetAssetType() const
{
    return m_assetType;
}

void EdgeIpInfoSimple::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool EdgeIpInfoSimple::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

