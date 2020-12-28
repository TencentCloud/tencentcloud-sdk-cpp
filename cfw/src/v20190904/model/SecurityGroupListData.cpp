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

#include <tencentcloud/cfw/v20190904/model/SecurityGroupListData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace rapidjson;
using namespace std;

SecurityGroupListData::SecurityGroupListData() :
    m_idHasBeenSet(false),
    m_orderIndexHasBeenSet(false),
    m_sourceIdHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_targetIdHasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_portHasBeenSet(false),
    m_strategyHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isNewHasBeenSet(false),
    m_bothWayHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_cidrHasBeenSet(false)
{
}

CoreInternalOutcome SecurityGroupListData::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupListData.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("OrderIndex") && !value["OrderIndex"].IsNull())
    {
        if (!value["OrderIndex"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupListData.OrderIndex` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_orderIndex = value["OrderIndex"].GetUint64();
        m_orderIndexHasBeenSet = true;
    }

    if (value.HasMember("SourceId") && !value["SourceId"].IsNull())
    {
        if (!value["SourceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupListData.SourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceId = string(value["SourceId"].GetString());
        m_sourceIdHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupListData.SourceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = value["SourceType"].GetUint64();
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("TargetId") && !value["TargetId"].IsNull())
    {
        if (!value["TargetId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupListData.TargetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetId = string(value["TargetId"].GetString());
        m_targetIdHasBeenSet = true;
    }

    if (value.HasMember("TargetType") && !value["TargetType"].IsNull())
    {
        if (!value["TargetType"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupListData.TargetType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_targetType = value["TargetType"].GetUint64();
        m_targetTypeHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupListData.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupListData.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Strategy") && !value["Strategy"].IsNull())
    {
        if (!value["Strategy"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupListData.Strategy` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_strategy = value["Strategy"].GetUint64();
        m_strategyHasBeenSet = true;
    }

    if (value.HasMember("Detail") && !value["Detail"].IsNull())
    {
        if (!value["Detail"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupListData.Detail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detail = string(value["Detail"].GetString());
        m_detailHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupListData.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("IsNew") && !value["IsNew"].IsNull())
    {
        if (!value["IsNew"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupListData.IsNew` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isNew = value["IsNew"].GetUint64();
        m_isNewHasBeenSet = true;
    }

    if (value.HasMember("BothWay") && !value["BothWay"].IsNull())
    {
        if (!value["BothWay"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupListData.BothWay` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bothWay = value["BothWay"].GetUint64();
        m_bothWayHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupListData.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupListData.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupListData.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupListData.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("PrivateIp") && !value["PrivateIp"].IsNull())
    {
        if (!value["PrivateIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupListData.PrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIp = string(value["PrivateIp"].GetString());
        m_privateIpHasBeenSet = true;
    }

    if (value.HasMember("Cidr") && !value["Cidr"].IsNull())
    {
        if (!value["Cidr"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupListData.Cidr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidr = string(value["Cidr"].GetString());
        m_cidrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityGroupListData::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_orderIndexHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OrderIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orderIndex, allocator);
    }

    if (m_sourceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_sourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceType, allocator);
    }

    if (m_targetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TargetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_targetId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TargetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetType, allocator);
    }

    if (m_protocolHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_port.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Strategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strategy, allocator);
    }

    if (m_detailHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_detail.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_isNewHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsNew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNew, allocator);
    }

    if (m_bothWayHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BothWay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bothWay, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_publicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PrivateIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_privateIp.c_str(), allocator).Move(), allocator);
    }

    if (m_cidrHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Cidr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cidr.c_str(), allocator).Move(), allocator);
    }

}


uint64_t SecurityGroupListData::GetId() const
{
    return m_id;
}

void SecurityGroupListData::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool SecurityGroupListData::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t SecurityGroupListData::GetOrderIndex() const
{
    return m_orderIndex;
}

void SecurityGroupListData::SetOrderIndex(const uint64_t& _orderIndex)
{
    m_orderIndex = _orderIndex;
    m_orderIndexHasBeenSet = true;
}

bool SecurityGroupListData::OrderIndexHasBeenSet() const
{
    return m_orderIndexHasBeenSet;
}

