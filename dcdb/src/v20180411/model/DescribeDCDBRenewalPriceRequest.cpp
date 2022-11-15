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

#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBRenewalPriceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

DescribeDCDBRenewalPriceRequest::DescribeDCDBRenewalPriceRequest() :
    m_instanceIdHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_amountUnitHasBeenSet(false)
{
}

string DescribeDCDBRenewalPriceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_amountUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AmountUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_amountUnit.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDCDBRenewalPriceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeDCDBRenewalPriceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeDCDBRenewalPriceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DescribeDCDBRenewalPriceRequest::GetPeriod() const
{
    return m_period;
}

void DescribeDCDBRenewalPriceRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool DescribeDCDBRenewalPriceRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string DescribeDCDBRenewalPriceRequest::GetAmountUnit() const
{
    return m_amountUnit;
}

void DescribeDCDBRenewalPriceRequest::SetAmountUnit(const string& _amountUnit)
{
    m_amountUnit = _amountUnit;
    m_amountUnitHasBeenSet = true;
}

bool DescribeDCDBRenewalPriceRequest::AmountUnitHasBeenSet() const
{
    return m_amountUnitHasBeenSet;
}


