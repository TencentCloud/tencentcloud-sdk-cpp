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

#include <tencentcloud/csip/v20221121/model/ExportClientSettingHostListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ExportClientSettingHostListRequest::ExportClientSettingHostListRequest() :
    m_busiTypeHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string ExportClientSettingHostListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_busiTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusiType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_busiType.c_str(), allocator).Move(), allocator);
    }

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


string ExportClientSettingHostListRequest::GetBusiType() const
{
    return m_busiType;
}

void ExportClientSettingHostListRequest::SetBusiType(const string& _busiType)
{
    m_busiType = _busiType;
    m_busiTypeHasBeenSet = true;
}

bool ExportClientSettingHostListRequest::BusiTypeHasBeenSet() const
{
    return m_busiTypeHasBeenSet;
}

vector<string> ExportClientSettingHostListRequest::GetMemberId() const
{
    return m_memberId;
}

void ExportClientSettingHostListRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ExportClientSettingHostListRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<EDRFilters> ExportClientSettingHostListRequest::GetFilters() const
{
    return m_filters;
}

void ExportClientSettingHostListRequest::SetFilters(const vector<EDRFilters>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool ExportClientSettingHostListRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


