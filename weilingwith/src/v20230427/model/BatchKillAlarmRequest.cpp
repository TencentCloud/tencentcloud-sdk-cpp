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

#include <tencentcloud/weilingwith/v20230427/model/BatchKillAlarmRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

BatchKillAlarmRequest::BatchKillAlarmRequest() :
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_statusSetHasBeenSet(false),
    m_workspaceIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_applicationTokenHasBeenSet(false),
    m_processorIdHasBeenSet(false),
    m_alarmTypeSetHasBeenSet(false),
    m_levelSetHasBeenSet(false),
    m_wIDSetHasBeenSet(false),
    m_idSetHasBeenSet(false),
    m_descHasBeenSet(false)
{
}

string BatchKillAlarmRequest::ToJsonString() const
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

    if (m_statusSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_statusSet.begin(); itr != m_statusSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_workspaceId, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationToken.c_str(), allocator).Move(), allocator);
    }

    if (m_processorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_processorId.c_str(), allocator).Move(), allocator);
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

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t BatchKillAlarmRequest::GetBeginTime() const
{
    return m_beginTime;
}

void BatchKillAlarmRequest::SetBeginTime(const int64_t& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool BatchKillAlarmRequest::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

int64_t BatchKillAlarmRequest::GetEndTime() const
{
    return m_endTime;
}

void BatchKillAlarmRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool BatchKillAlarmRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<string> BatchKillAlarmRequest::GetStatusSet() const
{
    return m_statusSet;
}

void BatchKillAlarmRequest::SetStatusSet(const vector<string>& _statusSet)
{
    m_statusSet = _statusSet;
    m_statusSetHasBeenSet = true;
}

bool BatchKillAlarmRequest::StatusSetHasBeenSet() const
{
    return m_statusSetHasBeenSet;
}

int64_t BatchKillAlarmRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void BatchKillAlarmRequest::SetWorkspaceId(const int64_t& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool BatchKillAlarmRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string BatchKillAlarmRequest::GetUserId() const
{
    return m_userId;
}

void BatchKillAlarmRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool BatchKillAlarmRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string BatchKillAlarmRequest::GetUserName() const
{
    return m_userName;
}

void BatchKillAlarmRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool BatchKillAlarmRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string BatchKillAlarmRequest::GetApplicationToken() const
{
    return m_applicationToken;
}

void BatchKillAlarmRequest::SetApplicationToken(const string& _applicationToken)
{
    m_applicationToken = _applicationToken;
    m_applicationTokenHasBeenSet = true;
}

bool BatchKillAlarmRequest::ApplicationTokenHasBeenSet() const
{
    return m_applicationTokenHasBeenSet;
}

string BatchKillAlarmRequest::GetProcessorId() const
{
    return m_processorId;
}

void BatchKillAlarmRequest::SetProcessorId(const string& _processorId)
{
    m_processorId = _processorId;
    m_processorIdHasBeenSet = true;
}

bool BatchKillAlarmRequest::ProcessorIdHasBeenSet() const
{
    return m_processorIdHasBeenSet;
}

vector<AlarmTypeInfo> BatchKillAlarmRequest::GetAlarmTypeSet() const
{
    return m_alarmTypeSet;
}

void BatchKillAlarmRequest::SetAlarmTypeSet(const vector<AlarmTypeInfo>& _alarmTypeSet)
{
    m_alarmTypeSet = _alarmTypeSet;
    m_alarmTypeSetHasBeenSet = true;
}

bool BatchKillAlarmRequest::AlarmTypeSetHasBeenSet() const
{
    return m_alarmTypeSetHasBeenSet;
}

vector<int64_t> BatchKillAlarmRequest::GetLevelSet() const
{
    return m_levelSet;
}

void BatchKillAlarmRequest::SetLevelSet(const vector<int64_t>& _levelSet)
{
    m_levelSet = _levelSet;
    m_levelSetHasBeenSet = true;
}

bool BatchKillAlarmRequest::LevelSetHasBeenSet() const
{
    return m_levelSetHasBeenSet;
}

vector<string> BatchKillAlarmRequest::GetWIDSet() const
{
    return m_wIDSet;
}

void BatchKillAlarmRequest::SetWIDSet(const vector<string>& _wIDSet)
{
    m_wIDSet = _wIDSet;
    m_wIDSetHasBeenSet = true;
}

bool BatchKillAlarmRequest::WIDSetHasBeenSet() const
{
    return m_wIDSetHasBeenSet;
}

vector<string> BatchKillAlarmRequest::GetIdSet() const
{
    return m_idSet;
}

void BatchKillAlarmRequest::SetIdSet(const vector<string>& _idSet)
{
    m_idSet = _idSet;
    m_idSetHasBeenSet = true;
}

bool BatchKillAlarmRequest::IdSetHasBeenSet() const
{
    return m_idSetHasBeenSet;
}

string BatchKillAlarmRequest::GetDesc() const
{
    return m_desc;
}

void BatchKillAlarmRequest::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool BatchKillAlarmRequest::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}


