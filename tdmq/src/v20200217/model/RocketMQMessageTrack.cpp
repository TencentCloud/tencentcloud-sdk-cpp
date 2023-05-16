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

#include <tencentcloud/tdmq/v20200217/model/RocketMQMessageTrack.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RocketMQMessageTrack::RocketMQMessageTrack() :
    m_groupHasBeenSet(false),
    m_consumeStatusHasBeenSet(false),
    m_trackTypeHasBeenSet(false),
    m_exceptionDescHasBeenSet(false)
{
}

CoreInternalOutcome RocketMQMessageTrack::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Group") && !value["Group"].IsNull())
    {
        if (!value["Group"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQMessageTrack.Group` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_group = string(value["Group"].GetString());
        m_groupHasBeenSet = true;
    }

    if (value.HasMember("ConsumeStatus") && !value["ConsumeStatus"].IsNull())
    {
        if (!value["ConsumeStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQMessageTrack.ConsumeStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumeStatus = string(value["ConsumeStatus"].GetString());
        m_consumeStatusHasBeenSet = true;
    }

    if (value.HasMember("TrackType") && !value["TrackType"].IsNull())
    {
        if (!value["TrackType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQMessageTrack.TrackType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trackType = string(value["TrackType"].GetString());
        m_trackTypeHasBeenSet = true;
    }

    if (value.HasMember("ExceptionDesc") && !value["ExceptionDesc"].IsNull())
    {
        if (!value["ExceptionDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQMessageTrack.ExceptionDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exceptionDesc = string(value["ExceptionDesc"].GetString());
        m_exceptionDescHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RocketMQMessageTrack::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Group";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_group.c_str(), allocator).Move(), allocator);
    }

    if (m_consumeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumeStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumeStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_trackTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrackType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trackType.c_str(), allocator).Move(), allocator);
    }

    if (m_exceptionDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExceptionDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exceptionDesc.c_str(), allocator).Move(), allocator);
    }

}


string RocketMQMessageTrack::GetGroup() const
{
    return m_group;
}

void RocketMQMessageTrack::SetGroup(const string& _group)
{
    m_group = _group;
    m_groupHasBeenSet = true;
}

bool RocketMQMessageTrack::GroupHasBeenSet() const
{
    return m_groupHasBeenSet;
}

string RocketMQMessageTrack::GetConsumeStatus() const
{
    return m_consumeStatus;
}

void RocketMQMessageTrack::SetConsumeStatus(const string& _consumeStatus)
{
    m_consumeStatus = _consumeStatus;
    m_consumeStatusHasBeenSet = true;
}

bool RocketMQMessageTrack::ConsumeStatusHasBeenSet() const
{
    return m_consumeStatusHasBeenSet;
}

string RocketMQMessageTrack::GetTrackType() const
{
    return m_trackType;
}

void RocketMQMessageTrack::SetTrackType(const string& _trackType)
{
    m_trackType = _trackType;
    m_trackTypeHasBeenSet = true;
}

bool RocketMQMessageTrack::TrackTypeHasBeenSet() const
{
    return m_trackTypeHasBeenSet;
}

string RocketMQMessageTrack::GetExceptionDesc() const
{
    return m_exceptionDesc;
}

void RocketMQMessageTrack::SetExceptionDesc(const string& _exceptionDesc)
{
    m_exceptionDesc = _exceptionDesc;
    m_exceptionDescHasBeenSet = true;
}

bool RocketMQMessageTrack::ExceptionDescHasBeenSet() const
{
    return m_exceptionDescHasBeenSet;
}

