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

#include <tencentcloud/batch/v20170312/model/CreateTaskTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Batch::V20170312::Model;
using namespace rapidjson;
using namespace std;

CreateTaskTemplateRequest::CreateTaskTemplateRequest() :
    m_taskTemplateNameHasBeenSet(false),
    m_taskTemplateInfoHasBeenSet(false),
    m_taskTemplateDescriptionHasBeenSet(false)
{
}

string CreateTaskTemplateRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskTemplateNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskTemplateName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_taskTemplateName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTemplateInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskTemplateInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_taskTemplateInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_taskTemplateDescriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskTemplateDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_taskTemplateDescription.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTaskTemplateRequest::GetTaskTemplateName() const
{
    return m_taskTemplateName;
}

void CreateTaskTemplateRequest::SetTaskTemplateName(const string& _taskTemplateName)
{
    m_taskTemplateName = _taskTemplateName;
    m_taskTemplateNameHasBeenSet = true;
}

bool CreateTaskTemplateRequest::TaskTemplateNameHasBeenSet() const
{
    return m_taskTemplateNameHasBeenSet;
}

Task CreateTaskTemplateRequest::GetTaskTemplateInfo() const
{
    return m_taskTemplateInfo;
}

void CreateTaskTemplateRequest::SetTaskTemplateInfo(const Task& _taskTemplateInfo)
{
    m_taskTemplateInfo = _taskTemplateInfo;
    m_taskTemplateInfoHasBeenSet = true;
}

bool CreateTaskTemplateRequest::TaskTemplateInfoHasBeenSet() const
{
    return m_taskTemplateInfoHasBeenSet;
}

string CreateTaskTemplateRequest::GetTaskTemplateDescription() const
{
    return m_taskTemplateDescription;
}

void CreateTaskTemplateRequest::SetTaskTemplateDescription(const string& _taskTemplateDescription)
{
    m_taskTemplateDescription = _taskTemplateDescription;
    m_taskTemplateDescriptionHasBeenSet = true;
}

bool CreateTaskTemplateRequest::TaskTemplateDescriptionHasBeenSet() const
{
    return m_taskTemplateDescriptionHasBeenSet;
}


