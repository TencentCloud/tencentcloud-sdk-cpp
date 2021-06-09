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

#include <tencentcloud/dayu/v20180709/model/CreateL7CCRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

CreateL7CCRuleRequest::CreateL7CCRuleRequest() :
    m_businessHasBeenSet(false),
    m_idHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_ruleConfigHasBeenSet(false)
{
}

string CreateL7CCRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_businessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_business.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleConfig.begin(); itr != m_ruleConfig.end(); ++itr, ++i)
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


string CreateL7CCRuleRequest::GetBusiness() const
{
    return m_business;
}

void CreateL7CCRuleRequest::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool CreateL7CCRuleRequest::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

string CreateL7CCRuleRequest::GetId() const
{
    return m_id;
}

void CreateL7CCRuleRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CreateL7CCRuleRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string CreateL7CCRuleRequest::GetMethod() const
{
    return m_method;
}

void CreateL7CCRuleRequest::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool CreateL7CCRuleRequest::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string CreateL7CCRuleRequest::GetRuleId() const
{
    return m_ruleId;
}

void CreateL7CCRuleRequest::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool CreateL7CCRuleRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

vector<CCRuleConfig> CreateL7CCRuleRequest::GetRuleConfig() const
{
    return m_ruleConfig;
}

void CreateL7CCRuleRequest::SetRuleConfig(const vector<CCRuleConfig>& _ruleConfig)
{
    m_ruleConfig = _ruleConfig;
    m_ruleConfigHasBeenSet = true;
}

bool CreateL7CCRuleRequest::RuleConfigHasBeenSet() const
{
    return m_ruleConfigHasBeenSet;
}


