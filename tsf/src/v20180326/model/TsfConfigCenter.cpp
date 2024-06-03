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

#include <tencentcloud/tsf/v20180326/model/TsfConfigCenter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

TsfConfigCenter::TsfConfigCenter() :
    m_configTypeHasBeenSet(false),
    m_configCenterInstanceIdHasBeenSet(false),
    m_configCenterInstanceNameHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_namespaceIdHasBeenSet(false),
    m_currentVersionHasBeenSet(false),
    m_targetVersionHasBeenSet(false)
{
}

CoreInternalOutcome TsfConfigCenter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConfigType") && !value["ConfigType"].IsNull())
    {
        if (!value["ConfigType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TsfConfigCenter.ConfigType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configType = string(value["ConfigType"].GetString());
        m_configTypeHasBeenSet = true;
    }

    if (value.HasMember("ConfigCenterInstanceId") && !value["ConfigCenterInstanceId"].IsNull())
    {
        if (!value["ConfigCenterInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TsfConfigCenter.ConfigCenterInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configCenterInstanceId = string(value["ConfigCenterInstanceId"].GetString());
        m_configCenterInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("ConfigCenterInstanceName") && !value["ConfigCenterInstanceName"].IsNull())
    {
        if (!value["ConfigCenterInstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TsfConfigCenter.ConfigCenterInstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configCenterInstanceName = string(value["ConfigCenterInstanceName"].GetString());
        m_configCenterInstanceNameHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TsfConfigCenter.RegionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = string(value["RegionId"].GetString());
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("NamespaceId") && !value["NamespaceId"].IsNull())
    {
        if (!value["NamespaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TsfConfigCenter.NamespaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceId = string(value["NamespaceId"].GetString());
        m_namespaceIdHasBeenSet = true;
    }

    if (value.HasMember("CurrentVersion") && !value["CurrentVersion"].IsNull())
    {
        if (!value["CurrentVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TsfConfigCenter.CurrentVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentVersion = string(value["CurrentVersion"].GetString());
        m_currentVersionHasBeenSet = true;
    }

    if (value.HasMember("TargetVersion") && !value["TargetVersion"].IsNull())
    {
        if (!value["TargetVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TsfConfigCenter.TargetVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetVersion = string(value["TargetVersion"].GetString());
        m_targetVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TsfConfigCenter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_configTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configType.c_str(), allocator).Move(), allocator);
    }

    if (m_configCenterInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigCenterInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configCenterInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_configCenterInstanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigCenterInstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configCenterInstanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_currentVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_targetVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetVersion.c_str(), allocator).Move(), allocator);
    }

}


string TsfConfigCenter::GetConfigType() const
{
    return m_configType;
}

void TsfConfigCenter::SetConfigType(const string& _configType)
{
    m_configType = _configType;
    m_configTypeHasBeenSet = true;
}

bool TsfConfigCenter::ConfigTypeHasBeenSet() const
{
    return m_configTypeHasBeenSet;
}

string TsfConfigCenter::GetConfigCenterInstanceId() const
{
    return m_configCenterInstanceId;
}

void TsfConfigCenter::SetConfigCenterInstanceId(const string& _configCenterInstanceId)
{
    m_configCenterInstanceId = _configCenterInstanceId;
    m_configCenterInstanceIdHasBeenSet = true;
}

bool TsfConfigCenter::ConfigCenterInstanceIdHasBeenSet() const
{
    return m_configCenterInstanceIdHasBeenSet;
}

string TsfConfigCenter::GetConfigCenterInstanceName() const
{
    return m_configCenterInstanceName;
}

void TsfConfigCenter::SetConfigCenterInstanceName(const string& _configCenterInstanceName)
{
    m_configCenterInstanceName = _configCenterInstanceName;
    m_configCenterInstanceNameHasBeenSet = true;
}

bool TsfConfigCenter::ConfigCenterInstanceNameHasBeenSet() const
{
    return m_configCenterInstanceNameHasBeenSet;
}

string TsfConfigCenter::GetRegionId() const
{
    return m_regionId;
}

void TsfConfigCenter::SetRegionId(const string& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool TsfConfigCenter::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string TsfConfigCenter::GetNamespaceId() const
{
    return m_namespaceId;
}

void TsfConfigCenter::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool TsfConfigCenter::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

string TsfConfigCenter::GetCurrentVersion() const
{
    return m_currentVersion;
}

void TsfConfigCenter::SetCurrentVersion(const string& _currentVersion)
{
    m_currentVersion = _currentVersion;
    m_currentVersionHasBeenSet = true;
}

bool TsfConfigCenter::CurrentVersionHasBeenSet() const
{
    return m_currentVersionHasBeenSet;
}

string TsfConfigCenter::GetTargetVersion() const
{
    return m_targetVersion;
}

void TsfConfigCenter::SetTargetVersion(const string& _targetVersion)
{
    m_targetVersion = _targetVersion;
    m_targetVersionHasBeenSet = true;
}

bool TsfConfigCenter::TargetVersionHasBeenSet() const
{
    return m_targetVersionHasBeenSet;
}

