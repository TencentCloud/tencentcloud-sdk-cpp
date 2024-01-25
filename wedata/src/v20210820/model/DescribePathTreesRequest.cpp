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

#include <tencentcloud/wedata/v20210820/model/DescribePathTreesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribePathTreesRequest::DescribePathTreesRequest() :
    m_projectIdHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_includeFileHasBeenSet(false),
    m_maxDepthHasBeenSet(false),
    m_fileNotUsedHasBeenSet(false)
{
}

string DescribePathTreesRequest::ToJsonString() const
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

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_includeFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeFile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_includeFile.c_str(), allocator).Move(), allocator);
    }

    if (m_maxDepthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDepth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxDepth, allocator);
    }

    if (m_fileNotUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileNotUsed";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileNotUsed.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribePathTreesRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribePathTreesRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribePathTreesRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribePathTreesRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribePathTreesRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribePathTreesRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

string DescribePathTreesRequest::GetIncludeFile() const
{
    return m_includeFile;
}

void DescribePathTreesRequest::SetIncludeFile(const string& _includeFile)
{
    m_includeFile = _includeFile;
    m_includeFileHasBeenSet = true;
}

bool DescribePathTreesRequest::IncludeFileHasBeenSet() const
{
    return m_includeFileHasBeenSet;
}

uint64_t DescribePathTreesRequest::GetMaxDepth() const
{
    return m_maxDepth;
}

void DescribePathTreesRequest::SetMaxDepth(const uint64_t& _maxDepth)
{
    m_maxDepth = _maxDepth;
    m_maxDepthHasBeenSet = true;
}

bool DescribePathTreesRequest::MaxDepthHasBeenSet() const
{
    return m_maxDepthHasBeenSet;
}

string DescribePathTreesRequest::GetFileNotUsed() const
{
    return m_fileNotUsed;
}

void DescribePathTreesRequest::SetFileNotUsed(const string& _fileNotUsed)
{
    m_fileNotUsed = _fileNotUsed;
    m_fileNotUsedHasBeenSet = true;
}

bool DescribePathTreesRequest::FileNotUsedHasBeenSet() const
{
    return m_fileNotUsedHasBeenSet;
}


