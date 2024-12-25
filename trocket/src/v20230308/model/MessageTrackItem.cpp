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

#include <tencentcloud/trocket/v20230308/model/MessageTrackItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

MessageTrackItem::MessageTrackItem() :
    m_consumerGroupHasBeenSet(false),
    m_consumeStatusHasBeenSet(false),
    m_trackTypeHasBeenSet(false),
    m_exceptionDescHasBeenSet(false)
{
}

CoreInternalOutcome MessageTrackItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConsumerGroup") && !value["ConsumerGroup"].IsNull())
    {
        if (!value["ConsumerGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MessageTrackItem.ConsumerGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerGroup = string(value["ConsumerGroup"].GetString());
        m_consumerGroupHasBeenSet = true;
    }

    if (value.HasMember("ConsumeStatus") && !value["ConsumeStatus"].IsNull())
    {
        if (!value["ConsumeStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MessageTrackItem.ConsumeStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumeStatus = string(value["ConsumeStatus"].GetString());
        m_consumeStatusHasBeenSet = true;
    }

    if (value.HasMember("TrackType") && !value["TrackType"].IsNull())
    {
        if (!value["TrackType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MessageTrackItem.TrackType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trackType = string(value["TrackType"].GetString());
        m_trackTypeHasBeenSet = true;
    }

    if (value.HasMember("ExceptionDesc") && !value["ExceptionDesc"].IsNull())
    {
        if (!value["ExceptionDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MessageTrackItem.ExceptionDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exceptionDesc = string(value["ExceptionDesc"].GetString());
        m_exceptionDescHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MessageTrackItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_consumerGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumerGroup.c_str(), allocator).Move(), allocator);
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


string MessageTrackItem::GetConsumerGroup() const
{
    return m_consumerGroup;
}

void MessageTrackItem::SetConsumerGroup(const string& _consumerGroup)
{
    m_consumerGroup = _consumerGroup;
    m_consumerGroupHasBeenSet = true;
}

bool MessageTrackItem::ConsumerGroupHasBeenSet() const
{
    return m_consumerGroupHasBeenSet;
}

string MessageTrackItem::GetConsumeStatus() const
{
    return m_consumeStatus;
}

void MessageTrackItem::SetConsumeStatus(const string& _consumeStatus)
{
    m_consumeStatus = _consumeStatus;
    m_consumeStatusHasBeenSet = true;
}

bool MessageTrackItem::ConsumeStatusHasBeenSet() const
{
    return m_consumeStatusHasBeenSet;
}

string MessageTrackItem::GetTrackType() const
{
    return m_trackType;
}

void MessageTrackItem::SetTrackType(const string& _trackType)
{
    m_trackType = _trackType;
    m_trackTypeHasBeenSet = true;
}

bool MessageTrackItem::TrackTypeHasBeenSet() const
{
    return m_trackTypeHasBeenSet;
}

string MessageTrackItem::GetExceptionDesc() const
{
    return m_exceptionDesc;
}

void MessageTrackItem::SetExceptionDesc(const string& _exceptionDesc)
{
    m_exceptionDesc = _exceptionDesc;
    m_exceptionDescHasBeenSet = true;
}

bool MessageTrackItem::ExceptionDescHasBeenSet() const
{
    return m_exceptionDescHasBeenSet;
}

