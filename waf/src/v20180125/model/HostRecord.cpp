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

#include <tencentcloud/waf/v20180125/model/HostRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

HostRecord::HostRecord() :
    m_domainHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_mainDomainHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_isCdnHasBeenSet(false),
    m_loadBalancerSetHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_editionHasBeenSet(false),
    m_flowModeHasBeenSet(false),
    m_clsStatusHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_cdcClustersHasBeenSet(false),
    m_albTypeHasBeenSet(false),
    m_ipHeadersHasBeenSet(false),
    m_engineTypeHasBeenSet(false),
    m_cloudTypeHasBeenSet(false),
    m_noteHasBeenSet(false)
{
}

CoreInternalOutcome HostRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostRecord.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("DomainId") && !value["DomainId"].IsNull())
    {
        if (!value["DomainId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostRecord.DomainId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainId = string(value["DomainId"].GetString());
        m_domainIdHasBeenSet = true;
    }

    if (value.HasMember("MainDomain") && !value["MainDomain"].IsNull())
    {
        if (!value["MainDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostRecord.MainDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainDomain = string(value["MainDomain"].GetString());
        m_mainDomainHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostRecord.Mode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mode = value["Mode"].GetUint64();
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostRecord.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostRecord.State` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetUint64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Engine") && !value["Engine"].IsNull())
    {
        if (!value["Engine"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostRecord.Engine` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_engine = value["Engine"].GetUint64();
        m_engineHasBeenSet = true;
    }

    if (value.HasMember("IsCdn") && !value["IsCdn"].IsNull())
    {
        if (!value["IsCdn"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostRecord.IsCdn` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isCdn = value["IsCdn"].GetUint64();
        m_isCdnHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerSet") && !value["LoadBalancerSet"].IsNull())
    {
        if (!value["LoadBalancerSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HostRecord.LoadBalancerSet` is not array type"));

        const rapidjson::Value &tmpValue = value["LoadBalancerSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LoadBalancer item;
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

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostRecord.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Edition") && !value["Edition"].IsNull())
    {
        if (!value["Edition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostRecord.Edition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_edition = string(value["Edition"].GetString());
        m_editionHasBeenSet = true;
    }

    if (value.HasMember("FlowMode") && !value["FlowMode"].IsNull())
    {
        if (!value["FlowMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostRecord.FlowMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_flowMode = value["FlowMode"].GetUint64();
        m_flowModeHasBeenSet = true;
    }

    if (value.HasMember("ClsStatus") && !value["ClsStatus"].IsNull())
    {
        if (!value["ClsStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostRecord.ClsStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_clsStatus = value["ClsStatus"].GetUint64();
        m_clsStatusHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostRecord.Level` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetUint64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("CdcClusters") && !value["CdcClusters"].IsNull())
    {
        if (!value["CdcClusters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HostRecord.CdcClusters` is not array type"));

        const rapidjson::Value &tmpValue = value["CdcClusters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_cdcClusters.push_back((*itr).GetString());
        }
        m_cdcClustersHasBeenSet = true;
    }

    if (value.HasMember("AlbType") && !value["AlbType"].IsNull())
    {
        if (!value["AlbType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostRecord.AlbType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_albType = string(value["AlbType"].GetString());
        m_albTypeHasBeenSet = true;
    }

    if (value.HasMember("IpHeaders") && !value["IpHeaders"].IsNull())
    {
        if (!value["IpHeaders"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HostRecord.IpHeaders` is not array type"));

        const rapidjson::Value &tmpValue = value["IpHeaders"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ipHeaders.push_back((*itr).GetString());
        }
        m_ipHeadersHasBeenSet = true;
    }

    if (value.HasMember("EngineType") && !value["EngineType"].IsNull())
    {
        if (!value["EngineType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HostRecord.EngineType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_engineType = value["EngineType"].GetInt64();
        m_engineTypeHasBeenSet = true;
    }

    if (value.HasMember("CloudType") && !value["CloudType"].IsNull())
    {
        if (!value["CloudType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostRecord.CloudType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloudType = string(value["CloudType"].GetString());
        m_cloudTypeHasBeenSet = true;
    }

    if (value.HasMember("Note") && !value["Note"].IsNull())
    {
        if (!value["Note"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostRecord.Note` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_note = string(value["Note"].GetString());
        m_noteHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HostRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_mainDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mode, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_engineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Engine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_engine, allocator);
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

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_editionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Edition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_edition.c_str(), allocator).Move(), allocator);
    }

    if (m_flowModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowMode, allocator);
    }

    if (m_clsStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clsStatus, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_cdcClustersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdcClusters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cdcClusters.begin(); itr != m_cdcClusters.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_engineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_engineType, allocator);
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

}


string HostRecord::GetDomain() const
{
    return m_domain;
}

void HostRecord::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool HostRecord::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string HostRecord::GetDomainId() const
{
    return m_domainId;
}

void HostRecord::SetDomainId(const string& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool HostRecord::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

string HostRecord::GetMainDomain() const
{
    return m_mainDomain;
}

void HostRecord::SetMainDomain(const string& _mainDomain)
{
    m_mainDomain = _mainDomain;
    m_mainDomainHasBeenSet = true;
}

bool HostRecord::MainDomainHasBeenSet() const
{
    return m_mainDomainHasBeenSet;
}

uint64_t HostRecord::GetMode() const
{
    return m_mode;
}

void HostRecord::SetMode(const uint64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool HostRecord::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

uint64_t HostRecord::GetStatus() const
{
    return m_status;
}

void HostRecord::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool HostRecord::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t HostRecord::GetState() const
{
    return m_state;
}

void HostRecord::SetState(const uint64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool HostRecord::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

uint64_t HostRecord::GetEngine() const
{
    return m_engine;
}

void HostRecord::SetEngine(const uint64_t& _engine)
{
    m_engine = _engine;
    m_engineHasBeenSet = true;
}

bool HostRecord::EngineHasBeenSet() const
{
    return m_engineHasBeenSet;
}

uint64_t HostRecord::GetIsCdn() const
{
    return m_isCdn;
}

void HostRecord::SetIsCdn(const uint64_t& _isCdn)
{
    m_isCdn = _isCdn;
    m_isCdnHasBeenSet = true;
}

bool HostRecord::IsCdnHasBeenSet() const
{
    return m_isCdnHasBeenSet;
}

vector<LoadBalancer> HostRecord::GetLoadBalancerSet() const
{
    return m_loadBalancerSet;
}

void HostRecord::SetLoadBalancerSet(const vector<LoadBalancer>& _loadBalancerSet)
{
    m_loadBalancerSet = _loadBalancerSet;
    m_loadBalancerSetHasBeenSet = true;
}

bool HostRecord::LoadBalancerSetHasBeenSet() const
{
    return m_loadBalancerSetHasBeenSet;
}

string HostRecord::GetRegion() const
{
    return m_region;
}

void HostRecord::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool HostRecord::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string HostRecord::GetEdition() const
{
    return m_edition;
}

void HostRecord::SetEdition(const string& _edition)
{
    m_edition = _edition;
    m_editionHasBeenSet = true;
}

bool HostRecord::EditionHasBeenSet() const
{
    return m_editionHasBeenSet;
}

uint64_t HostRecord::GetFlowMode() const
{
    return m_flowMode;
}

void HostRecord::SetFlowMode(const uint64_t& _flowMode)
{
    m_flowMode = _flowMode;
    m_flowModeHasBeenSet = true;
}

bool HostRecord::FlowModeHasBeenSet() const
{
    return m_flowModeHasBeenSet;
}

uint64_t HostRecord::GetClsStatus() const
{
    return m_clsStatus;
}

void HostRecord::SetClsStatus(const uint64_t& _clsStatus)
{
    m_clsStatus = _clsStatus;
    m_clsStatusHasBeenSet = true;
}

bool HostRecord::ClsStatusHasBeenSet() const
{
    return m_clsStatusHasBeenSet;
}

uint64_t HostRecord::GetLevel() const
{
    return m_level;
}

void HostRecord::SetLevel(const uint64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool HostRecord::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

vector<string> HostRecord::GetCdcClusters() const
{
    return m_cdcClusters;
}

void HostRecord::SetCdcClusters(const vector<string>& _cdcClusters)
{
    m_cdcClusters = _cdcClusters;
    m_cdcClustersHasBeenSet = true;
}

bool HostRecord::CdcClustersHasBeenSet() const
{
    return m_cdcClustersHasBeenSet;
}

string HostRecord::GetAlbType() const
{
    return m_albType;
}

void HostRecord::SetAlbType(const string& _albType)
{
    m_albType = _albType;
    m_albTypeHasBeenSet = true;
}

bool HostRecord::AlbTypeHasBeenSet() const
{
    return m_albTypeHasBeenSet;
}

vector<string> HostRecord::GetIpHeaders() const
{
    return m_ipHeaders;
}

void HostRecord::SetIpHeaders(const vector<string>& _ipHeaders)
{
    m_ipHeaders = _ipHeaders;
    m_ipHeadersHasBeenSet = true;
}

bool HostRecord::IpHeadersHasBeenSet() const
{
    return m_ipHeadersHasBeenSet;
}

int64_t HostRecord::GetEngineType() const
{
    return m_engineType;
}

void HostRecord::SetEngineType(const int64_t& _engineType)
{
    m_engineType = _engineType;
    m_engineTypeHasBeenSet = true;
}

bool HostRecord::EngineTypeHasBeenSet() const
{
    return m_engineTypeHasBeenSet;
}

string HostRecord::GetCloudType() const
{
    return m_cloudType;
}

void HostRecord::SetCloudType(const string& _cloudType)
{
    m_cloudType = _cloudType;
    m_cloudTypeHasBeenSet = true;
}

bool HostRecord::CloudTypeHasBeenSet() const
{
    return m_cloudTypeHasBeenSet;
}

string HostRecord::GetNote() const
{
    return m_note;
}

void HostRecord::SetNote(const string& _note)
{
    m_note = _note;
    m_noteHasBeenSet = true;
}

bool HostRecord::NoteHasBeenSet() const
{
    return m_noteHasBeenSet;
}

