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

#include <tencentcloud/billing/v20180709/model/SetRenewalRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

SetRenewalRequest::SetRenewalRequest() :
    m_productCodeHasBeenSet(false),
    m_regionCodeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_renewPeriodHasBeenSet(false),
    m_renewPeriodUnitHasBeenSet(false)
{
}

string SetRenewalRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productCode.c_str(), allocator).Move(), allocator);
    }

    if (m_regionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_regionCode.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_renewFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_renewPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewPeriod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_renewPeriod.c_str(), allocator).Move(), allocator);
    }

    if (m_renewPeriodUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewPeriodUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_renewPeriodUnit.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SetRenewalRequest::GetProductCode() const
{
    return m_productCode;
}

void SetRenewalRequest::SetProductCode(const string& _productCode)
{
    m_productCode = _productCode;
    m_productCodeHasBeenSet = true;
}

bool SetRenewalRequest::ProductCodeHasBeenSet() const
{
    return m_productCodeHasBeenSet;
}

string SetRenewalRequest::GetRegionCode() const
{
    return m_regionCode;
}

void SetRenewalRequest::SetRegionCode(const string& _regionCode)
{
    m_regionCode = _regionCode;
    m_regionCodeHasBeenSet = true;
}

bool SetRenewalRequest::RegionCodeHasBeenSet() const
{
    return m_regionCodeHasBeenSet;
}

string SetRenewalRequest::GetInstanceId() const
{
    return m_instanceId;
}

void SetRenewalRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool SetRenewalRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string SetRenewalRequest::GetRenewFlag() const
{
    return m_renewFlag;
}

void SetRenewalRequest::SetRenewFlag(const string& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool SetRenewalRequest::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string SetRenewalRequest::GetRenewPeriod() const
{
    return m_renewPeriod;
}

void SetRenewalRequest::SetRenewPeriod(const string& _renewPeriod)
{
    m_renewPeriod = _renewPeriod;
    m_renewPeriodHasBeenSet = true;
}

bool SetRenewalRequest::RenewPeriodHasBeenSet() const
{
    return m_renewPeriodHasBeenSet;
}

string SetRenewalRequest::GetRenewPeriodUnit() const
{
    return m_renewPeriodUnit;
}

void SetRenewalRequest::SetRenewPeriodUnit(const string& _renewPeriodUnit)
{
    m_renewPeriodUnit = _renewPeriodUnit;
    m_renewPeriodUnitHasBeenSet = true;
}

bool SetRenewalRequest::RenewPeriodUnitHasBeenSet() const
{
    return m_renewPeriodUnitHasBeenSet;
}


