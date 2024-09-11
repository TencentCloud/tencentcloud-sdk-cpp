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

#include <tencentcloud/cfw/v20190904/model/EdgeIpInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

EdgeIpInfo::EdgeIpInfo() :
    m_publicIpHasBeenSet(false),
    m_publicIpTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_intranetIpHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_portRiskCountHasBeenSet(false),
    m_lastScanTimeHasBeenSet(false),
    m_isRegionEipHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_isSerialRegionHasBeenSet(false),
    m_isPublicClbHasBeenSet(false),
    m_endpointBindEipNumHasBeenSet(false),
    m_scanModeHasBeenSet(false),
    m_scanStatusHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_endpointIdHasBeenSet(false),
    m_endpointIpHasBeenSet(false),
    m_switchModeHasBeenSet(false),
    m_switchWeightHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_overUsedStatusHasBeenSet(false)
{
}

CoreInternalOutcome EdgeIpInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeIpInfo.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("PublicIpType") && !value["PublicIpType"].IsNull())
    {
        if (!value["PublicIpType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeIpInfo.PublicIpType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_publicIpType = value["PublicIpType"].GetInt64();
        m_publicIpTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeIpInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeIpInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("IntranetIp") && !value["IntranetIp"].IsNull())
    {
        if (!value["IntranetIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeIpInfo.IntranetIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_intranetIp = string(value["IntranetIp"].GetString());
        m_intranetIpHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeIpInfo.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeIpInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("PortRiskCount") && !value["PortRiskCount"].IsNull())
    {
        if (!value["PortRiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeIpInfo.PortRiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_portRiskCount = value["PortRiskCount"].GetInt64();
        m_portRiskCountHasBeenSet = true;
    }

    if (value.HasMember("LastScanTime") && !value["LastScanTime"].IsNull())
    {
        if (!value["LastScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeIpInfo.LastScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanTime = string(value["LastScanTime"].GetString());
        m_lastScanTimeHasBeenSet = true;
    }

    if (value.HasMember("IsRegionEip") && !value["IsRegionEip"].IsNull())
    {
        if (!value["IsRegionEip"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeIpInfo.IsRegionEip` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isRegionEip = value["IsRegionEip"].GetInt64();
        m_isRegionEipHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeIpInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("IsSerialRegion") && !value["IsSerialRegion"].IsNull())
    {
        if (!value["IsSerialRegion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeIpInfo.IsSerialRegion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isSerialRegion = value["IsSerialRegion"].GetInt64();
        m_isSerialRegionHasBeenSet = true;
    }

    if (value.HasMember("IsPublicClb") && !value["IsPublicClb"].IsNull())
    {
        if (!value["IsPublicClb"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeIpInfo.IsPublicClb` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isPublicClb = value["IsPublicClb"].GetInt64();
        m_isPublicClbHasBeenSet = true;
    }

    if (value.HasMember("EndpointBindEipNum") && !value["EndpointBindEipNum"].IsNull())
    {
        if (!value["EndpointBindEipNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeIpInfo.EndpointBindEipNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endpointBindEipNum = value["EndpointBindEipNum"].GetInt64();
        m_endpointBindEipNumHasBeenSet = true;
    }

    if (value.HasMember("ScanMode") && !value["ScanMode"].IsNull())
    {
        if (!value["ScanMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeIpInfo.ScanMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanMode = string(value["ScanMode"].GetString());
        m_scanModeHasBeenSet = true;
    }

    if (value.HasMember("ScanStatus") && !value["ScanStatus"].IsNull())
    {
        if (!value["ScanStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeIpInfo.ScanStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scanStatus = value["ScanStatus"].GetInt64();
        m_scanStatusHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeIpInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("EndpointId") && !value["EndpointId"].IsNull())
    {
        if (!value["EndpointId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeIpInfo.EndpointId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpointId = string(value["EndpointId"].GetString());
        m_endpointIdHasBeenSet = true;
    }

    if (value.HasMember("EndpointIp") && !value["EndpointIp"].IsNull())
    {
        if (!value["EndpointIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeIpInfo.EndpointIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpointIp = string(value["EndpointIp"].GetString());
        m_endpointIpHasBeenSet = true;
    }

    if (value.HasMember("SwitchMode") && !value["SwitchMode"].IsNull())
    {
        if (!value["SwitchMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeIpInfo.SwitchMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_switchMode = value["SwitchMode"].GetUint64();
        m_switchModeHasBeenSet = true;
    }

    if (value.HasMember("SwitchWeight") && !value["SwitchWeight"].IsNull())
    {
        if (!value["SwitchWeight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeIpInfo.SwitchWeight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_switchWeight = value["SwitchWeight"].GetInt64();
        m_switchWeightHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeIpInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("OverUsedStatus") && !value["OverUsedStatus"].IsNull())
    {
        if (!value["OverUsedStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeIpInfo.OverUsedStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_overUsedStatus = value["OverUsedStatus"].GetInt64();
        m_overUsedStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EdgeIpInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIpType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publicIpType, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_intranetIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntranetIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_intranetIp.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_portRiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortRiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_portRiskCount, allocator);
    }

    if (m_lastScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastScanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isRegionEipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRegionEip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRegionEip, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_isSerialRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSerialRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSerialRegion, allocator);
    }

    if (m_isPublicClbHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPublicClb";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPublicClb, allocator);
    }

    if (m_endpointBindEipNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointBindEipNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endpointBindEipNum, allocator);
    }

    if (m_scanModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanMode.c_str(), allocator).Move(), allocator);
    }

    if (m_scanStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanStatus, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_endpointIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpointId.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpointIp.c_str(), allocator).Move(), allocator);
    }

    if (m_switchModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_switchMode, allocator);
    }

    if (m_switchWeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchWeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_switchWeight, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_overUsedStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OverUsedStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_overUsedStatus, allocator);
    }

}


string EdgeIpInfo::GetPublicIp() const
{
    return m_publicIp;
}

void EdgeIpInfo::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool EdgeIpInfo::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

int64_t EdgeIpInfo::GetPublicIpType() const
{
    return m_publicIpType;
}

void EdgeIpInfo::SetPublicIpType(const int64_t& _publicIpType)
{
    m_publicIpType = _publicIpType;
    m_publicIpTypeHasBeenSet = true;
}

bool EdgeIpInfo::PublicIpTypeHasBeenSet() const
{
    return m_publicIpTypeHasBeenSet;
}

string EdgeIpInfo::GetInstanceId() const
{
    return m_instanceId;
}

void EdgeIpInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool EdgeIpInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string EdgeIpInfo::GetInstanceName() const
{
    return m_instanceName;
}

void EdgeIpInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool EdgeIpInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string EdgeIpInfo::GetIntranetIp() const
{
    return m_intranetIp;
}

void EdgeIpInfo::SetIntranetIp(const string& _intranetIp)
{
    m_intranetIp = _intranetIp;
    m_intranetIpHasBeenSet = true;
}

bool EdgeIpInfo::IntranetIpHasBeenSet() const
{
    return m_intranetIpHasBeenSet;
}

string EdgeIpInfo::GetAssetType() const
{
    return m_assetType;
}

void EdgeIpInfo::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool EdgeIpInfo::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string EdgeIpInfo::GetRegion() const
{
    return m_region;
}

void EdgeIpInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool EdgeIpInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t EdgeIpInfo::GetPortRiskCount() const
{
    return m_portRiskCount;
}

void EdgeIpInfo::SetPortRiskCount(const int64_t& _portRiskCount)
{
    m_portRiskCount = _portRiskCount;
    m_portRiskCountHasBeenSet = true;
}

bool EdgeIpInfo::PortRiskCountHasBeenSet() const
{
    return m_portRiskCountHasBeenSet;
}

string EdgeIpInfo::GetLastScanTime() const
{
    return m_lastScanTime;
}

void EdgeIpInfo::SetLastScanTime(const string& _lastScanTime)
{
    m_lastScanTime = _lastScanTime;
    m_lastScanTimeHasBeenSet = true;
}

bool EdgeIpInfo::LastScanTimeHasBeenSet() const
{
    return m_lastScanTimeHasBeenSet;
}

int64_t EdgeIpInfo::GetIsRegionEip() const
{
    return m_isRegionEip;
}

void EdgeIpInfo::SetIsRegionEip(const int64_t& _isRegionEip)
{
    m_isRegionEip = _isRegionEip;
    m_isRegionEipHasBeenSet = true;
}

bool EdgeIpInfo::IsRegionEipHasBeenSet() const
{
    return m_isRegionEipHasBeenSet;
}

string EdgeIpInfo::GetVpcId() const
{
    return m_vpcId;
}

void EdgeIpInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool EdgeIpInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

int64_t EdgeIpInfo::GetIsSerialRegion() const
{
    return m_isSerialRegion;
}

void EdgeIpInfo::SetIsSerialRegion(const int64_t& _isSerialRegion)
{
    m_isSerialRegion = _isSerialRegion;
    m_isSerialRegionHasBeenSet = true;
}

bool EdgeIpInfo::IsSerialRegionHasBeenSet() const
{
    return m_isSerialRegionHasBeenSet;
}

int64_t EdgeIpInfo::GetIsPublicClb() const
{
    return m_isPublicClb;
}

void EdgeIpInfo::SetIsPublicClb(const int64_t& _isPublicClb)
{
    m_isPublicClb = _isPublicClb;
    m_isPublicClbHasBeenSet = true;
}

bool EdgeIpInfo::IsPublicClbHasBeenSet() const
{
    return m_isPublicClbHasBeenSet;
}

int64_t EdgeIpInfo::GetEndpointBindEipNum() const
{
    return m_endpointBindEipNum;
}

void EdgeIpInfo::SetEndpointBindEipNum(const int64_t& _endpointBindEipNum)
{
    m_endpointBindEipNum = _endpointBindEipNum;
    m_endpointBindEipNumHasBeenSet = true;
}

bool EdgeIpInfo::EndpointBindEipNumHasBeenSet() const
{
    return m_endpointBindEipNumHasBeenSet;
}

string EdgeIpInfo::GetScanMode() const
{
    return m_scanMode;
}

void EdgeIpInfo::SetScanMode(const string& _scanMode)
{
    m_scanMode = _scanMode;
    m_scanModeHasBeenSet = true;
}

bool EdgeIpInfo::ScanModeHasBeenSet() const
{
    return m_scanModeHasBeenSet;
}

int64_t EdgeIpInfo::GetScanStatus() const
{
    return m_scanStatus;
}

void EdgeIpInfo::SetScanStatus(const int64_t& _scanStatus)
{
    m_scanStatus = _scanStatus;
    m_scanStatusHasBeenSet = true;
}

bool EdgeIpInfo::ScanStatusHasBeenSet() const
{
    return m_scanStatusHasBeenSet;
}

int64_t EdgeIpInfo::GetStatus() const
{
    return m_status;
}

void EdgeIpInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool EdgeIpInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string EdgeIpInfo::GetEndpointId() const
{
    return m_endpointId;
}

void EdgeIpInfo::SetEndpointId(const string& _endpointId)
{
    m_endpointId = _endpointId;
    m_endpointIdHasBeenSet = true;
}

bool EdgeIpInfo::EndpointIdHasBeenSet() const
{
    return m_endpointIdHasBeenSet;
}

string EdgeIpInfo::GetEndpointIp() const
{
    return m_endpointIp;
}

void EdgeIpInfo::SetEndpointIp(const string& _endpointIp)
{
    m_endpointIp = _endpointIp;
    m_endpointIpHasBeenSet = true;
}

bool EdgeIpInfo::EndpointIpHasBeenSet() const
{
    return m_endpointIpHasBeenSet;
}

uint64_t EdgeIpInfo::GetSwitchMode() const
{
    return m_switchMode;
}

void EdgeIpInfo::SetSwitchMode(const uint64_t& _switchMode)
{
    m_switchMode = _switchMode;
    m_switchModeHasBeenSet = true;
}

bool EdgeIpInfo::SwitchModeHasBeenSet() const
{
    return m_switchModeHasBeenSet;
}

int64_t EdgeIpInfo::GetSwitchWeight() const
{
    return m_switchWeight;
}

void EdgeIpInfo::SetSwitchWeight(const int64_t& _switchWeight)
{
    m_switchWeight = _switchWeight;
    m_switchWeightHasBeenSet = true;
}

bool EdgeIpInfo::SwitchWeightHasBeenSet() const
{
    return m_switchWeightHasBeenSet;
}

string EdgeIpInfo::GetDomain() const
{
    return m_domain;
}

void EdgeIpInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool EdgeIpInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

int64_t EdgeIpInfo::GetOverUsedStatus() const
{
    return m_overUsedStatus;
}

void EdgeIpInfo::SetOverUsedStatus(const int64_t& _overUsedStatus)
{
    m_overUsedStatus = _overUsedStatus;
    m_overUsedStatusHasBeenSet = true;
}

bool EdgeIpInfo::OverUsedStatusHasBeenSet() const
{
    return m_overUsedStatusHasBeenSet;
}

