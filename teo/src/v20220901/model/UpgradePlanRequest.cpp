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

#include <tencentcloud/teo/v20220901/model/UpgradePlanRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

UpgradePlanRequest::UpgradePlanRequest() :
    m_planIdHasBeenSet(false),
    m_planTypeHasBeenSet(false),
    m_autoUseVoucherHasBeenSet(false)
{
}

string UpgradePlanRequest::ToJsonString() const
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpgradePlanRequest::GetPlanId() const
{
    return m_planId;
}

void UpgradePlanRequest::SetPlanId(const string& _planId)
{
    m_planId = _planId;
    m_planIdHasBeenSet = true;
}

bool UpgradePlanRequest::PlanIdHasBeenSet() const
{
    return m_planIdHasBeenSet;
}

string UpgradePlanRequest::GetPlanType() const
{
    return m_planType;
}

void UpgradePlanRequest::SetPlanType(const string& _planType)
{
    m_planType = _planType;
    m_planTypeHasBeenSet = true;
}

bool UpgradePlanRequest::PlanTypeHasBeenSet() const
{
    return m_planTypeHasBeenSet;
}

string UpgradePlanRequest::GetAutoUseVoucher() const
{
    return m_autoUseVoucher;
}

void UpgradePlanRequest::SetAutoUseVoucher(const string& _autoUseVoucher)
{
    m_autoUseVoucher = _autoUseVoucher;
    m_autoUseVoucherHasBeenSet = true;
}

bool UpgradePlanRequest::AutoUseVoucherHasBeenSet() const
{
    return m_autoUseVoucherHasBeenSet;
}


