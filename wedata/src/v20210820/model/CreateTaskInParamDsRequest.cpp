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

#include <tencentcloud/wedata/v20210820/model/CreateTaskInParamDsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CreateTaskInParamDsRequest::CreateTaskInParamDsRequest() :
    m_projectIdHasBeenSet(false),
    m_requestFromSourceHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_paramKeyHasBeenSet(false),
    m_paramDescHasBeenSet(false),
    m_fromTaskIdHasBeenSet(false),
    m_fromParamKeyHasBeenSet(false)
{
}

string CreateTaskInParamDsRequest::ToJsonString() const
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

    if (m_requestFromSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestFromSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_requestFromSource.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_paramKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paramKey.c_str(), allocator).Move(), allocator);
    }

    if (m_paramDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paramDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_fromTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromTaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fromTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_fromParamKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromParamKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fromParamKey.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTaskInParamDsRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateTaskInParamDsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateTaskInParamDsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateTaskInParamDsRequest::GetRequestFromSource() const
{
    return m_requestFromSource;
}

void CreateTaskInParamDsRequest::SetRequestFromSource(const string& _requestFromSource)
{
    m_requestFromSource = _requestFromSource;
    m_requestFromSourceHasBeenSet = true;
}

bool CreateTaskInParamDsRequest::RequestFromSourceHasBeenSet() const
{
    return m_requestFromSourceHasBeenSet;
}

string CreateTaskInParamDsRequest::GetTaskId() const
{
    return m_taskId;
}

void CreateTaskInParamDsRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool CreateTaskInParamDsRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string CreateTaskInParamDsRequest::GetParamKey() const
{
    return m_paramKey;
}

void CreateTaskInParamDsRequest::SetParamKey(const string& _paramKey)
{
    m_paramKey = _paramKey;
    m_paramKeyHasBeenSet = true;
}

bool CreateTaskInParamDsRequest::ParamKeyHasBeenSet() const
{
    return m_paramKeyHasBeenSet;
}

string CreateTaskInParamDsRequest::GetParamDesc() const
{
    return m_paramDesc;
}

void CreateTaskInParamDsRequest::SetParamDesc(const string& _paramDesc)
{
    m_paramDesc = _paramDesc;
    m_paramDescHasBeenSet = true;
}

bool CreateTaskInParamDsRequest::ParamDescHasBeenSet() const
{
    return m_paramDescHasBeenSet;
}

string CreateTaskInParamDsRequest::GetFromTaskId() const
{
    return m_fromTaskId;
}

void CreateTaskInParamDsRequest::SetFromTaskId(const string& _fromTaskId)
{
    m_fromTaskId = _fromTaskId;
    m_fromTaskIdHasBeenSet = true;
}

bool CreateTaskInParamDsRequest::FromTaskIdHasBeenSet() const
{
    return m_fromTaskIdHasBeenSet;
}

string CreateTaskInParamDsRequest::GetFromParamKey() const
{
    return m_fromParamKey;
}

void CreateTaskInParamDsRequest::SetFromParamKey(const string& _fromParamKey)
{
    m_fromParamKey = _fromParamKey;
    m_fromParamKeyHasBeenSet = true;
}

bool CreateTaskInParamDsRequest::FromParamKeyHasBeenSet() const
{
    return m_fromParamKeyHasBeenSet;
}


