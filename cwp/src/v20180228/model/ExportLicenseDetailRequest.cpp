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

#include <tencentcloud/cwp/v20180228/model/ExportLicenseDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ExportLicenseDetailRequest::ExportLicenseDetailRequest() :
    m_filtersHasBeenSet(false),
    m_isHistoryHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_exportMonthHasBeenSet(false)
{
}

string ExportLicenseDetailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_isHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsHistory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isHistory, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_exportMonthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExportMonth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_exportMonth.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<Filters> ExportLicenseDetailRequest::GetFilters() const
{
    return m_filters;
}

void ExportLicenseDetailRequest::SetFilters(const vector<Filters>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool ExportLicenseDetailRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

bool ExportLicenseDetailRequest::GetIsHistory() const
{
    return m_isHistory;
}

void ExportLicenseDetailRequest::SetIsHistory(const bool& _isHistory)
{
    m_isHistory = _isHistory;
    m_isHistoryHasBeenSet = true;
}

bool ExportLicenseDetailRequest::IsHistoryHasBeenSet() const
{
    return m_isHistoryHasBeenSet;
}

vector<Tags> ExportLicenseDetailRequest::GetTags() const
{
    return m_tags;
}

void ExportLicenseDetailRequest::SetTags(const vector<Tags>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ExportLicenseDetailRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string ExportLicenseDetailRequest::GetExportMonth() const
{
    return m_exportMonth;
}

void ExportLicenseDetailRequest::SetExportMonth(const string& _exportMonth)
{
    m_exportMonth = _exportMonth;
    m_exportMonthHasBeenSet = true;
}

bool ExportLicenseDetailRequest::ExportMonthHasBeenSet() const
{
    return m_exportMonthHasBeenSet;
}


