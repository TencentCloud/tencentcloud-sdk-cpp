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

#include <tencentcloud/cwp/v20180228/model/DescribeCanNotSeparateMachineRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeCanNotSeparateMachineRequest::DescribeCanNotSeparateMachineRequest() :
    m_idsHasBeenSet(false),
    m_updateAllHasBeenSet(false),
    m_excludeIdHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string DescribeCanNotSeparateMachineRequest::ToJsonString() const
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

    if (m_updateAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateAll";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_updateAll, allocator);
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


vector<uint64_t> DescribeCanNotSeparateMachineRequest::GetIds() const
{
    return m_ids;
}

void DescribeCanNotSeparateMachineRequest::SetIds(const vector<uint64_t>& _ids)
{
    m_ids = _ids;
    m_idsHasBeenSet = true;
}

bool DescribeCanNotSeparateMachineRequest::IdsHasBeenSet() const
{
    return m_idsHasBeenSet;
}

bool DescribeCanNotSeparateMachineRequest::GetUpdateAll() const
{
    return m_updateAll;
}

void DescribeCanNotSeparateMachineRequest::SetUpdateAll(const bool& _updateAll)
{
    m_updateAll = _updateAll;
    m_updateAllHasBeenSet = true;
}

bool DescribeCanNotSeparateMachineRequest::UpdateAllHasBeenSet() const
{
    return m_updateAllHasBeenSet;
}

vector<uint64_t> DescribeCanNotSeparateMachineRequest::GetExcludeId() const
{
    return m_excludeId;
}

void DescribeCanNotSeparateMachineRequest::SetExcludeId(const vector<uint64_t>& _excludeId)
{
    m_excludeId = _excludeId;
    m_excludeIdHasBeenSet = true;
}

bool DescribeCanNotSeparateMachineRequest::ExcludeIdHasBeenSet() const
{
    return m_excludeIdHasBeenSet;
}

vector<Filters> DescribeCanNotSeparateMachineRequest::GetFilters() const
{
    return m_filters;
}

void DescribeCanNotSeparateMachineRequest::SetFilters(const vector<Filters>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeCanNotSeparateMachineRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


