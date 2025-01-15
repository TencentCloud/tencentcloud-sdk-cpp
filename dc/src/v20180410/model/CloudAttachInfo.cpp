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

#include <tencentcloud/dc/v20180410/model/CloudAttachInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dc::V20180410::Model;
using namespace std;

CloudAttachInfo::CloudAttachInfo() :
    m_instanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_iapIdHasBeenSet(false),
    m_idcAddressHasBeenSet(false),
    m_idcTypeHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_telephoneHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_applyTimeHasBeenSet(false),
    m_readyTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_remarksHasBeenSet(false),
    m_regionStatusHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_customerAuthNameHasBeenSet(false),
    m_directConnectIdHasBeenSet(false),
    m_cloudAttachServiceGatewaysSupportHasBeenSet(false),
    m_bUpdateBandwidthHasBeenSet(false),
    m_arRegionHasBeenSet(false)
{
}

CoreInternalOutcome CloudAttachInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAttachInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAttachInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("IapId") && !value["IapId"].IsNull())
    {
        if (!value["IapId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAttachInfo.IapId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iapId = string(value["IapId"].GetString());
        m_iapIdHasBeenSet = true;
    }

    if (value.HasMember("IdcAddress") && !value["IdcAddress"].IsNull())
    {
        if (!value["IdcAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAttachInfo.IdcAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idcAddress = string(value["IdcAddress"].GetString());
        m_idcAddressHasBeenSet = true;
    }

    if (value.HasMember("IdcType") && !value["IdcType"].IsNull())
    {
        if (!value["IdcType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAttachInfo.IdcType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idcType = string(value["IdcType"].GetString());
        m_idcTypeHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAttachInfo.Bandwidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetUint64();
        m_bandwidthHasBeenSet = true;
    }

    if (value.HasMember("Telephone") && !value["Telephone"].IsNull())
    {
        if (!value["Telephone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAttachInfo.Telephone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_telephone = string(value["Telephone"].GetString());
        m_telephoneHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAttachInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ApplyTime") && !value["ApplyTime"].IsNull())
    {
        if (!value["ApplyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAttachInfo.ApplyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyTime = string(value["ApplyTime"].GetString());
        m_applyTimeHasBeenSet = true;
    }

    if (value.HasMember("ReadyTime") && !value["ReadyTime"].IsNull())
    {
        if (!value["ReadyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAttachInfo.ReadyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_readyTime = string(value["ReadyTime"].GetString());
        m_readyTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAttachInfo.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("Remarks") && !value["Remarks"].IsNull())
    {
        if (!value["Remarks"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAttachInfo.Remarks` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remarks = string(value["Remarks"].GetString());
        m_remarksHasBeenSet = true;
    }

    if (value.HasMember("RegionStatus") && !value["RegionStatus"].IsNull())
    {
        if (!value["RegionStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAttachInfo.RegionStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionStatus = string(value["RegionStatus"].GetString());
        m_regionStatusHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAttachInfo.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAttachInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("CustomerAuthName") && !value["CustomerAuthName"].IsNull())
    {
        if (!value["CustomerAuthName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAttachInfo.CustomerAuthName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerAuthName = string(value["CustomerAuthName"].GetString());
        m_customerAuthNameHasBeenSet = true;
    }

    if (value.HasMember("DirectConnectId") && !value["DirectConnectId"].IsNull())
    {
        if (!value["DirectConnectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAttachInfo.DirectConnectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_directConnectId = string(value["DirectConnectId"].GetString());
        m_directConnectIdHasBeenSet = true;
    }

    if (value.HasMember("CloudAttachServiceGatewaysSupport") && !value["CloudAttachServiceGatewaysSupport"].IsNull())
    {
        if (!value["CloudAttachServiceGatewaysSupport"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAttachInfo.CloudAttachServiceGatewaysSupport` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_cloudAttachServiceGatewaysSupport = value["CloudAttachServiceGatewaysSupport"].GetBool();
        m_cloudAttachServiceGatewaysSupportHasBeenSet = true;
    }

    if (value.HasMember("BUpdateBandwidth") && !value["BUpdateBandwidth"].IsNull())
    {
        if (!value["BUpdateBandwidth"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAttachInfo.BUpdateBandwidth` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_bUpdateBandwidth = value["BUpdateBandwidth"].GetBool();
        m_bUpdateBandwidthHasBeenSet = true;
    }

    if (value.HasMember("ArRegion") && !value["ArRegion"].IsNull())
    {
        if (!value["ArRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAttachInfo.ArRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_arRegion = string(value["ArRegion"].GetString());
        m_arRegionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudAttachInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_iapIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IapId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iapId.c_str(), allocator).Move(), allocator);
    }

    if (m_idcAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdcAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idcAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_idcTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdcType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idcType.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_telephoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Telephone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_telephone.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_applyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_readyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_readyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_remarksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remarks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remarks.c_str(), allocator).Move(), allocator);
    }

    if (m_regionStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_customerAuthNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerAuthName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerAuthName.c_str(), allocator).Move(), allocator);
    }

    if (m_directConnectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectConnectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_directConnectId.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudAttachServiceGatewaysSupportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudAttachServiceGatewaysSupport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cloudAttachServiceGatewaysSupport, allocator);
    }

    if (m_bUpdateBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BUpdateBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bUpdateBandwidth, allocator);
    }

    if (m_arRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_arRegion.c_str(), allocator).Move(), allocator);
    }

}


string CloudAttachInfo::GetInstanceId() const
{
    return m_instanceId;
}

void CloudAttachInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CloudAttachInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CloudAttachInfo::GetName() const
{
    return m_name;
}

void CloudAttachInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CloudAttachInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CloudAttachInfo::GetIapId() const
{
    return m_iapId;
}

void CloudAttachInfo::SetIapId(const string& _iapId)
{
    m_iapId = _iapId;
    m_iapIdHasBeenSet = true;
}

bool CloudAttachInfo::IapIdHasBeenSet() const
{
    return m_iapIdHasBeenSet;
}

string CloudAttachInfo::GetIdcAddress() const
{
    return m_idcAddress;
}

void CloudAttachInfo::SetIdcAddress(const string& _idcAddress)
{
    m_idcAddress = _idcAddress;
    m_idcAddressHasBeenSet = true;
}

bool CloudAttachInfo::IdcAddressHasBeenSet() const
{
    return m_idcAddressHasBeenSet;
}

string CloudAttachInfo::GetIdcType() const
{
    return m_idcType;
}

void CloudAttachInfo::SetIdcType(const string& _idcType)
{
    m_idcType = _idcType;
    m_idcTypeHasBeenSet = true;
}

bool CloudAttachInfo::IdcTypeHasBeenSet() const
{
    return m_idcTypeHasBeenSet;
}

uint64_t CloudAttachInfo::GetBandwidth() const
{
    return m_bandwidth;
}

void CloudAttachInfo::SetBandwidth(const uint64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool CloudAttachInfo::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

string CloudAttachInfo::GetTelephone() const
{
    return m_telephone;
}

void CloudAttachInfo::SetTelephone(const string& _telephone)
{
    m_telephone = _telephone;
    m_telephoneHasBeenSet = true;
}

bool CloudAttachInfo::TelephoneHasBeenSet() const
{
    return m_telephoneHasBeenSet;
}

string CloudAttachInfo::GetStatus() const
{
    return m_status;
}

void CloudAttachInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CloudAttachInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CloudAttachInfo::GetApplyTime() const
{
    return m_applyTime;
}

void CloudAttachInfo::SetApplyTime(const string& _applyTime)
{
    m_applyTime = _applyTime;
    m_applyTimeHasBeenSet = true;
}

bool CloudAttachInfo::ApplyTimeHasBeenSet() const
{
    return m_applyTimeHasBeenSet;
}

string CloudAttachInfo::GetReadyTime() const
{
    return m_readyTime;
}

void CloudAttachInfo::SetReadyTime(const string& _readyTime)
{
    m_readyTime = _readyTime;
    m_readyTimeHasBeenSet = true;
}

bool CloudAttachInfo::ReadyTimeHasBeenSet() const
{
    return m_readyTimeHasBeenSet;
}

string CloudAttachInfo::GetExpireTime() const
{
    return m_expireTime;
}

void CloudAttachInfo::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool CloudAttachInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string CloudAttachInfo::GetRemarks() const
{
    return m_remarks;
}

void CloudAttachInfo::SetRemarks(const string& _remarks)
{
    m_remarks = _remarks;
    m_remarksHasBeenSet = true;
}

bool CloudAttachInfo::RemarksHasBeenSet() const
{
    return m_remarksHasBeenSet;
}

string CloudAttachInfo::GetRegionStatus() const
{
    return m_regionStatus;
}

void CloudAttachInfo::SetRegionStatus(const string& _regionStatus)
{
    m_regionStatus = _regionStatus;
    m_regionStatusHasBeenSet = true;
}

bool CloudAttachInfo::RegionStatusHasBeenSet() const
{
    return m_regionStatusHasBeenSet;
}

string CloudAttachInfo::GetAppId() const
{
    return m_appId;
}

void CloudAttachInfo::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool CloudAttachInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string CloudAttachInfo::GetUin() const
{
    return m_uin;
}

void CloudAttachInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool CloudAttachInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string CloudAttachInfo::GetCustomerAuthName() const
{
    return m_customerAuthName;
}

void CloudAttachInfo::SetCustomerAuthName(const string& _customerAuthName)
{
    m_customerAuthName = _customerAuthName;
    m_customerAuthNameHasBeenSet = true;
}

bool CloudAttachInfo::CustomerAuthNameHasBeenSet() const
{
    return m_customerAuthNameHasBeenSet;
}

string CloudAttachInfo::GetDirectConnectId() const
{
    return m_directConnectId;
}

void CloudAttachInfo::SetDirectConnectId(const string& _directConnectId)
{
    m_directConnectId = _directConnectId;
    m_directConnectIdHasBeenSet = true;
}

bool CloudAttachInfo::DirectConnectIdHasBeenSet() const
{
    return m_directConnectIdHasBeenSet;
}

bool CloudAttachInfo::GetCloudAttachServiceGatewaysSupport() const
{
    return m_cloudAttachServiceGatewaysSupport;
}

void CloudAttachInfo::SetCloudAttachServiceGatewaysSupport(const bool& _cloudAttachServiceGatewaysSupport)
{
    m_cloudAttachServiceGatewaysSupport = _cloudAttachServiceGatewaysSupport;
    m_cloudAttachServiceGatewaysSupportHasBeenSet = true;
}

bool CloudAttachInfo::CloudAttachServiceGatewaysSupportHasBeenSet() const
{
    return m_cloudAttachServiceGatewaysSupportHasBeenSet;
}

bool CloudAttachInfo::GetBUpdateBandwidth() const
{
    return m_bUpdateBandwidth;
}

void CloudAttachInfo::SetBUpdateBandwidth(const bool& _bUpdateBandwidth)
{
    m_bUpdateBandwidth = _bUpdateBandwidth;
    m_bUpdateBandwidthHasBeenSet = true;
}

bool CloudAttachInfo::BUpdateBandwidthHasBeenSet() const
{
    return m_bUpdateBandwidthHasBeenSet;
}

string CloudAttachInfo::GetArRegion() const
{
    return m_arRegion;
}

void CloudAttachInfo::SetArRegion(const string& _arRegion)
{
    m_arRegion = _arRegion;
    m_arRegionHasBeenSet = true;
}

bool CloudAttachInfo::ArRegionHasBeenSet() const
{
    return m_arRegionHasBeenSet;
}

