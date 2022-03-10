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

#include <tencentcloud/vod/v20180717/model/ModifyMediaStorageClassRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ModifyMediaStorageClassRequest::ModifyMediaStorageClassRequest() :
    m_fileIdsHasBeenSet(false),
    m_storageClassHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_restoreTierHasBeenSet(false)
{
}

string ModifyMediaStorageClassRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileIds.begin(); itr != m_fileIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_storageClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageClass";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_storageClass.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_restoreTierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestoreTier";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_restoreTier.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyMediaStorageClassRequest::GetFileIds() const
{
    return m_fileIds;
}

void ModifyMediaStorageClassRequest::SetFileIds(const vector<string>& _fileIds)
{
    m_fileIds = _fileIds;
    m_fileIdsHasBeenSet = true;
}

bool ModifyMediaStorageClassRequest::FileIdsHasBeenSet() const
{
    return m_fileIdsHasBeenSet;
}

string ModifyMediaStorageClassRequest::GetStorageClass() const
{
    return m_storageClass;
}

void ModifyMediaStorageClassRequest::SetStorageClass(const string& _storageClass)
{
    m_storageClass = _storageClass;
    m_storageClassHasBeenSet = true;
}

bool ModifyMediaStorageClassRequest::StorageClassHasBeenSet() const
{
    return m_storageClassHasBeenSet;
}

uint64_t ModifyMediaStorageClassRequest::GetSubAppId() const
{
    return m_subAppId;
}

void ModifyMediaStorageClassRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool ModifyMediaStorageClassRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string ModifyMediaStorageClassRequest::GetRestoreTier() const
{
    return m_restoreTier;
}

void ModifyMediaStorageClassRequest::SetRestoreTier(const string& _restoreTier)
{
    m_restoreTier = _restoreTier;
    m_restoreTierHasBeenSet = true;
}

bool ModifyMediaStorageClassRequest::RestoreTierHasBeenSet() const
{
    return m_restoreTierHasBeenSet;
}


