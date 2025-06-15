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

#include <tencentcloud/lke/v20231130/model/ListUsageCallDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ListUsageCallDetailRequest::ListUsageCallDetailRequest() :
    m_modelNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_uinAccountHasBeenSet(false),
    m_appBizIdsHasBeenSet(false),
    m_callTypeHasBeenSet(false),
    m_subScenesHasBeenSet(false),
    m_appTypeHasBeenSet(false),
    m_billingTagHasBeenSet(false)
{
}

string ListUsageCallDetailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_uinAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UinAccount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_uinAccount.begin(); itr != m_uinAccount.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_appBizIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppBizIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_appBizIds.begin(); itr != m_appBizIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_callTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callType.c_str(), allocator).Move(), allocator);
    }

    if (m_subScenesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubScenes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subScenes.begin(); itr != m_subScenes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_appTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appType.c_str(), allocator).Move(), allocator);
    }

    if (m_billingTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingTag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_billingTag.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListUsageCallDetailRequest::GetModelName() const
{
    return m_modelName;
}

void ListUsageCallDetailRequest::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool ListUsageCallDetailRequest::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string ListUsageCallDetailRequest::GetStartTime() const
{
    return m_startTime;
}

void ListUsageCallDetailRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ListUsageCallDetailRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ListUsageCallDetailRequest::GetEndTime() const
{
    return m_endTime;
}

void ListUsageCallDetailRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ListUsageCallDetailRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t ListUsageCallDetailRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void ListUsageCallDetailRequest::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool ListUsageCallDetailRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

uint64_t ListUsageCallDetailRequest::GetPageSize() const
{
    return m_pageSize;
}

void ListUsageCallDetailRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ListUsageCallDetailRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

vector<string> ListUsageCallDetailRequest::GetUinAccount() const
{
    return m_uinAccount;
}

void ListUsageCallDetailRequest::SetUinAccount(const vector<string>& _uinAccount)
{
    m_uinAccount = _uinAccount;
    m_uinAccountHasBeenSet = true;
}

bool ListUsageCallDetailRequest::UinAccountHasBeenSet() const
{
    return m_uinAccountHasBeenSet;
}

vector<string> ListUsageCallDetailRequest::GetAppBizIds() const
{
    return m_appBizIds;
}

void ListUsageCallDetailRequest::SetAppBizIds(const vector<string>& _appBizIds)
{
    m_appBizIds = _appBizIds;
    m_appBizIdsHasBeenSet = true;
}

bool ListUsageCallDetailRequest::AppBizIdsHasBeenSet() const
{
    return m_appBizIdsHasBeenSet;
}

string ListUsageCallDetailRequest::GetCallType() const
{
    return m_callType;
}

void ListUsageCallDetailRequest::SetCallType(const string& _callType)
{
    m_callType = _callType;
    m_callTypeHasBeenSet = true;
}

bool ListUsageCallDetailRequest::CallTypeHasBeenSet() const
{
    return m_callTypeHasBeenSet;
}

vector<string> ListUsageCallDetailRequest::GetSubScenes() const
{
    return m_subScenes;
}

void ListUsageCallDetailRequest::SetSubScenes(const vector<string>& _subScenes)
{
    m_subScenes = _subScenes;
    m_subScenesHasBeenSet = true;
}

bool ListUsageCallDetailRequest::SubScenesHasBeenSet() const
{
    return m_subScenesHasBeenSet;
}

string ListUsageCallDetailRequest::GetAppType() const
{
    return m_appType;
}

void ListUsageCallDetailRequest::SetAppType(const string& _appType)
{
    m_appType = _appType;
    m_appTypeHasBeenSet = true;
}

bool ListUsageCallDetailRequest::AppTypeHasBeenSet() const
{
    return m_appTypeHasBeenSet;
}

string ListUsageCallDetailRequest::GetBillingTag() const
{
    return m_billingTag;
}

void ListUsageCallDetailRequest::SetBillingTag(const string& _billingTag)
{
    m_billingTag = _billingTag;
    m_billingTagHasBeenSet = true;
}

bool ListUsageCallDetailRequest::BillingTagHasBeenSet() const
{
    return m_billingTagHasBeenSet;
}


