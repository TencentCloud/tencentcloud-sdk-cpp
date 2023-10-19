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

#include <tencentcloud/oceanus/v20190422/model/DeleteFoldersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

DeleteFoldersRequest::DeleteFoldersRequest() :
    m_folderIdsHasBeenSet(false),
    m_folderTypeHasBeenSet(false),
    m_workSpaceIdHasBeenSet(false)
{
}

string DeleteFoldersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_folderIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_folderIds.begin(); itr != m_folderIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_folderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_folderType, allocator);
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


vector<string> DeleteFoldersRequest::GetFolderIds() const
{
    return m_folderIds;
}

void DeleteFoldersRequest::SetFolderIds(const vector<string>& _folderIds)
{
    m_folderIds = _folderIds;
    m_folderIdsHasBeenSet = true;
}

bool DeleteFoldersRequest::FolderIdsHasBeenSet() const
{
    return m_folderIdsHasBeenSet;
}

int64_t DeleteFoldersRequest::GetFolderType() const
{
    return m_folderType;
}

void DeleteFoldersRequest::SetFolderType(const int64_t& _folderType)
{
    m_folderType = _folderType;
    m_folderTypeHasBeenSet = true;
}

bool DeleteFoldersRequest::FolderTypeHasBeenSet() const
{
    return m_folderTypeHasBeenSet;
}

string DeleteFoldersRequest::GetWorkSpaceId() const
{
    return m_workSpaceId;
}

void DeleteFoldersRequest::SetWorkSpaceId(const string& _workSpaceId)
{
    m_workSpaceId = _workSpaceId;
    m_workSpaceIdHasBeenSet = true;
}

bool DeleteFoldersRequest::WorkSpaceIdHasBeenSet() const
{
    return m_workSpaceIdHasBeenSet;
}


