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

#include <tencentcloud/waf/v20180125/model/AddAntiInfoLeakRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

AddAntiInfoLeakRulesRequest::AddAntiInfoLeakRulesRequest() :
    m_domainHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_strategiesHasBeenSet(false),
    m_uriHasBeenSet(false)
{
}

string AddAntiInfoLeakRulesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_actionType, allocator);
    }

    if (m_strategiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Strategies";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_strategies.begin(); itr != m_strategies.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_uriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uri";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uri.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddAntiInfoLeakRulesRequest::GetDomain() const
{
    return m_domain;
}

void AddAntiInfoLeakRulesRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool AddAntiInfoLeakRulesRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string AddAntiInfoLeakRulesRequest::GetName() const
{
    return m_name;
}

void AddAntiInfoLeakRulesRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AddAntiInfoLeakRulesRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t AddAntiInfoLeakRulesRequest::GetActionType() const
{
    return m_actionType;
}

void AddAntiInfoLeakRulesRequest::SetActionType(const uint64_t& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool AddAntiInfoLeakRulesRequest::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

vector<StrategyForAntiInfoLeak> AddAntiInfoLeakRulesRequest::GetStrategies() const
{
    return m_strategies;
}

void AddAntiInfoLeakRulesRequest::SetStrategies(const vector<StrategyForAntiInfoLeak>& _strategies)
{
    m_strategies = _strategies;
    m_strategiesHasBeenSet = true;
}

bool AddAntiInfoLeakRulesRequest::StrategiesHasBeenSet() const
{
    return m_strategiesHasBeenSet;
}

string AddAntiInfoLeakRulesRequest::GetUri() const
{
    return m_uri;
}

void AddAntiInfoLeakRulesRequest::SetUri(const string& _uri)
{
    m_uri = _uri;
    m_uriHasBeenSet = true;
}

bool AddAntiInfoLeakRulesRequest::UriHasBeenSet() const
{
    return m_uriHasBeenSet;
}


