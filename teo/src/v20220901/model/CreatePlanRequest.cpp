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

#include <tencentcloud/teo/v20220901/model/CreatePlanRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CreatePlanRequest::CreatePlanRequest() :
    m_planTypeHasBeenSet(false),
    m_autoUseVoucherHasBeenSet(false),
    m_prepaidPlanParamHasBeenSet(false)
{
}

string CreatePlanRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_planTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_planType.c_str(), allocator).Move(), allocator);
    }

    if (m_autoUseVoucherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoUseVoucher";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoUseVoucher.c_str(), allocator).Move(), allocator);
    }

    if (m_prepaidPlanParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrepaidPlanParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_prepaidPlanParam.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreatePlanRequest::GetPlanType() const
{
    return m_planType;
}

void CreatePlanRequest::SetPlanType(const string& _planType)
{
    m_planType = _planType;
    m_planTypeHasBeenSet = true;
}

bool CreatePlanRequest::PlanTypeHasBeenSet() const
{
    return m_planTypeHasBeenSet;
}

string CreatePlanRequest::GetAutoUseVoucher() const
{
    return m_autoUseVoucher;
}

void CreatePlanRequest::SetAutoUseVoucher(const string& _autoUseVoucher)
{
    m_autoUseVoucher = _autoUseVoucher;
    m_autoUseVoucherHasBeenSet = true;
}

bool CreatePlanRequest::AutoUseVoucherHasBeenSet() const
{
    return m_autoUseVoucherHasBeenSet;
}

PrepaidPlanParam CreatePlanRequest::GetPrepaidPlanParam() const
{
    return m_prepaidPlanParam;
}

void CreatePlanRequest::SetPrepaidPlanParam(const PrepaidPlanParam& _prepaidPlanParam)
{
    m_prepaidPlanParam = _prepaidPlanParam;
    m_prepaidPlanParamHasBeenSet = true;
}

bool CreatePlanRequest::PrepaidPlanParamHasBeenSet() const
{
    return m_prepaidPlanParamHasBeenSet;
}


