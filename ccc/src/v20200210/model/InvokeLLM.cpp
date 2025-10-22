/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/ccc/v20200210/model/InvokeLLM.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

InvokeLLM::InvokeLLM() :
    m_contentHasBeenSet(false),
    m_interruptHasBeenSet(false)
{
}

CoreInternalOutcome InvokeLLM::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvokeLLM.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Interrupt") && !value["Interrupt"].IsNull())
    {
        if (!value["Interrupt"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InvokeLLM.Interrupt` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_interrupt = value["Interrupt"].GetBool();
        m_interruptHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InvokeLLM::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_interruptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interrupt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interrupt, allocator);
    }

}


string InvokeLLM::GetContent() const
{
    return m_content;
}

void InvokeLLM::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool InvokeLLM::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

bool InvokeLLM::GetInterrupt() const
{
    return m_interrupt;
}

void InvokeLLM::SetInterrupt(const bool& _interrupt)
{
    m_interrupt = _interrupt;
    m_interruptHasBeenSet = true;
}

bool InvokeLLM::InterruptHasBeenSet() const
{
    return m_interruptHasBeenSet;
}

