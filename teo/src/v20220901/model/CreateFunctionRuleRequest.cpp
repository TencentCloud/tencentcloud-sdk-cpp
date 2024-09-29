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

#include <tencentcloud/teo/v20220901/model/CreateFunctionRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CreateFunctionRuleRequest::CreateFunctionRuleRequest() :
    m_zoneIdHasBeenSet(false),
    m_functionRuleConditionsHasBeenSet(false),
    m_functionIdHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string CreateFunctionRuleRequest::ToJsonString() const
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


string CreateFunctionRuleRequest::GetZoneId() const
{
    return m_zoneId;
}

void CreateFunctionRuleRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreateFunctionRuleRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

vector<FunctionRuleCondition> CreateFunctionRuleRequest::GetFunctionRuleConditions() const
{
    return m_functionRuleConditions;
}

void CreateFunctionRuleRequest::SetFunctionRuleConditions(const vector<FunctionRuleCondition>& _functionRuleConditions)
{
    m_functionRuleConditions = _functionRuleConditions;
    m_functionRuleConditionsHasBeenSet = true;
}

bool CreateFunctionRuleRequest::FunctionRuleConditionsHasBeenSet() const
{
    return m_functionRuleConditionsHasBeenSet;
}

string CreateFunctionRuleRequest::GetFunctionId() const
{
    return m_functionId;
}

void CreateFunctionRuleRequest::SetFunctionId(const string& _functionId)
{
    m_functionId = _functionId;
    m_functionIdHasBeenSet = true;
}

bool CreateFunctionRuleRequest::FunctionIdHasBeenSet() const
{
    return m_functionIdHasBeenSet;
}

string CreateFunctionRuleRequest::GetRemark() const
{
    return m_remark;
}

void CreateFunctionRuleRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateFunctionRuleRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


