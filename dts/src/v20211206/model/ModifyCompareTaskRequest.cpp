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

#include <tencentcloud/dts/v20211206/model/ModifyCompareTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

ModifyCompareTaskRequest::ModifyCompareTaskRequest() :
    m_jobIdHasBeenSet(false),
    m_compareTaskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_objectModeHasBeenSet(false),
    m_objectsHasBeenSet(false),
    m_optionsHasBeenSet(false)
{
}

string ModifyCompareTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_compareTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareTaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_compareTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_objectModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_objectMode.c_str(), allocator).Move(), allocator);
    }

    if (m_objectsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Objects";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_objects.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_optionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Options";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_options.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCompareTaskRequest::GetJobId() const
{
    return m_jobId;
}

void ModifyCompareTaskRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool ModifyCompareTaskRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string ModifyCompareTaskRequest::GetCompareTaskId() const
{
    return m_compareTaskId;
}

void ModifyCompareTaskRequest::SetCompareTaskId(const string& _compareTaskId)
{
    m_compareTaskId = _compareTaskId;
    m_compareTaskIdHasBeenSet = true;
}

bool ModifyCompareTaskRequest::CompareTaskIdHasBeenSet() const
{
    return m_compareTaskIdHasBeenSet;
}

string ModifyCompareTaskRequest::GetTaskName() const
{
    return m_taskName;
}

void ModifyCompareTaskRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool ModifyCompareTaskRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string ModifyCompareTaskRequest::GetObjectMode() const
{
    return m_objectMode;
}

void ModifyCompareTaskRequest::SetObjectMode(const string& _objectMode)
{
    m_objectMode = _objectMode;
    m_objectModeHasBeenSet = true;
}

bool ModifyCompareTaskRequest::ObjectModeHasBeenSet() const
{
    return m_objectModeHasBeenSet;
}

CompareObject ModifyCompareTaskRequest::GetObjects() const
{
    return m_objects;
}

void ModifyCompareTaskRequest::SetObjects(const CompareObject& _objects)
{
    m_objects = _objects;
    m_objectsHasBeenSet = true;
}

bool ModifyCompareTaskRequest::ObjectsHasBeenSet() const
{
    return m_objectsHasBeenSet;
}

CompareOptions ModifyCompareTaskRequest::GetOptions() const
{
    return m_options;
}

void ModifyCompareTaskRequest::SetOptions(const CompareOptions& _options)
{
    m_options = _options;
    m_optionsHasBeenSet = true;
}

bool ModifyCompareTaskRequest::OptionsHasBeenSet() const
{
    return m_optionsHasBeenSet;
}


