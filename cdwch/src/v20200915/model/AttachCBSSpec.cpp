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

#include <tencentcloud/cdwch/v20200915/model/AttachCBSSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwch::V20200915::Model;
using namespace std;

AttachCBSSpec::AttachCBSSpec() :
    m_diskTypeHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_diskCountHasBeenSet(false),
    m_diskDescHasBeenSet(false)
{
}

CoreInternalOutcome AttachCBSSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttachCBSSpec.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AttachCBSSpec.DiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetInt64();
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("DiskCount") && !value["DiskCount"].IsNull())
    {
        if (!value["DiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AttachCBSSpec.DiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskCount = value["DiskCount"].GetInt64();
        m_diskCountHasBeenSet = true;
    }

    if (value.HasMember("DiskDesc") && !value["DiskDesc"].IsNull())
    {
        if (!value["DiskDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttachCBSSpec.DiskDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskDesc = string(value["DiskDesc"].GetString());
        m_diskDescHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AttachCBSSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_diskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskCount, allocator);
    }

    if (m_diskDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskDesc.c_str(), allocator).Move(), allocator);
    }

}


string AttachCBSSpec::GetDiskType() const
{
    return m_diskType;
}

void AttachCBSSpec::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool AttachCBSSpec::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

int64_t AttachCBSSpec::GetDiskSize() const
{
    return m_diskSize;
}

void AttachCBSSpec::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool AttachCBSSpec::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

int64_t AttachCBSSpec::GetDiskCount() const
{
    return m_diskCount;
}

void AttachCBSSpec::SetDiskCount(const int64_t& _diskCount)
{
    m_diskCount = _diskCount;
    m_diskCountHasBeenSet = true;
}

bool AttachCBSSpec::DiskCountHasBeenSet() const
{
    return m_diskCountHasBeenSet;
}

string AttachCBSSpec::GetDiskDesc() const
{
    return m_diskDesc;
}

void AttachCBSSpec::SetDiskDesc(const string& _diskDesc)
{
    m_diskDesc = _diskDesc;
    m_diskDescHasBeenSet = true;
}

bool AttachCBSSpec::DiskDescHasBeenSet() const
{
    return m_diskDescHasBeenSet;
}

