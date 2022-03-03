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

#include <tencentcloud/ivld/v20210903/model/TaskFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

TaskFilter::TaskFilter() :
    m_mediaTypeSetHasBeenSet(false),
    m_taskStatusSetHasBeenSet(false),
    m_taskNameSetHasBeenSet(false),
    m_taskIdSetHasBeenSet(false),
    m_mediaNameSetHasBeenSet(false),
    m_mediaLangSetHasBeenSet(false),
    m_mediaLabelSetHasBeenSet(false),
    m_labelSetHasBeenSet(false)
{
}

CoreInternalOutcome TaskFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MediaTypeSet") && !value["MediaTypeSet"].IsNull())
    {
        if (!value["MediaTypeSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskFilter.MediaTypeSet` is not array type"));

        const rapidjson::Value &tmpValue = value["MediaTypeSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_mediaTypeSet.push_back((*itr).GetInt64());
        }
        m_mediaTypeSetHasBeenSet = true;
    }

    if (value.HasMember("TaskStatusSet") && !value["TaskStatusSet"].IsNull())
    {
        if (!value["TaskStatusSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskFilter.TaskStatusSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskStatusSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_taskStatusSet.push_back((*itr).GetInt64());
        }
        m_taskStatusSetHasBeenSet = true;
    }

    if (value.HasMember("TaskNameSet") && !value["TaskNameSet"].IsNull())
    {
        if (!value["TaskNameSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskFilter.TaskNameSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskNameSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_taskNameSet.push_back((*itr).GetString());
        }
        m_taskNameSetHasBeenSet = true;
    }

    if (value.HasMember("TaskIdSet") && !value["TaskIdSet"].IsNull())
    {
        if (!value["TaskIdSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskFilter.TaskIdSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskIdSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_taskIdSet.push_back((*itr).GetString());
        }
        m_taskIdSetHasBeenSet = true;
    }

    if (value.HasMember("MediaNameSet") && !value["MediaNameSet"].IsNull())
    {
        if (!value["MediaNameSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskFilter.MediaNameSet` is not array type"));

        const rapidjson::Value &tmpValue = value["MediaNameSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_mediaNameSet.push_back((*itr).GetString());
        }
        m_mediaNameSetHasBeenSet = true;
    }

    if (value.HasMember("MediaLangSet") && !value["MediaLangSet"].IsNull())
    {
        if (!value["MediaLangSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskFilter.MediaLangSet` is not array type"));

        const rapidjson::Value &tmpValue = value["MediaLangSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_mediaLangSet.push_back((*itr).GetInt64());
        }
        m_mediaLangSetHasBeenSet = true;
    }

    if (value.HasMember("MediaLabelSet") && !value["MediaLabelSet"].IsNull())
    {
        if (!value["MediaLabelSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskFilter.MediaLabelSet` is not array type"));

        const rapidjson::Value &tmpValue = value["MediaLabelSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_mediaLabelSet.push_back((*itr).GetInt64());
        }
        m_mediaLabelSetHasBeenSet = true;
    }

    if (value.HasMember("LabelSet") && !value["LabelSet"].IsNull())
    {
        if (!value["LabelSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskFilter.LabelSet` is not array type"));

        const rapidjson::Value &tmpValue = value["LabelSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_labelSet.push_back((*itr).GetString());
        }
        m_labelSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mediaTypeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaTypeSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_mediaTypeSet.begin(); itr != m_mediaTypeSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_taskStatusSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatusSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskStatusSet.begin(); itr != m_taskStatusSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_taskNameSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskNameSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskNameSet.begin(); itr != m_taskNameSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_taskIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskIdSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskIdSet.begin(); itr != m_taskIdSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_mediaNameSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaNameSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_mediaNameSet.begin(); itr != m_mediaNameSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_mediaLangSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaLangSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_mediaLangSet.begin(); itr != m_mediaLangSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_mediaLabelSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaLabelSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_mediaLabelSet.begin(); itr != m_mediaLabelSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_labelSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_labelSet.begin(); itr != m_labelSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<int64_t> TaskFilter::GetMediaTypeSet() const
{
    return m_mediaTypeSet;
}

void TaskFilter::SetMediaTypeSet(const vector<int64_t>& _mediaTypeSet)
{
    m_mediaTypeSet = _mediaTypeSet;
    m_mediaTypeSetHasBeenSet = true;
}

bool TaskFilter::MediaTypeSetHasBeenSet() const
{
    return m_mediaTypeSetHasBeenSet;
}

vector<int64_t> TaskFilter::GetTaskStatusSet() const
{
    return m_taskStatusSet;
}

void TaskFilter::SetTaskStatusSet(const vector<int64_t>& _taskStatusSet)
{
    m_taskStatusSet = _taskStatusSet;
    m_taskStatusSetHasBeenSet = true;
}

bool TaskFilter::TaskStatusSetHasBeenSet() const
{
    return m_taskStatusSetHasBeenSet;
}

vector<string> TaskFilter::GetTaskNameSet() const
{
    return m_taskNameSet;
}

void TaskFilter::SetTaskNameSet(const vector<string>& _taskNameSet)
{
    m_taskNameSet = _taskNameSet;
    m_taskNameSetHasBeenSet = true;
}

bool TaskFilter::TaskNameSetHasBeenSet() const
{
    return m_taskNameSetHasBeenSet;
}

vector<string> TaskFilter::GetTaskIdSet() const
{
    return m_taskIdSet;
}

void TaskFilter::SetTaskIdSet(const vector<string>& _taskIdSet)
{
    m_taskIdSet = _taskIdSet;
    m_taskIdSetHasBeenSet = true;
}

bool TaskFilter::TaskIdSetHasBeenSet() const
{
    return m_taskIdSetHasBeenSet;
}

vector<string> TaskFilter::GetMediaNameSet() const
{
    return m_mediaNameSet;
}

void TaskFilter::SetMediaNameSet(const vector<string>& _mediaNameSet)
{
    m_mediaNameSet = _mediaNameSet;
    m_mediaNameSetHasBeenSet = true;
}

bool TaskFilter::MediaNameSetHasBeenSet() const
{
    return m_mediaNameSetHasBeenSet;
}

vector<int64_t> TaskFilter::GetMediaLangSet() const
{
    return m_mediaLangSet;
}

void TaskFilter::SetMediaLangSet(const vector<int64_t>& _mediaLangSet)
{
    m_mediaLangSet = _mediaLangSet;
    m_mediaLangSetHasBeenSet = true;
}

bool TaskFilter::MediaLangSetHasBeenSet() const
{
    return m_mediaLangSetHasBeenSet;
}

vector<int64_t> TaskFilter::GetMediaLabelSet() const
{
    return m_mediaLabelSet;
}

void TaskFilter::SetMediaLabelSet(const vector<int64_t>& _mediaLabelSet)
{
    m_mediaLabelSet = _mediaLabelSet;
    m_mediaLabelSetHasBeenSet = true;
}

bool TaskFilter::MediaLabelSetHasBeenSet() const
{
    return m_mediaLabelSetHasBeenSet;
}

vector<string> TaskFilter::GetLabelSet() const
{
    return m_labelSet;
}

void TaskFilter::SetLabelSet(const vector<string>& _labelSet)
{
    m_labelSet = _labelSet;
    m_labelSetHasBeenSet = true;
}

bool TaskFilter::LabelSetHasBeenSet() const
{
    return m_labelSetHasBeenSet;
}

