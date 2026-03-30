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

#include <tencentcloud/waf/v20180125/model/ApiGuardContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ApiGuardContent::ApiGuardContent() :
    m_promptHasBeenSet(false)
{
}

CoreInternalOutcome ApiGuardContent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Prompt") && !value["Prompt"].IsNull())
    {
        if (!value["Prompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiGuardContent.Prompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prompt = string(value["Prompt"].GetString());
        m_promptHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiGuardContent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_promptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prompt.c_str(), allocator).Move(), allocator);
    }

}


string ApiGuardContent::GetPrompt() const
{
    return m_prompt;
}

void ApiGuardContent::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool ApiGuardContent::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

