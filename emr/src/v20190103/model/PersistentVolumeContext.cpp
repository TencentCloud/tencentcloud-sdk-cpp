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

#include <tencentcloud/emr/v20190103/model/PersistentVolumeContext.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

PersistentVolumeContext::PersistentVolumeContext() :
    m_diskSizeHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_diskNumHasBeenSet(false),
    m_extraPerformanceHasBeenSet(false)
{
}

CoreInternalOutcome PersistentVolumeContext::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PersistentVolumeContext.DiskSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetUint64();
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersistentVolumeContext.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }

    if (value.HasMember("DiskNum") && !value["DiskNum"].IsNull())
    {
        if (!value["DiskNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PersistentVolumeContext.DiskNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskNum = value["DiskNum"].GetInt64();
        m_diskNumHasBeenSet = true;
    }

    if (value.HasMember("ExtraPerformance") && !value["ExtraPerformance"].IsNull())
    {
        if (!value["ExtraPerformance"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PersistentVolumeContext.ExtraPerformance` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_extraPerformance = value["ExtraPerformance"].GetInt64();
        m_extraPerformanceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PersistentVolumeContext::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskNum, allocator);
    }

    if (m_extraPerformanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraPerformance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_extraPerformance, allocator);
    }

}


uint64_t PersistentVolumeContext::GetDiskSize() const
{
    return m_diskSize;
}

void PersistentVolumeContext::SetDiskSize(const uint64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool PersistentVolumeContext::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

string PersistentVolumeContext::GetDiskType() const
{
    return m_diskType;
}

void PersistentVolumeContext::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool PersistentVolumeContext::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

int64_t PersistentVolumeContext::GetDiskNum() const
{
    return m_diskNum;
}

void PersistentVolumeContext::SetDiskNum(const int64_t& _diskNum)
{
    m_diskNum = _diskNum;
    m_diskNumHasBeenSet = true;
}

bool PersistentVolumeContext::DiskNumHasBeenSet() const
{
    return m_diskNumHasBeenSet;
}

int64_t PersistentVolumeContext::GetExtraPerformance() const
{
    return m_extraPerformance;
}

void PersistentVolumeContext::SetExtraPerformance(const int64_t& _extraPerformance)
{
    m_extraPerformance = _extraPerformance;
    m_extraPerformanceHasBeenSet = true;
}

bool PersistentVolumeContext::ExtraPerformanceHasBeenSet() const
{
    return m_extraPerformanceHasBeenSet;
}

