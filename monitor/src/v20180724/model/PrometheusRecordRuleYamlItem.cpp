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

#include <tencentcloud/monitor/v20180724/model/PrometheusRecordRuleYamlItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

PrometheusRecordRuleYamlItem::PrometheusRecordRuleYamlItem() :
    m_nameHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_idHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusRecordRuleYamlItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusRecordRuleYamlItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusRecordRuleYamlItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusRecordRuleYamlItem.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusRecordRuleYamlItem.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusRecordRuleYamlItem.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusRecordRuleYamlItem.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusRecordRuleYamlItem.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusRecordRuleYamlItem.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusRecordRuleYamlItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


string PrometheusRecordRuleYamlItem::GetName() const
{
    return m_name;
}

void PrometheusRecordRuleYamlItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PrometheusRecordRuleYamlItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PrometheusRecordRuleYamlItem::GetUpdateTime() const
{
    return m_updateTime;
}

void PrometheusRecordRuleYamlItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool PrometheusRecordRuleYamlItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string PrometheusRecordRuleYamlItem::GetTemplateId() const
{
    return m_templateId;
}

void PrometheusRecordRuleYamlItem::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool PrometheusRecordRuleYamlItem::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string PrometheusRecordRuleYamlItem::GetContent() const
{
    return m_content;
}

void PrometheusRecordRuleYamlItem::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool PrometheusRecordRuleYamlItem::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string PrometheusRecordRuleYamlItem::GetClusterId() const
{
    return m_clusterId;
}

void PrometheusRecordRuleYamlItem::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool PrometheusRecordRuleYamlItem::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t PrometheusRecordRuleYamlItem::GetStatus() const
{
    return m_status;
}

void PrometheusRecordRuleYamlItem::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PrometheusRecordRuleYamlItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string PrometheusRecordRuleYamlItem::GetId() const
{
    return m_id;
}

void PrometheusRecordRuleYamlItem::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool PrometheusRecordRuleYamlItem::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t PrometheusRecordRuleYamlItem::GetCount() const
{
    return m_count;
}

void PrometheusRecordRuleYamlItem::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool PrometheusRecordRuleYamlItem::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

