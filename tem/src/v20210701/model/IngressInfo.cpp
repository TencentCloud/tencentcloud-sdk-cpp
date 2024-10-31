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

#include <tencentcloud/tem/v20210701/model/IngressInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

IngressInfo::IngressInfo() :
    m_environmentIdHasBeenSet(false),
    m_addressIPVersionHasBeenSet(false),
    m_ingressNameHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_clbIdHasBeenSet(false),
    m_clusterNamespaceHasBeenSet(false),
    m_tlsHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_mixedHasBeenSet(false),
    m_rewriteTypeHasBeenSet(false),
    m_domainHasBeenSet(false)
{
}

CoreInternalOutcome IngressInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnvironmentId") && !value["EnvironmentId"].IsNull())
    {
        if (!value["EnvironmentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IngressInfo.EnvironmentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environmentId = string(value["EnvironmentId"].GetString());
        m_environmentIdHasBeenSet = true;
    }

    if (value.HasMember("AddressIPVersion") && !value["AddressIPVersion"].IsNull())
    {
        if (!value["AddressIPVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IngressInfo.AddressIPVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressIPVersion = string(value["AddressIPVersion"].GetString());
        m_addressIPVersionHasBeenSet = true;
    }

    if (value.HasMember("IngressName") && !value["IngressName"].IsNull())
    {
        if (!value["IngressName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IngressInfo.IngressName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ingressName = string(value["IngressName"].GetString());
        m_ingressNameHasBeenSet = true;
    }

    if (value.HasMember("Rules") && !value["Rules"].IsNull())
    {
        if (!value["Rules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IngressInfo.Rules` is not array type"));

        const rapidjson::Value &tmpValue = value["Rules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IngressRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rules.push_back(item);
        }
        m_rulesHasBeenSet = true;
    }

    if (value.HasMember("ClbId") && !value["ClbId"].IsNull())
    {
        if (!value["ClbId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IngressInfo.ClbId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clbId = string(value["ClbId"].GetString());
        m_clbIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterNamespace") && !value["ClusterNamespace"].IsNull())
    {
        if (!value["ClusterNamespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IngressInfo.ClusterNamespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterNamespace = string(value["ClusterNamespace"].GetString());
        m_clusterNamespaceHasBeenSet = true;
    }

    if (value.HasMember("Tls") && !value["Tls"].IsNull())
    {
        if (!value["Tls"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IngressInfo.Tls` is not array type"));

        const rapidjson::Value &tmpValue = value["Tls"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IngressTls item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tls.push_back(item);
        }
        m_tlsHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IngressInfo.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IngressInfo.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IngressInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Mixed") && !value["Mixed"].IsNull())
    {
        if (!value["Mixed"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IngressInfo.Mixed` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_mixed = value["Mixed"].GetBool();
        m_mixedHasBeenSet = true;
    }

    if (value.HasMember("RewriteType") && !value["RewriteType"].IsNull())
    {
        if (!value["RewriteType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IngressInfo.RewriteType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rewriteType = string(value["RewriteType"].GetString());
        m_rewriteTypeHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IngressInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IngressInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_environmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_addressIPVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressIPVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressIPVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_ingressNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IngressName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ingressName.c_str(), allocator).Move(), allocator);
    }

    if (m_rulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rules.begin(); itr != m_rules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_clbIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClbId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clbId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNamespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterNamespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterNamespace.c_str(), allocator).Move(), allocator);
    }

    if (m_tlsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tls.begin(); itr != m_tls.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_mixedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mixed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mixed, allocator);
    }

    if (m_rewriteTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RewriteType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rewriteType.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

}


string IngressInfo::GetEnvironmentId() const
{
    return m_environmentId;
}

void IngressInfo::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool IngressInfo::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string IngressInfo::GetAddressIPVersion() const
{
    return m_addressIPVersion;
}

void IngressInfo::SetAddressIPVersion(const string& _addressIPVersion)
{
    m_addressIPVersion = _addressIPVersion;
    m_addressIPVersionHasBeenSet = true;
}

bool IngressInfo::AddressIPVersionHasBeenSet() const
{
    return m_addressIPVersionHasBeenSet;
}

string IngressInfo::GetIngressName() const
{
    return m_ingressName;
}

void IngressInfo::SetIngressName(const string& _ingressName)
{
    m_ingressName = _ingressName;
    m_ingressNameHasBeenSet = true;
}

bool IngressInfo::IngressNameHasBeenSet() const
{
    return m_ingressNameHasBeenSet;
}

vector<IngressRule> IngressInfo::GetRules() const
{
    return m_rules;
}

void IngressInfo::SetRules(const vector<IngressRule>& _rules)
{
    m_rules = _rules;
    m_rulesHasBeenSet = true;
}

bool IngressInfo::RulesHasBeenSet() const
{
    return m_rulesHasBeenSet;
}

string IngressInfo::GetClbId() const
{
    return m_clbId;
}

void IngressInfo::SetClbId(const string& _clbId)
{
    m_clbId = _clbId;
    m_clbIdHasBeenSet = true;
}

bool IngressInfo::ClbIdHasBeenSet() const
{
    return m_clbIdHasBeenSet;
}

string IngressInfo::GetClusterNamespace() const
{
    return m_clusterNamespace;
}

void IngressInfo::SetClusterNamespace(const string& _clusterNamespace)
{
    m_clusterNamespace = _clusterNamespace;
    m_clusterNamespaceHasBeenSet = true;
}

bool IngressInfo::ClusterNamespaceHasBeenSet() const
{
    return m_clusterNamespaceHasBeenSet;
}

vector<IngressTls> IngressInfo::GetTls() const
{
    return m_tls;
}

void IngressInfo::SetTls(const vector<IngressTls>& _tls)
{
    m_tls = _tls;
    m_tlsHasBeenSet = true;
}

bool IngressInfo::TlsHasBeenSet() const
{
    return m_tlsHasBeenSet;
}

string IngressInfo::GetClusterId() const
{
    return m_clusterId;
}

void IngressInfo::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool IngressInfo::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string IngressInfo::GetVip() const
{
    return m_vip;
}

void IngressInfo::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool IngressInfo::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

string IngressInfo::GetCreateTime() const
{
    return m_createTime;
}

void IngressInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool IngressInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

bool IngressInfo::GetMixed() const
{
    return m_mixed;
}

void IngressInfo::SetMixed(const bool& _mixed)
{
    m_mixed = _mixed;
    m_mixedHasBeenSet = true;
}

bool IngressInfo::MixedHasBeenSet() const
{
    return m_mixedHasBeenSet;
}

string IngressInfo::GetRewriteType() const
{
    return m_rewriteType;
}

void IngressInfo::SetRewriteType(const string& _rewriteType)
{
    m_rewriteType = _rewriteType;
    m_rewriteTypeHasBeenSet = true;
}

bool IngressInfo::RewriteTypeHasBeenSet() const
{
    return m_rewriteTypeHasBeenSet;
}

string IngressInfo::GetDomain() const
{
    return m_domain;
}

void IngressInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool IngressInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

