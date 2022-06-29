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

#include <tencentcloud/antiddos/v20200309/model/Layer4Rule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

Layer4Rule::Layer4Rule() :
    m_backendPortHasBeenSet(false),
    m_frontendPortHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_realServersHasBeenSet(false),
    m_instanceDetailsHasBeenSet(false),
    m_instanceDetailRuleHasBeenSet(false)
{
}

CoreInternalOutcome Layer4Rule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BackendPort") && !value["BackendPort"].IsNull())
    {
        if (!value["BackendPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Layer4Rule.BackendPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_backendPort = value["BackendPort"].GetUint64();
        m_backendPortHasBeenSet = true;
    }

    if (value.HasMember("FrontendPort") && !value["FrontendPort"].IsNull())
    {
        if (!value["FrontendPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Layer4Rule.FrontendPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_frontendPort = value["FrontendPort"].GetUint64();
        m_frontendPortHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Layer4Rule.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("RealServers") && !value["RealServers"].IsNull())
    {
        if (!value["RealServers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Layer4Rule.RealServers` is not array type"));

        const rapidjson::Value &tmpValue = value["RealServers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SourceServer item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_realServers.push_back(item);
        }
        m_realServersHasBeenSet = true;
    }

    if (value.HasMember("InstanceDetails") && !value["InstanceDetails"].IsNull())
    {
        if (!value["InstanceDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Layer4Rule.InstanceDetails` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceRelation item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceDetails.push_back(item);
        }
        m_instanceDetailsHasBeenSet = true;
    }

    if (value.HasMember("InstanceDetailRule") && !value["InstanceDetailRule"].IsNull())
    {
        if (!value["InstanceDetailRule"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Layer4Rule.InstanceDetailRule` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceDetailRule"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RuleInstanceRelation item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceDetailRule.push_back(item);
        }
        m_instanceDetailRuleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Layer4Rule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_backendPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackendPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backendPort, allocator);
    }

    if (m_frontendPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrontendPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_frontendPort, allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_realServersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_realServers.begin(); itr != m_realServers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_instanceDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceDetails.begin(); itr != m_instanceDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_instanceDetailRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceDetailRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceDetailRule.begin(); itr != m_instanceDetailRule.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t Layer4Rule::GetBackendPort() const
{
    return m_backendPort;
}

void Layer4Rule::SetBackendPort(const uint64_t& _backendPort)
{
    m_backendPort = _backendPort;
    m_backendPortHasBeenSet = true;
}

bool Layer4Rule::BackendPortHasBeenSet() const
{
    return m_backendPortHasBeenSet;
}

uint64_t Layer4Rule::GetFrontendPort() const
{
    return m_frontendPort;
}

void Layer4Rule::SetFrontendPort(const uint64_t& _frontendPort)
{
    m_frontendPort = _frontendPort;
    m_frontendPortHasBeenSet = true;
}

bool Layer4Rule::FrontendPortHasBeenSet() const
{
    return m_frontendPortHasBeenSet;
}

string Layer4Rule::GetProtocol() const
{
    return m_protocol;
}

void Layer4Rule::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool Layer4Rule::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

vector<SourceServer> Layer4Rule::GetRealServers() const
{
    return m_realServers;
}

void Layer4Rule::SetRealServers(const vector<SourceServer>& _realServers)
{
    m_realServers = _realServers;
    m_realServersHasBeenSet = true;
}

bool Layer4Rule::RealServersHasBeenSet() const
{
    return m_realServersHasBeenSet;
}

vector<InstanceRelation> Layer4Rule::GetInstanceDetails() const
{
    return m_instanceDetails;
}

void Layer4Rule::SetInstanceDetails(const vector<InstanceRelation>& _instanceDetails)
{
    m_instanceDetails = _instanceDetails;
    m_instanceDetailsHasBeenSet = true;
}

bool Layer4Rule::InstanceDetailsHasBeenSet() const
{
    return m_instanceDetailsHasBeenSet;
}

vector<RuleInstanceRelation> Layer4Rule::GetInstanceDetailRule() const
{
    return m_instanceDetailRule;
}

void Layer4Rule::SetInstanceDetailRule(const vector<RuleInstanceRelation>& _instanceDetailRule)
{
    m_instanceDetailRule = _instanceDetailRule;
    m_instanceDetailRuleHasBeenSet = true;
}

bool Layer4Rule::InstanceDetailRuleHasBeenSet() const
{
    return m_instanceDetailRuleHasBeenSet;
}

