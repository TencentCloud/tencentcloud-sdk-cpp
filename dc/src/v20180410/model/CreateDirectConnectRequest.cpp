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

#include <tencentcloud/dc/v20180410/model/CreateDirectConnectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dc::V20180410::Model;
using namespace std;

CreateDirectConnectRequest::CreateDirectConnectRequest() :
    m_directConnectNameHasBeenSet(false),
    m_accessPointIdHasBeenSet(false),
    m_lineOperatorHasBeenSet(false),
    m_portTypeHasBeenSet(false),
    m_circuitCodeHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_redundantDirectConnectIdHasBeenSet(false),
    m_vlanHasBeenSet(false),
    m_tencentAddressHasBeenSet(false),
    m_customerAddressHasBeenSet(false),
    m_customerNameHasBeenSet(false),
    m_customerContactMailHasBeenSet(false),
    m_customerContactNumberHasBeenSet(false),
    m_faultReportContactPersonHasBeenSet(false),
    m_faultReportContactNumberHasBeenSet(false),
    m_signLawHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_isMacSecHasBeenSet(false)
{
}

string CreateDirectConnectRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_directConnectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectConnectName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_directConnectName.c_str(), allocator).Move(), allocator);
    }

    if (m_accessPointIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessPointId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessPointId.c_str(), allocator).Move(), allocator);
    }

    if (m_lineOperatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineOperator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lineOperator.c_str(), allocator).Move(), allocator);
    }

    if (m_portTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_portType.c_str(), allocator).Move(), allocator);
    }

    if (m_circuitCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CircuitCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_circuitCode.c_str(), allocator).Move(), allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_location.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_redundantDirectConnectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedundantDirectConnectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_redundantDirectConnectId.c_str(), allocator).Move(), allocator);
    }

    if (m_vlanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vlan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vlan, allocator);
    }

    if (m_tencentAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TencentAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tencentAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_customerAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customerAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_customerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customerName.c_str(), allocator).Move(), allocator);
    }

    if (m_customerContactMailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerContactMail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customerContactMail.c_str(), allocator).Move(), allocator);
    }

    if (m_customerContactNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerContactNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customerContactNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_faultReportContactPersonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaultReportContactPerson";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_faultReportContactPerson.c_str(), allocator).Move(), allocator);
    }

    if (m_faultReportContactNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaultReportContactNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_faultReportContactNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_signLawHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignLaw";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_signLaw, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_isMacSecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsMacSec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isMacSec, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDirectConnectRequest::GetDirectConnectName() const
{
    return m_directConnectName;
}

void CreateDirectConnectRequest::SetDirectConnectName(const string& _directConnectName)
{
    m_directConnectName = _directConnectName;
    m_directConnectNameHasBeenSet = true;
}

bool CreateDirectConnectRequest::DirectConnectNameHasBeenSet() const
{
    return m_directConnectNameHasBeenSet;
}

string CreateDirectConnectRequest::GetAccessPointId() const
{
    return m_accessPointId;
}

void CreateDirectConnectRequest::SetAccessPointId(const string& _accessPointId)
{
    m_accessPointId = _accessPointId;
    m_accessPointIdHasBeenSet = true;
}

bool CreateDirectConnectRequest::AccessPointIdHasBeenSet() const
{
    return m_accessPointIdHasBeenSet;
}

string CreateDirectConnectRequest::GetLineOperator() const
{
    return m_lineOperator;
}

void CreateDirectConnectRequest::SetLineOperator(const string& _lineOperator)
{
    m_lineOperator = _lineOperator;
    m_lineOperatorHasBeenSet = true;
}

bool CreateDirectConnectRequest::LineOperatorHasBeenSet() const
{
    return m_lineOperatorHasBeenSet;
}

string CreateDirectConnectRequest::GetPortType() const
{
    return m_portType;
}

void CreateDirectConnectRequest::SetPortType(const string& _portType)
{
    m_portType = _portType;
    m_portTypeHasBeenSet = true;
}

bool CreateDirectConnectRequest::PortTypeHasBeenSet() const
{
    return m_portTypeHasBeenSet;
}

string CreateDirectConnectRequest::GetCircuitCode() const
{
    return m_circuitCode;
}

void CreateDirectConnectRequest::SetCircuitCode(const string& _circuitCode)
{
    m_circuitCode = _circuitCode;
    m_circuitCodeHasBeenSet = true;
}

bool CreateDirectConnectRequest::CircuitCodeHasBeenSet() const
{
    return m_circuitCodeHasBeenSet;
}

string CreateDirectConnectRequest::GetLocation() const
{
    return m_location;
}

void CreateDirectConnectRequest::SetLocation(const string& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool CreateDirectConnectRequest::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

int64_t CreateDirectConnectRequest::GetBandwidth() const
{
    return m_bandwidth;
}

void CreateDirectConnectRequest::SetBandwidth(const int64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool CreateDirectConnectRequest::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

string CreateDirectConnectRequest::GetRedundantDirectConnectId() const
{
    return m_redundantDirectConnectId;
}

void CreateDirectConnectRequest::SetRedundantDirectConnectId(const string& _redundantDirectConnectId)
{
    m_redundantDirectConnectId = _redundantDirectConnectId;
    m_redundantDirectConnectIdHasBeenSet = true;
}

bool CreateDirectConnectRequest::RedundantDirectConnectIdHasBeenSet() const
{
    return m_redundantDirectConnectIdHasBeenSet;
}

int64_t CreateDirectConnectRequest::GetVlan() const
{
    return m_vlan;
}

void CreateDirectConnectRequest::SetVlan(const int64_t& _vlan)
{
    m_vlan = _vlan;
    m_vlanHasBeenSet = true;
}

bool CreateDirectConnectRequest::VlanHasBeenSet() const
{
    return m_vlanHasBeenSet;
}

string CreateDirectConnectRequest::GetTencentAddress() const
{
    return m_tencentAddress;
}

void CreateDirectConnectRequest::SetTencentAddress(const string& _tencentAddress)
{
    m_tencentAddress = _tencentAddress;
    m_tencentAddressHasBeenSet = true;
}

bool CreateDirectConnectRequest::TencentAddressHasBeenSet() const
{
    return m_tencentAddressHasBeenSet;
}

string CreateDirectConnectRequest::GetCustomerAddress() const
{
    return m_customerAddress;
}

void CreateDirectConnectRequest::SetCustomerAddress(const string& _customerAddress)
{
    m_customerAddress = _customerAddress;
    m_customerAddressHasBeenSet = true;
}

bool CreateDirectConnectRequest::CustomerAddressHasBeenSet() const
{
    return m_customerAddressHasBeenSet;
}

string CreateDirectConnectRequest::GetCustomerName() const
{
    return m_customerName;
}

void CreateDirectConnectRequest::SetCustomerName(const string& _customerName)
{
    m_customerName = _customerName;
    m_customerNameHasBeenSet = true;
}

bool CreateDirectConnectRequest::CustomerNameHasBeenSet() const
{
    return m_customerNameHasBeenSet;
}

string CreateDirectConnectRequest::GetCustomerContactMail() const
{
    return m_customerContactMail;
}

void CreateDirectConnectRequest::SetCustomerContactMail(const string& _customerContactMail)
{
    m_customerContactMail = _customerContactMail;
    m_customerContactMailHasBeenSet = true;
}

bool CreateDirectConnectRequest::CustomerContactMailHasBeenSet() const
{
    return m_customerContactMailHasBeenSet;
}

string CreateDirectConnectRequest::GetCustomerContactNumber() const
{
    return m_customerContactNumber;
}

void CreateDirectConnectRequest::SetCustomerContactNumber(const string& _customerContactNumber)
{
    m_customerContactNumber = _customerContactNumber;
    m_customerContactNumberHasBeenSet = true;
}

bool CreateDirectConnectRequest::CustomerContactNumberHasBeenSet() const
{
    return m_customerContactNumberHasBeenSet;
}

string CreateDirectConnectRequest::GetFaultReportContactPerson() const
{
    return m_faultReportContactPerson;
}

void CreateDirectConnectRequest::SetFaultReportContactPerson(const string& _faultReportContactPerson)
{
    m_faultReportContactPerson = _faultReportContactPerson;
    m_faultReportContactPersonHasBeenSet = true;
}

bool CreateDirectConnectRequest::FaultReportContactPersonHasBeenSet() const
{
    return m_faultReportContactPersonHasBeenSet;
}

string CreateDirectConnectRequest::GetFaultReportContactNumber() const
{
    return m_faultReportContactNumber;
}

void CreateDirectConnectRequest::SetFaultReportContactNumber(const string& _faultReportContactNumber)
{
    m_faultReportContactNumber = _faultReportContactNumber;
    m_faultReportContactNumberHasBeenSet = true;
}

bool CreateDirectConnectRequest::FaultReportContactNumberHasBeenSet() const
{
    return m_faultReportContactNumberHasBeenSet;
}

bool CreateDirectConnectRequest::GetSignLaw() const
{
    return m_signLaw;
}

void CreateDirectConnectRequest::SetSignLaw(const bool& _signLaw)
{
    m_signLaw = _signLaw;
    m_signLawHasBeenSet = true;
}

bool CreateDirectConnectRequest::SignLawHasBeenSet() const
{
    return m_signLawHasBeenSet;
}

vector<Tag> CreateDirectConnectRequest::GetTags() const
{
    return m_tags;
}

void CreateDirectConnectRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateDirectConnectRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

bool CreateDirectConnectRequest::GetIsMacSec() const
{
    return m_isMacSec;
}

void CreateDirectConnectRequest::SetIsMacSec(const bool& _isMacSec)
{
    m_isMacSec = _isMacSec;
    m_isMacSecHasBeenSet = true;
}

bool CreateDirectConnectRequest::IsMacSecHasBeenSet() const
{
    return m_isMacSecHasBeenSet;
}


