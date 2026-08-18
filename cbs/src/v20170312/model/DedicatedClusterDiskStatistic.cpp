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

#include <tencentcloud/cbs/v20170312/model/DedicatedClusterDiskStatistic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cbs::V20170312::Model;
using namespace std;

DedicatedClusterDiskStatistic::DedicatedClusterDiskStatistic() :
    m_diskTypeHasBeenSet(false),
    m_totalDiskSizeHasBeenSet(false),
    m_usedDiskSizeHasBeenSet(false),
    m_availableDiskSizeHasBeenSet(false)
{
}

CoreInternalOutcome DedicatedClusterDiskStatistic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterDiskStatistic.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }

    if (value.HasMember("TotalDiskSize") && !value["TotalDiskSize"].IsNull())
    {
        if (!value["TotalDiskSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterDiskStatistic.TotalDiskSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalDiskSize = value["TotalDiskSize"].GetUint64();
        m_totalDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("UsedDiskSize") && !value["UsedDiskSize"].IsNull())
    {
        if (!value["UsedDiskSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterDiskStatistic.UsedDiskSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedDiskSize = value["UsedDiskSize"].GetUint64();
        m_usedDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("AvailableDiskSize") && !value["AvailableDiskSize"].IsNull())
    {
        if (!value["AvailableDiskSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterDiskStatistic.AvailableDiskSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_availableDiskSize = value["AvailableDiskSize"].GetUint64();
        m_availableDiskSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DedicatedClusterDiskStatistic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_totalDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalDiskSize, allocator);
    }

    if (m_usedDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedDiskSize, allocator);
    }

    if (m_availableDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_availableDiskSize, allocator);
    }

}


string DedicatedClusterDiskStatistic::GetDiskType() const
{
    return m_diskType;
}

void DedicatedClusterDiskStatistic::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool DedicatedClusterDiskStatistic::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

uint64_t DedicatedClusterDiskStatistic::GetTotalDiskSize() const
{
    return m_totalDiskSize;
}

void DedicatedClusterDiskStatistic::SetTotalDiskSize(const uint64_t& _totalDiskSize)
{
    m_totalDiskSize = _totalDiskSize;
    m_totalDiskSizeHasBeenSet = true;
}

bool DedicatedClusterDiskStatistic::TotalDiskSizeHasBeenSet() const
{
    return m_totalDiskSizeHasBeenSet;
}

uint64_t DedicatedClusterDiskStatistic::GetUsedDiskSize() const
{
    return m_usedDiskSize;
}

void DedicatedClusterDiskStatistic::SetUsedDiskSize(const uint64_t& _usedDiskSize)
{
    m_usedDiskSize = _usedDiskSize;
    m_usedDiskSizeHasBeenSet = true;
}

bool DedicatedClusterDiskStatistic::UsedDiskSizeHasBeenSet() const
{
    return m_usedDiskSizeHasBeenSet;
}

uint64_t DedicatedClusterDiskStatistic::GetAvailableDiskSize() const
{
    return m_availableDiskSize;
}

void DedicatedClusterDiskStatistic::SetAvailableDiskSize(const uint64_t& _availableDiskSize)
{
    m_availableDiskSize = _availableDiskSize;
    m_availableDiskSizeHasBeenSet = true;
}

bool DedicatedClusterDiskStatistic::AvailableDiskSizeHasBeenSet() const
{
    return m_availableDiskSizeHasBeenSet;
}

