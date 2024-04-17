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

#include <tencentcloud/vod/v20180717/model/RestoreMediaRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

RestoreMediaRequest::RestoreMediaRequest() :
    m_fileIdsHasBeenSet(false),
    m_restoreDayHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_restoreTierHasBeenSet(false)
{
}

string RestoreMediaRequest::ToJsonString() const
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

    if (m_restoreDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestoreDay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_restoreDay, allocator);
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


vector<string> RestoreMediaRequest::GetFileIds() const
{
    return m_fileIds;
}

void RestoreMediaRequest::SetFileIds(const vector<string>& _fileIds)
{
    m_fileIds = _fileIds;
    m_fileIdsHasBeenSet = true;
}

bool RestoreMediaRequest::FileIdsHasBeenSet() const
{
    return m_fileIdsHasBeenSet;
}

uint64_t RestoreMediaRequest::GetRestoreDay() const
{
    return m_restoreDay;
}

void RestoreMediaRequest::SetRestoreDay(const uint64_t& _restoreDay)
{
    m_restoreDay = _restoreDay;
    m_restoreDayHasBeenSet = true;
}

bool RestoreMediaRequest::RestoreDayHasBeenSet() const
{
    return m_restoreDayHasBeenSet;
}

uint64_t RestoreMediaRequest::GetSubAppId() const
{
    return m_subAppId;
}

void RestoreMediaRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool RestoreMediaRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string RestoreMediaRequest::GetRestoreTier() const
{
    return m_restoreTier;
}

void RestoreMediaRequest::SetRestoreTier(const string& _restoreTier)
{
    m_restoreTier = _restoreTier;
    m_restoreTierHasBeenSet = true;
}

bool RestoreMediaRequest::RestoreTierHasBeenSet() const
{
    return m_restoreTierHasBeenSet;
}


