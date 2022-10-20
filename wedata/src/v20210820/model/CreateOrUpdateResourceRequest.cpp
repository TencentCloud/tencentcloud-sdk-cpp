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

#include <tencentcloud/wedata/v20210820/model/CreateOrUpdateResourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CreateOrUpdateResourceRequest::CreateOrUpdateResourceRequest() :
    m_projectIdHasBeenSet(false),
    m_filesHasBeenSet(false),
    m_filePathHasBeenSet(false),
    m_cosBucketNameHasBeenSet(false),
    m_cosRegionHasBeenSet(false),
    m_newFileHasBeenSet(false),
    m_filesSizeHasBeenSet(false)
{
}

string CreateOrUpdateResourceRequest::ToJsonString() const
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

    if (m_filesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Files";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_files.begin(); itr != m_files.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_filePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filePath.c_str(), allocator).Move(), allocator);
    }

    if (m_cosBucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucketName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cosBucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_cosRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cosRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_newFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewFile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_newFile, allocator);
    }

    if (m_filesSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilesSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_filesSize.begin(); itr != m_filesSize.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateOrUpdateResourceRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateOrUpdateResourceRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateOrUpdateResourceRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<string> CreateOrUpdateResourceRequest::GetFiles() const
{
    return m_files;
}

void CreateOrUpdateResourceRequest::SetFiles(const vector<string>& _files)
{
    m_files = _files;
    m_filesHasBeenSet = true;
}

bool CreateOrUpdateResourceRequest::FilesHasBeenSet() const
{
    return m_filesHasBeenSet;
}

string CreateOrUpdateResourceRequest::GetFilePath() const
{
    return m_filePath;
}

void CreateOrUpdateResourceRequest::SetFilePath(const string& _filePath)
{
    m_filePath = _filePath;
    m_filePathHasBeenSet = true;
}

bool CreateOrUpdateResourceRequest::FilePathHasBeenSet() const
{
    return m_filePathHasBeenSet;
}

string CreateOrUpdateResourceRequest::GetCosBucketName() const
{
    return m_cosBucketName;
}

void CreateOrUpdateResourceRequest::SetCosBucketName(const string& _cosBucketName)
{
    m_cosBucketName = _cosBucketName;
    m_cosBucketNameHasBeenSet = true;
}

bool CreateOrUpdateResourceRequest::CosBucketNameHasBeenSet() const
{
    return m_cosBucketNameHasBeenSet;
}

string CreateOrUpdateResourceRequest::GetCosRegion() const
{
    return m_cosRegion;
}

void CreateOrUpdateResourceRequest::SetCosRegion(const string& _cosRegion)
{
    m_cosRegion = _cosRegion;
    m_cosRegionHasBeenSet = true;
}

bool CreateOrUpdateResourceRequest::CosRegionHasBeenSet() const
{
    return m_cosRegionHasBeenSet;
}

bool CreateOrUpdateResourceRequest::GetNewFile() const
{
    return m_newFile;
}

void CreateOrUpdateResourceRequest::SetNewFile(const bool& _newFile)
{
    m_newFile = _newFile;
    m_newFileHasBeenSet = true;
}

bool CreateOrUpdateResourceRequest::NewFileHasBeenSet() const
{
    return m_newFileHasBeenSet;
}

vector<string> CreateOrUpdateResourceRequest::GetFilesSize() const
{
    return m_filesSize;
}

void CreateOrUpdateResourceRequest::SetFilesSize(const vector<string>& _filesSize)
{
    m_filesSize = _filesSize;
    m_filesSizeHasBeenSet = true;
}

bool CreateOrUpdateResourceRequest::FilesSizeHasBeenSet() const
{
    return m_filesSizeHasBeenSet;
}


