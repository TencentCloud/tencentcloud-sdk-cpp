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

#include <tencentcloud/wedata/v20210820/model/DeleteTaskInParamDsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DeleteTaskInParamDsRequest::DeleteTaskInParamDsRequest() :
    m_projectIdHasBeenSet(false),
    m_requestFromSourceHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_paramKeyHasBeenSet(false)
{
}

string DeleteTaskInParamDsRequest::ToJsonString() const
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteTaskInParamDsRequest::GetProjectId() const
{
    return m_projectId;
}

void DeleteTaskInParamDsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DeleteTaskInParamDsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DeleteTaskInParamDsRequest::GetRequestFromSource() const
{
    return m_requestFromSource;
}

void DeleteTaskInParamDsRequest::SetRequestFromSource(const string& _requestFromSource)
{
    m_requestFromSource = _requestFromSource;
    m_requestFromSourceHasBeenSet = true;
}

bool DeleteTaskInParamDsRequest::RequestFromSourceHasBeenSet() const
{
    return m_requestFromSourceHasBeenSet;
}

string DeleteTaskInParamDsRequest::GetTaskId() const
{
    return m_taskId;
}

void DeleteTaskInParamDsRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DeleteTaskInParamDsRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DeleteTaskInParamDsRequest::GetParamKey() const
{
    return m_paramKey;
}

void DeleteTaskInParamDsRequest::SetParamKey(const string& _paramKey)
{
    m_paramKey = _paramKey;
    m_paramKeyHasBeenSet = true;
}

bool DeleteTaskInParamDsRequest::ParamKeyHasBeenSet() const
{
    return m_paramKeyHasBeenSet;
}


