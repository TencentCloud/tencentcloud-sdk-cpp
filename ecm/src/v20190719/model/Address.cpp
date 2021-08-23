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

#include <tencentcloud/ecm/v20190719/model/Address.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

Address::Address() :
    m_addressIdHasBeenSet(false),
    m_addressNameHasBeenSet(false),
    m_addressStatusHasBeenSet(false),
    m_addressIpHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_privateAddressIpHasBeenSet(false),
    m_isArrearsHasBeenSet(false),
    m_isBlockedHasBeenSet(false),
    m_isEipDirectConnectionHasBeenSet(false),
    m_addressTypeHasBeenSet(false),
    m_cascadeReleaseHasBeenSet(false),
    m_internetServiceProviderHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_payModeHasBeenSet(false)
{
}

CoreInternalOutcome Address::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AddressId") && !value["AddressId"].IsNull())
    {
        if (!value["AddressId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address.AddressId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressId = string(value["AddressId"].GetString());
        m_addressIdHasBeenSet = true;
    }

    if (value.HasMember("AddressName") && !value["AddressName"].IsNull())
    {
        if (!value["AddressName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address.AddressName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressName = string(value["AddressName"].GetString());
        m_addressNameHasBeenSet = true;
    }

    if (value.HasMember("AddressStatus") && !value["AddressStatus"].IsNull())
    {
        if (!value["AddressStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address.AddressStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressStatus = string(value["AddressStatus"].GetString());
        m_addressStatusHasBeenSet = true;
    }

    if (value.HasMember("AddressIp") && !value["AddressIp"].IsNull())
    {
        if (!value["AddressIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address.AddressIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressIp = string(value["AddressIp"].GetString());
        m_addressIpHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("NetworkInterfaceId") && !value["NetworkInterfaceId"].IsNull())
    {
        if (!value["NetworkInterfaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address.NetworkInterfaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkInterfaceId = string(value["NetworkInterfaceId"].GetString());
        m_networkInterfaceIdHasBeenSet = true;
    }

    if (value.HasMember("PrivateAddressIp") && !value["PrivateAddressIp"].IsNull())
    {
        if (!value["PrivateAddressIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address.PrivateAddressIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateAddressIp = string(value["PrivateAddressIp"].GetString());
        m_privateAddressIpHasBeenSet = true;
    }

    if (value.HasMember("IsArrears") && !value["IsArrears"].IsNull())
    {
        if (!value["IsArrears"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Address.IsArrears` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isArrears = value["IsArrears"].GetBool();
        m_isArrearsHasBeenSet = true;
    }

    if (value.HasMember("IsBlocked") && !value["IsBlocked"].IsNull())
    {
        if (!value["IsBlocked"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Address.IsBlocked` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isBlocked = value["IsBlocked"].GetBool();
        m_isBlockedHasBeenSet = true;
    }

    if (value.HasMember("IsEipDirectConnection") && !value["IsEipDirectConnection"].IsNull())
    {
        if (!value["IsEipDirectConnection"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Address.IsEipDirectConnection` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isEipDirectConnection = value["IsEipDirectConnection"].GetBool();
        m_isEipDirectConnectionHasBeenSet = true;
    }

    if (value.HasMember("AddressType") && !value["AddressType"].IsNull())
    {
        if (!value["AddressType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address.AddressType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressType = string(value["AddressType"].GetString());
        m_addressTypeHasBeenSet = true;
    }

    if (value.HasMember("CascadeRelease") && !value["CascadeRelease"].IsNull())
    {
        if (!value["CascadeRelease"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Address.CascadeRelease` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_cascadeRelease = value["CascadeRelease"].GetBool();
        m_cascadeReleaseHasBeenSet = true;
    }

    if (value.HasMember("InternetServiceProvider") && !value["InternetServiceProvider"].IsNull())
    {
        if (!value["InternetServiceProvider"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address.InternetServiceProvider` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internetServiceProvider = string(value["InternetServiceProvider"].GetString());
        m_internetServiceProviderHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Address.Bandwidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetUint64();
        m_bandwidthHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Address::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_addressIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressId.c_str(), allocator).Move(), allocator);
    }

    if (m_addressNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressName.c_str(), allocator).Move(), allocator);
    }

    if (m_addressStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_addressIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressIp.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_networkInterfaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkInterfaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkInterfaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_privateAddressIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateAddressIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateAddressIp.c_str(), allocator).Move(), allocator);
    }

    if (m_isArrearsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsArrears";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isArrears, allocator);
    }

    if (m_isBlockedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsBlocked";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isBlocked, allocator);
    }

    if (m_isEipDirectConnectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEipDirectConnection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEipDirectConnection, allocator);
    }

    if (m_addressTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressType.c_str(), allocator).Move(), allocator);
    }

    if (m_cascadeReleaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CascadeRelease";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cascadeRelease, allocator);
    }

    if (m_internetServiceProviderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetServiceProvider";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internetServiceProvider.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

}


string Address::GetAddressId() const
{
    return m_addressId;
}

void Address::SetAddressId(const string& _addressId)
{
    m_addressId = _addressId;
    m_addressIdHasBeenSet = true;
}

bool Address::AddressIdHasBeenSet() const
{
    return m_addressIdHasBeenSet;
}

string Address::GetAddressName() const
{
    return m_addressName;
}

void Address::SetAddressName(const string& _addressName)
{
    m_addressName = _addressName;
    m_addressNameHasBeenSet = true;
}

bool Address::AddressNameHasBeenSet() const
{
    return m_addressNameHasBeenSet;
}

string Address::GetAddressStatus() const
{
    return m_addressStatus;
}

void Address::SetAddressStatus(const string& _addressStatus)
{
    m_addressStatus = _addressStatus;
    m_addressStatusHasBeenSet = true;
}

bool Address::AddressStatusHasBeenSet() const
{
    return m_addressStatusHasBeenSet;
}

string Address::GetAddressIp() const
{
    return m_addressIp;
}

void Address::SetAddressIp(const string& _addressIp)
{
    m_addressIp = _addressIp;
    m_addressIpHasBeenSet = true;
}

bool Address::AddressIpHasBeenSet() const
{
    return m_addressIpHasBeenSet;
}

string Address::GetInstanceId() const
{
    return m_instanceId;
}

void Address::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool Address::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string Address::GetCreatedTime() const
{
    return m_createdTime;
}

void Address::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool Address::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string Address::GetNetworkInterfaceId() const
{
    return m_networkInterfaceId;
}

void Address::SetNetworkInterfaceId(const string& _networkInterfaceId)
{
    m_networkInterfaceId = _networkInterfaceId;
    m_networkInterfaceIdHasBeenSet = true;
}

bool Address::NetworkInterfaceIdHasBeenSet() const
{
    return m_networkInterfaceIdHasBeenSet;
}

string Address::GetPrivateAddressIp() const
{
    return m_privateAddressIp;
}

void Address::SetPrivateAddressIp(const string& _privateAddressIp)
{
    m_privateAddressIp = _privateAddressIp;
    m_privateAddressIpHasBeenSet = true;
}

bool Address::PrivateAddressIpHasBeenSet() const
{
    return m_privateAddressIpHasBeenSet;
}

bool Address::GetIsArrears() const
{
    return m_isArrears;
}

void Address::SetIsArrears(const bool& _isArrears)
{
    m_isArrears = _isArrears;
    m_isArrearsHasBeenSet = true;
}

bool Address::IsArrearsHasBeenSet() const
{
    return m_isArrearsHasBeenSet;
}

bool Address::GetIsBlocked() const
{
    return m_isBlocked;
}

void Address::SetIsBlocked(const bool& _isBlocked)
{
    m_isBlocked = _isBlocked;
    m_isBlockedHasBeenSet = true;
}

bool Address::IsBlockedHasBeenSet() const
{
    return m_isBlockedHasBeenSet;
}

bool Address::GetIsEipDirectConnection() const
{
    return m_isEipDirectConnection;
}

void Address::SetIsEipDirectConnection(const bool& _isEipDirectConnection)
{
    m_isEipDirectConnection = _isEipDirectConnection;
    m_isEipDirectConnectionHasBeenSet = true;
}

bool Address::IsEipDirectConnectionHasBeenSet() const
{
    return m_isEipDirectConnectionHasBeenSet;
}

string Address::GetAddressType() const
{
    return m_addressType;
}

void Address::SetAddressType(const string& _addressType)
{
    m_addressType = _addressType;
    m_addressTypeHasBeenSet = true;
}

bool Address::AddressTypeHasBeenSet() const
{
    return m_addressTypeHasBeenSet;
}

bool Address::GetCascadeRelease() const
{
    return m_cascadeRelease;
}

void Address::SetCascadeRelease(const bool& _cascadeRelease)
{
    m_cascadeRelease = _cascadeRelease;
    m_cascadeReleaseHasBeenSet = true;
}

bool Address::CascadeReleaseHasBeenSet() const
{
    return m_cascadeReleaseHasBeenSet;
}

string Address::GetInternetServiceProvider() const
{
    return m_internetServiceProvider;
}

void Address::SetInternetServiceProvider(const string& _internetServiceProvider)
{
    m_internetServiceProvider = _internetServiceProvider;
    m_internetServiceProviderHasBeenSet = true;
}

bool Address::InternetServiceProviderHasBeenSet() const
{
    return m_internetServiceProviderHasBeenSet;
}

uint64_t Address::GetBandwidth() const
{
    return m_bandwidth;
}

void Address::SetBandwidth(const uint64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool Address::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

string Address::GetPayMode() const
{
    return m_payMode;
}

void Address::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool Address::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

