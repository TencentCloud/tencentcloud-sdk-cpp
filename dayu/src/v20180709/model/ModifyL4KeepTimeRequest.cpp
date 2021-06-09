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

#include <tencentcloud/dayu/v20180709/model/ModifyL4KeepTimeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

ModifyL4KeepTimeRequest::ModifyL4KeepTimeRequest() :
    m_businessHasBeenSet(false),
    m_idHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_keepEnableHasBeenSet(false),
    m_keepTimeHasBeenSet(false)
{
}

string ModifyL4KeepTimeRequest::ToJsonString() const
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

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_keepEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_keepEnable, allocator);
    }

    if (m_keepTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_keepTime, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyL4KeepTimeRequest::GetBusiness() const
{
    return m_business;
}

void ModifyL4KeepTimeRequest::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool ModifyL4KeepTimeRequest::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

string ModifyL4KeepTimeRequest::GetId() const
{
    return m_id;
}

void ModifyL4KeepTimeRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyL4KeepTimeRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyL4KeepTimeRequest::GetRuleId() const
{
    return m_ruleId;
}

void ModifyL4KeepTimeRequest::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool ModifyL4KeepTimeRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

uint64_t ModifyL4KeepTimeRequest::GetKeepEnable() const
{
    return m_keepEnable;
}

void ModifyL4KeepTimeRequest::SetKeepEnable(const uint64_t& _keepEnable)
{
    m_keepEnable = _keepEnable;
    m_keepEnableHasBeenSet = true;
}

bool ModifyL4KeepTimeRequest::KeepEnableHasBeenSet() const
{
    return m_keepEnableHasBeenSet;
}

uint64_t ModifyL4KeepTimeRequest::GetKeepTime() const
{
    return m_keepTime;
}

void ModifyL4KeepTimeRequest::SetKeepTime(const uint64_t& _keepTime)
{
    m_keepTime = _keepTime;
    m_keepTimeHasBeenSet = true;
}

bool ModifyL4KeepTimeRequest::KeepTimeHasBeenSet() const
{
    return m_keepTimeHasBeenSet;
}


