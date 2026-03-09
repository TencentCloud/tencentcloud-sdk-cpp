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

#include <tencentcloud/cwp/v20180228/model/ExportPatchEffectHostListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ExportPatchEffectHostListRequest::ExportPatchEffectHostListRequest() :
    m_kbIdHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string ExportPatchEffectHostListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_kbIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KbId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_kbId, allocator);
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


uint64_t ExportPatchEffectHostListRequest::GetKbId() const
{
    return m_kbId;
}

void ExportPatchEffectHostListRequest::SetKbId(const uint64_t& _kbId)
{
    m_kbId = _kbId;
    m_kbIdHasBeenSet = true;
}

bool ExportPatchEffectHostListRequest::KbIdHasBeenSet() const
{
    return m_kbIdHasBeenSet;
}

vector<Filter> ExportPatchEffectHostListRequest::GetFilters() const
{
    return m_filters;
}

void ExportPatchEffectHostListRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool ExportPatchEffectHostListRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