string SecurityGroupListData::GetSourceId() const
{
    return m_sourceId;
}

void SecurityGroupListData::SetSourceId(const string& _sourceId)
{
    m_sourceId = _sourceId;
    m_sourceIdHasBeenSet = true;
}

bool SecurityGroupListData::SourceIdHasBeenSet() const
{
    return m_sourceIdHasBeenSet;
}

uint64_t SecurityGroupListData::GetSourceType() const
{
    return m_sourceType;
}

void SecurityGroupListData::SetSourceType(const uint64_t& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool SecurityGroupListData::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string SecurityGroupListData::GetTargetId() const
{
    return m_targetId;
}

void SecurityGroupListData::SetTargetId(const string& _targetId)
{
    m_targetId = _targetId;
    m_targetIdHasBeenSet = true;
}

bool SecurityGroupListData::TargetIdHasBeenSet() const
{
    return m_targetIdHasBeenSet;
}

uint64_t SecurityGroupListData::GetTargetType() const
{
    return m_targetType;
}

void SecurityGroupListData::SetTargetType(const uint64_t& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool SecurityGroupListData::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}

string SecurityGroupListData::GetProtocol() const
{
    return m_protocol;
}

void SecurityGroupListData::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool SecurityGroupListData::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string SecurityGroupListData::GetPort() const
{
    return m_port;
}

void SecurityGroupListData::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool SecurityGroupListData::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

uint64_t SecurityGroupListData::GetStrategy() const
{
    return m_strategy;
}

void SecurityGroupListData::SetStrategy(const uint64_t& _strategy)
{
    m_strategy = _strategy;
    m_strategyHasBeenSet = true;
}

bool SecurityGroupListData::StrategyHasBeenSet() const
{
    return m_strategyHasBeenSet;
}

string SecurityGroupListData::GetDetail() const
{
    return m_detail;
}

void SecurityGroupListData::SetDetail(const string& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool SecurityGroupListData::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

uint64_t SecurityGroupListData::GetStatus() const
{
    return m_status;
}

void SecurityGroupListData::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SecurityGroupListData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t SecurityGroupListData::GetIsNew() const
{
    return m_isNew;
}

void SecurityGroupListData::SetIsNew(const uint64_t& _isNew)
{
    m_isNew = _isNew;
    m_isNewHasBeenSet = true;
}

bool SecurityGroupListData::IsNewHasBeenSet() const
{
    return m_isNewHasBeenSet;
}

uint64_t SecurityGroupListData::GetBothWay() const
{
    return m_bothWay;
}

void SecurityGroupListData::SetBothWay(const uint64_t& _bothWay)
{
    m_bothWay = _bothWay;
    m_bothWayHasBeenSet = true;
}

bool SecurityGroupListData::BothWayHasBeenSet() const
{
    return m_bothWayHasBeenSet;
}

string SecurityGroupListData::GetVpcId() const
{
    return m_vpcId;
}

void SecurityGroupListData::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool SecurityGroupListData::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string SecurityGroupListData::GetSubnetId() const
{
    return m_subnetId;
}

void SecurityGroupListData::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool SecurityGroupListData::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string SecurityGroupListData::GetInstanceName() const
{
    return m_instanceName;
}

void SecurityGroupListData::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool SecurityGroupListData::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string SecurityGroupListData::GetPublicIp() const
{
    return m_publicIp;
}

void SecurityGroupListData::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool SecurityGroupListData::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string SecurityGroupListData::GetPrivateIp() const
{
    return m_privateIp;
}

void SecurityGroupListData::SetPrivateIp(const string& _privateIp)
{
    m_privateIp = _privateIp;
    m_privateIpHasBeenSet = true;
}

bool SecurityGroupListData::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

string SecurityGroupListData::GetCidr() const
{
    return m_cidr;
}

void SecurityGroupListData::SetCidr(const string& _cidr)
{
    m_cidr = _cidr;
    m_cidrHasBeenSet = true;
}

bool SecurityGroupListData::CidrHasBeenSet() const
{
    return m_cidrHasBeenSet;
}

