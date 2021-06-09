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

#include <tencentcloud/cfw/v20190904/model/SetNatFwDnatRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

SetNatFwDnatRuleRequest::SetNatFwDnatRuleRequest() :
    m_modeHasBeenSet(false),
    m_operationTypeHasBeenSet(false),
    m_cfwInstanceHasBeenSet(false),
    m_addOrDelDnatRulesHasBeenSet(false),
    m_originDnatHasBeenSet(false),
    m_newDnatHasBeenSet(false)
{
}

string SetNatFwDnatRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mode, allocator);
    }

    if (m_operationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operationType.c_str(), allocator).Move(), allocator);
    }

    if (m_cfwInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CfwInstance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cfwInstance.c_str(), allocator).Move(), allocator);
    }

    if (m_addOrDelDnatRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddOrDelDnatRules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_addOrDelDnatRules.begin(); itr != m_addOrDelDnatRules.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_originDnatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginDnat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_originDnat.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_newDnatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewDnat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_newDnat.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t SetNatFwDnatRuleRequest::GetMode() const
{
    return m_mode;
}

void SetNatFwDnatRuleRequest::SetMode(const uint64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool SetNatFwDnatRuleRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string SetNatFwDnatRuleRequest::GetOperationType() const
{
    return m_operationType;
}

void SetNatFwDnatRuleRequest::SetOperationType(const string& _operationType)
{
    m_operationType = _operationType;
    m_operationTypeHasBeenSet = true;
}

bool SetNatFwDnatRuleRequest::OperationTypeHasBeenSet() const
{
    return m_operationTypeHasBeenSet;
}

string SetNatFwDnatRuleRequest::GetCfwInstance() const
{
    return m_cfwInstance;
}

void SetNatFwDnatRuleRequest::SetCfwInstance(const string& _cfwInstance)
{
    m_cfwInstance = _cfwInstance;
    m_cfwInstanceHasBeenSet = true;
}

bool SetNatFwDnatRuleRequest::CfwInstanceHasBeenSet() const
{
    return m_cfwInstanceHasBeenSet;
}

vector<CfwNatDnatRule> SetNatFwDnatRuleRequest::GetAddOrDelDnatRules() const
{
    return m_addOrDelDnatRules;
}

void SetNatFwDnatRuleRequest::SetAddOrDelDnatRules(const vector<CfwNatDnatRule>& _addOrDelDnatRules)
{
    m_addOrDelDnatRules = _addOrDelDnatRules;
    m_addOrDelDnatRulesHasBeenSet = true;
}

bool SetNatFwDnatRuleRequest::AddOrDelDnatRulesHasBeenSet() const
{
    return m_addOrDelDnatRulesHasBeenSet;
}

CfwNatDnatRule SetNatFwDnatRuleRequest::GetOriginDnat() const
{
    return m_originDnat;
}

void SetNatFwDnatRuleRequest::SetOriginDnat(const CfwNatDnatRule& _originDnat)
{
    m_originDnat = _originDnat;
    m_originDnatHasBeenSet = true;
}

bool SetNatFwDnatRuleRequest::OriginDnatHasBeenSet() const
{
    return m_originDnatHasBeenSet;
}

CfwNatDnatRule SetNatFwDnatRuleRequest::GetNewDnat() const
{
    return m_newDnat;
}

void SetNatFwDnatRuleRequest::SetNewDnat(const CfwNatDnatRule& _newDnat)
{
    m_newDnat = _newDnat;
    m_newDnatHasBeenSet = true;
}

bool SetNatFwDnatRuleRequest::NewDnatHasBeenSet() const
{
    return m_newDnatHasBeenSet;
}


