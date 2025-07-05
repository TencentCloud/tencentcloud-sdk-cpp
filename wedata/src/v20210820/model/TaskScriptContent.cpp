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

#include <tencentcloud/wedata/v20210820/model/TaskScriptContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskScriptContent::TaskScriptContent() :
    m_scriptContentHasBeenSet(false)
{
}

CoreInternalOutcome TaskScriptContent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ScriptContent") && !value["ScriptContent"].IsNull())
    {
        if (!value["ScriptContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskScriptContent.ScriptContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scriptContent = string(value["ScriptContent"].GetString());
        m_scriptContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskScriptContent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scriptContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scriptContent.c_str(), allocator).Move(), allocator);
    }

}


string TaskScriptContent::GetScriptContent() const
{
    return m_scriptContent;
}

void TaskScriptContent::SetScriptContent(const string& _scriptContent)
{
    m_scriptContent = _scriptContent;
    m_scriptContentHasBeenSet = true;
}

bool TaskScriptContent::ScriptContentHasBeenSet() const
{
    return m_scriptContentHasBeenSet;
}

