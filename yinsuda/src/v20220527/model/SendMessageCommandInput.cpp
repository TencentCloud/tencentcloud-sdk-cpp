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

#include <tencentcloud/yinsuda/v20220527/model/SendMessageCommandInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yinsuda::V20220527::Model;
using namespace std;

SendMessageCommandInput::SendMessageCommandInput() :
    m_messageHasBeenSet(false),
    m_repeatHasBeenSet(false)
{
}

CoreInternalOutcome SendMessageCommandInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SendMessageCommandInput.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Repeat") && !value["Repeat"].IsNull())
    {
        if (!value["Repeat"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SendMessageCommandInput.Repeat` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_repeat = value["Repeat"].GetUint64();
        m_repeatHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SendMessageCommandInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_repeatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Repeat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_repeat, allocator);
    }

}


string SendMessageCommandInput::GetMessage() const
{
    return m_message;
}

void SendMessageCommandInput::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool SendMessageCommandInput::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

uint64_t SendMessageCommandInput::GetRepeat() const
{
    return m_repeat;
}

void SendMessageCommandInput::SetRepeat(const uint64_t& _repeat)
{
    m_repeat = _repeat;
    m_repeatHasBeenSet = true;
}

bool SendMessageCommandInput::RepeatHasBeenSet() const
{
    return m_repeatHasBeenSet;
}

