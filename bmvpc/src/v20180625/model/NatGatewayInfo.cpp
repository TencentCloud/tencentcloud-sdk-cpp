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

#include <tencentcloud/bmvpc/v20180625/model/NatGatewayInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmvpc::V20180625::Model;
using namespace std;

NatGatewayInfo::NatGatewayInfo() :
    m_natIdHasBeenSet(false),
    m_natNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_productionStatusHasBeenSet(false),
    m_eipsHasBeenSet(false),
    m_maxConcurrentHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_exclusiveHasBeenSet(false),
    m_forwardModeHasBeenSet(false),
    m_vpcCidrBlockHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_intVpcIdHasBeenSet(false),
    m_natResourceIdHasBeenSet(false)
{
}

CoreInternalOutcome NatGatewayInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NatId") && !value["NatId"].IsNull())
    {
        if (!value["NatId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatGatewayInfo.NatId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_natId = string(value["NatId"].GetString());
        m_natIdHasBeenSet = true;
    }

    if (value.HasMember("NatName") && !value["NatName"].IsNull())
    {
        if (!value["NatName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatGatewayInfo.NatName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_natName = string(value["NatName"].GetString());
        m_natNameHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatGatewayInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatGatewayInfo.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("ProductionStatus") && !value["ProductionStatus"].IsNull())
    {
        if (!value["ProductionStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NatGatewayInfo.ProductionStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_productionStatus = value["ProductionStatus"].GetUint64();
        m_productionStatusHasBeenSet = true;
    }

    if (value.HasMember("Eips") && !value["Eips"].IsNull())
    {
        if (!value["Eips"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NatGatewayInfo.Eips` is not array type"));

        const rapidjson::Value &tmpValue = value["Eips"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_eips.push_back((*itr).GetString());
        }
        m_eipsHasBeenSet = true;
    }

    if (value.HasMember("MaxConcurrent") && !value["MaxConcurrent"].IsNull())
    {
        if (!value["MaxConcurrent"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NatGatewayInfo.MaxConcurrent` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxConcurrent = value["MaxConcurrent"].GetUint64();
        m_maxConcurrentHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatGatewayInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("Exclusive") && !value["Exclusive"].IsNull())
    {
        if (!value["Exclusive"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NatGatewayInfo.Exclusive` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_exclusive = value["Exclusive"].GetUint64();
        m_exclusiveHasBeenSet = true;
    }

    if (value.HasMember("ForwardMode") && !value["ForwardMode"].IsNull())
    {
        if (!value["ForwardMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NatGatewayInfo.ForwardMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_forwardMode = value["ForwardMode"].GetUint64();
        m_forwardModeHasBeenSet = true;
    }

    if (value.HasMember("VpcCidrBlock") && !value["VpcCidrBlock"].IsNull())
    {
        if (!value["VpcCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatGatewayInfo.VpcCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcCidrBlock = string(value["VpcCidrBlock"].GetString());
        m_vpcCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatGatewayInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatGatewayInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NatGatewayInfo.State` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetUint64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("IntVpcId") && !value["IntVpcId"].IsNull())
    {
        if (!value["IntVpcId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NatGatewayInfo.IntVpcId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_intVpcId = value["IntVpcId"].GetUint64();
        m_intVpcIdHasBeenSet = true;
    }

    if (value.HasMember("NatResourceId") && !value["NatResourceId"].IsNull())
    {
        if (!value["NatResourceId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NatGatewayInfo.NatResourceId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_natResourceId = value["NatResourceId"].GetUint64();
        m_natResourceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NatGatewayInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_productionStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductionStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_productionStatus, allocator);
    }

    if (m_eipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Eips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_eips.begin(); itr != m_eips.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_maxConcurrentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConcurrent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxConcurrent, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_exclusiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exclusive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exclusive, allocator);
    }

    if (m_forwardModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_forwardMode, allocator);
    }

    if (m_vpcCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_intVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intVpcId, allocator);
    }

    if (m_natResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_natResourceId, allocator);
    }

}


string NatGatewayInfo::GetNatId() const
{
    return m_natId;
}

void NatGatewayInfo::SetNatId(const string& _natId)
{
    m_natId = _natId;
    m_natIdHasBeenSet = true;
}

bool NatGatewayInfo::NatIdHasBeenSet() const
{
    return m_natIdHasBeenSet;
}

string NatGatewayInfo::GetNatName() const
{
    return m_natName;
}

void NatGatewayInfo::SetNatName(const string& _natName)
{
    m_natName = _natName;
    m_natNameHasBeenSet = true;
}

bool NatGatewayInfo::NatNameHasBeenSet() const
{
    return m_natNameHasBeenSet;
}

string NatGatewayInfo::GetVpcId() const
{
    return m_vpcId;
}

void NatGatewayInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool NatGatewayInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string NatGatewayInfo::GetVpcName() const
{
    return m_vpcName;
}

void NatGatewayInfo::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool NatGatewayInfo::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

uint64_t NatGatewayInfo::GetProductionStatus() const
{
    return m_productionStatus;
}

void NatGatewayInfo::SetProductionStatus(const uint64_t& _productionStatus)
{
    m_productionStatus = _productionStatus;
    m_productionStatusHasBeenSet = true;
}

bool NatGatewayInfo::ProductionStatusHasBeenSet() const
{
    return m_productionStatusHasBeenSet;
}

vector<string> NatGatewayInfo::GetEips() const
{
    return m_eips;
}

void NatGatewayInfo::SetEips(const vector<string>& _eips)
{
    m_eips = _eips;
    m_eipsHasBeenSet = true;
}

bool NatGatewayInfo::EipsHasBeenSet() const
{
    return m_eipsHasBeenSet;
}

uint64_t NatGatewayInfo::GetMaxConcurrent() const
{
    return m_maxConcurrent;
}

void NatGatewayInfo::SetMaxConcurrent(const uint64_t& _maxConcurrent)
{
    m_maxConcurrent = _maxConcurrent;
    m_maxConcurrentHasBeenSet = true;
}

bool NatGatewayInfo::MaxConcurrentHasBeenSet() const
{
    return m_maxConcurrentHasBeenSet;
}

string NatGatewayInfo::GetZone() const
{
    return m_zone;
}

void NatGatewayInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool NatGatewayInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

uint64_t NatGatewayInfo::GetExclusive() const
{
    return m_exclusive;
}

void NatGatewayInfo::SetExclusive(const uint64_t& _exclusive)
{
    m_exclusive = _exclusive;
    m_exclusiveHasBeenSet = true;
}

bool NatGatewayInfo::ExclusiveHasBeenSet() const
{
    return m_exclusiveHasBeenSet;
}

uint64_t NatGatewayInfo::GetForwardMode() const
{
    return m_forwardMode;
}

void NatGatewayInfo::SetForwardMode(const uint64_t& _forwardMode)
{
    m_forwardMode = _forwardMode;
    m_forwardModeHasBeenSet = true;
}

bool NatGatewayInfo::ForwardModeHasBeenSet() const
{
    return m_forwardModeHasBeenSet;
}

string NatGatewayInfo::GetVpcCidrBlock() const
{
    return m_vpcCidrBlock;
}

void NatGatewayInfo::SetVpcCidrBlock(const string& _vpcCidrBlock)
{
    m_vpcCidrBlock = _vpcCidrBlock;
    m_vpcCidrBlockHasBeenSet = true;
}

bool NatGatewayInfo::VpcCidrBlockHasBeenSet() const
{
    return m_vpcCidrBlockHasBeenSet;
}

string NatGatewayInfo::GetType() const
{
    return m_type;
}

void NatGatewayInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool NatGatewayInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string NatGatewayInfo::GetCreateTime() const
{
    return m_createTime;
}

void NatGatewayInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool NatGatewayInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t NatGatewayInfo::GetState() const
{
    return m_state;
}

void NatGatewayInfo::SetState(const uint64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool NatGatewayInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

uint64_t NatGatewayInfo::GetIntVpcId() const
{
    return m_intVpcId;
}

void NatGatewayInfo::SetIntVpcId(const uint64_t& _intVpcId)
{
    m_intVpcId = _intVpcId;
    m_intVpcIdHasBeenSet = true;
}

bool NatGatewayInfo::IntVpcIdHasBeenSet() const
{
    return m_intVpcIdHasBeenSet;
}

uint64_t NatGatewayInfo::GetNatResourceId() const
{
    return m_natResourceId;
}

void NatGatewayInfo::SetNatResourceId(const uint64_t& _natResourceId)
{
    m_natResourceId = _natResourceId;
    m_natResourceIdHasBeenSet = true;
}

bool NatGatewayInfo::NatResourceIdHasBeenSet() const
{
    return m_natResourceIdHasBeenSet;
}

