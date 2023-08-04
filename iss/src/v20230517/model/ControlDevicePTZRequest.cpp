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

#include <tencentcloud/iss/v20230517/model/ControlDevicePTZRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

ControlDevicePTZRequest::ControlDevicePTZRequest() :
    m_channelIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_speedHasBeenSet(false)
{
}

string ControlDevicePTZRequest::ToJsonString() const
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_speedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Speed";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_speed, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ControlDevicePTZRequest::GetChannelId() const
{
    return m_channelId;
}

void ControlDevicePTZRequest::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool ControlDevicePTZRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string ControlDevicePTZRequest::GetType() const
{
    return m_type;
}

void ControlDevicePTZRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ControlDevicePTZRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t ControlDevicePTZRequest::GetSpeed() const
{
    return m_speed;
}

void ControlDevicePTZRequest::SetSpeed(const int64_t& _speed)
{
    m_speed = _speed;
    m_speedHasBeenSet = true;
}

bool ControlDevicePTZRequest::SpeedHasBeenSet() const
{
    return m_speedHasBeenSet;
}


