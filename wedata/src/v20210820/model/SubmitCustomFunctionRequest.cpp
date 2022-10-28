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

#include <tencentcloud/wedata/v20210820/model/SubmitCustomFunctionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

SubmitCustomFunctionRequest::SubmitCustomFunctionRequest() :
    m_functionIdHasBeenSet(false),
    m_clusterIdentifierHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

string SubmitCustomFunctionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_functionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_functionId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdentifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterIdentifier";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterIdentifier.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
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


string SubmitCustomFunctionRequest::GetFunctionId() const
{
    return m_functionId;
}

void SubmitCustomFunctionRequest::SetFunctionId(const string& _functionId)
{
    m_functionId = _functionId;
    m_functionIdHasBeenSet = true;
}

bool SubmitCustomFunctionRequest::FunctionIdHasBeenSet() const
{
    return m_functionIdHasBeenSet;
}

string SubmitCustomFunctionRequest::GetClusterIdentifier() const
{
    return m_clusterIdentifier;
}

void SubmitCustomFunctionRequest::SetClusterIdentifier(const string& _clusterIdentifier)
{
    m_clusterIdentifier = _clusterIdentifier;
    m_clusterIdentifierHasBeenSet = true;
}

bool SubmitCustomFunctionRequest::ClusterIdentifierHasBeenSet() const
{
    return m_clusterIdentifierHasBeenSet;
}

string SubmitCustomFunctionRequest::GetComment() const
{
    return m_comment;
}

void SubmitCustomFunctionRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool SubmitCustomFunctionRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string SubmitCustomFunctionRequest::GetProjectId() const
{
    return m_projectId;
}

void SubmitCustomFunctionRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool SubmitCustomFunctionRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}


