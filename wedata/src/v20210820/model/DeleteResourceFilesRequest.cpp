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

#include <tencentcloud/wedata/v20210820/model/DeleteResourceFilesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DeleteResourceFilesRequest::DeleteResourceFilesRequest() :
    m_projectIdHasBeenSet(false),
    m_useStatusHasBeenSet(false),
    m_resourceIdsHasBeenSet(false),
    m_filePathsHasBeenSet(false)
{
}

string DeleteResourceFilesRequest::ToJsonString() const
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

    if (m_useStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_useStatus, allocator);
    }

    if (m_resourceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceIds.begin(); itr != m_resourceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_filePathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePaths";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_filePaths.begin(); itr != m_filePaths.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteResourceFilesRequest::GetProjectId() const
{
    return m_projectId;
}

void DeleteResourceFilesRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DeleteResourceFilesRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

bool DeleteResourceFilesRequest::GetUseStatus() const
{
    return m_useStatus;
}

void DeleteResourceFilesRequest::SetUseStatus(const bool& _useStatus)
{
    m_useStatus = _useStatus;
    m_useStatusHasBeenSet = true;
}

bool DeleteResourceFilesRequest::UseStatusHasBeenSet() const
{
    return m_useStatusHasBeenSet;
}

vector<string> DeleteResourceFilesRequest::GetResourceIds() const
{
    return m_resourceIds;
}

void DeleteResourceFilesRequest::SetResourceIds(const vector<string>& _resourceIds)
{
    m_resourceIds = _resourceIds;
    m_resourceIdsHasBeenSet = true;
}

bool DeleteResourceFilesRequest::ResourceIdsHasBeenSet() const
{
    return m_resourceIdsHasBeenSet;
}

vector<string> DeleteResourceFilesRequest::GetFilePaths() const
{
    return m_filePaths;
}

void DeleteResourceFilesRequest::SetFilePaths(const vector<string>& _filePaths)
{
    m_filePaths = _filePaths;
    m_filePathsHasBeenSet = true;
}

bool DeleteResourceFilesRequest::FilePathsHasBeenSet() const
{
    return m_filePathsHasBeenSet;
}


