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

#include <tencentcloud/batch/v20170312/model/ModifyTaskTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Batch::V20170312::Model;
using namespace std;

ModifyTaskTemplateRequest::ModifyTaskTemplateRequest() :
    m_taskTemplateIdHasBeenSet(false),
    m_taskTemplateNameHasBeenSet(false),
    m_taskTemplateDescriptionHasBeenSet(false),
    m_taskTemplateInfoHasBeenSet(false)
{
}

string ModifyTaskTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTemplateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTemplateName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskTemplateName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTemplateDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTemplateDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskTemplateDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTemplateInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTemplateInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskTemplateInfo.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyTaskTemplateRequest::GetTaskTemplateId() const
{
    return m_taskTemplateId;
}

void ModifyTaskTemplateRequest::SetTaskTemplateId(const string& _taskTemplateId)
{
    m_taskTemplateId = _taskTemplateId;
    m_taskTemplateIdHasBeenSet = true;
}

bool ModifyTaskTemplateRequest::TaskTemplateIdHasBeenSet() const
{
    return m_taskTemplateIdHasBeenSet;
}

string ModifyTaskTemplateRequest::GetTaskTemplateName() const
{
    return m_taskTemplateName;
}

void ModifyTaskTemplateRequest::SetTaskTemplateName(const string& _taskTemplateName)
{
    m_taskTemplateName = _taskTemplateName;
    m_taskTemplateNameHasBeenSet = true;
}

bool ModifyTaskTemplateRequest::TaskTemplateNameHasBeenSet() const
{
    return m_taskTemplateNameHasBeenSet;
}

string ModifyTaskTemplateRequest::GetTaskTemplateDescription() const
{
    return m_taskTemplateDescription;
}

void ModifyTaskTemplateRequest::SetTaskTemplateDescription(const string& _taskTemplateDescription)
{
    m_taskTemplateDescription = _taskTemplateDescription;
    m_taskTemplateDescriptionHasBeenSet = true;
}

bool ModifyTaskTemplateRequest::TaskTemplateDescriptionHasBeenSet() const
{
    return m_taskTemplateDescriptionHasBeenSet;
}

Task ModifyTaskTemplateRequest::GetTaskTemplateInfo() const
{
    return m_taskTemplateInfo;
}

void ModifyTaskTemplateRequest::SetTaskTemplateInfo(const Task& _taskTemplateInfo)
{
    m_taskTemplateInfo = _taskTemplateInfo;
    m_taskTemplateInfoHasBeenSet = true;
}

bool ModifyTaskTemplateRequest::TaskTemplateInfoHasBeenSet() const
{
    return m_taskTemplateInfoHasBeenSet;
}


