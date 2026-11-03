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

#include <tencentcloud/csip/v20221121/model/DeleteLoginWhiteCustomEDRRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DeleteLoginWhiteCustomEDRRequest::DeleteLoginWhiteCustomEDRRequest() :
    m_memberIdHasBeenSet(false),
    m_idsHasBeenSet(false),
    m_selectAllHasBeenSet(false),
    m_targetAppIDsHasBeenSet(false),
    m_excludeIdsHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string DeleteLoginWhiteCustomEDRRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_idsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ids.begin(); itr != m_ids.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_selectAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectAll";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_selectAll, allocator);
    }

    if (m_targetAppIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetAppIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_targetAppIDs.begin(); itr != m_targetAppIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_excludeIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeIds.begin(); itr != m_excludeIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DeleteLoginWhiteCustomEDRRequest::GetMemberId() const
{
    return m_memberId;
}

void DeleteLoginWhiteCustomEDRRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool DeleteLoginWhiteCustomEDRRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<uint64_t> DeleteLoginWhiteCustomEDRRequest::GetIds() const
{
    return m_ids;
}

void DeleteLoginWhiteCustomEDRRequest::SetIds(const vector<uint64_t>& _ids)
{
    m_ids = _ids;
    m_idsHasBeenSet = true;
}

bool DeleteLoginWhiteCustomEDRRequest::IdsHasBeenSet() const
{
    return m_idsHasBeenSet;
}

bool DeleteLoginWhiteCustomEDRRequest::GetSelectAll() const
{
    return m_selectAll;
}

void DeleteLoginWhiteCustomEDRRequest::SetSelectAll(const bool& _selectAll)
{
    m_selectAll = _selectAll;
    m_selectAllHasBeenSet = true;
}

bool DeleteLoginWhiteCustomEDRRequest::SelectAllHasBeenSet() const
{
    return m_selectAllHasBeenSet;
}

vector<uint64_t> DeleteLoginWhiteCustomEDRRequest::GetTargetAppIDs() const
{
    return m_targetAppIDs;
}

void DeleteLoginWhiteCustomEDRRequest::SetTargetAppIDs(const vector<uint64_t>& _targetAppIDs)
{
    m_targetAppIDs = _targetAppIDs;
    m_targetAppIDsHasBeenSet = true;
}

bool DeleteLoginWhiteCustomEDRRequest::TargetAppIDsHasBeenSet() const
{
    return m_targetAppIDsHasBeenSet;
}

vector<int64_t> DeleteLoginWhiteCustomEDRRequest::GetExcludeIds() const
{
    return m_excludeIds;
}

void DeleteLoginWhiteCustomEDRRequest::SetExcludeIds(const vector<int64_t>& _excludeIds)
{
    m_excludeIds = _excludeIds;
    m_excludeIdsHasBeenSet = true;
}

bool DeleteLoginWhiteCustomEDRRequest::ExcludeIdsHasBeenSet() const
{
    return m_excludeIdsHasBeenSet;
}

vector<EDRFilter> DeleteLoginWhiteCustomEDRRequest::GetFilters() const
{
    return m_filters;
}

void DeleteLoginWhiteCustomEDRRequest::SetFilters(const vector<EDRFilter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DeleteLoginWhiteCustomEDRRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


