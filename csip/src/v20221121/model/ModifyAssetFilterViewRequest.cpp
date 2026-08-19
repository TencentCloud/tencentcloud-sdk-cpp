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

#include <tencentcloud/csip/v20221121/model/ModifyAssetFilterViewRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyAssetFilterViewRequest::ModifyAssetFilterViewRequest() :
    m_viewIDHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string ModifyAssetFilterViewRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_viewIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_viewID, allocator);
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


uint64_t ModifyAssetFilterViewRequest::GetViewID() const
{
    return m_viewID;
}

void ModifyAssetFilterViewRequest::SetViewID(const uint64_t& _viewID)
{
    m_viewID = _viewID;
    m_viewIDHasBeenSet = true;
}

bool ModifyAssetFilterViewRequest::ViewIDHasBeenSet() const
{
    return m_viewIDHasBeenSet;
}

vector<string> ModifyAssetFilterViewRequest::GetMemberId() const
{
    return m_memberId;
}

void ModifyAssetFilterViewRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ModifyAssetFilterViewRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<Filters> ModifyAssetFilterViewRequest::GetFilters() const
{
    return m_filters;
}

void ModifyAssetFilterViewRequest::SetFilters(const vector<Filters>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool ModifyAssetFilterViewRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


