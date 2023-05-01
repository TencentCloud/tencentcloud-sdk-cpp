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

#include <tencentcloud/thpc/v20230321/model/NodeScript.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Thpc::V20230321::Model;
using namespace std;

NodeScript::NodeScript() :
    m_scriptPathHasBeenSet(false),
    m_timeoutHasBeenSet(false)
{
}

CoreInternalOutcome NodeScript::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ScriptPath") && !value["ScriptPath"].IsNull())
    {
        if (!value["ScriptPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeScript.ScriptPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scriptPath = string(value["ScriptPath"].GetString());
        m_scriptPathHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeScript.Timeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetInt64();
        m_timeoutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeScript::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scriptPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scriptPath.c_str(), allocator).Move(), allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

}


string NodeScript::GetScriptPath() const
{
    return m_scriptPath;
}

void NodeScript::SetScriptPath(const string& _scriptPath)
{
    m_scriptPath = _scriptPath;
    m_scriptPathHasBeenSet = true;
}

bool NodeScript::ScriptPathHasBeenSet() const
{
    return m_scriptPathHasBeenSet;
}

int64_t NodeScript::GetTimeout() const
{
    return m_timeout;
}

void NodeScript::SetTimeout(const int64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool NodeScript::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

