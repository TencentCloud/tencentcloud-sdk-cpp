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

#include <tencentcloud/cfw/v20190904/model/DeleteNatFwDnatRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DeleteNatFwDnatRuleRequest::DeleteNatFwDnatRuleRequest() :
    m_modeHasBeenSet(false),
    m_cfwInstanceHasBeenSet(false),
    m_dnatRulesHasBeenSet(false)
{
}

string DeleteNatFwDnatRuleRequest::ToJsonString() const
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

    if (m_cfwInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CfwInstance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cfwInstance.c_str(), allocator).Move(), allocator);
    }

    if (m_dnatRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnatRules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dnatRules.begin(); itr != m_dnatRules.end(); ++itr, ++i)
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


uint64_t DeleteNatFwDnatRuleRequest::GetMode() const
{
    return m_mode;
}

void DeleteNatFwDnatRuleRequest::SetMode(const uint64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool DeleteNatFwDnatRuleRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string DeleteNatFwDnatRuleRequest::GetCfwInstance() const
{
    return m_cfwInstance;
}

void DeleteNatFwDnatRuleRequest::SetCfwInstance(const string& _cfwInstance)
{
    m_cfwInstance = _cfwInstance;
    m_cfwInstanceHasBeenSet = true;
}

bool DeleteNatFwDnatRuleRequest::CfwInstanceHasBeenSet() const
{
    return m_cfwInstanceHasBeenSet;
}

vector<CfwNatDnatRule> DeleteNatFwDnatRuleRequest::GetDnatRules() const
{
    return m_dnatRules;
}

void DeleteNatFwDnatRuleRequest::SetDnatRules(const vector<CfwNatDnatRule>& _dnatRules)
{
    m_dnatRules = _dnatRules;
    m_dnatRulesHasBeenSet = true;
}

bool DeleteNatFwDnatRuleRequest::DnatRulesHasBeenSet() const
{
    return m_dnatRulesHasBeenSet;
}


