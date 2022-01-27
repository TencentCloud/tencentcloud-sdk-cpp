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

#include <tencentcloud/ame/v20190916/model/DescribeKTVSingersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

DescribeKTVSingersRequest::DescribeKTVSingersRequest() :
    m_singerIdsHasBeenSet(false),
    m_gendersHasBeenSet(false),
    m_areasHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeKTVSingersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_singerIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SingerIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_singerIds.begin(); itr != m_singerIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_gendersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Genders";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_genders.begin(); itr != m_genders.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_areasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Areas";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_areas.begin(); itr != m_areas.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sort.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeKTVSingersRequest::GetSingerIds() const
{
    return m_singerIds;
}

void DescribeKTVSingersRequest::SetSingerIds(const vector<string>& _singerIds)
{
    m_singerIds = _singerIds;
    m_singerIdsHasBeenSet = true;
}

bool DescribeKTVSingersRequest::SingerIdsHasBeenSet() const
{
    return m_singerIdsHasBeenSet;
}

vector<string> DescribeKTVSingersRequest::GetGenders() const
{
    return m_genders;
}

void DescribeKTVSingersRequest::SetGenders(const vector<string>& _genders)
{
    m_genders = _genders;
    m_gendersHasBeenSet = true;
}

bool DescribeKTVSingersRequest::GendersHasBeenSet() const
{
    return m_gendersHasBeenSet;
}

vector<string> DescribeKTVSingersRequest::GetAreas() const
{
    return m_areas;
}

void DescribeKTVSingersRequest::SetAreas(const vector<string>& _areas)
{
    m_areas = _areas;
    m_areasHasBeenSet = true;
}

bool DescribeKTVSingersRequest::AreasHasBeenSet() const
{
    return m_areasHasBeenSet;
}

SortBy DescribeKTVSingersRequest::GetSort() const
{
    return m_sort;
}

void DescribeKTVSingersRequest::SetSort(const SortBy& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool DescribeKTVSingersRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

int64_t DescribeKTVSingersRequest::GetOffset() const
{
    return m_offset;
}

void DescribeKTVSingersRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeKTVSingersRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeKTVSingersRequest::GetLimit() const
{
    return m_limit;
}

void DescribeKTVSingersRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeKTVSingersRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


