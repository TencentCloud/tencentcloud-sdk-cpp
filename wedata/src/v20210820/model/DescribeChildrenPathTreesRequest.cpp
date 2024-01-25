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

#include <tencentcloud/wedata/v20210820/model/DescribeChildrenPathTreesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeChildrenPathTreesRequest::DescribeChildrenPathTreesRequest() :
    m_projectIdHasBeenSet(false),
    m_localPathHasBeenSet(false),
    m_includeFileHasBeenSet(false),
    m_queryDepthHasBeenSet(false)
{
}

string DescribeChildrenPathTreesRequest::ToJsonString() const
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

    if (m_localPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_localPath.c_str(), allocator).Move(), allocator);
    }

    if (m_includeFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeFile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_includeFile.c_str(), allocator).Move(), allocator);
    }

    if (m_queryDepthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryDepth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queryDepth, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeChildrenPathTreesRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeChildrenPathTreesRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeChildrenPathTreesRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeChildrenPathTreesRequest::GetLocalPath() const
{
    return m_localPath;
}

void DescribeChildrenPathTreesRequest::SetLocalPath(const string& _localPath)
{
    m_localPath = _localPath;
    m_localPathHasBeenSet = true;
}

bool DescribeChildrenPathTreesRequest::LocalPathHasBeenSet() const
{
    return m_localPathHasBeenSet;
}

string DescribeChildrenPathTreesRequest::GetIncludeFile() const
{
    return m_includeFile;
}

void DescribeChildrenPathTreesRequest::SetIncludeFile(const string& _includeFile)
{
    m_includeFile = _includeFile;
    m_includeFileHasBeenSet = true;
}

bool DescribeChildrenPathTreesRequest::IncludeFileHasBeenSet() const
{
    return m_includeFileHasBeenSet;
}

uint64_t DescribeChildrenPathTreesRequest::GetQueryDepth() const
{
    return m_queryDepth;
}

void DescribeChildrenPathTreesRequest::SetQueryDepth(const uint64_t& _queryDepth)
{
    m_queryDepth = _queryDepth;
    m_queryDepthHasBeenSet = true;
}

bool DescribeChildrenPathTreesRequest::QueryDepthHasBeenSet() const
{
    return m_queryDepthHasBeenSet;
}


