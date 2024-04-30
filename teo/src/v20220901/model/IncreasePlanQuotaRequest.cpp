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

#include <tencentcloud/teo/v20220901/model/IncreasePlanQuotaRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

IncreasePlanQuotaRequest::IncreasePlanQuotaRequest() :
    m_planIdHasBeenSet(false),
    m_quotaTypeHasBeenSet(false),
    m_quotaNumberHasBeenSet(false)
{
}

string IncreasePlanQuotaRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_planIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_planId.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_quotaType.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_quotaNumber, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string IncreasePlanQuotaRequest::GetPlanId() const
{
    return m_planId;
}

void IncreasePlanQuotaRequest::SetPlanId(const string& _planId)
{
    m_planId = _planId;
    m_planIdHasBeenSet = true;
}

bool IncreasePlanQuotaRequest::PlanIdHasBeenSet() const
{
    return m_planIdHasBeenSet;
}

string IncreasePlanQuotaRequest::GetQuotaType() const
{
    return m_quotaType;
}

void IncreasePlanQuotaRequest::SetQuotaType(const string& _quotaType)
{
    m_quotaType = _quotaType;
    m_quotaTypeHasBeenSet = true;
}

bool IncreasePlanQuotaRequest::QuotaTypeHasBeenSet() const
{
    return m_quotaTypeHasBeenSet;
}

int64_t IncreasePlanQuotaRequest::GetQuotaNumber() const
{
    return m_quotaNumber;
}

void IncreasePlanQuotaRequest::SetQuotaNumber(const int64_t& _quotaNumber)
{
    m_quotaNumber = _quotaNumber;
    m_quotaNumberHasBeenSet = true;
}

bool IncreasePlanQuotaRequest::QuotaNumberHasBeenSet() const
{
    return m_quotaNumberHasBeenSet;
}


