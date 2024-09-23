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

#include <tencentcloud/emr/v20190103/model/DiskSpecInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DiskSpecInfo::DiskSpecInfo() :
    m_countHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_extraPerformanceHasBeenSet(false)
{
}

CoreInternalOutcome DiskSpecInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DiskSpecInfo.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskSpecInfo.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DiskSpecInfo.DiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetInt64();
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("ExtraPerformance") && !value["ExtraPerformance"].IsNull())
    {
        if (!value["ExtraPerformance"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DiskSpecInfo.ExtraPerformance` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_extraPerformance = value["ExtraPerformance"].GetInt64();
        m_extraPerformanceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiskSpecInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_extraPerformanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraPerformance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_extraPerformance, allocator);
    }

}


int64_t DiskSpecInfo::GetCount() const
{
    return m_count;
}

void DiskSpecInfo::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool DiskSpecInfo::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string DiskSpecInfo::GetDiskType() const
{
    return m_diskType;
}

void DiskSpecInfo::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool DiskSpecInfo::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

int64_t DiskSpecInfo::GetDiskSize() const
{
    return m_diskSize;
}

void DiskSpecInfo::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool DiskSpecInfo::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

int64_t DiskSpecInfo::GetExtraPerformance() const
{
    return m_extraPerformance;
}

void DiskSpecInfo::SetExtraPerformance(const int64_t& _extraPerformance)
{
    m_extraPerformance = _extraPerformance;
    m_extraPerformanceHasBeenSet = true;
}

bool DiskSpecInfo::ExtraPerformanceHasBeenSet() const
{
    return m_extraPerformanceHasBeenSet;
}

