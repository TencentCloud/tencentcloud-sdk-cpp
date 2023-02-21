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

#include <tencentcloud/tke/v20180525/model/UpgradeAbleInstancesItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

UpgradeAbleInstancesItem::UpgradeAbleInstancesItem() :
    m_instanceIdHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_latestVersionHasBeenSet(false),
    m_runtimeVersionHasBeenSet(false),
    m_runtimeLatestVersionHasBeenSet(false)
{
}

CoreInternalOutcome UpgradeAbleInstancesItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradeAbleInstancesItem.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradeAbleInstancesItem.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("LatestVersion") && !value["LatestVersion"].IsNull())
    {
        if (!value["LatestVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradeAbleInstancesItem.LatestVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestVersion = string(value["LatestVersion"].GetString());
        m_latestVersionHasBeenSet = true;
    }

    if (value.HasMember("RuntimeVersion") && !value["RuntimeVersion"].IsNull())
    {
        if (!value["RuntimeVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradeAbleInstancesItem.RuntimeVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeVersion = string(value["RuntimeVersion"].GetString());
        m_runtimeVersionHasBeenSet = true;
    }

    if (value.HasMember("RuntimeLatestVersion") && !value["RuntimeLatestVersion"].IsNull())
    {
        if (!value["RuntimeLatestVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradeAbleInstancesItem.RuntimeLatestVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeLatestVersion = string(value["RuntimeLatestVersion"].GetString());
        m_runtimeLatestVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UpgradeAbleInstancesItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_latestVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_runtimeVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runtimeVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_runtimeLatestVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeLatestVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runtimeLatestVersion.c_str(), allocator).Move(), allocator);
    }

}


string UpgradeAbleInstancesItem::GetInstanceId() const
{
    return m_instanceId;
}

void UpgradeAbleInstancesItem::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UpgradeAbleInstancesItem::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string UpgradeAbleInstancesItem::GetVersion() const
{
    return m_version;
}

void UpgradeAbleInstancesItem::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool UpgradeAbleInstancesItem::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string UpgradeAbleInstancesItem::GetLatestVersion() const
{
    return m_latestVersion;
}

void UpgradeAbleInstancesItem::SetLatestVersion(const string& _latestVersion)
{
    m_latestVersion = _latestVersion;
    m_latestVersionHasBeenSet = true;
}

bool UpgradeAbleInstancesItem::LatestVersionHasBeenSet() const
{
    return m_latestVersionHasBeenSet;
}

string UpgradeAbleInstancesItem::GetRuntimeVersion() const
{
    return m_runtimeVersion;
}

void UpgradeAbleInstancesItem::SetRuntimeVersion(const string& _runtimeVersion)
{
    m_runtimeVersion = _runtimeVersion;
    m_runtimeVersionHasBeenSet = true;
}

bool UpgradeAbleInstancesItem::RuntimeVersionHasBeenSet() const
{
    return m_runtimeVersionHasBeenSet;
}

string UpgradeAbleInstancesItem::GetRuntimeLatestVersion() const
{
    return m_runtimeLatestVersion;
}

void UpgradeAbleInstancesItem::SetRuntimeLatestVersion(const string& _runtimeLatestVersion)
{
    m_runtimeLatestVersion = _runtimeLatestVersion;
    m_runtimeLatestVersionHasBeenSet = true;
}

bool UpgradeAbleInstancesItem::RuntimeLatestVersionHasBeenSet() const
{
    return m_runtimeLatestVersionHasBeenSet;
}

