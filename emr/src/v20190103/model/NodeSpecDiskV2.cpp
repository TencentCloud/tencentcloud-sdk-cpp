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

#include <tencentcloud/emr/v20190103/model/NodeSpecDiskV2.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

NodeSpecDiskV2::NodeSpecDiskV2() :
    m_countHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_defaultDiskSizeHasBeenSet(false)
{
}

CoreInternalOutcome NodeSpecDiskV2::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSpecDiskV2.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSpecDiskV2.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSpecDiskV2.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }

    if (value.HasMember("DefaultDiskSize") && !value["DefaultDiskSize"].IsNull())
    {
        if (!value["DefaultDiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSpecDiskV2.DefaultDiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defaultDiskSize = value["DefaultDiskSize"].GetInt64();
        m_defaultDiskSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeSpecDiskV2::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultDiskSize, allocator);
    }

}


int64_t NodeSpecDiskV2::GetCount() const
{
    return m_count;
}

void NodeSpecDiskV2::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool NodeSpecDiskV2::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string NodeSpecDiskV2::GetName() const
{
    return m_name;
}

void NodeSpecDiskV2::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool NodeSpecDiskV2::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string NodeSpecDiskV2::GetDiskType() const
{
    return m_diskType;
}

void NodeSpecDiskV2::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool NodeSpecDiskV2::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

int64_t NodeSpecDiskV2::GetDefaultDiskSize() const
{
    return m_defaultDiskSize;
}

void NodeSpecDiskV2::SetDefaultDiskSize(const int64_t& _defaultDiskSize)
{
    m_defaultDiskSize = _defaultDiskSize;
    m_defaultDiskSizeHasBeenSet = true;
}

bool NodeSpecDiskV2::DefaultDiskSizeHasBeenSet() const
{
    return m_defaultDiskSizeHasBeenSet;
}

