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

#include <tencentcloud/cynosdb/v20190107/model/DescribeVaultBackupClusterInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeVaultBackupClusterInfo::DescribeVaultBackupClusterInfo() :
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterStatusHasBeenSet(false),
    m_clusterRegionHasBeenSet(false),
    m_clusterZoneHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVaultBackupClusterInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVaultBackupClusterInfo.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVaultBackupClusterInfo.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterStatus") && !value["ClusterStatus"].IsNull())
    {
        if (!value["ClusterStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVaultBackupClusterInfo.ClusterStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterStatus = string(value["ClusterStatus"].GetString());
        m_clusterStatusHasBeenSet = true;
    }

    if (value.HasMember("ClusterRegion") && !value["ClusterRegion"].IsNull())
    {
        if (!value["ClusterRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVaultBackupClusterInfo.ClusterRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterRegion = string(value["ClusterRegion"].GetString());
        m_clusterRegionHasBeenSet = true;
    }

    if (value.HasMember("ClusterZone") && !value["ClusterZone"].IsNull())
    {
        if (!value["ClusterZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVaultBackupClusterInfo.ClusterZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterZone = string(value["ClusterZone"].GetString());
        m_clusterZoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeVaultBackupClusterInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterZone.c_str(), allocator).Move(), allocator);
    }

}


string DescribeVaultBackupClusterInfo::GetClusterId() const
{
    return m_clusterId;
}

void DescribeVaultBackupClusterInfo::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribeVaultBackupClusterInfo::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DescribeVaultBackupClusterInfo::GetClusterName() const
{
    return m_clusterName;
}

void DescribeVaultBackupClusterInfo::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool DescribeVaultBackupClusterInfo::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string DescribeVaultBackupClusterInfo::GetClusterStatus() const
{
    return m_clusterStatus;
}

void DescribeVaultBackupClusterInfo::SetClusterStatus(const string& _clusterStatus)
{
    m_clusterStatus = _clusterStatus;
    m_clusterStatusHasBeenSet = true;
}

bool DescribeVaultBackupClusterInfo::ClusterStatusHasBeenSet() const
{
    return m_clusterStatusHasBeenSet;
}

string DescribeVaultBackupClusterInfo::GetClusterRegion() const
{
    return m_clusterRegion;
}

void DescribeVaultBackupClusterInfo::SetClusterRegion(const string& _clusterRegion)
{
    m_clusterRegion = _clusterRegion;
    m_clusterRegionHasBeenSet = true;
}

bool DescribeVaultBackupClusterInfo::ClusterRegionHasBeenSet() const
{
    return m_clusterRegionHasBeenSet;
}

string DescribeVaultBackupClusterInfo::GetClusterZone() const
{
    return m_clusterZone;
}

void DescribeVaultBackupClusterInfo::SetClusterZone(const string& _clusterZone)
{
    m_clusterZone = _clusterZone;
    m_clusterZoneHasBeenSet = true;
}

bool DescribeVaultBackupClusterInfo::ClusterZoneHasBeenSet() const
{
    return m_clusterZoneHasBeenSet;
}

