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

#include <tencentcloud/cfw/v20190904/model/NatSwitchListData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

NatSwitchListData::NatSwitchListData() :
    m_idHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_subnetNameHasBeenSet(false),
    m_subnetCidrHasBeenSet(false),
    m_routeIdHasBeenSet(false),
    m_routeNameHasBeenSet(false),
    m_cvmNumHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_natIdHasBeenSet(false),
    m_natNameHasBeenSet(false),
    m_natInsIdHasBeenSet(false),
    m_natInsNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_abnormalHasBeenSet(false),
    m_oRTableIdHasBeenSet(false),
    m_oRTableNameHasBeenSet(false),
    m_ohavipsHasBeenSet(false)
{
}

CoreInternalOutcome NatSwitchListData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NatSwitchListData.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatSwitchListData.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetName") && !value["SubnetName"].IsNull())
    {
        if (!value["SubnetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatSwitchListData.SubnetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetName = string(value["SubnetName"].GetString());
        m_subnetNameHasBeenSet = true;
    }

    if (value.HasMember("SubnetCidr") && !value["SubnetCidr"].IsNull())
    {
        if (!value["SubnetCidr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatSwitchListData.SubnetCidr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetCidr = string(value["SubnetCidr"].GetString());
        m_subnetCidrHasBeenSet = true;
    }

    if (value.HasMember("RouteId") && !value["RouteId"].IsNull())
    {
        if (!value["RouteId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatSwitchListData.RouteId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeId = string(value["RouteId"].GetString());
        m_routeIdHasBeenSet = true;
    }

    if (value.HasMember("RouteName") && !value["RouteName"].IsNull())
    {
        if (!value["RouteName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatSwitchListData.RouteName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeName = string(value["RouteName"].GetString());
        m_routeNameHasBeenSet = true;
    }

    if (value.HasMember("CvmNum") && !value["CvmNum"].IsNull())
    {
        if (!value["CvmNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NatSwitchListData.CvmNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cvmNum = value["CvmNum"].GetUint64();
        m_cvmNumHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatSwitchListData.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatSwitchListData.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NatSwitchListData.Enable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetUint64();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NatSwitchListData.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("NatId") && !value["NatId"].IsNull())
    {
        if (!value["NatId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatSwitchListData.NatId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_natId = string(value["NatId"].GetString());
        m_natIdHasBeenSet = true;
    }

    if (value.HasMember("NatName") && !value["NatName"].IsNull())
    {
        if (!value["NatName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatSwitchListData.NatName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_natName = string(value["NatName"].GetString());
        m_natNameHasBeenSet = true;
    }

    if (value.HasMember("NatInsId") && !value["NatInsId"].IsNull())
    {
        if (!value["NatInsId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatSwitchListData.NatInsId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_natInsId = string(value["NatInsId"].GetString());
        m_natInsIdHasBeenSet = true;
    }

    if (value.HasMember("NatInsName") && !value["NatInsName"].IsNull())
    {
        if (!value["NatInsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatSwitchListData.NatInsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_natInsName = string(value["NatInsName"].GetString());
        m_natInsNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatSwitchListData.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Abnormal") && !value["Abnormal"].IsNull())
    {
        if (!value["Abnormal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatSwitchListData.Abnormal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_abnormal = value["Abnormal"].GetInt64();
        m_abnormalHasBeenSet = true;
    }

    if (value.HasMember("ORTableId") && !value["ORTableId"].IsNull())
    {
        if (!value["ORTableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatSwitchListData.ORTableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oRTableId = string(value["ORTableId"].GetString());
        m_oRTableIdHasBeenSet = true;
    }

    if (value.HasMember("ORTableName") && !value["ORTableName"].IsNull())
    {
        if (!value["ORTableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatSwitchListData.ORTableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oRTableName = string(value["ORTableName"].GetString());
        m_oRTableNameHasBeenSet = true;
    }

    if (value.HasMember("Ohavips") && !value["Ohavips"].IsNull())
    {
        if (!value["Ohavips"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NatSwitchListData.Ohavips` is not array type"));

        const rapidjson::Value &tmpValue = value["Ohavips"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ohavips.push_back((*itr).GetString());
        }
        m_ohavipsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NatSwitchListData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetName.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetCidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetCidr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetCidr.c_str(), allocator).Move(), allocator);
    }

    if (m_routeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeId.c_str(), allocator).Move(), allocator);
    }

    if (m_routeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeName.c_str(), allocator).Move(), allocator);
    }

    if (m_cvmNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvmNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cvmNum, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_natIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_natId.c_str(), allocator).Move(), allocator);
    }

    if (m_natNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_natName.c_str(), allocator).Move(), allocator);
    }

    if (m_natInsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatInsId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_natInsId.c_str(), allocator).Move(), allocator);
    }

    if (m_natInsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatInsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_natInsName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_abnormalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Abnormal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_abnormal, allocator);
    }

    if (m_oRTableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ORTableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oRTableId.c_str(), allocator).Move(), allocator);
    }

    if (m_oRTableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ORTableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oRTableName.c_str(), allocator).Move(), allocator);
    }

    if (m_ohavipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ohavips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ohavips.begin(); itr != m_ohavips.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


uint64_t NatSwitchListData::GetId() const
{
    return m_id;
}

void NatSwitchListData::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool NatSwitchListData::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string NatSwitchListData::GetSubnetId() const
{
    return m_subnetId;
}

void NatSwitchListData::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool NatSwitchListData::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string NatSwitchListData::GetSubnetName() const
{
    return m_subnetName;
}

void NatSwitchListData::SetSubnetName(const string& _subnetName)
{
    m_subnetName = _subnetName;
    m_subnetNameHasBeenSet = true;
}

bool NatSwitchListData::SubnetNameHasBeenSet() const
{
    return m_subnetNameHasBeenSet;
}

string NatSwitchListData::GetSubnetCidr() const
{
    return m_subnetCidr;
}

void NatSwitchListData::SetSubnetCidr(const string& _subnetCidr)
{
    m_subnetCidr = _subnetCidr;
    m_subnetCidrHasBeenSet = true;
}

bool NatSwitchListData::SubnetCidrHasBeenSet() const
{
    return m_subnetCidrHasBeenSet;
}

string NatSwitchListData::GetRouteId() const
{
    return m_routeId;
}

void NatSwitchListData::SetRouteId(const string& _routeId)
{
    m_routeId = _routeId;
    m_routeIdHasBeenSet = true;
}

bool NatSwitchListData::RouteIdHasBeenSet() const
{
    return m_routeIdHasBeenSet;
}

string NatSwitchListData::GetRouteName() const
{
    return m_routeName;
}

void NatSwitchListData::SetRouteName(const string& _routeName)
{
    m_routeName = _routeName;
    m_routeNameHasBeenSet = true;
}

bool NatSwitchListData::RouteNameHasBeenSet() const
{
    return m_routeNameHasBeenSet;
}

uint64_t NatSwitchListData::GetCvmNum() const
{
    return m_cvmNum;
}

void NatSwitchListData::SetCvmNum(const uint64_t& _cvmNum)
{
    m_cvmNum = _cvmNum;
    m_cvmNumHasBeenSet = true;
}

bool NatSwitchListData::CvmNumHasBeenSet() const
{
    return m_cvmNumHasBeenSet;
}

string NatSwitchListData::GetVpcId() const
{
    return m_vpcId;
}

void NatSwitchListData::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool NatSwitchListData::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string NatSwitchListData::GetVpcName() const
{
    return m_vpcName;
}

void NatSwitchListData::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool NatSwitchListData::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

uint64_t NatSwitchListData::GetEnable() const
{
    return m_enable;
}

void NatSwitchListData::SetEnable(const uint64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool NatSwitchListData::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

uint64_t NatSwitchListData::GetStatus() const
{
    return m_status;
}

void NatSwitchListData::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool NatSwitchListData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string NatSwitchListData::GetNatId() const
{
    return m_natId;
}

void NatSwitchListData::SetNatId(const string& _natId)
{
    m_natId = _natId;
    m_natIdHasBeenSet = true;
}

bool NatSwitchListData::NatIdHasBeenSet() const
{
    return m_natIdHasBeenSet;
}

string NatSwitchListData::GetNatName() const
{
    return m_natName;
}

void NatSwitchListData::SetNatName(const string& _natName)
{
    m_natName = _natName;
    m_natNameHasBeenSet = true;
}

bool NatSwitchListData::NatNameHasBeenSet() const
{
    return m_natNameHasBeenSet;
}

string NatSwitchListData::GetNatInsId() const
{
    return m_natInsId;
}

void NatSwitchListData::SetNatInsId(const string& _natInsId)
{
    m_natInsId = _natInsId;
    m_natInsIdHasBeenSet = true;
}

bool NatSwitchListData::NatInsIdHasBeenSet() const
{
    return m_natInsIdHasBeenSet;
}

string NatSwitchListData::GetNatInsName() const
{
    return m_natInsName;
}

void NatSwitchListData::SetNatInsName(const string& _natInsName)
{
    m_natInsName = _natInsName;
    m_natInsNameHasBeenSet = true;
}

bool NatSwitchListData::NatInsNameHasBeenSet() const
{
    return m_natInsNameHasBeenSet;
}

string NatSwitchListData::GetRegion() const
{
    return m_region;
}

void NatSwitchListData::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool NatSwitchListData::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t NatSwitchListData::GetAbnormal() const
{
    return m_abnormal;
}

void NatSwitchListData::SetAbnormal(const int64_t& _abnormal)
{
    m_abnormal = _abnormal;
    m_abnormalHasBeenSet = true;
}

bool NatSwitchListData::AbnormalHasBeenSet() const
{
    return m_abnormalHasBeenSet;
}

string NatSwitchListData::GetORTableId() const
{
    return m_oRTableId;
}

void NatSwitchListData::SetORTableId(const string& _oRTableId)
{
    m_oRTableId = _oRTableId;
    m_oRTableIdHasBeenSet = true;
}

bool NatSwitchListData::ORTableIdHasBeenSet() const
{
    return m_oRTableIdHasBeenSet;
}

string NatSwitchListData::GetORTableName() const
{
    return m_oRTableName;
}

void NatSwitchListData::SetORTableName(const string& _oRTableName)
{
    m_oRTableName = _oRTableName;
    m_oRTableNameHasBeenSet = true;
}

bool NatSwitchListData::ORTableNameHasBeenSet() const
{
    return m_oRTableNameHasBeenSet;
}

vector<string> NatSwitchListData::GetOhavips() const
{
    return m_ohavips;
}

void NatSwitchListData::SetOhavips(const vector<string>& _ohavips)
{
    m_ohavips = _ohavips;
    m_ohavipsHasBeenSet = true;
}

bool NatSwitchListData::OhavipsHasBeenSet() const
{
    return m_ohavipsHasBeenSet;
}

