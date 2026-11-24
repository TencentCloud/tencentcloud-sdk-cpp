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

#include <tencentcloud/adp/v20260520/model/AppTriggerTAPDWebhookConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AppTriggerTAPDWebhookConfig::AppTriggerTAPDWebhookConfig() :
    m_eventListHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

CoreInternalOutcome AppTriggerTAPDWebhookConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventList") && !value["EventList"].IsNull())
    {
        if (!value["EventList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AppTriggerTAPDWebhookConfig.EventList` is not array type"));

        const rapidjson::Value &tmpValue = value["EventList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_eventList.push_back((*itr).GetString());
        }
        m_eventListHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerTAPDWebhookConfig.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppTriggerTAPDWebhookConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_eventList.begin(); itr != m_eventList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

}


vector<string> AppTriggerTAPDWebhookConfig::GetEventList() const
{
    return m_eventList;
}

void AppTriggerTAPDWebhookConfig::SetEventList(const vector<string>& _eventList)
{
    m_eventList = _eventList;
    m_eventListHasBeenSet = true;
}

bool AppTriggerTAPDWebhookConfig::EventListHasBeenSet() const
{
    return m_eventListHasBeenSet;
}

string AppTriggerTAPDWebhookConfig::GetProjectId() const
{
    return m_projectId;
}

void AppTriggerTAPDWebhookConfig::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool AppTriggerTAPDWebhookConfig::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

