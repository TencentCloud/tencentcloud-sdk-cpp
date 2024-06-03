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

#include <tencentcloud/wedata/v20210820/model/UploadContentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

UploadContentRequest::UploadContentRequest() :
    m_scriptRequestInfoHasBeenSet(false),
    m_requestFromSourceHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

string UploadContentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_scriptRequestInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptRequestInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scriptRequestInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_requestFromSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestFromSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_requestFromSource.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


ScriptRequestInfo UploadContentRequest::GetScriptRequestInfo() const
{
    return m_scriptRequestInfo;
}

void UploadContentRequest::SetScriptRequestInfo(const ScriptRequestInfo& _scriptRequestInfo)
{
    m_scriptRequestInfo = _scriptRequestInfo;
    m_scriptRequestInfoHasBeenSet = true;
}

bool UploadContentRequest::ScriptRequestInfoHasBeenSet() const
{
    return m_scriptRequestInfoHasBeenSet;
}

string UploadContentRequest::GetRequestFromSource() const
{
    return m_requestFromSource;
}

void UploadContentRequest::SetRequestFromSource(const string& _requestFromSource)
{
    m_requestFromSource = _requestFromSource;
    m_requestFromSourceHasBeenSet = true;
}

bool UploadContentRequest::RequestFromSourceHasBeenSet() const
{
    return m_requestFromSourceHasBeenSet;
}

string UploadContentRequest::GetProjectId() const
{
    return m_projectId;
}

void UploadContentRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool UploadContentRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}


