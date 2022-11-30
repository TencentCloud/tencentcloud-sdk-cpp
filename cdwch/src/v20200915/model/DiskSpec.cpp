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

#include <tencentcloud/cdwch/v20200915/model/DiskSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwch::V20200915::Model;
using namespace std;

DiskSpec::DiskSpec() :
    m_diskTypeHasBeenSet(false),
    m_diskDescHasBeenSet(false),
    m_minDiskSizeHasBeenSet(false),
    m_maxDiskSizeHasBeenSet(false),
    m_diskCountHasBeenSet(false)
{
}

CoreInternalOutcome DiskSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskSpec.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }

    if (value.HasMember("DiskDesc") && !value["DiskDesc"].IsNull())
    {
        if (!value["DiskDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskSpec.DiskDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskDesc = string(value["DiskDesc"].GetString());
        m_diskDescHasBeenSet = true;
    }

    if (value.HasMember("MinDiskSize") && !value["MinDiskSize"].IsNull())
    {
        if (!value["MinDiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DiskSpec.MinDiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minDiskSize = value["MinDiskSize"].GetInt64();
        m_minDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("MaxDiskSize") && !value["MaxDiskSize"].IsNull())
    {
        if (!value["MaxDiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DiskSpec.MaxDiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxDiskSize = value["MaxDiskSize"].GetInt64();
        m_maxDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("DiskCount") && !value["DiskCount"].IsNull())
    {
        if (!value["DiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DiskSpec.DiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskCount = value["DiskCount"].GetInt64();
        m_diskCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiskSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_minDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minDiskSize, allocator);
    }

    if (m_maxDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxDiskSize, allocator);
    }

    if (m_diskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskCount, allocator);
    }

}


string DiskSpec::GetDiskType() const
{
    return m_diskType;
}

void DiskSpec::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool DiskSpec::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

string DiskSpec::GetDiskDesc() const
{
    return m_diskDesc;
}

void DiskSpec::SetDiskDesc(const string& _diskDesc)
{
    m_diskDesc = _diskDesc;
    m_diskDescHasBeenSet = true;
}

bool DiskSpec::DiskDescHasBeenSet() const
{
    return m_diskDescHasBeenSet;
}

int64_t DiskSpec::GetMinDiskSize() const
{
    return m_minDiskSize;
}

void DiskSpec::SetMinDiskSize(const int64_t& _minDiskSize)
{
    m_minDiskSize = _minDiskSize;
    m_minDiskSizeHasBeenSet = true;
}

bool DiskSpec::MinDiskSizeHasBeenSet() const
{
    return m_minDiskSizeHasBeenSet;
}

int64_t DiskSpec::GetMaxDiskSize() const
{
    return m_maxDiskSize;
}

void DiskSpec::SetMaxDiskSize(const int64_t& _maxDiskSize)
{
    m_maxDiskSize = _maxDiskSize;
    m_maxDiskSizeHasBeenSet = true;
}

bool DiskSpec::MaxDiskSizeHasBeenSet() const
{
    return m_maxDiskSizeHasBeenSet;
}

int64_t DiskSpec::GetDiskCount() const
{
    return m_diskCount;
}

void DiskSpec::SetDiskCount(const int64_t& _diskCount)
{
    m_diskCount = _diskCount;
    m_diskCountHasBeenSet = true;
}

bool DiskSpec::DiskCountHasBeenSet() const
{
    return m_diskCountHasBeenSet;
}

