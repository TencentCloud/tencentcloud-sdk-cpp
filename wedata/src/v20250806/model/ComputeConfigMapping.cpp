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

#include <tencentcloud/wedata/v20250806/model/ComputeConfigMapping.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

ComputeConfigMapping::ComputeConfigMapping() :
    m_taskTypeIdHasBeenSet(false),
    m_computeConfigItemHasBeenSet(false),
    m_taskIdsHasBeenSet(false),
    m_sourceValueHasBeenSet(false),
    m_targetValueHasBeenSet(false)
{
}

CoreInternalOutcome ComputeConfigMapping::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskTypeId") && !value["TaskTypeId"].IsNull())
    {
        if (!value["TaskTypeId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeConfigMapping.TaskTypeId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskTypeId = value["TaskTypeId"].GetInt64();
        m_taskTypeIdHasBeenSet = true;
    }

    if (value.HasMember("ComputeConfigItem") && !value["ComputeConfigItem"].IsNull())
    {
        if (!value["ComputeConfigItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeConfigMapping.ComputeConfigItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_computeConfigItem = string(value["ComputeConfigItem"].GetString());
        m_computeConfigItemHasBeenSet = true;
    }

    if (value.HasMember("TaskIds") && !value["TaskIds"].IsNull())
    {
        if (!value["TaskIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComputeConfigMapping.TaskIds` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_taskIds.push_back((*itr).GetString());
        }
        m_taskIdsHasBeenSet = true;
    }

    if (value.HasMember("SourceValue") && !value["SourceValue"].IsNull())
    {
        if (!value["SourceValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeConfigMapping.SourceValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceValue = string(value["SourceValue"].GetString());
        m_sourceValueHasBeenSet = true;
    }

    if (value.HasMember("TargetValue") && !value["TargetValue"].IsNull())
    {
        if (!value["TargetValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeConfigMapping.TargetValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetValue = string(value["TargetValue"].GetString());
        m_targetValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComputeConfigMapping::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskTypeId, allocator);
    }

    if (m_computeConfigItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeConfigItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_computeConfigItem.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskIds.begin(); itr != m_taskIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sourceValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceValue.c_str(), allocator).Move(), allocator);
    }

    if (m_targetValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetValue.c_str(), allocator).Move(), allocator);
    }

}


int64_t ComputeConfigMapping::GetTaskTypeId() const
{
    return m_taskTypeId;
}

void ComputeConfigMapping::SetTaskTypeId(const int64_t& _taskTypeId)
{
    m_taskTypeId = _taskTypeId;
    m_taskTypeIdHasBeenSet = true;
}

bool ComputeConfigMapping::TaskTypeIdHasBeenSet() const
{
    return m_taskTypeIdHasBeenSet;
}

string ComputeConfigMapping::GetComputeConfigItem() const
{
    return m_computeConfigItem;
}

void ComputeConfigMapping::SetComputeConfigItem(const string& _computeConfigItem)
{
    m_computeConfigItem = _computeConfigItem;
    m_computeConfigItemHasBeenSet = true;
}

bool ComputeConfigMapping::ComputeConfigItemHasBeenSet() const
{
    return m_computeConfigItemHasBeenSet;
}

vector<string> ComputeConfigMapping::GetTaskIds() const
{
    return m_taskIds;
}

void ComputeConfigMapping::SetTaskIds(const vector<string>& _taskIds)
{
    m_taskIds = _taskIds;
    m_taskIdsHasBeenSet = true;
}

bool ComputeConfigMapping::TaskIdsHasBeenSet() const
{
    return m_taskIdsHasBeenSet;
}

string ComputeConfigMapping::GetSourceValue() const
{
    return m_sourceValue;
}

void ComputeConfigMapping::SetSourceValue(const string& _sourceValue)
{
    m_sourceValue = _sourceValue;
    m_sourceValueHasBeenSet = true;
}

bool ComputeConfigMapping::SourceValueHasBeenSet() const
{
    return m_sourceValueHasBeenSet;
}

string ComputeConfigMapping::GetTargetValue() const
{
    return m_targetValue;
}

void ComputeConfigMapping::SetTargetValue(const string& _targetValue)
{
    m_targetValue = _targetValue;
    m_targetValueHasBeenSet = true;
}

bool ComputeConfigMapping::TargetValueHasBeenSet() const
{
    return m_targetValueHasBeenSet;
}

