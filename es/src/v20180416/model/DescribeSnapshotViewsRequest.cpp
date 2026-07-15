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

#include <tencentcloud/es/v20180416/model/DescribeSnapshotViewsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

DescribeSnapshotViewsRequest::DescribeSnapshotViewsRequest() :
    m_instanceIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_userBackUpHasBeenSet(false),
    m_durationHasBeenSet(false)
{
}

string DescribeSnapshotViewsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceId.begin(); itr != m_instanceId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_state.begin(); itr != m_state.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_userBackUpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserBackUp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userBackUp.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_duration, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeSnapshotViewsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeSnapshotViewsRequest::SetInstanceId(const vector<string>& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeSnapshotViewsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<string> DescribeSnapshotViewsRequest::GetState() const
{
    return m_state;
}

void DescribeSnapshotViewsRequest::SetState(const vector<string>& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool DescribeSnapshotViewsRequest::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string DescribeSnapshotViewsRequest::GetUserBackUp() const
{
    return m_userBackUp;
}

void DescribeSnapshotViewsRequest::SetUserBackUp(const string& _userBackUp)
{
    m_userBackUp = _userBackUp;
    m_userBackUpHasBeenSet = true;
}

bool DescribeSnapshotViewsRequest::UserBackUpHasBeenSet() const
{
    return m_userBackUpHasBeenSet;
}

uint64_t DescribeSnapshotViewsRequest::GetDuration() const
{
    return m_duration;
}

void DescribeSnapshotViewsRequest::SetDuration(const uint64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool DescribeSnapshotViewsRequest::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}


