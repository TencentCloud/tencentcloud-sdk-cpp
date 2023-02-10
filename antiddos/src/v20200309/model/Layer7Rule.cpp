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

#include <tencentcloud/antiddos/v20200309/model/Layer7Rule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

Layer7Rule::Layer7Rule() :
    m_domainHasBeenSet(false),
    m_proxyTypeListHasBeenSet(false),
    m_realServersHasBeenSet(false),
    m_instanceDetailsHasBeenSet(false),
    m_instanceDetailRuleHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_vportHasBeenSet(false)
{
}

CoreInternalOutcome Layer7Rule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Layer7Rule.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("ProxyTypeList") && !value["ProxyTypeList"].IsNull())
    {
        if (!value["ProxyTypeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Layer7Rule.ProxyTypeList` is not array type"));

        const rapidjson::Value &tmpValue = value["ProxyTypeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProxyTypeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_proxyTypeList.push_back(item);
        }
        m_proxyTypeListHasBeenSet = true;
    }

    if (value.HasMember("RealServers") && !value["RealServers"].IsNull())
    {
        if (!value["RealServers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Layer7Rule.RealServers` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `Layer7Rule.InstanceDetails` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `Layer7Rule.InstanceDetailRule` is not array type"));

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

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Layer7Rule.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Layer7Rule.Vport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetInt64();
        m_vportHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Layer7Rule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyTypeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyTypeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_proxyTypeList.begin(); itr != m_proxyTypeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_vportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vport, allocator);
    }

}


string Layer7Rule::GetDomain() const
{
    return m_domain;
}

void Layer7Rule::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool Layer7Rule::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

vector<ProxyTypeInfo> Layer7Rule::GetProxyTypeList() const
{
    return m_proxyTypeList;
}

void Layer7Rule::SetProxyTypeList(const vector<ProxyTypeInfo>& _proxyTypeList)
{
    m_proxyTypeList = _proxyTypeList;
    m_proxyTypeListHasBeenSet = true;
}

bool Layer7Rule::ProxyTypeListHasBeenSet() const
{
    return m_proxyTypeListHasBeenSet;
}

vector<SourceServer> Layer7Rule::GetRealServers() const
{
    return m_realServers;
}

void Layer7Rule::SetRealServers(const vector<SourceServer>& _realServers)
{
    m_realServers = _realServers;
    m_realServersHasBeenSet = true;
}

bool Layer7Rule::RealServersHasBeenSet() const
{
    return m_realServersHasBeenSet;
}

vector<InstanceRelation> Layer7Rule::GetInstanceDetails() const
{
    return m_instanceDetails;
}

void Layer7Rule::SetInstanceDetails(const vector<InstanceRelation>& _instanceDetails)
{
    m_instanceDetails = _instanceDetails;
    m_instanceDetailsHasBeenSet = true;
}

bool Layer7Rule::InstanceDetailsHasBeenSet() const
{
    return m_instanceDetailsHasBeenSet;
}

vector<RuleInstanceRelation> Layer7Rule::GetInstanceDetailRule() const
{
    return m_instanceDetailRule;
}

void Layer7Rule::SetInstanceDetailRule(const vector<RuleInstanceRelation>& _instanceDetailRule)
{
    m_instanceDetailRule = _instanceDetailRule;
    m_instanceDetailRuleHasBeenSet = true;
}

bool Layer7Rule::InstanceDetailRuleHasBeenSet() const
{
    return m_instanceDetailRuleHasBeenSet;
}

string Layer7Rule::GetProtocol() const
{
    return m_protocol;
}

void Layer7Rule::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool Layer7Rule::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

int64_t Layer7Rule::GetVport() const
{
    return m_vport;
}

void Layer7Rule::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool Layer7Rule::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

