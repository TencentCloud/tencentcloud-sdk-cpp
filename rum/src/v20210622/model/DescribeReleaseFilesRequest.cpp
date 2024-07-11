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

#include <tencentcloud/rum/v20210622/model/DescribeReleaseFilesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeReleaseFilesRequest::DescribeReleaseFilesRequest() :
    m_projectIDHasBeenSet(false),
    m_fileVersionHasBeenSet(false),
    m_fileNameHasBeenSet(false)
{
}

string DescribeReleaseFilesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectID, allocator);
    }

    if (m_fileVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeReleaseFilesRequest::GetProjectID() const
{
    return m_projectID;
}

void DescribeReleaseFilesRequest::SetProjectID(const int64_t& _projectID)
{
    m_projectID = _projectID;
    m_projectIDHasBeenSet = true;
}

bool DescribeReleaseFilesRequest::ProjectIDHasBeenSet() const
{
    return m_projectIDHasBeenSet;
}

string DescribeReleaseFilesRequest::GetFileVersion() const
{
    return m_fileVersion;
}

void DescribeReleaseFilesRequest::SetFileVersion(const string& _fileVersion)
{
    m_fileVersion = _fileVersion;
    m_fileVersionHasBeenSet = true;
}

bool DescribeReleaseFilesRequest::FileVersionHasBeenSet() const
{
    return m_fileVersionHasBeenSet;
}

string DescribeReleaseFilesRequest::GetFileName() const
{
    return m_fileName;
}

void DescribeReleaseFilesRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool DescribeReleaseFilesRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}


