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

#include <tencentcloud/emr/v20190103/model/NodeResourceSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

NodeResourceSpec::NodeResourceSpec() :
    m_instanceTypeHasBeenSet(false),
    m_systemDiskHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_dataDiskHasBeenSet(false),
    m_localDataDiskHasBeenSet(false)
{
}

CoreInternalOutcome NodeResourceSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeResourceSpec.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("SystemDisk") && !value["SystemDisk"].IsNull())
    {
        if (!value["SystemDisk"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodeResourceSpec.SystemDisk` is not array type"));

        const rapidjson::Value &tmpValue = value["SystemDisk"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DiskSpecInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_systemDisk.push_back(item);
        }
        m_systemDiskHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodeResourceSpec.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("DataDisk") && !value["DataDisk"].IsNull())
    {
        if (!value["DataDisk"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodeResourceSpec.DataDisk` is not array type"));

        const rapidjson::Value &tmpValue = value["DataDisk"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DiskSpecInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataDisk.push_back(item);
        }
        m_dataDiskHasBeenSet = true;
    }

    if (value.HasMember("LocalDataDisk") && !value["LocalDataDisk"].IsNull())
    {
        if (!value["LocalDataDisk"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodeResourceSpec.LocalDataDisk` is not array type"));

        const rapidjson::Value &tmpValue = value["LocalDataDisk"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DiskSpecInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_localDataDisk.push_back(item);
        }
        m_localDataDiskHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeResourceSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_systemDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_systemDisk.begin(); itr != m_systemDisk.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dataDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataDisk.begin(); itr != m_dataDisk.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_localDataDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalDataDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_localDataDisk.begin(); itr != m_localDataDisk.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string NodeResourceSpec::GetInstanceType() const
{
    return m_instanceType;
}

void NodeResourceSpec::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool NodeResourceSpec::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

vector<DiskSpecInfo> NodeResourceSpec::GetSystemDisk() const
{
    return m_systemDisk;
}

void NodeResourceSpec::SetSystemDisk(const vector<DiskSpecInfo>& _systemDisk)
{
    m_systemDisk = _systemDisk;
    m_systemDiskHasBeenSet = true;
}

bool NodeResourceSpec::SystemDiskHasBeenSet() const
{
    return m_systemDiskHasBeenSet;
}

vector<Tag> NodeResourceSpec::GetTags() const
{
    return m_tags;
}

void NodeResourceSpec::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool NodeResourceSpec::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<DiskSpecInfo> NodeResourceSpec::GetDataDisk() const
{
    return m_dataDisk;
}

void NodeResourceSpec::SetDataDisk(const vector<DiskSpecInfo>& _dataDisk)
{
    m_dataDisk = _dataDisk;
    m_dataDiskHasBeenSet = true;
}

bool NodeResourceSpec::DataDiskHasBeenSet() const
{
    return m_dataDiskHasBeenSet;
}

vector<DiskSpecInfo> NodeResourceSpec::GetLocalDataDisk() const
{
    return m_localDataDisk;
}

void NodeResourceSpec::SetLocalDataDisk(const vector<DiskSpecInfo>& _localDataDisk)
{
    m_localDataDisk = _localDataDisk;
    m_localDataDiskHasBeenSet = true;
}

bool NodeResourceSpec::LocalDataDiskHasBeenSet() const
{
    return m_localDataDiskHasBeenSet;
}

