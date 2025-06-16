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

#include <tencentcloud/hunyuan/v20230901/model/Processes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

Processes::Processes() :
    m_messageHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_numHasBeenSet(false)
{
}

CoreInternalOutcome Processes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Processes.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Processes.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Num") && !value["Num"].IsNull())
    {
        if (!value["Num"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Processes.Num` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_num = value["Num"].GetUint64();
        m_numHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Processes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_numHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Num";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_num, allocator);
    }

}


string Processes::GetMessage() const
{
    return m_message;
}

void Processes::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool Processes::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string Processes::GetState() const
{
    return m_state;
}

void Processes::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool Processes::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

uint64_t Processes::GetNum() const
{
    return m_num;
}

void Processes::SetNum(const uint64_t& _num)
{
    m_num = _num;
    m_numHasBeenSet = true;
}

bool Processes::NumHasBeenSet() const
{
    return m_numHasBeenSet;
}

