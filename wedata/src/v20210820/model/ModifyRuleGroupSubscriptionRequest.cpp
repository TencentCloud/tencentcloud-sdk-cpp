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

#include <tencentcloud/wedata/v20210820/model/ModifyRuleGroupSubscriptionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ModifyRuleGroupSubscriptionRequest::ModifyRuleGroupSubscriptionRequest() :
    m_ruleGroupIdHasBeenSet(false),
    m_receiversHasBeenSet(false),
    m_subscribeTypeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_databaseIdHasBeenSet(false),
    m_datasourceIdHasBeenSet(false),
    m_tableIdHasBeenSet(false),
    m_webHooksHasBeenSet(false)
{
}

string ModifyRuleGroupSubscriptionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleGroupId, allocator);
    }

    if (m_receiversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Receivers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_receivers.begin(); itr != m_receivers.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_subscribeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subscribeType.begin(); itr != m_subscribeType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_databaseId.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_datasourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableId.c_str(), allocator).Move(), allocator);
    }

    if (m_webHooksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebHooks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_webHooks.begin(); itr != m_webHooks.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyRuleGroupSubscriptionRequest::GetRuleGroupId() const
{
    return m_ruleGroupId;
}

void ModifyRuleGroupSubscriptionRequest::SetRuleGroupId(const uint64_t& _ruleGroupId)
{
    m_ruleGroupId = _ruleGroupId;
    m_ruleGroupIdHasBeenSet = true;
}

bool ModifyRuleGroupSubscriptionRequest::RuleGroupIdHasBeenSet() const
{
    return m_ruleGroupIdHasBeenSet;
}

vector<SubscribeReceiver> ModifyRuleGroupSubscriptionRequest::GetReceivers() const
{
    return m_receivers;
}

void ModifyRuleGroupSubscriptionRequest::SetReceivers(const vector<SubscribeReceiver>& _receivers)
{
    m_receivers = _receivers;
    m_receiversHasBeenSet = true;
}

bool ModifyRuleGroupSubscriptionRequest::ReceiversHasBeenSet() const
{
    return m_receiversHasBeenSet;
}

vector<uint64_t> ModifyRuleGroupSubscriptionRequest::GetSubscribeType() const
{
    return m_subscribeType;
}

void ModifyRuleGroupSubscriptionRequest::SetSubscribeType(const vector<uint64_t>& _subscribeType)
{
    m_subscribeType = _subscribeType;
    m_subscribeTypeHasBeenSet = true;
}

bool ModifyRuleGroupSubscriptionRequest::SubscribeTypeHasBeenSet() const
{
    return m_subscribeTypeHasBeenSet;
}

string ModifyRuleGroupSubscriptionRequest::GetProjectId() const
{
    return m_projectId;
}

void ModifyRuleGroupSubscriptionRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ModifyRuleGroupSubscriptionRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ModifyRuleGroupSubscriptionRequest::GetDatabaseId() const
{
    return m_databaseId;
}

void ModifyRuleGroupSubscriptionRequest::SetDatabaseId(const string& _databaseId)
{
    m_databaseId = _databaseId;
    m_databaseIdHasBeenSet = true;
}

bool ModifyRuleGroupSubscriptionRequest::DatabaseIdHasBeenSet() const
{
    return m_databaseIdHasBeenSet;
}

string ModifyRuleGroupSubscriptionRequest::GetDatasourceId() const
{
    return m_datasourceId;
}

void ModifyRuleGroupSubscriptionRequest::SetDatasourceId(const string& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool ModifyRuleGroupSubscriptionRequest::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string ModifyRuleGroupSubscriptionRequest::GetTableId() const
{
    return m_tableId;
}

void ModifyRuleGroupSubscriptionRequest::SetTableId(const string& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool ModifyRuleGroupSubscriptionRequest::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

vector<SubscribeWebHook> ModifyRuleGroupSubscriptionRequest::GetWebHooks() const
{
    return m_webHooks;
}

void ModifyRuleGroupSubscriptionRequest::SetWebHooks(const vector<SubscribeWebHook>& _webHooks)
{
    m_webHooks = _webHooks;
    m_webHooksHasBeenSet = true;
}

bool ModifyRuleGroupSubscriptionRequest::WebHooksHasBeenSet() const
{
    return m_webHooksHasBeenSet;
}


