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

#include <tencentcloud/monitor/v20180724/model/PrometheusAlertGroupSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

PrometheusAlertGroupSet::PrometheusAlertGroupSet() :
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_aMPReceiversHasBeenSet(false),
    m_customReceiverHasBeenSet(false),
    m_repeatIntervalHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusAlertGroupSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertGroupSet.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertGroupSet.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("AMPReceivers") && !value["AMPReceivers"].IsNull())
    {
        if (!value["AMPReceivers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertGroupSet.AMPReceivers` is not array type"));

        const rapidjson::Value &tmpValue = value["AMPReceivers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_aMPReceivers.push_back((*itr).GetString());
        }
        m_aMPReceiversHasBeenSet = true;
    }

    if (value.HasMember("CustomReceiver") && !value["CustomReceiver"].IsNull())
    {
        if (!value["CustomReceiver"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertGroupSet.CustomReceiver` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_customReceiver.Deserialize(value["CustomReceiver"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_customReceiverHasBeenSet = true;
    }

    if (value.HasMember("RepeatInterval") && !value["RepeatInterval"].IsNull())
    {
        if (!value["RepeatInterval"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertGroupSet.RepeatInterval` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repeatInterval = string(value["RepeatInterval"].GetString());
        m_repeatIntervalHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertGroupSet.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("Rules") && !value["Rules"].IsNull())
    {
        if (!value["Rules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertGroupSet.Rules` is not array type"));

        const rapidjson::Value &tmpValue = value["Rules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PrometheusAlertGroupRuleSet item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rules.push_back(item);
        }
        m_rulesHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertGroupSet.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertGroupSet.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusAlertGroupSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_aMPReceiversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AMPReceivers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_aMPReceivers.begin(); itr != m_aMPReceivers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_customReceiverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomReceiver";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customReceiver.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_repeatIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepeatInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repeatInterval.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_rulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rules.begin(); itr != m_rules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

}


string PrometheusAlertGroupSet::GetGroupId() const
{
    return m_groupId;
}

void PrometheusAlertGroupSet::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool PrometheusAlertGroupSet::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string PrometheusAlertGroupSet::GetGroupName() const
{
    return m_groupName;
}

void PrometheusAlertGroupSet::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool PrometheusAlertGroupSet::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

vector<string> PrometheusAlertGroupSet::GetAMPReceivers() const
{
    return m_aMPReceivers;
}

void PrometheusAlertGroupSet::SetAMPReceivers(const vector<string>& _aMPReceivers)
{
    m_aMPReceivers = _aMPReceivers;
    m_aMPReceiversHasBeenSet = true;
}

bool PrometheusAlertGroupSet::AMPReceiversHasBeenSet() const
{
    return m_aMPReceiversHasBeenSet;
}

PrometheusAlertCustomReceiver PrometheusAlertGroupSet::GetCustomReceiver() const
{
    return m_customReceiver;
}

void PrometheusAlertGroupSet::SetCustomReceiver(const PrometheusAlertCustomReceiver& _customReceiver)
{
    m_customReceiver = _customReceiver;
    m_customReceiverHasBeenSet = true;
}

bool PrometheusAlertGroupSet::CustomReceiverHasBeenSet() const
{
    return m_customReceiverHasBeenSet;
}

string PrometheusAlertGroupSet::GetRepeatInterval() const
{
    return m_repeatInterval;
}

void PrometheusAlertGroupSet::SetRepeatInterval(const string& _repeatInterval)
{
    m_repeatInterval = _repeatInterval;
    m_repeatIntervalHasBeenSet = true;
}

bool PrometheusAlertGroupSet::RepeatIntervalHasBeenSet() const
{
    return m_repeatIntervalHasBeenSet;
}

string PrometheusAlertGroupSet::GetTemplateId() const
{
    return m_templateId;
}

void PrometheusAlertGroupSet::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool PrometheusAlertGroupSet::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

vector<PrometheusAlertGroupRuleSet> PrometheusAlertGroupSet::GetRules() const
{
    return m_rules;
}

void PrometheusAlertGroupSet::SetRules(const vector<PrometheusAlertGroupRuleSet>& _rules)
{
    m_rules = _rules;
    m_rulesHasBeenSet = true;
}

bool PrometheusAlertGroupSet::RulesHasBeenSet() const
{
    return m_rulesHasBeenSet;
}

string PrometheusAlertGroupSet::GetCreatedAt() const
{
    return m_createdAt;
}

void PrometheusAlertGroupSet::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool PrometheusAlertGroupSet::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string PrometheusAlertGroupSet::GetUpdatedAt() const
{
    return m_updatedAt;
}

void PrometheusAlertGroupSet::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool PrometheusAlertGroupSet::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

