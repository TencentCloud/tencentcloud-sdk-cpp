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

#include <tencentcloud/iotexplorer/v20190423/model/ModifyProjectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace rapidjson;
using namespace std;

ModifyProjectRequest::ModifyProjectRequest() :
    m_projectIdHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_projectDescHasBeenSet(false)
{
}

string ModifyProjectRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectDescHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_projectDesc.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyProjectRequest::GetProjectId() const
{
    return m_projectId;
}

void ModifyProjectRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ModifyProjectRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ModifyProjectRequest::GetProjectName() const
{
    return m_projectName;
}

void ModifyProjectRequest::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool ModifyProjectRequest::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string ModifyProjectRequest::GetProjectDesc() const
{
    return m_projectDesc;
}

void ModifyProjectRequest::SetProjectDesc(const string& _projectDesc)
{
    m_projectDesc = _projectDesc;
    m_projectDescHasBeenSet = true;
}

bool ModifyProjectRequest::ProjectDescHasBeenSet() const
{
    return m_projectDescHasBeenSet;
}


