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

#include <tencentcloud/wedata/v20210820/model/CheckTaskNameExistRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CheckTaskNameExistRequest::CheckTaskNameExistRequest() :
    m_projectIdHasBeenSet(false),
    m_typeIdHasBeenSet(false),
    m_taskNameHasBeenSet(false)
{
}

string CheckTaskNameExistRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_typeId, allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CheckTaskNameExistRequest::GetProjectId() const
{
    return m_projectId;
}

void CheckTaskNameExistRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CheckTaskNameExistRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t CheckTaskNameExistRequest::GetTypeId() const
{
    return m_typeId;
}

void CheckTaskNameExistRequest::SetTypeId(const int64_t& _typeId)
{
    m_typeId = _typeId;
    m_typeIdHasBeenSet = true;
}

bool CheckTaskNameExistRequest::TypeIdHasBeenSet() const
{
    return m_typeIdHasBeenSet;
}

string CheckTaskNameExistRequest::GetTaskName() const
{
    return m_taskName;
}

void CheckTaskNameExistRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool CheckTaskNameExistRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}


