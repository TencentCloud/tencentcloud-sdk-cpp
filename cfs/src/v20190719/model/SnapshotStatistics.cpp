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

#include <tencentcloud/cfs/v20190719/model/SnapshotStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

SnapshotStatistics::SnapshotStatistics() :
    m_regionHasBeenSet(false),
    m_snapshotNumberHasBeenSet(false),
    m_snapshotSizeHasBeenSet(false)
{
}

CoreInternalOutcome SnapshotStatistics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotStatistics.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("SnapshotNumber") && !value["SnapshotNumber"].IsNull())
    {
        if (!value["SnapshotNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotStatistics.SnapshotNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotNumber = value["SnapshotNumber"].GetUint64();
        m_snapshotNumberHasBeenSet = true;
    }

    if (value.HasMember("SnapshotSize") && !value["SnapshotSize"].IsNull())
    {
        if (!value["SnapshotSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotStatistics.SnapshotSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotSize = value["SnapshotSize"].GetUint64();
        m_snapshotSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SnapshotStatistics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_snapshotNumber, allocator);
    }

    if (m_snapshotSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_snapshotSize, allocator);
    }

}


string SnapshotStatistics::GetRegion() const
{
    return m_region;
}

void SnapshotStatistics::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool SnapshotStatistics::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

uint64_t SnapshotStatistics::GetSnapshotNumber() const
{
    return m_snapshotNumber;
}

void SnapshotStatistics::SetSnapshotNumber(const uint64_t& _snapshotNumber)
{
    m_snapshotNumber = _snapshotNumber;
    m_snapshotNumberHasBeenSet = true;
}

bool SnapshotStatistics::SnapshotNumberHasBeenSet() const
{
    return m_snapshotNumberHasBeenSet;
}

uint64_t SnapshotStatistics::GetSnapshotSize() const
{
    return m_snapshotSize;
}

void SnapshotStatistics::SetSnapshotSize(const uint64_t& _snapshotSize)
{
    m_snapshotSize = _snapshotSize;
    m_snapshotSizeHasBeenSet = true;
}

bool SnapshotStatistics::SnapshotSizeHasBeenSet() const
{
    return m_snapshotSizeHasBeenSet;
}

