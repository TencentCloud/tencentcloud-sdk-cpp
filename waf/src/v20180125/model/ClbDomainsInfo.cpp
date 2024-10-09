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

#include <tencentcloud/waf/v20180125/model/ClbDomainsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ClbDomainsInfo::ClbDomainsInfo() :
    m_domainHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_editionHasBeenSet(false),
    m_isCdnHasBeenSet(false),
    m_loadBalancerSetHasBeenSet(false),
    m_flowModeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_albTypeHasBeenSet(false),
    m_ipHeadersHasBeenSet(false),
    m_cdcClustersHasBeenSet(false),
    m_cloudTypeHasBeenSet(false),
    m_noteHasBeenSet(false),
    m_labelsHasBeenSet(false)
{
}

CoreInternalOutcome ClbDomainsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClbDomainsInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("DomainId") && !value["DomainId"].IsNull())
    {
        if (!value["DomainId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClbDomainsInfo.DomainId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainId = string(value["DomainId"].GetString());
        m_domainIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClbDomainsInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClbDomainsInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Edition") && !value["Edition"].IsNull())
    {
        if (!value["Edition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClbDomainsInfo.Edition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_edition = string(value["Edition"].GetString());
        m_editionHasBeenSet = true;
    }

    if (value.HasMember("IsCdn") && !value["IsCdn"].IsNull())
    {
        if (!value["IsCdn"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClbDomainsInfo.IsCdn` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isCdn = value["IsCdn"].GetUint64();
        m_isCdnHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerSet") && !value["LoadBalancerSet"].IsNull())
    {
        if (!value["LoadBalancerSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClbDomainsInfo.LoadBalancerSet` is not array type"));

        const rapidjson::Value &tmpValue = value["LoadBalancerSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LoadBalancerPackageNew item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_loadBalancerSet.push_back(item);
        }
        m_loadBalancerSetHasBeenSet = true;
    }

    if (value.HasMember("FlowMode") && !value["FlowMode"].IsNull())
    {
        if (!value["FlowMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClbDomainsInfo.FlowMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_flowMode = value["FlowMode"].GetUint64();
        m_flowModeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClbDomainsInfo.State` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetInt64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("AlbType") && !value["AlbType"].IsNull())
    {
        if (!value["AlbType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClbDomainsInfo.AlbType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_albType = string(value["AlbType"].GetString());
        m_albTypeHasBeenSet = true;
    }

    if (value.HasMember("IpHeaders") && !value["IpHeaders"].IsNull())
    {
        if (!value["IpHeaders"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClbDomainsInfo.IpHeaders` is not array type"));

        const rapidjson::Value &tmpValue = value["IpHeaders"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ipHeaders.push_back((*itr).GetString());
        }
        m_ipHeadersHasBeenSet = true;
    }

    if (value.HasMember("CdcClusters") && !value["CdcClusters"].IsNull())
    {
        if (!value["CdcClusters"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClbDomainsInfo.CdcClusters` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cdcClusters = string(value["CdcClusters"].GetString());
        m_cdcClustersHasBeenSet = true;
    }

    if (value.HasMember("CloudType") && !value["CloudType"].IsNull())
    {
        if (!value["CloudType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClbDomainsInfo.CloudType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloudType = string(value["CloudType"].GetString());
        m_cloudTypeHasBeenSet = true;
    }

    if (value.HasMember("Note") && !value["Note"].IsNull())
    {
        if (!value["Note"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClbDomainsInfo.Note` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_note = string(value["Note"].GetString());
        m_noteHasBeenSet = true;
    }

    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClbDomainsInfo.Labels` is not array type"));

        const rapidjson::Value &tmpValue = value["Labels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_labels.push_back((*itr).GetString());
        }
        m_labelsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClbDomainsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainId.c_str(), allocator).Move(), allocator);
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

    if (m_editionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Edition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_edition.c_str(), allocator).Move(), allocator);
    }

    if (m_isCdnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCdn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCdn, allocator);
    }

    if (m_loadBalancerSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_loadBalancerSet.begin(); itr != m_loadBalancerSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_flowModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowMode, allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_albTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlbType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_albType.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHeadersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpHeaders";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipHeaders.begin(); itr != m_ipHeaders.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cdcClustersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdcClusters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cdcClusters.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cloudType.c_str(), allocator).Move(), allocator);
    }

    if (m_noteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Note";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_note.c_str(), allocator).Move(), allocator);
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ClbDomainsInfo::GetDomain() const
{
    return m_domain;
}

void ClbDomainsInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ClbDomainsInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ClbDomainsInfo::GetDomainId() const
{
    return m_domainId;
}

void ClbDomainsInfo::SetDomainId(const string& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool ClbDomainsInfo::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

string ClbDomainsInfo::GetInstanceId() const
{
    return m_instanceId;
}

void ClbDomainsInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ClbDomainsInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ClbDomainsInfo::GetInstanceName() const
{
    return m_instanceName;
}

void ClbDomainsInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool ClbDomainsInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string ClbDomainsInfo::GetEdition() const
{
    return m_edition;
}

void ClbDomainsInfo::SetEdition(const string& _edition)
{
    m_edition = _edition;
    m_editionHasBeenSet = true;
}

bool ClbDomainsInfo::EditionHasBeenSet() const
{
    return m_editionHasBeenSet;
}

uint64_t ClbDomainsInfo::GetIsCdn() const
{
    return m_isCdn;
}

void ClbDomainsInfo::SetIsCdn(const uint64_t& _isCdn)
{
    m_isCdn = _isCdn;
    m_isCdnHasBeenSet = true;
}

bool ClbDomainsInfo::IsCdnHasBeenSet() const
{
    return m_isCdnHasBeenSet;
}

vector<LoadBalancerPackageNew> ClbDomainsInfo::GetLoadBalancerSet() const
{
    return m_loadBalancerSet;
}

void ClbDomainsInfo::SetLoadBalancerSet(const vector<LoadBalancerPackageNew>& _loadBalancerSet)
{
    m_loadBalancerSet = _loadBalancerSet;
    m_loadBalancerSetHasBeenSet = true;
}

bool ClbDomainsInfo::LoadBalancerSetHasBeenSet() const
{
    return m_loadBalancerSetHasBeenSet;
}

uint64_t ClbDomainsInfo::GetFlowMode() const
{
    return m_flowMode;
}

void ClbDomainsInfo::SetFlowMode(const uint64_t& _flowMode)
{
    m_flowMode = _flowMode;
    m_flowModeHasBeenSet = true;
}

bool ClbDomainsInfo::FlowModeHasBeenSet() const
{
    return m_flowModeHasBeenSet;
}

int64_t ClbDomainsInfo::GetState() const
{
    return m_state;
}

void ClbDomainsInfo::SetState(const int64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool ClbDomainsInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string ClbDomainsInfo::GetAlbType() const
{
    return m_albType;
}

void ClbDomainsInfo::SetAlbType(const string& _albType)
{
    m_albType = _albType;
    m_albTypeHasBeenSet = true;
}

bool ClbDomainsInfo::AlbTypeHasBeenSet() const
{
    return m_albTypeHasBeenSet;
}

vector<string> ClbDomainsInfo::GetIpHeaders() const
{
    return m_ipHeaders;
}

void ClbDomainsInfo::SetIpHeaders(const vector<string>& _ipHeaders)
{
    m_ipHeaders = _ipHeaders;
    m_ipHeadersHasBeenSet = true;
}

bool ClbDomainsInfo::IpHeadersHasBeenSet() const
{
    return m_ipHeadersHasBeenSet;
}

string ClbDomainsInfo::GetCdcClusters() const
{
    return m_cdcClusters;
}

void ClbDomainsInfo::SetCdcClusters(const string& _cdcClusters)
{
    m_cdcClusters = _cdcClusters;
    m_cdcClustersHasBeenSet = true;
}

bool ClbDomainsInfo::CdcClustersHasBeenSet() const
{
    return m_cdcClustersHasBeenSet;
}

string ClbDomainsInfo::GetCloudType() const
{
    return m_cloudType;
}

void ClbDomainsInfo::SetCloudType(const string& _cloudType)
{
    m_cloudType = _cloudType;
    m_cloudTypeHasBeenSet = true;
}

bool ClbDomainsInfo::CloudTypeHasBeenSet() const
{
    return m_cloudTypeHasBeenSet;
}

string ClbDomainsInfo::GetNote() const
{
    return m_note;
}

void ClbDomainsInfo::SetNote(const string& _note)
{
    m_note = _note;
    m_noteHasBeenSet = true;
}

bool ClbDomainsInfo::NoteHasBeenSet() const
{
    return m_noteHasBeenSet;
}

vector<string> ClbDomainsInfo::GetLabels() const
{
    return m_labels;
}

void ClbDomainsInfo::SetLabels(const vector<string>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool ClbDomainsInfo::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

