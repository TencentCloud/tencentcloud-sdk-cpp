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

#include <tencentcloud/wedata/v20210820/model/DescribeResourceManagePathTreesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeResourceManagePathTreesRequest::DescribeResourceManagePathTreesRequest() :
    m_projectIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_filePathHasBeenSet(false),
    m_dirTypeHasBeenSet(false)
{
}

string DescribeResourceManagePathTreesRequest::ToJsonString() const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_filePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filePath.c_str(), allocator).Move(), allocator);
    }

    if (m_dirTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dirType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeResourceManagePathTreesRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeResourceManagePathTreesRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeResourceManagePathTreesRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeResourceManagePathTreesRequest::GetName() const
{
    return m_name;
}

void DescribeResourceManagePathTreesRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeResourceManagePathTreesRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeResourceManagePathTreesRequest::GetFileType() const
{
    return m_fileType;
}

void DescribeResourceManagePathTreesRequest::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool DescribeResourceManagePathTreesRequest::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string DescribeResourceManagePathTreesRequest::GetFilePath() const
{
    return m_filePath;
}

void DescribeResourceManagePathTreesRequest::SetFilePath(const string& _filePath)
{
    m_filePath = _filePath;
    m_filePathHasBeenSet = true;
}

bool DescribeResourceManagePathTreesRequest::FilePathHasBeenSet() const
{
    return m_filePathHasBeenSet;
}

string DescribeResourceManagePathTreesRequest::GetDirType() const
{
    return m_dirType;
}

void DescribeResourceManagePathTreesRequest::SetDirType(const string& _dirType)
{
    m_dirType = _dirType;
    m_dirTypeHasBeenSet = true;
}

bool DescribeResourceManagePathTreesRequest::DirTypeHasBeenSet() const
{
    return m_dirTypeHasBeenSet;
}


