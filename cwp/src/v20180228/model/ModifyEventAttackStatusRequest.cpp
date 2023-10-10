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

#include <tencentcloud/cwp/v20180228/model/ModifyEventAttackStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ModifyEventAttackStatusRequest::ModifyEventAttackStatusRequest() :
    m_idsHasBeenSet(false),
    m_allHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_excludeIdHasBeenSet(false)
{
}

string ModifyEventAttackStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_allHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "All";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_all, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
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

    if (m_excludeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeId.begin(); itr != m_excludeId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<uint64_t> ModifyEventAttackStatusRequest::GetIds() const
{
    return m_ids;
}

void ModifyEventAttackStatusRequest::SetIds(const vector<uint64_t>& _ids)
{
    m_ids = _ids;
    m_idsHasBeenSet = true;
}

bool ModifyEventAttackStatusRequest::IdsHasBeenSet() const
{
    return m_idsHasBeenSet;
}

bool ModifyEventAttackStatusRequest::GetAll() const
{
    return m_all;
}

void ModifyEventAttackStatusRequest::SetAll(const bool& _all)
{
    m_all = _all;
    m_allHasBeenSet = true;
}

bool ModifyEventAttackStatusRequest::AllHasBeenSet() const
{
    return m_allHasBeenSet;
}

uint64_t ModifyEventAttackStatusRequest::GetStatus() const
{
    return m_status;
}

void ModifyEventAttackStatusRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyEventAttackStatusRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<Filters> ModifyEventAttackStatusRequest::GetFilters() const
{
    return m_filters;
}

void ModifyEventAttackStatusRequest::SetFilters(const vector<Filters>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool ModifyEventAttackStatusRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

vector<uint64_t> ModifyEventAttackStatusRequest::GetExcludeId() const
{
    return m_excludeId;
}

void ModifyEventAttackStatusRequest::SetExcludeId(const vector<uint64_t>& _excludeId)
{
    m_excludeId = _excludeId;
    m_excludeIdHasBeenSet = true;
}

bool ModifyEventAttackStatusRequest::ExcludeIdHasBeenSet() const
{
    return m_excludeIdHasBeenSet;
}


