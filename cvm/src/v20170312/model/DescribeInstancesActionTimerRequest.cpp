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

#include <tencentcloud/cvm/v20170312/model/DescribeInstancesActionTimerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

DescribeInstancesActionTimerRequest::DescribeInstancesActionTimerRequest() :
    m_actionTimerIdsHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_timerActionHasBeenSet(false),
    m_endActionTimeHasBeenSet(false),
    m_startActionTimeHasBeenSet(false),
    m_statusListHasBeenSet(false)
{
}

string DescribeInstancesActionTimerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_actionTimerIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionTimerIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_actionTimerIds.begin(); itr != m_actionTimerIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_timerActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimerAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timerAction.c_str(), allocator).Move(), allocator);
    }

    if (m_endActionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndActionTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endActionTime.c_str(), allocator).Move(), allocator);
    }

    if (m_startActionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartActionTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startActionTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_statusList.begin(); itr != m_statusList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeInstancesActionTimerRequest::GetActionTimerIds() const
{
    return m_actionTimerIds;
}

void DescribeInstancesActionTimerRequest::SetActionTimerIds(const vector<string>& _actionTimerIds)
{
    m_actionTimerIds = _actionTimerIds;
    m_actionTimerIdsHasBeenSet = true;
}

bool DescribeInstancesActionTimerRequest::ActionTimerIdsHasBeenSet() const
{
    return m_actionTimerIdsHasBeenSet;
}

vector<string> DescribeInstancesActionTimerRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void DescribeInstancesActionTimerRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool DescribeInstancesActionTimerRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

string DescribeInstancesActionTimerRequest::GetTimerAction() const
{
    return m_timerAction;
}

void DescribeInstancesActionTimerRequest::SetTimerAction(const string& _timerAction)
{
    m_timerAction = _timerAction;
    m_timerActionHasBeenSet = true;
}

bool DescribeInstancesActionTimerRequest::TimerActionHasBeenSet() const
{
    return m_timerActionHasBeenSet;
}

string DescribeInstancesActionTimerRequest::GetEndActionTime() const
{
    return m_endActionTime;
}

void DescribeInstancesActionTimerRequest::SetEndActionTime(const string& _endActionTime)
{
    m_endActionTime = _endActionTime;
    m_endActionTimeHasBeenSet = true;
}

bool DescribeInstancesActionTimerRequest::EndActionTimeHasBeenSet() const
{
    return m_endActionTimeHasBeenSet;
}

string DescribeInstancesActionTimerRequest::GetStartActionTime() const
{
    return m_startActionTime;
}

void DescribeInstancesActionTimerRequest::SetStartActionTime(const string& _startActionTime)
{
    m_startActionTime = _startActionTime;
    m_startActionTimeHasBeenSet = true;
}

bool DescribeInstancesActionTimerRequest::StartActionTimeHasBeenSet() const
{
    return m_startActionTimeHasBeenSet;
}

vector<string> DescribeInstancesActionTimerRequest::GetStatusList() const
{
    return m_statusList;
}

void DescribeInstancesActionTimerRequest::SetStatusList(const vector<string>& _statusList)
{
    m_statusList = _statusList;
    m_statusListHasBeenSet = true;
}

bool DescribeInstancesActionTimerRequest::StatusListHasBeenSet() const
{
    return m_statusListHasBeenSet;
}


