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

#include <tencentcloud/tione/v20191022/model/StartNotebookInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20191022::Model;
using namespace std;

StartNotebookInstanceRequest::StartNotebookInstanceRequest() :
    m_notebookInstanceNameHasBeenSet(false),
    m_autoStoppingHasBeenSet(false),
    m_stoppingConditionHasBeenSet(false)
{
}

string StartNotebookInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_notebookInstanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotebookInstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notebookInstanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_autoStoppingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoStopping";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoStopping.c_str(), allocator).Move(), allocator);
    }

    if (m_stoppingConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoppingCondition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_stoppingCondition.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string StartNotebookInstanceRequest::GetNotebookInstanceName() const
{
    return m_notebookInstanceName;
}

void StartNotebookInstanceRequest::SetNotebookInstanceName(const string& _notebookInstanceName)
{
    m_notebookInstanceName = _notebookInstanceName;
    m_notebookInstanceNameHasBeenSet = true;
}

bool StartNotebookInstanceRequest::NotebookInstanceNameHasBeenSet() const
{
    return m_notebookInstanceNameHasBeenSet;
}

string StartNotebookInstanceRequest::GetAutoStopping() const
{
    return m_autoStopping;
}

void StartNotebookInstanceRequest::SetAutoStopping(const string& _autoStopping)
{
    m_autoStopping = _autoStopping;
    m_autoStoppingHasBeenSet = true;
}

bool StartNotebookInstanceRequest::AutoStoppingHasBeenSet() const
{
    return m_autoStoppingHasBeenSet;
}

StoppingCondition StartNotebookInstanceRequest::GetStoppingCondition() const
{
    return m_stoppingCondition;
}

void StartNotebookInstanceRequest::SetStoppingCondition(const StoppingCondition& _stoppingCondition)
{
    m_stoppingCondition = _stoppingCondition;
    m_stoppingConditionHasBeenSet = true;
}

bool StartNotebookInstanceRequest::StoppingConditionHasBeenSet() const
{
    return m_stoppingConditionHasBeenSet;
}


