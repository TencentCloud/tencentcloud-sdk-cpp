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

#include <tencentcloud/weilingwith/v20230427/model/DescribeAlarmListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

DescribeAlarmListRequest::DescribeAlarmListRequest() :
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_workspaceIdHasBeenSet(false),
    m_applicationTokenHasBeenSet(false),
    m_statusesHasBeenSet(false),
    m_alarmTypeSetHasBeenSet(false),
    m_levelSetHasBeenSet(false),
    m_idSetHasBeenSet(false),
    m_appIdSetHasBeenSet(false),
    m_wIDSetHasBeenSet(false),
    m_spaceCodeSetHasBeenSet(false),
    m_extendOneHasBeenSet(false),
    m_extendTwoHasBeenSet(false),
    m_processorSetHasBeenSet(false),
    m_groupIdSetHasBeenSet(false)
{
}

string DescribeAlarmListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_beginTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
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

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_workspaceId, allocator);
    }

    if (m_applicationTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationToken.c_str(), allocator).Move(), allocator);
    }

    if (m_statusesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Statuses";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_statuses.begin(); itr != m_statuses.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_alarmTypeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmTypeSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_alarmTypeSet.begin(); itr != m_alarmTypeSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_levelSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_levelSet.begin(); itr != m_levelSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_idSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_idSet.begin(); itr != m_idSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_appIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_appIdSet.begin(); itr != m_appIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_wIDSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WIDSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_wIDSet.begin(); itr != m_wIDSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_spaceCodeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceCodeSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_spaceCodeSet.begin(); itr != m_spaceCodeSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_extendOneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtendOne";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_extendOne.begin(); itr != m_extendOne.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_extendTwoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtendTwo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_extendTwo.begin(); itr != m_extendTwo.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_processorSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessorSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_processorSet.begin(); itr != m_processorSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_groupIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupIdSet.begin(); itr != m_groupIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeAlarmListRequest::GetBeginTime() const
{
    return m_beginTime;
}

void DescribeAlarmListRequest::SetBeginTime(const int64_t& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool DescribeAlarmListRequest::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

int64_t DescribeAlarmListRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeAlarmListRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeAlarmListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeAlarmListRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeAlarmListRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeAlarmListRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t DescribeAlarmListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeAlarmListRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeAlarmListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DescribeAlarmListRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void DescribeAlarmListRequest::SetWorkspaceId(const int64_t& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool DescribeAlarmListRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string DescribeAlarmListRequest::GetApplicationToken() const
{
    return m_applicationToken;
}

void DescribeAlarmListRequest::SetApplicationToken(const string& _applicationToken)
{
    m_applicationToken = _applicationToken;
    m_applicationTokenHasBeenSet = true;
}

bool DescribeAlarmListRequest::ApplicationTokenHasBeenSet() const
{
    return m_applicationTokenHasBeenSet;
}

vector<string> DescribeAlarmListRequest::GetStatuses() const
{
    return m_statuses;
}

void DescribeAlarmListRequest::SetStatuses(const vector<string>& _statuses)
{
    m_statuses = _statuses;
    m_statusesHasBeenSet = true;
}

bool DescribeAlarmListRequest::StatusesHasBeenSet() const
{
    return m_statusesHasBeenSet;
}

vector<AlarmTypeInfo> DescribeAlarmListRequest::GetAlarmTypeSet() const
{
    return m_alarmTypeSet;
}

void DescribeAlarmListRequest::SetAlarmTypeSet(const vector<AlarmTypeInfo>& _alarmTypeSet)
{
    m_alarmTypeSet = _alarmTypeSet;
    m_alarmTypeSetHasBeenSet = true;
}

bool DescribeAlarmListRequest::AlarmTypeSetHasBeenSet() const
{
    return m_alarmTypeSetHasBeenSet;
}

vector<int64_t> DescribeAlarmListRequest::GetLevelSet() const
{
    return m_levelSet;
}

void DescribeAlarmListRequest::SetLevelSet(const vector<int64_t>& _levelSet)
{
    m_levelSet = _levelSet;
    m_levelSetHasBeenSet = true;
}

bool DescribeAlarmListRequest::LevelSetHasBeenSet() const
{
    return m_levelSetHasBeenSet;
}

vector<string> DescribeAlarmListRequest::GetIdSet() const
{
    return m_idSet;
}

void DescribeAlarmListRequest::SetIdSet(const vector<string>& _idSet)
{
    m_idSet = _idSet;
    m_idSetHasBeenSet = true;
}

bool DescribeAlarmListRequest::IdSetHasBeenSet() const
{
    return m_idSetHasBeenSet;
}

vector<int64_t> DescribeAlarmListRequest::GetAppIdSet() const
{
    return m_appIdSet;
}

void DescribeAlarmListRequest::SetAppIdSet(const vector<int64_t>& _appIdSet)
{
    m_appIdSet = _appIdSet;
    m_appIdSetHasBeenSet = true;
}

bool DescribeAlarmListRequest::AppIdSetHasBeenSet() const
{
    return m_appIdSetHasBeenSet;
}

vector<string> DescribeAlarmListRequest::GetWIDSet() const
{
    return m_wIDSet;
}

void DescribeAlarmListRequest::SetWIDSet(const vector<string>& _wIDSet)
{
    m_wIDSet = _wIDSet;
    m_wIDSetHasBeenSet = true;
}

bool DescribeAlarmListRequest::WIDSetHasBeenSet() const
{
    return m_wIDSetHasBeenSet;
}

vector<string> DescribeAlarmListRequest::GetSpaceCodeSet() const
{
    return m_spaceCodeSet;
}

void DescribeAlarmListRequest::SetSpaceCodeSet(const vector<string>& _spaceCodeSet)
{
    m_spaceCodeSet = _spaceCodeSet;
    m_spaceCodeSetHasBeenSet = true;
}

bool DescribeAlarmListRequest::SpaceCodeSetHasBeenSet() const
{
    return m_spaceCodeSetHasBeenSet;
}

vector<string> DescribeAlarmListRequest::GetExtendOne() const
{
    return m_extendOne;
}

void DescribeAlarmListRequest::SetExtendOne(const vector<string>& _extendOne)
{
    m_extendOne = _extendOne;
    m_extendOneHasBeenSet = true;
}

bool DescribeAlarmListRequest::ExtendOneHasBeenSet() const
{
    return m_extendOneHasBeenSet;
}

vector<string> DescribeAlarmListRequest::GetExtendTwo() const
{
    return m_extendTwo;
}

void DescribeAlarmListRequest::SetExtendTwo(const vector<string>& _extendTwo)
{
    m_extendTwo = _extendTwo;
    m_extendTwoHasBeenSet = true;
}

bool DescribeAlarmListRequest::ExtendTwoHasBeenSet() const
{
    return m_extendTwoHasBeenSet;
}

vector<string> DescribeAlarmListRequest::GetProcessorSet() const
{
    return m_processorSet;
}

void DescribeAlarmListRequest::SetProcessorSet(const vector<string>& _processorSet)
{
    m_processorSet = _processorSet;
    m_processorSetHasBeenSet = true;
}

bool DescribeAlarmListRequest::ProcessorSetHasBeenSet() const
{
    return m_processorSetHasBeenSet;
}

vector<int64_t> DescribeAlarmListRequest::GetGroupIdSet() const
{
    return m_groupIdSet;
}

void DescribeAlarmListRequest::SetGroupIdSet(const vector<int64_t>& _groupIdSet)
{
    m_groupIdSet = _groupIdSet;
    m_groupIdSetHasBeenSet = true;
}

bool DescribeAlarmListRequest::GroupIdSetHasBeenSet() const
{
    return m_groupIdSetHasBeenSet;
}


