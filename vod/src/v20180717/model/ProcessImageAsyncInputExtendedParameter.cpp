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

#include <tencentcloud/vod/v20180717/model/ProcessImageAsyncInputExtendedParameter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ProcessImageAsyncInputExtendedParameter::ProcessImageAsyncInputExtendedParameter() :
    m_promptsHasBeenSet(false)
{
}

CoreInternalOutcome ProcessImageAsyncInputExtendedParameter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Prompts") && !value["Prompts"].IsNull())
    {
        if (!value["Prompts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProcessImageAsyncInputExtendedParameter.Prompts` is not array type"));

        const rapidjson::Value &tmpValue = value["Prompts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_prompts.push_back((*itr).GetString());
        }
        m_promptsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProcessImageAsyncInputExtendedParameter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_promptsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_prompts.begin(); itr != m_prompts.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> ProcessImageAsyncInputExtendedParameter::GetPrompts() const
{
    return m_prompts;
}

void ProcessImageAsyncInputExtendedParameter::SetPrompts(const vector<string>& _prompts)
{
    m_prompts = _prompts;
    m_promptsHasBeenSet = true;
}

bool ProcessImageAsyncInputExtendedParameter::PromptsHasBeenSet() const
{
    return m_promptsHasBeenSet;
}

