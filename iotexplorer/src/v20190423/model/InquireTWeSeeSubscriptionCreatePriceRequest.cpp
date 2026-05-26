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

#include <tencentcloud/iotexplorer/v20190423/model/InquireTWeSeeSubscriptionCreatePriceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

InquireTWeSeeSubscriptionCreatePriceRequest::InquireTWeSeeSubscriptionCreatePriceRequest() :
    m_serviceTypeHasBeenSet(false),
    m_serviceTierHasBeenSet(false),
    m_periodHasBeenSet(false)
{
}

string InquireTWeSeeSubscriptionCreatePriceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceTier";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceTier.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string InquireTWeSeeSubscriptionCreatePriceRequest::GetServiceType() const
{
    return m_serviceType;
}

void InquireTWeSeeSubscriptionCreatePriceRequest::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool InquireTWeSeeSubscriptionCreatePriceRequest::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

string InquireTWeSeeSubscriptionCreatePriceRequest::GetServiceTier() const
{
    return m_serviceTier;
}

void InquireTWeSeeSubscriptionCreatePriceRequest::SetServiceTier(const string& _serviceTier)
{
    m_serviceTier = _serviceTier;
    m_serviceTierHasBeenSet = true;
}

bool InquireTWeSeeSubscriptionCreatePriceRequest::ServiceTierHasBeenSet() const
{
    return m_serviceTierHasBeenSet;
}

int64_t InquireTWeSeeSubscriptionCreatePriceRequest::GetPeriod() const
{
    return m_period;
}

void InquireTWeSeeSubscriptionCreatePriceRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool InquireTWeSeeSubscriptionCreatePriceRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}


