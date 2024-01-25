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

#include <tencentcloud/wedata/v20210820/model/CreateTaskOutParamDsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CreateTaskOutParamDsRequest::CreateTaskOutParamDsRequest() :
    m_projectIdHasBeenSet(false),
    m_requestFromSourceHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_paramKeyHasBeenSet(false),
    m_paramDescHasBeenSet(false),
    m_paramDefineHasBeenSet(false)
{
}

string CreateTaskOutParamDsRequest::ToJsonString() const
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

    if (m_paramDefineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamDefine";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paramDefine.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTaskOutParamDsRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateTaskOutParamDsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateTaskOutParamDsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateTaskOutParamDsRequest::GetRequestFromSource() const
{
    return m_requestFromSource;
}

void CreateTaskOutParamDsRequest::SetRequestFromSource(const string& _requestFromSource)
{
    m_requestFromSource = _requestFromSource;
    m_requestFromSourceHasBeenSet = true;
}

bool CreateTaskOutParamDsRequest::RequestFromSourceHasBeenSet() const
{
    return m_requestFromSourceHasBeenSet;
}

string CreateTaskOutParamDsRequest::GetTaskId() const
{
    return m_taskId;
}

void CreateTaskOutParamDsRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool CreateTaskOutParamDsRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string CreateTaskOutParamDsRequest::GetParamKey() const
{
    return m_paramKey;
}

void CreateTaskOutParamDsRequest::SetParamKey(const string& _paramKey)
{
    m_paramKey = _paramKey;
    m_paramKeyHasBeenSet = true;
}

bool CreateTaskOutParamDsRequest::ParamKeyHasBeenSet() const
{
    return m_paramKeyHasBeenSet;
}

string CreateTaskOutParamDsRequest::GetParamDesc() const
{
    return m_paramDesc;
}

void CreateTaskOutParamDsRequest::SetParamDesc(const string& _paramDesc)
{
    m_paramDesc = _paramDesc;
    m_paramDescHasBeenSet = true;
}

bool CreateTaskOutParamDsRequest::ParamDescHasBeenSet() const
{
    return m_paramDescHasBeenSet;
}

string CreateTaskOutParamDsRequest::GetParamDefine() const
{
    return m_paramDefine;
}

void CreateTaskOutParamDsRequest::SetParamDefine(const string& _paramDefine)
{
    m_paramDefine = _paramDefine;
    m_paramDefineHasBeenSet = true;
}

bool CreateTaskOutParamDsRequest::ParamDefineHasBeenSet() const
{
    return m_paramDefineHasBeenSet;
}


