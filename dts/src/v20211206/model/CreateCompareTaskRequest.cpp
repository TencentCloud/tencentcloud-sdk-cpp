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

#include <tencentcloud/dts/v20211206/model/CreateCompareTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

CreateCompareTaskRequest::CreateCompareTaskRequest() :
    m_jobIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_objectModeHasBeenSet(false),
    m_objectsHasBeenSet(false),
    m_optionsHasBeenSet(false)
{
}

string CreateCompareTaskRequest::ToJsonString() const
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


string CreateCompareTaskRequest::GetJobId() const
{
    return m_jobId;
}

void CreateCompareTaskRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool CreateCompareTaskRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string CreateCompareTaskRequest::GetTaskName() const
{
    return m_taskName;
}

void CreateCompareTaskRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool CreateCompareTaskRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string CreateCompareTaskRequest::GetObjectMode() const
{
    return m_objectMode;
}

void CreateCompareTaskRequest::SetObjectMode(const string& _objectMode)
{
    m_objectMode = _objectMode;
    m_objectModeHasBeenSet = true;
}

bool CreateCompareTaskRequest::ObjectModeHasBeenSet() const
{
    return m_objectModeHasBeenSet;
}

CompareObject CreateCompareTaskRequest::GetObjects() const
{
    return m_objects;
}

void CreateCompareTaskRequest::SetObjects(const CompareObject& _objects)
{
    m_objects = _objects;
    m_objectsHasBeenSet = true;
}

bool CreateCompareTaskRequest::ObjectsHasBeenSet() const
{
    return m_objectsHasBeenSet;
}

CompareOptions CreateCompareTaskRequest::GetOptions() const
{
    return m_options;
}

void CreateCompareTaskRequest::SetOptions(const CompareOptions& _options)
{
    m_options = _options;
    m_optionsHasBeenSet = true;
}

bool CreateCompareTaskRequest::OptionsHasBeenSet() const
{
    return m_optionsHasBeenSet;
}


