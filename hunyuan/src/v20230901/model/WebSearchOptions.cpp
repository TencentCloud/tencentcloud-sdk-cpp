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

#include <tencentcloud/hunyuan/v20230901/model/WebSearchOptions.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

WebSearchOptions::WebSearchOptions() :
    m_knowledgeHasBeenSet(false),
    m_userLocationHasBeenSet(false),
    m_processesHasBeenSet(false)
{
}

CoreInternalOutcome WebSearchOptions::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Knowledge") && !value["Knowledge"].IsNull())
    {
        if (!value["Knowledge"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WebSearchOptions.Knowledge` is not array type"));

        const rapidjson::Value &tmpValue = value["Knowledge"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Knowledge item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_knowledge.push_back(item);
        }
        m_knowledgeHasBeenSet = true;
    }

    if (value.HasMember("UserLocation") && !value["UserLocation"].IsNull())
    {
        if (!value["UserLocation"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WebSearchOptions.UserLocation` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_userLocation.Deserialize(value["UserLocation"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_userLocationHasBeenSet = true;
    }

    if (value.HasMember("Processes") && !value["Processes"].IsNull())
    {
        if (!value["Processes"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `WebSearchOptions.Processes` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_processes = value["Processes"].GetBool();
        m_processesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WebSearchOptions::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_knowledgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Knowledge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_knowledge.begin(); itr != m_knowledge.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_userLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserLocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userLocation.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_processesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Processes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processes, allocator);
    }

}


vector<Knowledge> WebSearchOptions::GetKnowledge() const
{
    return m_knowledge;
}

void WebSearchOptions::SetKnowledge(const vector<Knowledge>& _knowledge)
{
    m_knowledge = _knowledge;
    m_knowledgeHasBeenSet = true;
}

bool WebSearchOptions::KnowledgeHasBeenSet() const
{
    return m_knowledgeHasBeenSet;
}

UserLocation WebSearchOptions::GetUserLocation() const
{
    return m_userLocation;
}

void WebSearchOptions::SetUserLocation(const UserLocation& _userLocation)
{
    m_userLocation = _userLocation;
    m_userLocationHasBeenSet = true;
}

bool WebSearchOptions::UserLocationHasBeenSet() const
{
    return m_userLocationHasBeenSet;
}

bool WebSearchOptions::GetProcesses() const
{
    return m_processes;
}

void WebSearchOptions::SetProcesses(const bool& _processes)
{
    m_processes = _processes;
    m_processesHasBeenSet = true;
}

bool WebSearchOptions::ProcessesHasBeenSet() const
{
    return m_processesHasBeenSet;
}

