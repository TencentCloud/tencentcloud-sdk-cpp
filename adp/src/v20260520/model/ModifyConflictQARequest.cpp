/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/adp/v20260520/model/ModifyConflictQARequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ModifyConflictQARequest::ModifyConflictQARequest() :
    m_kbIdHasBeenSet(false),
    m_conflictGroupIdHasBeenSet(false),
    m_isIgnoreAllHasBeenSet(false),
    m_qaIdListHasBeenSet(false),
    m_resolutionHasBeenSet(false)
{
}

string ModifyConflictQARequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_kbIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KbId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kbId.c_str(), allocator).Move(), allocator);
    }

    if (m_conflictGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConflictGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_conflictGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_isIgnoreAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsIgnoreAll";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isIgnoreAll, allocator);
    }

    if (m_qaIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QaIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_qaIdList.begin(); itr != m_qaIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resolution, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyConflictQARequest::GetKbId() const
{
    return m_kbId;
}

void ModifyConflictQARequest::SetKbId(const string& _kbId)
{
    m_kbId = _kbId;
    m_kbIdHasBeenSet = true;
}

bool ModifyConflictQARequest::KbIdHasBeenSet() const
{
    return m_kbIdHasBeenSet;
}

string ModifyConflictQARequest::GetConflictGroupId() const
{
    return m_conflictGroupId;
}

void ModifyConflictQARequest::SetConflictGroupId(const string& _conflictGroupId)
{
    m_conflictGroupId = _conflictGroupId;
    m_conflictGroupIdHasBeenSet = true;
}

bool ModifyConflictQARequest::ConflictGroupIdHasBeenSet() const
{
    return m_conflictGroupIdHasBeenSet;
}

bool ModifyConflictQARequest::GetIsIgnoreAll() const
{
    return m_isIgnoreAll;
}

void ModifyConflictQARequest::SetIsIgnoreAll(const bool& _isIgnoreAll)
{
    m_isIgnoreAll = _isIgnoreAll;
    m_isIgnoreAllHasBeenSet = true;
}

bool ModifyConflictQARequest::IsIgnoreAllHasBeenSet() const
{
    return m_isIgnoreAllHasBeenSet;
}

vector<string> ModifyConflictQARequest::GetQaIdList() const
{
    return m_qaIdList;
}

void ModifyConflictQARequest::SetQaIdList(const vector<string>& _qaIdList)
{
    m_qaIdList = _qaIdList;
    m_qaIdListHasBeenSet = true;
}

bool ModifyConflictQARequest::QaIdListHasBeenSet() const
{
    return m_qaIdListHasBeenSet;
}

int64_t ModifyConflictQARequest::GetResolution() const
{
    return m_resolution;
}

void ModifyConflictQARequest::SetResolution(const int64_t& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool ModifyConflictQARequest::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}


