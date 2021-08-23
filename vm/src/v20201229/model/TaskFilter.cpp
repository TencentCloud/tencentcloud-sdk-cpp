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

#include <tencentcloud/vm/v20201229/model/TaskFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vm::V20201229::Model;
using namespace std;

TaskFilter::TaskFilter() :
    m_bizTypeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_taskStatusHasBeenSet(false)
{
}

CoreInternalOutcome TaskFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BizType") && !value["BizType"].IsNull())
    {
        if (!value["BizType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskFilter.BizType` is not array type"));

        const rapidjson::Value &tmpValue = value["BizType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_bizType.push_back((*itr).GetString());
        }
        m_bizTypeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFilter.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFilter.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFilter.TaskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = string(value["TaskStatus"].GetString());
        m_taskStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bizTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bizType.begin(); itr != m_bizType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_suggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskStatus.c_str(), allocator).Move(), allocator);
    }

}


vector<string> TaskFilter::GetBizType() const
{
    return m_bizType;
}

void TaskFilter::SetBizType(const vector<string>& _bizType)
{
    m_bizType = _bizType;
    m_bizTypeHasBeenSet = true;
}

bool TaskFilter::BizTypeHasBeenSet() const
{
    return m_bizTypeHasBeenSet;
}

string TaskFilter::GetType() const
{
    return m_type;
}

void TaskFilter::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TaskFilter::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string TaskFilter::GetSuggestion() const
{
    return m_suggestion;
}

void TaskFilter::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool TaskFilter::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

string TaskFilter::GetTaskStatus() const
{
    return m_taskStatus;
}

void TaskFilter::SetTaskStatus(const string& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool TaskFilter::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

