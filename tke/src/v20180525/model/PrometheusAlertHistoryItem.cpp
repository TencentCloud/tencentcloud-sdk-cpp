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

#include <tencentcloud/tke/v20180525/model/PrometheusAlertHistoryItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

PrometheusAlertHistoryItem::PrometheusAlertHistoryItem() :
    m_ruleNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_ruleItemHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_topicNameHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusAlertHistoryItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertHistoryItem.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertHistoryItem.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertHistoryItem.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertHistoryItem.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("RuleItem") && !value["RuleItem"].IsNull())
    {
        if (!value["RuleItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertHistoryItem.RuleItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleItem = string(value["RuleItem"].GetString());
        m_ruleItemHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertHistoryItem.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertHistoryItem.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusAlertHistoryItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleItem.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

}


string PrometheusAlertHistoryItem::GetRuleName() const
{
    return m_ruleName;
}

void PrometheusAlertHistoryItem::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool PrometheusAlertHistoryItem::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string PrometheusAlertHistoryItem::GetStartTime() const
{
    return m_startTime;
}

void PrometheusAlertHistoryItem::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool PrometheusAlertHistoryItem::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string PrometheusAlertHistoryItem::GetContent() const
{
    return m_content;
}

void PrometheusAlertHistoryItem::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool PrometheusAlertHistoryItem::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string PrometheusAlertHistoryItem::GetState() const
{
    return m_state;
}

void PrometheusAlertHistoryItem::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool PrometheusAlertHistoryItem::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string PrometheusAlertHistoryItem::GetRuleItem() const
{
    return m_ruleItem;
}

void PrometheusAlertHistoryItem::SetRuleItem(const string& _ruleItem)
{
    m_ruleItem = _ruleItem;
    m_ruleItemHasBeenSet = true;
}

bool PrometheusAlertHistoryItem::RuleItemHasBeenSet() const
{
    return m_ruleItemHasBeenSet;
}

string PrometheusAlertHistoryItem::GetTopicId() const
{
    return m_topicId;
}

void PrometheusAlertHistoryItem::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool PrometheusAlertHistoryItem::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string PrometheusAlertHistoryItem::GetTopicName() const
{
    return m_topicName;
}

void PrometheusAlertHistoryItem::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool PrometheusAlertHistoryItem::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

