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

#include <tencentcloud/lke/v20231130/model/HistorySummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

HistorySummary::HistorySummary() :
    m_assistantHasBeenSet(false),
    m_userHasBeenSet(false)
{
}

CoreInternalOutcome HistorySummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Assistant") && !value["Assistant"].IsNull())
    {
        if (!value["Assistant"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HistorySummary.Assistant` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assistant = string(value["Assistant"].GetString());
        m_assistantHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HistorySummary.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HistorySummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_assistantHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Assistant";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assistant.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

}


string HistorySummary::GetAssistant() const
{
    return m_assistant;
}

void HistorySummary::SetAssistant(const string& _assistant)
{
    m_assistant = _assistant;
    m_assistantHasBeenSet = true;
}

bool HistorySummary::AssistantHasBeenSet() const
{
    return m_assistantHasBeenSet;
}

string HistorySummary::GetUser() const
{
    return m_user;
}

void HistorySummary::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool HistorySummary::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

