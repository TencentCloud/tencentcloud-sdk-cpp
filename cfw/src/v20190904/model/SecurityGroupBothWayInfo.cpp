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

#include <tencentcloud/cfw/v20190904/model/SecurityGroupBothWayInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

SecurityGroupBothWayInfo::SecurityGroupBothWayInfo() :
    m_orderIndexHasBeenSet(false),
    m_sourceIdHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_targetIdHasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_portHasBeenSet(false),
    m_strategyHasBeenSet(false),
    m_directionHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isNewHasBeenSet(false),
    m_bothWayHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_cidrHasBeenSet(false),
    m_serviceTemplateIdHasBeenSet(false),
    m_protocolPortTypeHasBeenSet(false)
{
}

CoreInternalOutcome SecurityGroupBothWayInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrderIndex") && !value["OrderIndex"].IsNull())
    {
        if (!value["OrderIndex"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupBothWayInfo.OrderIndex` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_orderIndex = value["OrderIndex"].GetUint64();
        m_orderIndexHasBeenSet = true;
    }

    if (value.HasMember("SourceId") && !value["SourceId"].IsNull())
    {
        if (!value["SourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupBothWayInfo.SourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceId = string(value["SourceId"].GetString());
        m_sourceIdHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupBothWayInfo.SourceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = value["SourceType"].GetUint64();
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("TargetId") && !value["TargetId"].IsNull())
    {
        if (!value["TargetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupBothWayInfo.TargetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetId = string(value["TargetId"].GetString());
        m_targetIdHasBeenSet = true;
    }

    if (value.HasMember("TargetType") && !value["TargetType"].IsNull())
    {
        if (!value["TargetType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupBothWayInfo.TargetType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_targetType = value["TargetType"].GetUint64();
        m_targetTypeHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupBothWayInfo.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupBothWayInfo.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Strategy") && !value["Strategy"].IsNull())
    {
        if (!value["Strategy"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupBothWayInfo.Strategy` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_strategy = value["Strategy"].GetUint64();
        m_strategyHasBeenSet = true;
    }

    if (value.HasMember("Direction") && !value["Direction"].IsNull())
    {
        if (!value["Direction"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupBothWayInfo.Direction` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_direction = value["Direction"].GetUint64();
        m_directionHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupBothWayInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Detail") && !value["Detail"].IsNull())
    {
        if (!value["Detail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupBothWayInfo.Detail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detail = string(value["Detail"].GetString());
        m_detailHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupBothWayInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("IsNew") && !value["IsNew"].IsNull())
    {
        if (!value["IsNew"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupBothWayInfo.IsNew` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isNew = value["IsNew"].GetUint64();
        m_isNewHasBeenSet = true;
    }

    if (value.HasMember("BothWay") && !value["BothWay"].IsNull())
    {
        if (!value["BothWay"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupBothWayInfo.BothWay` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bothWay = value["BothWay"].GetUint64();
        m_bothWayHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupBothWayInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupBothWayInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupBothWayInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupBothWayInfo.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("PrivateIp") && !value["PrivateIp"].IsNull())
    {
        if (!value["PrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupBothWayInfo.PrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIp = string(value["PrivateIp"].GetString());
        m_privateIpHasBeenSet = true;
    }

    if (value.HasMember("Cidr") && !value["Cidr"].IsNull())
    {
        if (!value["Cidr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupBothWayInfo.Cidr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidr = string(value["Cidr"].GetString());
        m_cidrHasBeenSet = true;
    }

    if (value.HasMember("ServiceTemplateId") && !value["ServiceTemplateId"].IsNull())
    {
        if (!value["ServiceTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupBothWayInfo.ServiceTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceTemplateId = string(value["ServiceTemplateId"].GetString());
        m_serviceTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("ProtocolPortType") && !value["ProtocolPortType"].IsNull())
    {
        if (!value["ProtocolPortType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupBothWayInfo.ProtocolPortType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protocolPortType = value["ProtocolPortType"].GetUint64();
        m_protocolPortTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityGroupBothWayInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_orderIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orderIndex, allocator);
    }

    if (m_sourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceType, allocator);
    }

    if (m_targetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetType, allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Strategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strategy, allocator);
    }

    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_direction, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detail.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_isNewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNew, allocator);
    }

    if (m_bothWayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BothWay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bothWay, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIp.c_str(), allocator).Move(), allocator);
    }

    if (m_cidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cidr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cidr.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolPortTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtocolPortType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protocolPortType, allocator);
    }

}


uint64_t SecurityGroupBothWayInfo::GetOrderIndex() const
{
    return m_orderIndex;
}

void SecurityGroupBothWayInfo::SetOrderIndex(const uint64_t& _orderIndex)
{
    m_orderIndex = _orderIndex;
    m_orderIndexHasBeenSet = true;
}

bool SecurityGroupBothWayInfo::OrderIndexHasBeenSet() const
{
    return m_orderIndexHasBeenSet;
}

string SecurityGroupBothWayInfo::GetSourceId() const
{
    return m_sourceId;
}

void SecurityGroupBothWayInfo::SetSourceId(const string& _sourceId)
{
    m_sourceId = _sourceId;
    m_sourceIdHasBeenSet = true;
}

bool SecurityGroupBothWayInfo::SourceIdHasBeenSet() const
{
    return m_sourceIdHasBeenSet;
}

uint64_t SecurityGroupBothWayInfo::GetSourceType() const
{
    return m_sourceType;
}

void SecurityGroupBothWayInfo::SetSourceType(const uint64_t& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool SecurityGroupBothWayInfo::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string SecurityGroupBothWayInfo::GetTargetId() const
{
    return m_targetId;
}

void SecurityGroupBothWayInfo::SetTargetId(const string& _targetId)
{
    m_targetId = _targetId;
    m_targetIdHasBeenSet = true;
}

bool SecurityGroupBothWayInfo::TargetIdHasBeenSet() const
{
    return m_targetIdHasBeenSet;
}

uint64_t SecurityGroupBothWayInfo::GetTargetType() const
{
    return m_targetType;
}

void SecurityGroupBothWayInfo::SetTargetType(const uint64_t& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool SecurityGroupBothWayInfo::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}

string SecurityGroupBothWayInfo::GetProtocol() const
{
    return m_protocol;
}

void SecurityGroupBothWayInfo::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool SecurityGroupBothWayInfo::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string SecurityGroupBothWayInfo::GetPort() const
{
    return m_port;
}

void SecurityGroupBothWayInfo::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool SecurityGroupBothWayInfo::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

uint64_t SecurityGroupBothWayInfo::GetStrategy() const
{
    return m_strategy;
}

void SecurityGroupBothWayInfo::SetStrategy(const uint64_t& _strategy)
{
    m_strategy = _strategy;
    m_strategyHasBeenSet = true;
}

bool SecurityGroupBothWayInfo::StrategyHasBeenSet() const
{
    return m_strategyHasBeenSet;
}

uint64_t SecurityGroupBothWayInfo::GetDirection() const
{
    return m_direction;
}

void SecurityGroupBothWayInfo::SetDirection(const uint64_t& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool SecurityGroupBothWayInfo::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

string SecurityGroupBothWayInfo::GetRegion() const
{
    return m_region;
}

void SecurityGroupBothWayInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool SecurityGroupBothWayInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string SecurityGroupBothWayInfo::GetDetail() const
{
    return m_detail;
}

void SecurityGroupBothWayInfo::SetDetail(const string& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool SecurityGroupBothWayInfo::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

uint64_t SecurityGroupBothWayInfo::GetStatus() const
{
    return m_status;
}

void SecurityGroupBothWayInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SecurityGroupBothWayInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t SecurityGroupBothWayInfo::GetIsNew() const
{
    return m_isNew;
}

void SecurityGroupBothWayInfo::SetIsNew(const uint64_t& _isNew)
{
    m_isNew = _isNew;
    m_isNewHasBeenSet = true;
}

bool SecurityGroupBothWayInfo::IsNewHasBeenSet() const
{
    return m_isNewHasBeenSet;
}

uint64_t SecurityGroupBothWayInfo::GetBothWay() const
{
    return m_bothWay;
}

void SecurityGroupBothWayInfo::SetBothWay(const uint64_t& _bothWay)
{
    m_bothWay = _bothWay;
    m_bothWayHasBeenSet = true;
}

bool SecurityGroupBothWayInfo::BothWayHasBeenSet() const
{
    return m_bothWayHasBeenSet;
}

string SecurityGroupBothWayInfo::GetVpcId() const
{
    return m_vpcId;
}

void SecurityGroupBothWayInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool SecurityGroupBothWayInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string SecurityGroupBothWayInfo::GetSubnetId() const
{
    return m_subnetId;
}

void SecurityGroupBothWayInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool SecurityGroupBothWayInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string SecurityGroupBothWayInfo::GetInstanceName() const
{
    return m_instanceName;
}

void SecurityGroupBothWayInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool SecurityGroupBothWayInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string SecurityGroupBothWayInfo::GetPublicIp() const
{
    return m_publicIp;
}

void SecurityGroupBothWayInfo::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool SecurityGroupBothWayInfo::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string SecurityGroupBothWayInfo::GetPrivateIp() const
{
    return m_privateIp;
}

void SecurityGroupBothWayInfo::SetPrivateIp(const string& _privateIp)
{
    m_privateIp = _privateIp;
    m_privateIpHasBeenSet = true;
}

bool SecurityGroupBothWayInfo::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

string SecurityGroupBothWayInfo::GetCidr() const
{
    return m_cidr;
}

void SecurityGroupBothWayInfo::SetCidr(const string& _cidr)
{
    m_cidr = _cidr;
    m_cidrHasBeenSet = true;
}

bool SecurityGroupBothWayInfo::CidrHasBeenSet() const
{
    return m_cidrHasBeenSet;
}

string SecurityGroupBothWayInfo::GetServiceTemplateId() const
{
    return m_serviceTemplateId;
}

void SecurityGroupBothWayInfo::SetServiceTemplateId(const string& _serviceTemplateId)
{
    m_serviceTemplateId = _serviceTemplateId;
    m_serviceTemplateIdHasBeenSet = true;
}

bool SecurityGroupBothWayInfo::ServiceTemplateIdHasBeenSet() const
{
    return m_serviceTemplateIdHasBeenSet;
}

uint64_t SecurityGroupBothWayInfo::GetProtocolPortType() const
{
    return m_protocolPortType;
}

void SecurityGroupBothWayInfo::SetProtocolPortType(const uint64_t& _protocolPortType)
{
    m_protocolPortType = _protocolPortType;
    m_protocolPortTypeHasBeenSet = true;
}

bool SecurityGroupBothWayInfo::ProtocolPortTypeHasBeenSet() const
{
    return m_protocolPortTypeHasBeenSet;
}

