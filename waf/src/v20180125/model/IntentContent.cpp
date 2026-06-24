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

#include <tencentcloud/waf/v20180125/model/IntentContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

IntentContent::IntentContent() :
    m_agentTraceHasBeenSet(false)
{
}

CoreInternalOutcome IntentContent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AgentTrace") && !value["AgentTrace"].IsNull())
    {
        if (!value["AgentTrace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntentContent.AgentTrace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentTrace = string(value["AgentTrace"].GetString());
        m_agentTraceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IntentContent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_agentTraceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentTrace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentTrace.c_str(), allocator).Move(), allocator);
    }

}


string IntentContent::GetAgentTrace() const
{
    return m_agentTrace;
}

void IntentContent::SetAgentTrace(const string& _agentTrace)
{
    m_agentTrace = _agentTrace;
    m_agentTraceHasBeenSet = true;
}

bool IntentContent::AgentTraceHasBeenSet() const
{
    return m_agentTraceHasBeenSet;
}

