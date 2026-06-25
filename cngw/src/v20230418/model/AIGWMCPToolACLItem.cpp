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

#include <tencentcloud/cngw/v20230418/model/AIGWMCPToolACLItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

AIGWMCPToolACLItem::AIGWMCPToolACLItem() :
    m_toolIdHasBeenSet(false),
    m_toolNameHasBeenSet(false),
    m_aCLTypeHasBeenSet(false),
    m_aCLConsumersHasBeenSet(false),
    m_aCLConsumerGroupsHasBeenSet(false)
{
}

CoreInternalOutcome AIGWMCPToolACLItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ToolId") && !value["ToolId"].IsNull())
    {
        if (!value["ToolId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPToolACLItem.ToolId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_toolId = string(value["ToolId"].GetString());
        m_toolIdHasBeenSet = true;
    }

    if (value.HasMember("ToolName") && !value["ToolName"].IsNull())
    {
        if (!value["ToolName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPToolACLItem.ToolName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_toolName = string(value["ToolName"].GetString());
        m_toolNameHasBeenSet = true;
    }

    if (value.HasMember("ACLType") && !value["ACLType"].IsNull())
    {
        if (!value["ACLType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPToolACLItem.ACLType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aCLType = string(value["ACLType"].GetString());
        m_aCLTypeHasBeenSet = true;
    }

    if (value.HasMember("ACLConsumers") && !value["ACLConsumers"].IsNull())
    {
        if (!value["ACLConsumers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIGWMCPToolACLItem.ACLConsumers` is not array type"));

        const rapidjson::Value &tmpValue = value["ACLConsumers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AIGWACLSubject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_aCLConsumers.push_back(item);
        }
        m_aCLConsumersHasBeenSet = true;
    }

    if (value.HasMember("ACLConsumerGroups") && !value["ACLConsumerGroups"].IsNull())
    {
        if (!value["ACLConsumerGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIGWMCPToolACLItem.ACLConsumerGroups` is not array type"));

        const rapidjson::Value &tmpValue = value["ACLConsumerGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AIGWACLSubject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_aCLConsumerGroups.push_back(item);
        }
        m_aCLConsumerGroupsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWMCPToolACLItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_toolIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_toolId.c_str(), allocator).Move(), allocator);
    }

    if (m_toolNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_toolName.c_str(), allocator).Move(), allocator);
    }

    if (m_aCLTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ACLType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aCLType.c_str(), allocator).Move(), allocator);
    }

    if (m_aCLConsumersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ACLConsumers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_aCLConsumers.begin(); itr != m_aCLConsumers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_aCLConsumerGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ACLConsumerGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_aCLConsumerGroups.begin(); itr != m_aCLConsumerGroups.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AIGWMCPToolACLItem::GetToolId() const
{
    return m_toolId;
}

void AIGWMCPToolACLItem::SetToolId(const string& _toolId)
{
    m_toolId = _toolId;
    m_toolIdHasBeenSet = true;
}

bool AIGWMCPToolACLItem::ToolIdHasBeenSet() const
{
    return m_toolIdHasBeenSet;
}

string AIGWMCPToolACLItem::GetToolName() const
{
    return m_toolName;
}

void AIGWMCPToolACLItem::SetToolName(const string& _toolName)
{
    m_toolName = _toolName;
    m_toolNameHasBeenSet = true;
}

bool AIGWMCPToolACLItem::ToolNameHasBeenSet() const
{
    return m_toolNameHasBeenSet;
}

string AIGWMCPToolACLItem::GetACLType() const
{
    return m_aCLType;
}

void AIGWMCPToolACLItem::SetACLType(const string& _aCLType)
{
    m_aCLType = _aCLType;
    m_aCLTypeHasBeenSet = true;
}

bool AIGWMCPToolACLItem::ACLTypeHasBeenSet() const
{
    return m_aCLTypeHasBeenSet;
}

vector<AIGWACLSubject> AIGWMCPToolACLItem::GetACLConsumers() const
{
    return m_aCLConsumers;
}

void AIGWMCPToolACLItem::SetACLConsumers(const vector<AIGWACLSubject>& _aCLConsumers)
{
    m_aCLConsumers = _aCLConsumers;
    m_aCLConsumersHasBeenSet = true;
}

bool AIGWMCPToolACLItem::ACLConsumersHasBeenSet() const
{
    return m_aCLConsumersHasBeenSet;
}

vector<AIGWACLSubject> AIGWMCPToolACLItem::GetACLConsumerGroups() const
{
    return m_aCLConsumerGroups;
}

void AIGWMCPToolACLItem::SetACLConsumerGroups(const vector<AIGWACLSubject>& _aCLConsumerGroups)
{
    m_aCLConsumerGroups = _aCLConsumerGroups;
    m_aCLConsumerGroupsHasBeenSet = true;
}

bool AIGWMCPToolACLItem::ACLConsumerGroupsHasBeenSet() const
{
    return m_aCLConsumerGroupsHasBeenSet;
}

