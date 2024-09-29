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

#include <tencentcloud/teo/v20220901/model/ModifyFunctionRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ModifyFunctionRuleRequest::ModifyFunctionRuleRequest() :
    m_zoneIdHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_functionRuleConditionsHasBeenSet(false),
    m_functionIdHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string ModifyFunctionRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_functionRuleConditionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionRuleConditions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_functionRuleConditions.begin(); itr != m_functionRuleConditions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_functionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_functionId.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyFunctionRuleRequest::GetZoneId() const
{
    return m_zoneId;
}

void ModifyFunctionRuleRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ModifyFunctionRuleRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ModifyFunctionRuleRequest::GetRuleId() const
{
    return m_ruleId;
}

void ModifyFunctionRuleRequest::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool ModifyFunctionRuleRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

vector<FunctionRuleCondition> ModifyFunctionRuleRequest::GetFunctionRuleConditions() const
{
    return m_functionRuleConditions;
}

void ModifyFunctionRuleRequest::SetFunctionRuleConditions(const vector<FunctionRuleCondition>& _functionRuleConditions)
{
    m_functionRuleConditions = _functionRuleConditions;
    m_functionRuleConditionsHasBeenSet = true;
}

bool ModifyFunctionRuleRequest::FunctionRuleConditionsHasBeenSet() const
{
    return m_functionRuleConditionsHasBeenSet;
}

string ModifyFunctionRuleRequest::GetFunctionId() const
{
    return m_functionId;
}

void ModifyFunctionRuleRequest::SetFunctionId(const string& _functionId)
{
    m_functionId = _functionId;
    m_functionIdHasBeenSet = true;
}

bool ModifyFunctionRuleRequest::FunctionIdHasBeenSet() const
{
    return m_functionIdHasBeenSet;
}

string ModifyFunctionRuleRequest::GetRemark() const
{
    return m_remark;
}

void ModifyFunctionRuleRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyFunctionRuleRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


