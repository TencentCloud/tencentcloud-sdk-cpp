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

#include <tencentcloud/adp/v20260520/model/MarkTimerTaskRunLogReadRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

MarkTimerTaskRunLogReadRequest::MarkTimerTaskRunLogReadRequest() :
    m_fireInstanceIdListHasBeenSet(false),
    m_spaceIdHasBeenSet(false),
    m_timerIdHasBeenSet(false),
    m_loginUinHasBeenSet(false),
    m_loginSubAccountUinHasBeenSet(false)
{
}

string MarkTimerTaskRunLogReadRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fireInstanceIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FireInstanceIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fireInstanceIdList.begin(); itr != m_fireInstanceIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_spaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_spaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_timerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timerId.c_str(), allocator).Move(), allocator);
    }

    if (m_loginUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loginUin.c_str(), allocator).Move(), allocator);
    }

    if (m_loginSubAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginSubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loginSubAccountUin.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> MarkTimerTaskRunLogReadRequest::GetFireInstanceIdList() const
{
    return m_fireInstanceIdList;
}

void MarkTimerTaskRunLogReadRequest::SetFireInstanceIdList(const vector<string>& _fireInstanceIdList)
{
    m_fireInstanceIdList = _fireInstanceIdList;
    m_fireInstanceIdListHasBeenSet = true;
}

bool MarkTimerTaskRunLogReadRequest::FireInstanceIdListHasBeenSet() const
{
    return m_fireInstanceIdListHasBeenSet;
}

string MarkTimerTaskRunLogReadRequest::GetSpaceId() const
{
    return m_spaceId;
}

void MarkTimerTaskRunLogReadRequest::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool MarkTimerTaskRunLogReadRequest::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

string MarkTimerTaskRunLogReadRequest::GetTimerId() const
{
    return m_timerId;
}

void MarkTimerTaskRunLogReadRequest::SetTimerId(const string& _timerId)
{
    m_timerId = _timerId;
    m_timerIdHasBeenSet = true;
}

bool MarkTimerTaskRunLogReadRequest::TimerIdHasBeenSet() const
{
    return m_timerIdHasBeenSet;
}

string MarkTimerTaskRunLogReadRequest::GetLoginUin() const
{
    return m_loginUin;
}

void MarkTimerTaskRunLogReadRequest::SetLoginUin(const string& _loginUin)
{
    m_loginUin = _loginUin;
    m_loginUinHasBeenSet = true;
}

bool MarkTimerTaskRunLogReadRequest::LoginUinHasBeenSet() const
{
    return m_loginUinHasBeenSet;
}

string MarkTimerTaskRunLogReadRequest::GetLoginSubAccountUin() const
{
    return m_loginSubAccountUin;
}

void MarkTimerTaskRunLogReadRequest::SetLoginSubAccountUin(const string& _loginSubAccountUin)
{
    m_loginSubAccountUin = _loginSubAccountUin;
    m_loginSubAccountUinHasBeenSet = true;
}

bool MarkTimerTaskRunLogReadRequest::LoginSubAccountUinHasBeenSet() const
{
    return m_loginSubAccountUinHasBeenSet;
}


