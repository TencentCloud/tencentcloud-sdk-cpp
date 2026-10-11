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

#include <tencentcloud/apm/v20210622/model/DescribeSpanTreeByIDRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

DescribeSpanTreeByIDRequest::DescribeSpanTreeByIDRequest() :
    m_instanceIdHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_isFoldHasBeenSet(false),
    m_entrySpanSelectedHasBeenSet(false),
    m_focusSpanIdHasBeenSet(false),
    m_filterViewTagKeyListHasBeenSet(false),
    m_enableResourceLinkHasBeenSet(false)
{
}

string DescribeSpanTreeByIDRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
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

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_isFoldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isFold, allocator);
    }

    if (m_entrySpanSelectedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntrySpanSelected";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_entrySpanSelected, allocator);
    }

    if (m_focusSpanIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FocusSpanId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_focusSpanId.c_str(), allocator).Move(), allocator);
    }

    if (m_filterViewTagKeyListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterViewTagKeyList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_filterViewTagKeyList.begin(); itr != m_filterViewTagKeyList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_enableResourceLinkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableResourceLink";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableResourceLink, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSpanTreeByIDRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeSpanTreeByIDRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeSpanTreeByIDRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<Filter> DescribeSpanTreeByIDRequest::GetFilters() const
{
    return m_filters;
}

void DescribeSpanTreeByIDRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeSpanTreeByIDRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

int64_t DescribeSpanTreeByIDRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeSpanTreeByIDRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeSpanTreeByIDRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeSpanTreeByIDRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeSpanTreeByIDRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeSpanTreeByIDRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

bool DescribeSpanTreeByIDRequest::GetIsFold() const
{
    return m_isFold;
}

void DescribeSpanTreeByIDRequest::SetIsFold(const bool& _isFold)
{
    m_isFold = _isFold;
    m_isFoldHasBeenSet = true;
}

bool DescribeSpanTreeByIDRequest::IsFoldHasBeenSet() const
{
    return m_isFoldHasBeenSet;
}

bool DescribeSpanTreeByIDRequest::GetEntrySpanSelected() const
{
    return m_entrySpanSelected;
}

void DescribeSpanTreeByIDRequest::SetEntrySpanSelected(const bool& _entrySpanSelected)
{
    m_entrySpanSelected = _entrySpanSelected;
    m_entrySpanSelectedHasBeenSet = true;
}

bool DescribeSpanTreeByIDRequest::EntrySpanSelectedHasBeenSet() const
{
    return m_entrySpanSelectedHasBeenSet;
}

string DescribeSpanTreeByIDRequest::GetFocusSpanId() const
{
    return m_focusSpanId;
}

void DescribeSpanTreeByIDRequest::SetFocusSpanId(const string& _focusSpanId)
{
    m_focusSpanId = _focusSpanId;
    m_focusSpanIdHasBeenSet = true;
}

bool DescribeSpanTreeByIDRequest::FocusSpanIdHasBeenSet() const
{
    return m_focusSpanIdHasBeenSet;
}

vector<string> DescribeSpanTreeByIDRequest::GetFilterViewTagKeyList() const
{
    return m_filterViewTagKeyList;
}

void DescribeSpanTreeByIDRequest::SetFilterViewTagKeyList(const vector<string>& _filterViewTagKeyList)
{
    m_filterViewTagKeyList = _filterViewTagKeyList;
    m_filterViewTagKeyListHasBeenSet = true;
}

bool DescribeSpanTreeByIDRequest::FilterViewTagKeyListHasBeenSet() const
{
    return m_filterViewTagKeyListHasBeenSet;
}

bool DescribeSpanTreeByIDRequest::GetEnableResourceLink() const
{
    return m_enableResourceLink;
}

void DescribeSpanTreeByIDRequest::SetEnableResourceLink(const bool& _enableResourceLink)
{
    m_enableResourceLink = _enableResourceLink;
    m_enableResourceLinkHasBeenSet = true;
}

bool DescribeSpanTreeByIDRequest::EnableResourceLinkHasBeenSet() const
{
    return m_enableResourceLinkHasBeenSet;
}


