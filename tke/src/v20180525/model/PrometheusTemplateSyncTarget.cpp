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

#include <tencentcloud/tke/v20180525/model/PrometheusTemplateSyncTarget.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

PrometheusTemplateSyncTarget::PrometheusTemplateSyncTarget() :
    m_regionHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_syncTimeHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_clusterNameHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusTemplateSyncTarget::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusTemplateSyncTarget.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusTemplateSyncTarget.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusTemplateSyncTarget.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("SyncTime") && !value["SyncTime"].IsNull())
    {
        if (!value["SyncTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusTemplateSyncTarget.SyncTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_syncTime = string(value["SyncTime"].GetString());
        m_syncTimeHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusTemplateSyncTarget.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusTemplateSyncTarget.ClusterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = string(value["ClusterType"].GetString());
        m_clusterTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusTemplateSyncTarget.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusTemplateSyncTarget.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusTemplateSyncTarget::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_syncTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_syncTime.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

}


string PrometheusTemplateSyncTarget::GetRegion() const
{
    return m_region;
}

void PrometheusTemplateSyncTarget::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool PrometheusTemplateSyncTarget::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string PrometheusTemplateSyncTarget::GetInstanceId() const
{
    return m_instanceId;
}

void PrometheusTemplateSyncTarget::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool PrometheusTemplateSyncTarget::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string PrometheusTemplateSyncTarget::GetClusterId() const
{
    return m_clusterId;
}

void PrometheusTemplateSyncTarget::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool PrometheusTemplateSyncTarget::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string PrometheusTemplateSyncTarget::GetSyncTime() const
{
    return m_syncTime;
}

void PrometheusTemplateSyncTarget::SetSyncTime(const string& _syncTime)
{
    m_syncTime = _syncTime;
    m_syncTimeHasBeenSet = true;
}

bool PrometheusTemplateSyncTarget::SyncTimeHasBeenSet() const
{
    return m_syncTimeHasBeenSet;
}

string PrometheusTemplateSyncTarget::GetVersion() const
{
    return m_version;
}

void PrometheusTemplateSyncTarget::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool PrometheusTemplateSyncTarget::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string PrometheusTemplateSyncTarget::GetClusterType() const
{
    return m_clusterType;
}

void PrometheusTemplateSyncTarget::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool PrometheusTemplateSyncTarget::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

string PrometheusTemplateSyncTarget::GetInstanceName() const
{
    return m_instanceName;
}

void PrometheusTemplateSyncTarget::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool PrometheusTemplateSyncTarget::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string PrometheusTemplateSyncTarget::GetClusterName() const
{
    return m_clusterName;
}

void PrometheusTemplateSyncTarget::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool PrometheusTemplateSyncTarget::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

