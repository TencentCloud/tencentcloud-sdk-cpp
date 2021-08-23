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

#include <tencentcloud/bmeip/v20180625/model/EipInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmeip::V20180625::Model;
using namespace std;

EipInfo::EipInfo() :
    m_eipIdHasBeenSet(false),
    m_eipNameHasBeenSet(false),
    m_eipHasBeenSet(false),
    m_ispIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_arrearsHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceAliasHasBeenSet(false),
    m_freeAtHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_freeSecondHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_latestPayModeHasBeenSet(false),
    m_latestBandwidthHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_natIdHasBeenSet(false),
    m_natUidHasBeenSet(false),
    m_vpcIpHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_exclusiveHasBeenSet(false),
    m_vpcCidrHasBeenSet(false),
    m_aclIdHasBeenSet(false),
    m_aclNameHasBeenSet(false),
    m_hInstanceIdHasBeenSet(false),
    m_hInstanceAliasHasBeenSet(false)
{
}

CoreInternalOutcome EipInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EipId") && !value["EipId"].IsNull())
    {
        if (!value["EipId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EipInfo.EipId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eipId = string(value["EipId"].GetString());
        m_eipIdHasBeenSet = true;
    }

    if (value.HasMember("EipName") && !value["EipName"].IsNull())
    {
        if (!value["EipName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EipInfo.EipName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eipName = string(value["EipName"].GetString());
        m_eipNameHasBeenSet = true;
    }

    if (value.HasMember("Eip") && !value["Eip"].IsNull())
    {
        if (!value["Eip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EipInfo.Eip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eip = string(value["Eip"].GetString());
        m_eipHasBeenSet = true;
    }

    if (value.HasMember("IspId") && !value["IspId"].IsNull())
    {
        if (!value["IspId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EipInfo.IspId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ispId = value["IspId"].GetInt64();
        m_ispIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EipInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Arrears") && !value["Arrears"].IsNull())
    {
        if (!value["Arrears"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EipInfo.Arrears` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_arrears = value["Arrears"].GetInt64();
        m_arrearsHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EipInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceAlias") && !value["InstanceAlias"].IsNull())
    {
        if (!value["InstanceAlias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EipInfo.InstanceAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceAlias = string(value["InstanceAlias"].GetString());
        m_instanceAliasHasBeenSet = true;
    }

    if (value.HasMember("FreeAt") && !value["FreeAt"].IsNull())
    {
        if (!value["FreeAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EipInfo.FreeAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_freeAt = string(value["FreeAt"].GetString());
        m_freeAtHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EipInfo.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EipInfo.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("FreeSecond") && !value["FreeSecond"].IsNull())
    {
        if (!value["FreeSecond"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EipInfo.FreeSecond` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_freeSecond = value["FreeSecond"].GetInt64();
        m_freeSecondHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EipInfo.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EipInfo.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EipInfo.Bandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetInt64();
        m_bandwidthHasBeenSet = true;
    }

    if (value.HasMember("LatestPayMode") && !value["LatestPayMode"].IsNull())
    {
        if (!value["LatestPayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EipInfo.LatestPayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestPayMode = string(value["LatestPayMode"].GetString());
        m_latestPayModeHasBeenSet = true;
    }

    if (value.HasMember("LatestBandwidth") && !value["LatestBandwidth"].IsNull())
    {
        if (!value["LatestBandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EipInfo.LatestBandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_latestBandwidth = value["LatestBandwidth"].GetInt64();
        m_latestBandwidthHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EipInfo.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("NatId") && !value["NatId"].IsNull())
    {
        if (!value["NatId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EipInfo.NatId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_natId = value["NatId"].GetInt64();
        m_natIdHasBeenSet = true;
    }

    if (value.HasMember("NatUid") && !value["NatUid"].IsNull())
    {
        if (!value["NatUid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EipInfo.NatUid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_natUid = string(value["NatUid"].GetString());
        m_natUidHasBeenSet = true;
    }

    if (value.HasMember("VpcIp") && !value["VpcIp"].IsNull())
    {
        if (!value["VpcIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EipInfo.VpcIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcIp = string(value["VpcIp"].GetString());
        m_vpcIpHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EipInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("Exclusive") && !value["Exclusive"].IsNull())
    {
        if (!value["Exclusive"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EipInfo.Exclusive` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_exclusive = value["Exclusive"].GetInt64();
        m_exclusiveHasBeenSet = true;
    }

    if (value.HasMember("VpcCidr") && !value["VpcCidr"].IsNull())
    {
        if (!value["VpcCidr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EipInfo.VpcCidr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcCidr = string(value["VpcCidr"].GetString());
        m_vpcCidrHasBeenSet = true;
    }

    if (value.HasMember("AclId") && !value["AclId"].IsNull())
    {
        if (!value["AclId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EipInfo.AclId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aclId = string(value["AclId"].GetString());
        m_aclIdHasBeenSet = true;
    }

    if (value.HasMember("AclName") && !value["AclName"].IsNull())
    {
        if (!value["AclName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EipInfo.AclName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aclName = string(value["AclName"].GetString());
        m_aclNameHasBeenSet = true;
    }

    if (value.HasMember("HInstanceId") && !value["HInstanceId"].IsNull())
    {
        if (!value["HInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EipInfo.HInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hInstanceId = string(value["HInstanceId"].GetString());
        m_hInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("HInstanceAlias") && !value["HInstanceAlias"].IsNull())
    {
        if (!value["HInstanceAlias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EipInfo.HInstanceAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hInstanceAlias = string(value["HInstanceAlias"].GetString());
        m_hInstanceAliasHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EipInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eipIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eipId.c_str(), allocator).Move(), allocator);
    }

    if (m_eipNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eipName.c_str(), allocator).Move(), allocator);
    }

    if (m_eipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Eip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eip.c_str(), allocator).Move(), allocator);
    }

    if (m_ispIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IspId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ispId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_arrearsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Arrears";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_arrears, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_freeAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreeAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_freeAt.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_freeSecondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreeSecond";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_freeSecond, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_latestPayModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestPayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestPayMode.c_str(), allocator).Move(), allocator);
    }

    if (m_latestBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_latestBandwidth, allocator);
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_natIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_natId, allocator);
    }

    if (m_natUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatUid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_natUid.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcIp.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_exclusiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exclusive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exclusive, allocator);
    }

    if (m_vpcCidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcCidr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcCidr.c_str(), allocator).Move(), allocator);
    }

    if (m_aclIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AclId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aclId.c_str(), allocator).Move(), allocator);
    }

    if (m_aclNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AclName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aclName.c_str(), allocator).Move(), allocator);
    }

    if (m_hInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_hInstanceAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HInstanceAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hInstanceAlias.c_str(), allocator).Move(), allocator);
    }

}


string EipInfo::GetEipId() const
{
    return m_eipId;
}

void EipInfo::SetEipId(const string& _eipId)
{
    m_eipId = _eipId;
    m_eipIdHasBeenSet = true;
}

bool EipInfo::EipIdHasBeenSet() const
{
    return m_eipIdHasBeenSet;
}

string EipInfo::GetEipName() const
{
    return m_eipName;
}

void EipInfo::SetEipName(const string& _eipName)
{
    m_eipName = _eipName;
    m_eipNameHasBeenSet = true;
}

bool EipInfo::EipNameHasBeenSet() const
{
    return m_eipNameHasBeenSet;
}

string EipInfo::GetEip() const
{
    return m_eip;
}

void EipInfo::SetEip(const string& _eip)
{
    m_eip = _eip;
    m_eipHasBeenSet = true;
}

bool EipInfo::EipHasBeenSet() const
{
    return m_eipHasBeenSet;
}

int64_t EipInfo::GetIspId() const
{
    return m_ispId;
}

void EipInfo::SetIspId(const int64_t& _ispId)
{
    m_ispId = _ispId;
    m_ispIdHasBeenSet = true;
}

bool EipInfo::IspIdHasBeenSet() const
{
    return m_ispIdHasBeenSet;
}

int64_t EipInfo::GetStatus() const
{
    return m_status;
}

void EipInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool EipInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t EipInfo::GetArrears() const
{
    return m_arrears;
}

void EipInfo::SetArrears(const int64_t& _arrears)
{
    m_arrears = _arrears;
    m_arrearsHasBeenSet = true;
}

bool EipInfo::ArrearsHasBeenSet() const
{
    return m_arrearsHasBeenSet;
}

string EipInfo::GetInstanceId() const
{
    return m_instanceId;
}

void EipInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool EipInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string EipInfo::GetInstanceAlias() const
{
    return m_instanceAlias;
}

void EipInfo::SetInstanceAlias(const string& _instanceAlias)
{
    m_instanceAlias = _instanceAlias;
    m_instanceAliasHasBeenSet = true;
}

bool EipInfo::InstanceAliasHasBeenSet() const
{
    return m_instanceAliasHasBeenSet;
}

string EipInfo::GetFreeAt() const
{
    return m_freeAt;
}

void EipInfo::SetFreeAt(const string& _freeAt)
{
    m_freeAt = _freeAt;
    m_freeAtHasBeenSet = true;
}

bool EipInfo::FreeAtHasBeenSet() const
{
    return m_freeAtHasBeenSet;
}

string EipInfo::GetCreatedAt() const
{
    return m_createdAt;
}

void EipInfo::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool EipInfo::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string EipInfo::GetUpdatedAt() const
{
    return m_updatedAt;
}

void EipInfo::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool EipInfo::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

int64_t EipInfo::GetFreeSecond() const
{
    return m_freeSecond;
}

void EipInfo::SetFreeSecond(const int64_t& _freeSecond)
{
    m_freeSecond = _freeSecond;
    m_freeSecondHasBeenSet = true;
}

bool EipInfo::FreeSecondHasBeenSet() const
{
    return m_freeSecondHasBeenSet;
}

int64_t EipInfo::GetType() const
{
    return m_type;
}

void EipInfo::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool EipInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string EipInfo::GetPayMode() const
{
    return m_payMode;
}

void EipInfo::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool EipInfo::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t EipInfo::GetBandwidth() const
{
    return m_bandwidth;
}

void EipInfo::SetBandwidth(const int64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool EipInfo::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

string EipInfo::GetLatestPayMode() const
{
    return m_latestPayMode;
}

void EipInfo::SetLatestPayMode(const string& _latestPayMode)
{
    m_latestPayMode = _latestPayMode;
    m_latestPayModeHasBeenSet = true;
}

bool EipInfo::LatestPayModeHasBeenSet() const
{
    return m_latestPayModeHasBeenSet;
}

int64_t EipInfo::GetLatestBandwidth() const
{
    return m_latestBandwidth;
}

void EipInfo::SetLatestBandwidth(const int64_t& _latestBandwidth)
{
    m_latestBandwidth = _latestBandwidth;
    m_latestBandwidthHasBeenSet = true;
}

bool EipInfo::LatestBandwidthHasBeenSet() const
{
    return m_latestBandwidthHasBeenSet;
}

string EipInfo::GetVpcName() const
{
    return m_vpcName;
}

void EipInfo::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool EipInfo::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

int64_t EipInfo::GetNatId() const
{
    return m_natId;
}

void EipInfo::SetNatId(const int64_t& _natId)
{
    m_natId = _natId;
    m_natIdHasBeenSet = true;
}

bool EipInfo::NatIdHasBeenSet() const
{
    return m_natIdHasBeenSet;
}

string EipInfo::GetNatUid() const
{
    return m_natUid;
}

void EipInfo::SetNatUid(const string& _natUid)
{
    m_natUid = _natUid;
    m_natUidHasBeenSet = true;
}

bool EipInfo::NatUidHasBeenSet() const
{
    return m_natUidHasBeenSet;
}

string EipInfo::GetVpcIp() const
{
    return m_vpcIp;
}

void EipInfo::SetVpcIp(const string& _vpcIp)
{
    m_vpcIp = _vpcIp;
    m_vpcIpHasBeenSet = true;
}

bool EipInfo::VpcIpHasBeenSet() const
{
    return m_vpcIpHasBeenSet;
}

string EipInfo::GetVpcId() const
{
    return m_vpcId;
}

void EipInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool EipInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

int64_t EipInfo::GetExclusive() const
{
    return m_exclusive;
}

void EipInfo::SetExclusive(const int64_t& _exclusive)
{
    m_exclusive = _exclusive;
    m_exclusiveHasBeenSet = true;
}

bool EipInfo::ExclusiveHasBeenSet() const
{
    return m_exclusiveHasBeenSet;
}

string EipInfo::GetVpcCidr() const
{
    return m_vpcCidr;
}

void EipInfo::SetVpcCidr(const string& _vpcCidr)
{
    m_vpcCidr = _vpcCidr;
    m_vpcCidrHasBeenSet = true;
}

bool EipInfo::VpcCidrHasBeenSet() const
{
    return m_vpcCidrHasBeenSet;
}

string EipInfo::GetAclId() const
{
    return m_aclId;
}

void EipInfo::SetAclId(const string& _aclId)
{
    m_aclId = _aclId;
    m_aclIdHasBeenSet = true;
}

bool EipInfo::AclIdHasBeenSet() const
{
    return m_aclIdHasBeenSet;
}

string EipInfo::GetAclName() const
{
    return m_aclName;
}

void EipInfo::SetAclName(const string& _aclName)
{
    m_aclName = _aclName;
    m_aclNameHasBeenSet = true;
}

bool EipInfo::AclNameHasBeenSet() const
{
    return m_aclNameHasBeenSet;
}

string EipInfo::GetHInstanceId() const
{
    return m_hInstanceId;
}

void EipInfo::SetHInstanceId(const string& _hInstanceId)
{
    m_hInstanceId = _hInstanceId;
    m_hInstanceIdHasBeenSet = true;
}

bool EipInfo::HInstanceIdHasBeenSet() const
{
    return m_hInstanceIdHasBeenSet;
}

string EipInfo::GetHInstanceAlias() const
{
    return m_hInstanceAlias;
}

void EipInfo::SetHInstanceAlias(const string& _hInstanceAlias)
{
    m_hInstanceAlias = _hInstanceAlias;
    m_hInstanceAliasHasBeenSet = true;
}

bool EipInfo::HInstanceAliasHasBeenSet() const
{
    return m_hInstanceAliasHasBeenSet;
}

