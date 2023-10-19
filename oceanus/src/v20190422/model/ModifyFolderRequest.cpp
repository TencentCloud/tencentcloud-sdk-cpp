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

#include <tencentcloud/oceanus/v20190422/model/ModifyFolderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

ModifyFolderRequest::ModifyFolderRequest() :
    m_sourceFolderIdHasBeenSet(false),
    m_targetFolderIdHasBeenSet(false),
    m_folderNameHasBeenSet(false),
    m_folderTypeHasBeenSet(false),
    m_sourceJobIdsHasBeenSet(false),
    m_workSpaceIdHasBeenSet(false)
{
}

string ModifyFolderRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sourceFolderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceFolderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceFolderId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetFolderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetFolderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetFolderId.c_str(), allocator).Move(), allocator);
    }

    if (m_folderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_folderName.c_str(), allocator).Move(), allocator);
    }

    if (m_folderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_folderType, allocator);
    }

    if (m_sourceJobIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceJobIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sourceJobIds.begin(); itr != m_sourceJobIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_workSpaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkSpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workSpaceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyFolderRequest::GetSourceFolderId() const
{
    return m_sourceFolderId;
}

void ModifyFolderRequest::SetSourceFolderId(const string& _sourceFolderId)
{
    m_sourceFolderId = _sourceFolderId;
    m_sourceFolderIdHasBeenSet = true;
}

bool ModifyFolderRequest::SourceFolderIdHasBeenSet() const
{
    return m_sourceFolderIdHasBeenSet;
}

string ModifyFolderRequest::GetTargetFolderId() const
{
    return m_targetFolderId;
}

void ModifyFolderRequest::SetTargetFolderId(const string& _targetFolderId)
{
    m_targetFolderId = _targetFolderId;
    m_targetFolderIdHasBeenSet = true;
}

bool ModifyFolderRequest::TargetFolderIdHasBeenSet() const
{
    return m_targetFolderIdHasBeenSet;
}

string ModifyFolderRequest::GetFolderName() const
{
    return m_folderName;
}

void ModifyFolderRequest::SetFolderName(const string& _folderName)
{
    m_folderName = _folderName;
    m_folderNameHasBeenSet = true;
}

bool ModifyFolderRequest::FolderNameHasBeenSet() const
{
    return m_folderNameHasBeenSet;
}

int64_t ModifyFolderRequest::GetFolderType() const
{
    return m_folderType;
}

void ModifyFolderRequest::SetFolderType(const int64_t& _folderType)
{
    m_folderType = _folderType;
    m_folderTypeHasBeenSet = true;
}

bool ModifyFolderRequest::FolderTypeHasBeenSet() const
{
    return m_folderTypeHasBeenSet;
}

vector<string> ModifyFolderRequest::GetSourceJobIds() const
{
    return m_sourceJobIds;
}

void ModifyFolderRequest::SetSourceJobIds(const vector<string>& _sourceJobIds)
{
    m_sourceJobIds = _sourceJobIds;
    m_sourceJobIdsHasBeenSet = true;
}

bool ModifyFolderRequest::SourceJobIdsHasBeenSet() const
{
    return m_sourceJobIdsHasBeenSet;
}

string ModifyFolderRequest::GetWorkSpaceId() const
{
    return m_workSpaceId;
}

void ModifyFolderRequest::SetWorkSpaceId(const string& _workSpaceId)
{
    m_workSpaceId = _workSpaceId;
    m_workSpaceIdHasBeenSet = true;
}

bool ModifyFolderRequest::WorkSpaceIdHasBeenSet() const
{
    return m_workSpaceIdHasBeenSet;
}


