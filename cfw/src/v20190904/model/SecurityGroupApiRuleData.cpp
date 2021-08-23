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

#include <tencentcloud/cfw/v20190904/model/SecurityGroupApiRuleData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

SecurityGroupApiRuleData::SecurityGroupApiRuleData() :
    m_sourceIdHasBeenSet(false),
    m_targetIdHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_portHasBeenSet(false),
    m_strategyHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_orderIndexHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

CoreInternalOutcome SecurityGroupApiRuleData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceId") && !value["SourceId"].IsNull())
    {
        if (!value["SourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupApiRuleData.SourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceId = string(value["SourceId"].GetString());
        m_sourceIdHasBeenSet = true;
    }

    if (value.HasMember("TargetId") && !value["TargetId"].IsNull())
    {
        if (!value["TargetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupApiRuleData.TargetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetId = string(value["TargetId"].GetString());
        m_targetIdHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupApiRuleData.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupApiRuleData.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Strategy") && !value["Strategy"].IsNull())
    {
        if (!value["Strategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupApiRuleData.Strategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategy = string(value["Strategy"].GetString());
        m_strategyHasBeenSet = true;
    }

    if (value.HasMember("Detail") && !value["Detail"].IsNull())
    {
        if (!value["Detail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupApiRuleData.Detail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detail = string(value["Detail"].GetString());
        m_detailHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupApiRuleData.RuleType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = value["RuleType"].GetUint64();
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("OrderIndex") && !value["OrderIndex"].IsNull())
    {
        if (!value["OrderIndex"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupApiRuleData.OrderIndex` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_orderIndex = value["OrderIndex"].GetUint64();
        m_orderIndexHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupApiRuleData.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityGroupApiRuleData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetId.c_str(), allocator).Move(), allocator);
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
        value.AddMember(iKey, rapidjson::Value(m_strategy.c_str(), allocator).Move(), allocator);
    }

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detail.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleType, allocator);
    }

    if (m_orderIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orderIndex, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

}


string SecurityGroupApiRuleData::GetSourceId() const
{
    return m_sourceId;
}

void SecurityGroupApiRuleData::SetSourceId(const string& _sourceId)
{
    m_sourceId = _sourceId;
    m_sourceIdHasBeenSet = true;
}

bool SecurityGroupApiRuleData::SourceIdHasBeenSet() const
{
    return m_sourceIdHasBeenSet;
}

string SecurityGroupApiRuleData::GetTargetId() const
{
    return m_targetId;
}

void SecurityGroupApiRuleData::SetTargetId(const string& _targetId)
{
    m_targetId = _targetId;
    m_targetIdHasBeenSet = true;
}

bool SecurityGroupApiRuleData::TargetIdHasBeenSet() const
{
    return m_targetIdHasBeenSet;
}

string SecurityGroupApiRuleData::GetProtocol() const
{
    return m_protocol;
}

void SecurityGroupApiRuleData::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool SecurityGroupApiRuleData::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string SecurityGroupApiRuleData::GetPort() const
{
    return m_port;
}

void SecurityGroupApiRuleData::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool SecurityGroupApiRuleData::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string SecurityGroupApiRuleData::GetStrategy() const
{
    return m_strategy;
}

void SecurityGroupApiRuleData::SetStrategy(const string& _strategy)
{
    m_strategy = _strategy;
    m_strategyHasBeenSet = true;
}

bool SecurityGroupApiRuleData::StrategyHasBeenSet() const
{
    return m_strategyHasBeenSet;
}

string SecurityGroupApiRuleData::GetDetail() const
{
    return m_detail;
}

void SecurityGroupApiRuleData::SetDetail(const string& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool SecurityGroupApiRuleData::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

uint64_t SecurityGroupApiRuleData::GetRuleType() const
{
    return m_ruleType;
}

void SecurityGroupApiRuleData::SetRuleType(const uint64_t& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool SecurityGroupApiRuleData::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

uint64_t SecurityGroupApiRuleData::GetOrderIndex() const
{
    return m_orderIndex;
}

void SecurityGroupApiRuleData::SetOrderIndex(const uint64_t& _orderIndex)
{
    m_orderIndex = _orderIndex;
    m_orderIndexHasBeenSet = true;
}

bool SecurityGroupApiRuleData::OrderIndexHasBeenSet() const
{
    return m_orderIndexHasBeenSet;
}

string SecurityGroupApiRuleData::GetVpcId() const
{
    return m_vpcId;
}

void SecurityGroupApiRuleData::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool SecurityGroupApiRuleData::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

