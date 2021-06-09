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

#include <tencentcloud/iot/v20180123/model/AddRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iot::V20180123::Model;
using namespace std;

AddRuleRequest::AddRuleRequest() :
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_dataTypeHasBeenSet(false)
{
}

string AddRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_query.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_actionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Actions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_actions.begin(); itr != m_actions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_dataTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dataType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddRuleRequest::GetName() const
{
    return m_name;
}

void AddRuleRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AddRuleRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AddRuleRequest::GetDescription() const
{
    return m_description;
}

void AddRuleRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AddRuleRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

RuleQuery AddRuleRequest::GetQuery() const
{
    return m_query;
}

void AddRuleRequest::SetQuery(const RuleQuery& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool AddRuleRequest::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

vector<Action> AddRuleRequest::GetActions() const
{
    return m_actions;
}

void AddRuleRequest::SetActions(const vector<Action>& _actions)
{
    m_actions = _actions;
    m_actionsHasBeenSet = true;
}

bool AddRuleRequest::ActionsHasBeenSet() const
{
    return m_actionsHasBeenSet;
}

uint64_t AddRuleRequest::GetDataType() const
{
    return m_dataType;
}

void AddRuleRequest::SetDataType(const uint64_t& _dataType)
{
    m_dataType = _dataType;
    m_dataTypeHasBeenSet = true;
}

bool AddRuleRequest::DataTypeHasBeenSet() const
{
    return m_dataTypeHasBeenSet;
}


