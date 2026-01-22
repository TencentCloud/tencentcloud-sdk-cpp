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

#include <tencentcloud/billing/v20180709/model/CreateInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

CreateInstanceRequest::CreateInstanceRequest() :
    m_clientTokenHasBeenSet(false),
    m_productCodeHasBeenSet(false),
    m_subProductCodeHasBeenSet(false),
    m_regionCodeHasBeenSet(false),
    m_zoneCodeHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_parameterHasBeenSet(false),
    m_quantityHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_periodUnitHasBeenSet(false),
    m_renewFlagHasBeenSet(false)
{
}

string CreateInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_productCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productCode.c_str(), allocator).Move(), allocator);
    }

    if (m_subProductCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubProductCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subProductCode.c_str(), allocator).Move(), allocator);
    }

    if (m_regionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_regionCode.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneCode.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_parameterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Parameter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_parameter.c_str(), allocator).Move(), allocator);
    }

    if (m_quantityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quantity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_quantity, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_periodUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_periodUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_renewFlag.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateInstanceRequest::GetClientToken() const
{
    return m_clientToken;
}

void CreateInstanceRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool CreateInstanceRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

string CreateInstanceRequest::GetProductCode() const
{
    return m_productCode;
}

void CreateInstanceRequest::SetProductCode(const string& _productCode)
{
    m_productCode = _productCode;
    m_productCodeHasBeenSet = true;
}

bool CreateInstanceRequest::ProductCodeHasBeenSet() const
{
    return m_productCodeHasBeenSet;
}

string CreateInstanceRequest::GetSubProductCode() const
{
    return m_subProductCode;
}

void CreateInstanceRequest::SetSubProductCode(const string& _subProductCode)
{
    m_subProductCode = _subProductCode;
    m_subProductCodeHasBeenSet = true;
}

bool CreateInstanceRequest::SubProductCodeHasBeenSet() const
{
    return m_subProductCodeHasBeenSet;
}

string CreateInstanceRequest::GetRegionCode() const
{
    return m_regionCode;
}

void CreateInstanceRequest::SetRegionCode(const string& _regionCode)
{
    m_regionCode = _regionCode;
    m_regionCodeHasBeenSet = true;
}

bool CreateInstanceRequest::RegionCodeHasBeenSet() const
{
    return m_regionCodeHasBeenSet;
}

string CreateInstanceRequest::GetZoneCode() const
{
    return m_zoneCode;
}

void CreateInstanceRequest::SetZoneCode(const string& _zoneCode)
{
    m_zoneCode = _zoneCode;
    m_zoneCodeHasBeenSet = true;
}

bool CreateInstanceRequest::ZoneCodeHasBeenSet() const
{
    return m_zoneCodeHasBeenSet;
}

string CreateInstanceRequest::GetPayMode() const
{
    return m_payMode;
}

void CreateInstanceRequest::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool CreateInstanceRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string CreateInstanceRequest::GetParameter() const
{
    return m_parameter;
}

void CreateInstanceRequest::SetParameter(const string& _parameter)
{
    m_parameter = _parameter;
    m_parameterHasBeenSet = true;
}

bool CreateInstanceRequest::ParameterHasBeenSet() const
{
    return m_parameterHasBeenSet;
}

int64_t CreateInstanceRequest::GetQuantity() const
{
    return m_quantity;
}

void CreateInstanceRequest::SetQuantity(const int64_t& _quantity)
{
    m_quantity = _quantity;
    m_quantityHasBeenSet = true;
}

bool CreateInstanceRequest::QuantityHasBeenSet() const
{
    return m_quantityHasBeenSet;
}

int64_t CreateInstanceRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateInstanceRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateInstanceRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t CreateInstanceRequest::GetPeriod() const
{
    return m_period;
}

void CreateInstanceRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CreateInstanceRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string CreateInstanceRequest::GetPeriodUnit() const
{
    return m_periodUnit;
}

void CreateInstanceRequest::SetPeriodUnit(const string& _periodUnit)
{
    m_periodUnit = _periodUnit;
    m_periodUnitHasBeenSet = true;
}

bool CreateInstanceRequest::PeriodUnitHasBeenSet() const
{
    return m_periodUnitHasBeenSet;
}

string CreateInstanceRequest::GetRenewFlag() const
{
    return m_renewFlag;
}

void CreateInstanceRequest::SetRenewFlag(const string& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool CreateInstanceRequest::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}


