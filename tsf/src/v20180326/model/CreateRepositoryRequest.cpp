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

#include <tencentcloud/tsf/v20180326/model/CreateRepositoryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

CreateRepositoryRequest::CreateRepositoryRequest() :
    m_repositoryNameHasBeenSet(false),
    m_repositoryTypeHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_bucketRegionHasBeenSet(false),
    m_directoryHasBeenSet(false),
    m_repositoryDescHasBeenSet(false)
{
}

string CreateRepositoryRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_repositoryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepositoryName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_repositoryName.c_str(), allocator).Move(), allocator);
    }

    if (m_repositoryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepositoryType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_repositoryType.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bucketRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_directoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Directory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_directory.c_str(), allocator).Move(), allocator);
    }

    if (m_repositoryDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepositoryDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_repositoryDesc.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRepositoryRequest::GetRepositoryName() const
{
    return m_repositoryName;
}

void CreateRepositoryRequest::SetRepositoryName(const string& _repositoryName)
{
    m_repositoryName = _repositoryName;
    m_repositoryNameHasBeenSet = true;
}

bool CreateRepositoryRequest::RepositoryNameHasBeenSet() const
{
    return m_repositoryNameHasBeenSet;
}

string CreateRepositoryRequest::GetRepositoryType() const
{
    return m_repositoryType;
}

void CreateRepositoryRequest::SetRepositoryType(const string& _repositoryType)
{
    m_repositoryType = _repositoryType;
    m_repositoryTypeHasBeenSet = true;
}

bool CreateRepositoryRequest::RepositoryTypeHasBeenSet() const
{
    return m_repositoryTypeHasBeenSet;
}

string CreateRepositoryRequest::GetBucketName() const
{
    return m_bucketName;
}

void CreateRepositoryRequest::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool CreateRepositoryRequest::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

string CreateRepositoryRequest::GetBucketRegion() const
{
    return m_bucketRegion;
}

void CreateRepositoryRequest::SetBucketRegion(const string& _bucketRegion)
{
    m_bucketRegion = _bucketRegion;
    m_bucketRegionHasBeenSet = true;
}

bool CreateRepositoryRequest::BucketRegionHasBeenSet() const
{
    return m_bucketRegionHasBeenSet;
}

string CreateRepositoryRequest::GetDirectory() const
{
    return m_directory;
}

void CreateRepositoryRequest::SetDirectory(const string& _directory)
{
    m_directory = _directory;
    m_directoryHasBeenSet = true;
}

bool CreateRepositoryRequest::DirectoryHasBeenSet() const
{
    return m_directoryHasBeenSet;
}

string CreateRepositoryRequest::GetRepositoryDesc() const
{
    return m_repositoryDesc;
}

void CreateRepositoryRequest::SetRepositoryDesc(const string& _repositoryDesc)
{
    m_repositoryDesc = _repositoryDesc;
    m_repositoryDescHasBeenSet = true;
}

bool CreateRepositoryRequest::RepositoryDescHasBeenSet() const
{
    return m_repositoryDescHasBeenSet;
}


