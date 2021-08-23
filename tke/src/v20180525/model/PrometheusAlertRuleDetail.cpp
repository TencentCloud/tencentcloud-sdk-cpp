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

#include <tencentcloud/tke/v20180525/model/PrometheusAlertRuleDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

PrometheusAlertRuleDetail::PrometheusAlertRuleDetail() :
    m_nameHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_notificationHasBeenSet(false),
    m_idHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_intervalHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusAlertRuleDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertRuleDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Rules") && !value["Rules"].IsNull())
    {
        if (!value["Rules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertRuleDetail.Rules` is not array type"));

        const rapidjson::Value &tmpValue = value["Rules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PrometheusAlertRule item;
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

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertRuleDetail.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("Notification") && !value["Notification"].IsNull())
    {
        if (!value["Notification"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertRuleDetail.Notification` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_notification.Deserialize(value["Notification"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_notificationHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertRuleDetail.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertRuleDetail.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("Interval") && !value["Interval"].IsNull())
    {
        if (!value["Interval"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertRuleDetail.Interval` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_interval = string(value["Interval"].GetString());
        m_intervalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusAlertRuleDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_notificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Notification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_notification.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_interval.c_str(), allocator).Move(), allocator);
    }

}


string PrometheusAlertRuleDetail::GetName() const
{
    return m_name;
}

void PrometheusAlertRuleDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PrometheusAlertRuleDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<PrometheusAlertRule> PrometheusAlertRuleDetail::GetRules() const
{
    return m_rules;
}

void PrometheusAlertRuleDetail::SetRules(const vector<PrometheusAlertRule>& _rules)
{
    m_rules = _rules;
    m_rulesHasBeenSet = true;
}

bool PrometheusAlertRuleDetail::RulesHasBeenSet() const
{
    return m_rulesHasBeenSet;
}

string PrometheusAlertRuleDetail::GetUpdatedAt() const
{
    return m_updatedAt;
}

void PrometheusAlertRuleDetail::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool PrometheusAlertRuleDetail::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

PrometheusNotification PrometheusAlertRuleDetail::GetNotification() const
{
    return m_notification;
}

void PrometheusAlertRuleDetail::SetNotification(const PrometheusNotification& _notification)
{
    m_notification = _notification;
    m_notificationHasBeenSet = true;
}

bool PrometheusAlertRuleDetail::NotificationHasBeenSet() const
{
    return m_notificationHasBeenSet;
}

string PrometheusAlertRuleDetail::GetId() const
{
    return m_id;
}

void PrometheusAlertRuleDetail::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool PrometheusAlertRuleDetail::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string PrometheusAlertRuleDetail::GetTemplateId() const
{
    return m_templateId;
}

void PrometheusAlertRuleDetail::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool PrometheusAlertRuleDetail::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string PrometheusAlertRuleDetail::GetInterval() const
{
    return m_interval;
}

void PrometheusAlertRuleDetail::SetInterval(const string& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool PrometheusAlertRuleDetail::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

