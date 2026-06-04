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

#include <tencentcloud/adp/v20260520/model/AppGreetingConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AppGreetingConfig::AppGreetingConfig() :
    m_greetingHasBeenSet(false),
    m_openingQuestionListHasBeenSet(false)
{
}

CoreInternalOutcome AppGreetingConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Greeting") && !value["Greeting"].IsNull())
    {
        if (!value["Greeting"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppGreetingConfig.Greeting` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_greeting = string(value["Greeting"].GetString());
        m_greetingHasBeenSet = true;
    }

    if (value.HasMember("OpeningQuestionList") && !value["OpeningQuestionList"].IsNull())
    {
        if (!value["OpeningQuestionList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AppGreetingConfig.OpeningQuestionList` is not array type"));

        const rapidjson::Value &tmpValue = value["OpeningQuestionList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_openingQuestionList.push_back((*itr).GetString());
        }
        m_openingQuestionListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppGreetingConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_greetingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Greeting";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_greeting.c_str(), allocator).Move(), allocator);
    }

    if (m_openingQuestionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpeningQuestionList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_openingQuestionList.begin(); itr != m_openingQuestionList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string AppGreetingConfig::GetGreeting() const
{
    return m_greeting;
}

void AppGreetingConfig::SetGreeting(const string& _greeting)
{
    m_greeting = _greeting;
    m_greetingHasBeenSet = true;
}

bool AppGreetingConfig::GreetingHasBeenSet() const
{
    return m_greetingHasBeenSet;
}

vector<string> AppGreetingConfig::GetOpeningQuestionList() const
{
    return m_openingQuestionList;
}

void AppGreetingConfig::SetOpeningQuestionList(const vector<string>& _openingQuestionList)
{
    m_openingQuestionList = _openingQuestionList;
    m_openingQuestionListHasBeenSet = true;
}

bool AppGreetingConfig::OpeningQuestionListHasBeenSet() const
{
    return m_openingQuestionListHasBeenSet;
}

