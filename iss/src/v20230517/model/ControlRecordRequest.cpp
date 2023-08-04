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

#include <tencentcloud/iss/v20230517/model/ControlRecordRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

ControlRecordRequest::ControlRecordRequest() :
    m_channelIdHasBeenSet(false),
    m_sessionHasBeenSet(false),
    m_controlActionHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_scaleHasBeenSet(false)
{
}

string ControlRecordRequest::ToJsonString() const
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

    if (m_sessionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Session";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_session.c_str(), allocator).Move(), allocator);
    }

    if (m_controlActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ControlAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_controlAction.c_str(), allocator).Move(), allocator);
    }

    if (m_positionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Position";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_position, allocator);
    }

    if (m_scaleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scale";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scale, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ControlRecordRequest::GetChannelId() const
{
    return m_channelId;
}

void ControlRecordRequest::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool ControlRecordRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string ControlRecordRequest::GetSession() const
{
    return m_session;
}

void ControlRecordRequest::SetSession(const string& _session)
{
    m_session = _session;
    m_sessionHasBeenSet = true;
}

bool ControlRecordRequest::SessionHasBeenSet() const
{
    return m_sessionHasBeenSet;
}

string ControlRecordRequest::GetControlAction() const
{
    return m_controlAction;
}

void ControlRecordRequest::SetControlAction(const string& _controlAction)
{
    m_controlAction = _controlAction;
    m_controlActionHasBeenSet = true;
}

bool ControlRecordRequest::ControlActionHasBeenSet() const
{
    return m_controlActionHasBeenSet;
}

int64_t ControlRecordRequest::GetPosition() const
{
    return m_position;
}

void ControlRecordRequest::SetPosition(const int64_t& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool ControlRecordRequest::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

double ControlRecordRequest::GetScale() const
{
    return m_scale;
}

void ControlRecordRequest::SetScale(const double& _scale)
{
    m_scale = _scale;
    m_scaleHasBeenSet = true;
}

bool ControlRecordRequest::ScaleHasBeenSet() const
{
    return m_scaleHasBeenSet;
}


