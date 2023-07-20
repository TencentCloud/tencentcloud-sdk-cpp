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

#include <tencentcloud/wedata/v20210820/model/EventCaseConsumeLogOptDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

EventCaseConsumeLogOptDto::EventCaseConsumeLogOptDto() :
    m_consumeLogIdHasBeenSet(false),
    m_eventCaseIdHasBeenSet(false),
    m_consumerIdHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_consumerDetailHasBeenSet(false)
{
}

CoreInternalOutcome EventCaseConsumeLogOptDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConsumeLogId") && !value["ConsumeLogId"].IsNull())
    {
        if (!value["ConsumeLogId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventCaseConsumeLogOptDto.ConsumeLogId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumeLogId = string(value["ConsumeLogId"].GetString());
        m_consumeLogIdHasBeenSet = true;
    }

    if (value.HasMember("EventCaseId") && !value["EventCaseId"].IsNull())
    {
        if (!value["EventCaseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventCaseConsumeLogOptDto.EventCaseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventCaseId = string(value["EventCaseId"].GetString());
        m_eventCaseIdHasBeenSet = true;
    }

    if (value.HasMember("ConsumerId") && !value["ConsumerId"].IsNull())
    {
        if (!value["ConsumerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventCaseConsumeLogOptDto.ConsumerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerId = string(value["ConsumerId"].GetString());
        m_consumerIdHasBeenSet = true;
    }

    if (value.HasMember("CreationTimestamp") && !value["CreationTimestamp"].IsNull())
    {
        if (!value["CreationTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventCaseConsumeLogOptDto.CreationTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTimestamp = string(value["CreationTimestamp"].GetString());
        m_creationTimestampHasBeenSet = true;
    }

    if (value.HasMember("ConsumerDetail") && !value["ConsumerDetail"].IsNull())
    {
        if (!value["ConsumerDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventCaseConsumeLogOptDto.ConsumerDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_consumerDetail.Deserialize(value["ConsumerDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_consumerDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventCaseConsumeLogOptDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_consumeLogIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumeLogId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumeLogId.c_str(), allocator).Move(), allocator);
    }

    if (m_eventCaseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCaseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventCaseId.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumerId.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTimestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_consumerDetail.ToJsonObject(value[key.c_str()], allocator);
    }

}


string EventCaseConsumeLogOptDto::GetConsumeLogId() const
{
    return m_consumeLogId;
}

void EventCaseConsumeLogOptDto::SetConsumeLogId(const string& _consumeLogId)
{
    m_consumeLogId = _consumeLogId;
    m_consumeLogIdHasBeenSet = true;
}

bool EventCaseConsumeLogOptDto::ConsumeLogIdHasBeenSet() const
{
    return m_consumeLogIdHasBeenSet;
}

string EventCaseConsumeLogOptDto::GetEventCaseId() const
{
    return m_eventCaseId;
}

void EventCaseConsumeLogOptDto::SetEventCaseId(const string& _eventCaseId)
{
    m_eventCaseId = _eventCaseId;
    m_eventCaseIdHasBeenSet = true;
}

bool EventCaseConsumeLogOptDto::EventCaseIdHasBeenSet() const
{
    return m_eventCaseIdHasBeenSet;
}

string EventCaseConsumeLogOptDto::GetConsumerId() const
{
    return m_consumerId;
}

void EventCaseConsumeLogOptDto::SetConsumerId(const string& _consumerId)
{
    m_consumerId = _consumerId;
    m_consumerIdHasBeenSet = true;
}

bool EventCaseConsumeLogOptDto::ConsumerIdHasBeenSet() const
{
    return m_consumerIdHasBeenSet;
}

string EventCaseConsumeLogOptDto::GetCreationTimestamp() const
{
    return m_creationTimestamp;
}

void EventCaseConsumeLogOptDto::SetCreationTimestamp(const string& _creationTimestamp)
{
    m_creationTimestamp = _creationTimestamp;
    m_creationTimestampHasBeenSet = true;
}

bool EventCaseConsumeLogOptDto::CreationTimestampHasBeenSet() const
{
    return m_creationTimestampHasBeenSet;
}

TaskOpsDto EventCaseConsumeLogOptDto::GetConsumerDetail() const
{
    return m_consumerDetail;
}

void EventCaseConsumeLogOptDto::SetConsumerDetail(const TaskOpsDto& _consumerDetail)
{
    m_consumerDetail = _consumerDetail;
    m_consumerDetailHasBeenSet = true;
}

bool EventCaseConsumeLogOptDto::ConsumerDetailHasBeenSet() const
{
    return m_consumerDetailHasBeenSet;
}

