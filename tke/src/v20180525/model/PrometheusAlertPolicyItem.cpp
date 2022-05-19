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

#include <tencentcloud/tke/v20180525/model/PrometheusAlertPolicyItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

PrometheusAlertPolicyItem::PrometheusAlertPolicyItem() :
    m_nameHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_idHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_notificationHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_clusterIdHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusAlertPolicyItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertPolicyItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Rules") && !value["Rules"].IsNull())
    {
        if (!value["Rules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertPolicyItem.Rules` is not array type"));

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

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertPolicyItem.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertPolicyItem.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("Notification") && !value["Notification"].IsNull())
    {
        if (!value["Notification"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertPolicyItem.Notification` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_notification.Deserialize(value["Notification"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_notificationHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertPolicyItem.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertPolicyItem.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusAlertPolicyItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_notificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Notification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_notification.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

}


string PrometheusAlertPolicyItem::GetName() const
{
    return m_name;
}

void PrometheusAlertPolicyItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PrometheusAlertPolicyItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<PrometheusAlertRule> PrometheusAlertPolicyItem::GetRules() const
{
    return m_rules;
}

void PrometheusAlertPolicyItem::SetRules(const vector<PrometheusAlertRule>& _rules)
{
    m_rules = _rules;
    m_rulesHasBeenSet = true;
}

bool PrometheusAlertPolicyItem::RulesHasBeenSet() const
{
    return m_rulesHasBeenSet;
}

string PrometheusAlertPolicyItem::GetId() const
{
    return m_id;
}

void PrometheusAlertPolicyItem::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool PrometheusAlertPolicyItem::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string PrometheusAlertPolicyItem::GetTemplateId() const
{
    return m_templateId;
}

void PrometheusAlertPolicyItem::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool PrometheusAlertPolicyItem::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

PrometheusNotificationItem PrometheusAlertPolicyItem::GetNotification() const
{
    return m_notification;
}

void PrometheusAlertPolicyItem::SetNotification(const PrometheusNotificationItem& _notification)
{
    m_notification = _notification;
    m_notificationHasBeenSet = true;
}

bool PrometheusAlertPolicyItem::NotificationHasBeenSet() const
{
    return m_notificationHasBeenSet;
}

string PrometheusAlertPolicyItem::GetUpdatedAt() const
{
    return m_updatedAt;
}

void PrometheusAlertPolicyItem::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool PrometheusAlertPolicyItem::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

string PrometheusAlertPolicyItem::GetClusterId() const
{
    return m_clusterId;
}

void PrometheusAlertPolicyItem::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool PrometheusAlertPolicyItem::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

