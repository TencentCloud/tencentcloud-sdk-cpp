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

#include <tencentcloud/iss/v20230517/model/ControlDeviceSnapshotRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

ControlDeviceSnapshotRequest::ControlDeviceSnapshotRequest() :
    m_channelIdHasBeenSet(false),
    m_snapNumHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_expireHasBeenSet(false)
{
}

string ControlDeviceSnapshotRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelId.c_str(), allocator).Move(), allocator);
    }

    if (m_snapNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_snapNum, allocator);
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_interval, allocator);
    }

    if (m_expireHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expire";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expire, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ControlDeviceSnapshotRequest::GetChannelId() const
{
    return m_channelId;
}

void ControlDeviceSnapshotRequest::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool ControlDeviceSnapshotRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

int64_t ControlDeviceSnapshotRequest::GetSnapNum() const
{
    return m_snapNum;
}

void ControlDeviceSnapshotRequest::SetSnapNum(const int64_t& _snapNum)
{
    m_snapNum = _snapNum;
    m_snapNumHasBeenSet = true;
}

bool ControlDeviceSnapshotRequest::SnapNumHasBeenSet() const
{
    return m_snapNumHasBeenSet;
}

int64_t ControlDeviceSnapshotRequest::GetInterval() const
{
    return m_interval;
}

void ControlDeviceSnapshotRequest::SetInterval(const int64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool ControlDeviceSnapshotRequest::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

int64_t ControlDeviceSnapshotRequest::GetExpire() const
{
    return m_expire;
}

void ControlDeviceSnapshotRequest::SetExpire(const int64_t& _expire)
{
    m_expire = _expire;
    m_expireHasBeenSet = true;
}

bool ControlDeviceSnapshotRequest::ExpireHasBeenSet() const
{
    return m_expireHasBeenSet;
}


