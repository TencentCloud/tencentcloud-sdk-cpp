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

#include <tencentcloud/goosefs/v20220519/model/DescribeFilesetsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

DescribeFilesetsRequest::DescribeFilesetsRequest() :
    m_fileSystemIdHasBeenSet(false),
    m_filesetIdsHasBeenSet(false),
    m_filesetDirsHasBeenSet(false)
{
}

string DescribeFilesetsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_filesetIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilesetIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_filesetIds.begin(); itr != m_filesetIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_filesetDirsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilesetDirs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_filesetDirs.begin(); itr != m_filesetDirs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeFilesetsRequest::GetFileSystemId() const
{
    return m_fileSystemId;
}

void DescribeFilesetsRequest::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool DescribeFilesetsRequest::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

vector<string> DescribeFilesetsRequest::GetFilesetIds() const
{
    return m_filesetIds;
}

void DescribeFilesetsRequest::SetFilesetIds(const vector<string>& _filesetIds)
{
    m_filesetIds = _filesetIds;
    m_filesetIdsHasBeenSet = true;
}

bool DescribeFilesetsRequest::FilesetIdsHasBeenSet() const
{
    return m_filesetIdsHasBeenSet;
}

vector<string> DescribeFilesetsRequest::GetFilesetDirs() const
{
    return m_filesetDirs;
}

void DescribeFilesetsRequest::SetFilesetDirs(const vector<string>& _filesetDirs)
{
    m_filesetDirs = _filesetDirs;
    m_filesetDirsHasBeenSet = true;
}

bool DescribeFilesetsRequest::FilesetDirsHasBeenSet() const
{
    return m_filesetDirsHasBeenSet;
}


