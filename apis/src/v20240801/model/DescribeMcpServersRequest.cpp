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

#include <tencentcloud/apis/v20240801/model/DescribeMcpServersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

DescribeMcpServersRequest::DescribeMcpServersRequest() :
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_statusesHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_iDsHasBeenSet(false),
    m_modesHasBeenSet(false),
    m_mcpSecurityRuleIDHasBeenSet(false),
    m_mcpSecurityRuleActHasBeenSet(false),
    m_pluginIDHasBeenSet(false)
{
}

string DescribeMcpServersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_statusesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Statuses";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_statuses.begin(); itr != m_statuses.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_iDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_iDs.begin(); itr != m_iDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_modesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Modes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_modes.begin(); itr != m_modes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_mcpSecurityRuleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "McpSecurityRuleID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mcpSecurityRuleID.c_str(), allocator).Move(), allocator);
    }

    if (m_mcpSecurityRuleActHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "McpSecurityRuleAct";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mcpSecurityRuleAct.c_str(), allocator).Move(), allocator);
    }

    if (m_pluginIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pluginID.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeMcpServersRequest::GetLimit() const
{
    return m_limit;
}

void DescribeMcpServersRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeMcpServersRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeMcpServersRequest::GetOffset() const
{
    return m_offset;
}

void DescribeMcpServersRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeMcpServersRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeMcpServersRequest::GetInstanceID() const
{
    return m_instanceID;
}

void DescribeMcpServersRequest::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool DescribeMcpServersRequest::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

vector<string> DescribeMcpServersRequest::GetStatuses() const
{
    return m_statuses;
}

void DescribeMcpServersRequest::SetStatuses(const vector<string>& _statuses)
{
    m_statuses = _statuses;
    m_statusesHasBeenSet = true;
}

bool DescribeMcpServersRequest::StatusesHasBeenSet() const
{
    return m_statusesHasBeenSet;
}

string DescribeMcpServersRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeMcpServersRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeMcpServersRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

vector<string> DescribeMcpServersRequest::GetIDs() const
{
    return m_iDs;
}

void DescribeMcpServersRequest::SetIDs(const vector<string>& _iDs)
{
    m_iDs = _iDs;
    m_iDsHasBeenSet = true;
}

bool DescribeMcpServersRequest::IDsHasBeenSet() const
{
    return m_iDsHasBeenSet;
}

vector<string> DescribeMcpServersRequest::GetModes() const
{
    return m_modes;
}

void DescribeMcpServersRequest::SetModes(const vector<string>& _modes)
{
    m_modes = _modes;
    m_modesHasBeenSet = true;
}

bool DescribeMcpServersRequest::ModesHasBeenSet() const
{
    return m_modesHasBeenSet;
}

string DescribeMcpServersRequest::GetMcpSecurityRuleID() const
{
    return m_mcpSecurityRuleID;
}

void DescribeMcpServersRequest::SetMcpSecurityRuleID(const string& _mcpSecurityRuleID)
{
    m_mcpSecurityRuleID = _mcpSecurityRuleID;
    m_mcpSecurityRuleIDHasBeenSet = true;
}

bool DescribeMcpServersRequest::McpSecurityRuleIDHasBeenSet() const
{
    return m_mcpSecurityRuleIDHasBeenSet;
}

string DescribeMcpServersRequest::GetMcpSecurityRuleAct() const
{
    return m_mcpSecurityRuleAct;
}

void DescribeMcpServersRequest::SetMcpSecurityRuleAct(const string& _mcpSecurityRuleAct)
{
    m_mcpSecurityRuleAct = _mcpSecurityRuleAct;
    m_mcpSecurityRuleActHasBeenSet = true;
}

bool DescribeMcpServersRequest::McpSecurityRuleActHasBeenSet() const
{
    return m_mcpSecurityRuleActHasBeenSet;
}

string DescribeMcpServersRequest::GetPluginID() const
{
    return m_pluginID;
}

void DescribeMcpServersRequest::SetPluginID(const string& _pluginID)
{
    m_pluginID = _pluginID;
    m_pluginIDHasBeenSet = true;
}

bool DescribeMcpServersRequest::PluginIDHasBeenSet() const
{
    return m_pluginIDHasBeenSet;
}


