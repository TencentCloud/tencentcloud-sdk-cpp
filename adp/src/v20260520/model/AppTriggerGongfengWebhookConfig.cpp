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

#include <tencentcloud/adp/v20260520/model/AppTriggerGongfengWebhookConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AppTriggerGongfengWebhookConfig::AppTriggerGongfengWebhookConfig() :
    m_eventListHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_branchRuleListHasBeenSet(false),
    m_mRActionListHasBeenSet(false)
{
}

CoreInternalOutcome AppTriggerGongfengWebhookConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventList") && !value["EventList"].IsNull())
    {
        if (!value["EventList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AppTriggerGongfengWebhookConfig.EventList` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `AppTriggerGongfengWebhookConfig.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("BranchRuleList") && !value["BranchRuleList"].IsNull())
    {
        if (!value["BranchRuleList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AppTriggerGongfengWebhookConfig.BranchRuleList` is not array type"));

        const rapidjson::Value &tmpValue = value["BranchRuleList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_branchRuleList.push_back((*itr).GetString());
        }
        m_branchRuleListHasBeenSet = true;
    }

    if (value.HasMember("MRActionList") && !value["MRActionList"].IsNull())
    {
        if (!value["MRActionList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AppTriggerGongfengWebhookConfig.MRActionList` is not array type"));

        const rapidjson::Value &tmpValue = value["MRActionList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_mRActionList.push_back((*itr).GetString());
        }
        m_mRActionListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppTriggerGongfengWebhookConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_branchRuleListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BranchRuleList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_branchRuleList.begin(); itr != m_branchRuleList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_mRActionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MRActionList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_mRActionList.begin(); itr != m_mRActionList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> AppTriggerGongfengWebhookConfig::GetEventList() const
{
    return m_eventList;
}

void AppTriggerGongfengWebhookConfig::SetEventList(const vector<string>& _eventList)
{
    m_eventList = _eventList;
    m_eventListHasBeenSet = true;
}

bool AppTriggerGongfengWebhookConfig::EventListHasBeenSet() const
{
    return m_eventListHasBeenSet;
}

string AppTriggerGongfengWebhookConfig::GetProjectId() const
{
    return m_projectId;
}

void AppTriggerGongfengWebhookConfig::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool AppTriggerGongfengWebhookConfig::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<string> AppTriggerGongfengWebhookConfig::GetBranchRuleList() const
{
    return m_branchRuleList;
}

void AppTriggerGongfengWebhookConfig::SetBranchRuleList(const vector<string>& _branchRuleList)
{
    m_branchRuleList = _branchRuleList;
    m_branchRuleListHasBeenSet = true;
}

bool AppTriggerGongfengWebhookConfig::BranchRuleListHasBeenSet() const
{
    return m_branchRuleListHasBeenSet;
}

vector<string> AppTriggerGongfengWebhookConfig::GetMRActionList() const
{
    return m_mRActionList;
}

void AppTriggerGongfengWebhookConfig::SetMRActionList(const vector<string>& _mRActionList)
{
    m_mRActionList = _mRActionList;
    m_mRActionListHasBeenSet = true;
}

bool AppTriggerGongfengWebhookConfig::MRActionListHasBeenSet() const
{
    return m_mRActionListHasBeenSet;
}

