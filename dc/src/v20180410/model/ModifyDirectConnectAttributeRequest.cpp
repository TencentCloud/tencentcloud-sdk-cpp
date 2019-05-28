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

#include <tencentcloud/dc/v20180410/model/ModifyDirectConnectAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dc::V20180410::Model;
using namespace rapidjson;
using namespace std;

ModifyDirectConnectAttributeRequest::ModifyDirectConnectAttributeRequest() :
    m_directConnectIdHasBeenSet(false),
    m_directConnectNameHasBeenSet(false),
    m_circuitCodeHasBeenSet(false),
    m_vlanHasBeenSet(false),
    m_tencentAddressHasBeenSet(false),
    m_customerAddressHasBeenSet(false),
    m_customerNameHasBeenSet(false),
    m_customerContactMailHasBeenSet(false),
    m_customerContactNumberHasBeenSet(false),
    m_faultReportContactPersonHasBeenSet(false),
    m_faultReportContactNumberHasBeenSet(false)
{
}

string ModifyDirectConnectAttributeRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_directConnectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DirectConnectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_directConnectId.c_str(), allocator).Move(), allocator);
    }

    if (m_directConnectNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DirectConnectName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_directConnectName.c_str(), allocator).Move(), allocator);
    }

    if (m_circuitCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CircuitCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_circuitCode.c_str(), allocator).Move(), allocator);
    }

    if (m_vlanHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Vlan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vlan, allocator);
    }

    if (m_tencentAddressHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TencentAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_tencentAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_customerAddressHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CustomerAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_customerAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_customerNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CustomerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_customerName.c_str(), allocator).Move(), allocator);
    }

    if (m_customerContactMailHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CustomerContactMail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_customerContactMail.c_str(), allocator).Move(), allocator);
    }

    if (m_customerContactNumberHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CustomerContactNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_customerContactNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_faultReportContactPersonHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FaultReportContactPerson";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_faultReportContactPerson.c_str(), allocator).Move(), allocator);
    }

    if (m_faultReportContactNumberHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FaultReportContactNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_faultReportContactNumber.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDirectConnectAttributeRequest::GetDirectConnectId() const
{
    return m_directConnectId;
}

void ModifyDirectConnectAttributeRequest::SetDirectConnectId(const string& _directConnectId)
{
    m_directConnectId = _directConnectId;
    m_directConnectIdHasBeenSet = true;
}

bool ModifyDirectConnectAttributeRequest::DirectConnectIdHasBeenSet() const
{
    return m_directConnectIdHasBeenSet;
}

string ModifyDirectConnectAttributeRequest::GetDirectConnectName() const
{
    return m_directConnectName;
}

void ModifyDirectConnectAttributeRequest::SetDirectConnectName(const string& _directConnectName)
{
    m_directConnectName = _directConnectName;
    m_directConnectNameHasBeenSet = true;
}

bool ModifyDirectConnectAttributeRequest::DirectConnectNameHasBeenSet() const
{
    return m_directConnectNameHasBeenSet;
}

string ModifyDirectConnectAttributeRequest::GetCircuitCode() const
{
    return m_circuitCode;
}

void ModifyDirectConnectAttributeRequest::SetCircuitCode(const string& _circuitCode)
{
    m_circuitCode = _circuitCode;
    m_circuitCodeHasBeenSet = true;
}

bool ModifyDirectConnectAttributeRequest::CircuitCodeHasBeenSet() const
{
    return m_circuitCodeHasBeenSet;
}

int64_t ModifyDirectConnectAttributeRequest::GetVlan() const
{
    return m_vlan;
}

void ModifyDirectConnectAttributeRequest::SetVlan(const int64_t& _vlan)
{
    m_vlan = _vlan;
    m_vlanHasBeenSet = true;
}

bool ModifyDirectConnectAttributeRequest::VlanHasBeenSet() const
{
    return m_vlanHasBeenSet;
}

string ModifyDirectConnectAttributeRequest::GetTencentAddress() const
{
    return m_tencentAddress;
}

void ModifyDirectConnectAttributeRequest::SetTencentAddress(const string& _tencentAddress)
{
    m_tencentAddress = _tencentAddress;
    m_tencentAddressHasBeenSet = true;
}

bool ModifyDirectConnectAttributeRequest::TencentAddressHasBeenSet() const
{
    return m_tencentAddressHasBeenSet;
}

string ModifyDirectConnectAttributeRequest::GetCustomerAddress() const
{
    return m_customerAddress;
}

void ModifyDirectConnectAttributeRequest::SetCustomerAddress(const string& _customerAddress)
{
    m_customerAddress = _customerAddress;
    m_customerAddressHasBeenSet = true;
}

bool ModifyDirectConnectAttributeRequest::CustomerAddressHasBeenSet() const
{
    return m_customerAddressHasBeenSet;
}

string ModifyDirectConnectAttributeRequest::GetCustomerName() const
{
    return m_customerName;
}

void ModifyDirectConnectAttributeRequest::SetCustomerName(const string& _customerName)
{
    m_customerName = _customerName;
    m_customerNameHasBeenSet = true;
}

bool ModifyDirectConnectAttributeRequest::CustomerNameHasBeenSet() const
{
    return m_customerNameHasBeenSet;
}

string ModifyDirectConnectAttributeRequest::GetCustomerContactMail() const
{
    return m_customerContactMail;
}

void ModifyDirectConnectAttributeRequest::SetCustomerContactMail(const string& _customerContactMail)
{
    m_customerContactMail = _customerContactMail;
    m_customerContactMailHasBeenSet = true;
}

bool ModifyDirectConnectAttributeRequest::CustomerContactMailHasBeenSet() const
{
    return m_customerContactMailHasBeenSet;
}

string ModifyDirectConnectAttributeRequest::GetCustomerContactNumber() const
{
    return m_customerContactNumber;
}

void ModifyDirectConnectAttributeRequest::SetCustomerContactNumber(const string& _customerContactNumber)
{
    m_customerContactNumber = _customerContactNumber;
    m_customerContactNumberHasBeenSet = true;
}

bool ModifyDirectConnectAttributeRequest::CustomerContactNumberHasBeenSet() const
{
    return m_customerContactNumberHasBeenSet;
}

string ModifyDirectConnectAttributeRequest::GetFaultReportContactPerson() const
{
    return m_faultReportContactPerson;
}

void ModifyDirectConnectAttributeRequest::SetFaultReportContactPerson(const string& _faultReportContactPerson)
{
    m_faultReportContactPerson = _faultReportContactPerson;
    m_faultReportContactPersonHasBeenSet = true;
}

bool ModifyDirectConnectAttributeRequest::FaultReportContactPersonHasBeenSet() const
{
    return m_faultReportContactPersonHasBeenSet;
}

string ModifyDirectConnectAttributeRequest::GetFaultReportContactNumber() const
{
    return m_faultReportContactNumber;
}

void ModifyDirectConnectAttributeRequest::SetFaultReportContactNumber(const string& _faultReportContactNumber)
{
    m_faultReportContactNumber = _faultReportContactNumber;
    m_faultReportContactNumberHasBeenSet = true;
}

bool ModifyDirectConnectAttributeRequest::FaultReportContactNumberHasBeenSet() const
{
    return m_faultReportContactNumberHasBeenSet;
}


