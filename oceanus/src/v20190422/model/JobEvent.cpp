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

#include <tencentcloud/oceanus/v20190422/model/JobEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

JobEvent::JobEvent() :
    m_typeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_runningOrderIdHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_solutionLinkHasBeenSet(false)
{
}

CoreInternalOutcome JobEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobEvent.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobEvent.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `JobEvent.Timestamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetUint64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("RunningOrderId") && !value["RunningOrderId"].IsNull())
    {
        if (!value["RunningOrderId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `JobEvent.RunningOrderId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_runningOrderId = value["RunningOrderId"].GetUint64();
        m_runningOrderIdHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobEvent.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("SolutionLink") && !value["SolutionLink"].IsNull())
    {
        if (!value["SolutionLink"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobEvent.SolutionLink` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_solutionLink = string(value["SolutionLink"].GetString());
        m_solutionLinkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JobEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_runningOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningOrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningOrderId, allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_solutionLinkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SolutionLink";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_solutionLink.c_str(), allocator).Move(), allocator);
    }

}


string JobEvent::GetType() const
{
    return m_type;
}

void JobEvent::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool JobEvent::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string JobEvent::GetDescription() const
{
    return m_description;
}

void JobEvent::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool JobEvent::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t JobEvent::GetTimestamp() const
{
    return m_timestamp;
}

void JobEvent::SetTimestamp(const uint64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool JobEvent::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

uint64_t JobEvent::GetRunningOrderId() const
{
    return m_runningOrderId;
}

void JobEvent::SetRunningOrderId(const uint64_t& _runningOrderId)
{
    m_runningOrderId = _runningOrderId;
    m_runningOrderIdHasBeenSet = true;
}

bool JobEvent::RunningOrderIdHasBeenSet() const
{
    return m_runningOrderIdHasBeenSet;
}

string JobEvent::GetMessage() const
{
    return m_message;
}

void JobEvent::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool JobEvent::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string JobEvent::GetSolutionLink() const
{
    return m_solutionLink;
}

void JobEvent::SetSolutionLink(const string& _solutionLink)
{
    m_solutionLink = _solutionLink;
    m_solutionLinkHasBeenSet = true;
}

bool JobEvent::SolutionLinkHasBeenSet() const
{
    return m_solutionLinkHasBeenSet;
}

