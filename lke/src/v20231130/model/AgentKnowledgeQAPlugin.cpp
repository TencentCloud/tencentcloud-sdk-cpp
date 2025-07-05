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

#include <tencentcloud/lke/v20231130/model/AgentKnowledgeQAPlugin.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

AgentKnowledgeQAPlugin::AgentKnowledgeQAPlugin() :
    m_filterHasBeenSet(false)
{
}

CoreInternalOutcome AgentKnowledgeQAPlugin::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Filter") && !value["Filter"].IsNull())
    {
        if (!value["Filter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentKnowledgeQAPlugin.Filter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_filter.Deserialize(value["Filter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_filterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentKnowledgeQAPlugin::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_filter.ToJsonObject(value[key.c_str()], allocator);
    }

}


AgentKnowledgeFilter AgentKnowledgeQAPlugin::GetFilter() const
{
    return m_filter;
}

void AgentKnowledgeQAPlugin::SetFilter(const AgentKnowledgeFilter& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool AgentKnowledgeQAPlugin::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

