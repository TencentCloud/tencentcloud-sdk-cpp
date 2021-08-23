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

#include <tencentcloud/ckafka/v20190819/model/ClusterInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

ClusterInfo::ClusterInfo() :
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_maxDiskSizeHasBeenSet(false),
    m_maxBandWidthHasBeenSet(false),
    m_availableDiskSizeHasBeenSet(false),
    m_availableBandWidthHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_zoneIdsHasBeenSet(false)
{
}

CoreInternalOutcome ClusterInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInfo.ClusterId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = value["ClusterId"].GetInt64();
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInfo.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("MaxDiskSize") && !value["MaxDiskSize"].IsNull())
    {
        if (!value["MaxDiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInfo.MaxDiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxDiskSize = value["MaxDiskSize"].GetInt64();
        m_maxDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("MaxBandWidth") && !value["MaxBandWidth"].IsNull())
    {
        if (!value["MaxBandWidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInfo.MaxBandWidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxBandWidth = value["MaxBandWidth"].GetInt64();
        m_maxBandWidthHasBeenSet = true;
    }

    if (value.HasMember("AvailableDiskSize") && !value["AvailableDiskSize"].IsNull())
    {
        if (!value["AvailableDiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInfo.AvailableDiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_availableDiskSize = value["AvailableDiskSize"].GetInt64();
        m_availableDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("AvailableBandWidth") && !value["AvailableBandWidth"].IsNull())
    {
        if (!value["AvailableBandWidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInfo.AvailableBandWidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_availableBandWidth = value["AvailableBandWidth"].GetInt64();
        m_availableBandWidthHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInfo.ZoneId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetInt64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneIds") && !value["ZoneIds"].IsNull())
    {
        if (!value["ZoneIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterInfo.ZoneIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ZoneIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_zoneIds.push_back((*itr).GetInt64());
        }
        m_zoneIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterId, allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_maxDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxDiskSize, allocator);
    }

    if (m_maxBandWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxBandWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxBandWidth, allocator);
    }

    if (m_availableDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_availableDiskSize, allocator);
    }

    if (m_availableBandWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableBandWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_availableBandWidth, allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_zoneIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_zoneIds.begin(); itr != m_zoneIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


int64_t ClusterInfo::GetClusterId() const
{
    return m_clusterId;
}

void ClusterInfo::SetClusterId(const int64_t& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ClusterInfo::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ClusterInfo::GetClusterName() const
{
    return m_clusterName;
}

void ClusterInfo::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool ClusterInfo::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

int64_t ClusterInfo::GetMaxDiskSize() const
{
    return m_maxDiskSize;
}

void ClusterInfo::SetMaxDiskSize(const int64_t& _maxDiskSize)
{
    m_maxDiskSize = _maxDiskSize;
    m_maxDiskSizeHasBeenSet = true;
}

bool ClusterInfo::MaxDiskSizeHasBeenSet() const
{
    return m_maxDiskSizeHasBeenSet;
}

int64_t ClusterInfo::GetMaxBandWidth() const
{
    return m_maxBandWidth;
}

void ClusterInfo::SetMaxBandWidth(const int64_t& _maxBandWidth)
{
    m_maxBandWidth = _maxBandWidth;
    m_maxBandWidthHasBeenSet = true;
}

bool ClusterInfo::MaxBandWidthHasBeenSet() const
{
    return m_maxBandWidthHasBeenSet;
}

int64_t ClusterInfo::GetAvailableDiskSize() const
{
    return m_availableDiskSize;
}

void ClusterInfo::SetAvailableDiskSize(const int64_t& _availableDiskSize)
{
    m_availableDiskSize = _availableDiskSize;
    m_availableDiskSizeHasBeenSet = true;
}

bool ClusterInfo::AvailableDiskSizeHasBeenSet() const
{
    return m_availableDiskSizeHasBeenSet;
}

int64_t ClusterInfo::GetAvailableBandWidth() const
{
    return m_availableBandWidth;
}

void ClusterInfo::SetAvailableBandWidth(const int64_t& _availableBandWidth)
{
    m_availableBandWidth = _availableBandWidth;
    m_availableBandWidthHasBeenSet = true;
}

bool ClusterInfo::AvailableBandWidthHasBeenSet() const
{
    return m_availableBandWidthHasBeenSet;
}

int64_t ClusterInfo::GetZoneId() const
{
    return m_zoneId;
}

void ClusterInfo::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ClusterInfo::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

vector<int64_t> ClusterInfo::GetZoneIds() const
{
    return m_zoneIds;
}

void ClusterInfo::SetZoneIds(const vector<int64_t>& _zoneIds)
{
    m_zoneIds = _zoneIds;
    m_zoneIdsHasBeenSet = true;
}

bool ClusterInfo::ZoneIdsHasBeenSet() const
{
    return m_zoneIdsHasBeenSet;
}

