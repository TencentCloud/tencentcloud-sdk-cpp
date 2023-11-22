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

#include <tencentcloud/config/v20220802/model/TriggerType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

TriggerType::TriggerType() :
    m_messageTypeHasBeenSet(false),
    m_maximumExecutionFrequencyHasBeenSet(false)
{
}

CoreInternalOutcome TriggerType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MessageType") && !value["MessageType"].IsNull())
    {
        if (!value["MessageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerType.MessageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_messageType = string(value["MessageType"].GetString());
        m_messageTypeHasBeenSet = true;
    }

    if (value.HasMember("MaximumExecutionFrequency") && !value["MaximumExecutionFrequency"].IsNull())
    {
        if (!value["MaximumExecutionFrequency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerType.MaximumExecutionFrequency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maximumExecutionFrequency = string(value["MaximumExecutionFrequency"].GetString());
        m_maximumExecutionFrequencyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TriggerType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_messageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_messageType.c_str(), allocator).Move(), allocator);
    }

    if (m_maximumExecutionFrequencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaximumExecutionFrequency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maximumExecutionFrequency.c_str(), allocator).Move(), allocator);
    }

}


string TriggerType::GetMessageType() const
{
    return m_messageType;
}

void TriggerType::SetMessageType(const string& _messageType)
{
    m_messageType = _messageType;
    m_messageTypeHasBeenSet = true;
}

bool TriggerType::MessageTypeHasBeenSet() const
{
    return m_messageTypeHasBeenSet;
}

string TriggerType::GetMaximumExecutionFrequency() const
{
    return m_maximumExecutionFrequency;
}

void TriggerType::SetMaximumExecutionFrequency(const string& _maximumExecutionFrequency)
{
    m_maximumExecutionFrequency = _maximumExecutionFrequency;
    m_maximumExecutionFrequencyHasBeenSet = true;
}

bool TriggerType::MaximumExecutionFrequencyHasBeenSet() const
{
    return m_maximumExecutionFrequencyHasBeenSet;
}

