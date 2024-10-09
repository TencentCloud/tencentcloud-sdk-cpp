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

#include <tencentcloud/waf/v20180125/model/DomainInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DomainInfo::DomainInfo() :
    m_domainHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_cnameHasBeenSet(false),
    m_editionHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_clsStatusHasBeenSet(false),
    m_flowModeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_cCListHasBeenSet(false),
    m_rsListHasBeenSet(false),
    m_portsHasBeenSet(false),
    m_loadBalancerSetHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_ipv6StatusHasBeenSet(false),
    m_botStatusHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_postCLSStatusHasBeenSet(false),
    m_postCKafkaStatusHasBeenSet(false),
    m_cdcClustersHasBeenSet(false),
    m_apiStatusHasBeenSet(false),
    m_albTypeHasBeenSet(false),
    m_sgStateHasBeenSet(false),
    m_sgDetailHasBeenSet(false),
    m_cloudTypeHasBeenSet(false),
    m_noteHasBeenSet(false),
    m_srcListHasBeenSet(false),
    m_upstreamDomainListHasBeenSet(false),
    m_sgIDHasBeenSet(false),
    m_accessStatusHasBeenSet(false),
    m_labelsHasBeenSet(false)
{
}

CoreInternalOutcome DomainInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("DomainId") && !value["DomainId"].IsNull())
    {
        if (!value["DomainId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.DomainId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainId = string(value["DomainId"].GetString());
        m_domainIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Cname") && !value["Cname"].IsNull())
    {
        if (!value["Cname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.Cname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cname = string(value["Cname"].GetString());
        m_cnameHasBeenSet = true;
    }

    if (value.HasMember("Edition") && !value["Edition"].IsNull())
    {
        if (!value["Edition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.Edition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_edition = string(value["Edition"].GetString());
        m_editionHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("ClsStatus") && !value["ClsStatus"].IsNull())
    {
        if (!value["ClsStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.ClsStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_clsStatus = value["ClsStatus"].GetUint64();
        m_clsStatusHasBeenSet = true;
    }

    if (value.HasMember("FlowMode") && !value["FlowMode"].IsNull())
    {
        if (!value["FlowMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.FlowMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_flowMode = value["FlowMode"].GetUint64();
        m_flowModeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.Mode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mode = value["Mode"].GetUint64();
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("Engine") && !value["Engine"].IsNull())
    {
        if (!value["Engine"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.Engine` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_engine = value["Engine"].GetUint64();
        m_engineHasBeenSet = true;
    }

    if (value.HasMember("CCList") && !value["CCList"].IsNull())
    {
        if (!value["CCList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainInfo.CCList` is not array type"));

        const rapidjson::Value &tmpValue = value["CCList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_cCList.push_back((*itr).GetString());
        }
        m_cCListHasBeenSet = true;
    }

    if (value.HasMember("RsList") && !value["RsList"].IsNull())
    {
        if (!value["RsList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainInfo.RsList` is not array type"));

        const rapidjson::Value &tmpValue = value["RsList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_rsList.push_back((*itr).GetString());
        }
        m_rsListHasBeenSet = true;
    }

    if (value.HasMember("Ports") && !value["Ports"].IsNull())
    {
        if (!value["Ports"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainInfo.Ports` is not array type"));

        const rapidjson::Value &tmpValue = value["Ports"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PortInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ports.push_back(item);
        }
        m_portsHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerSet") && !value["LoadBalancerSet"].IsNull())
    {
        if (!value["LoadBalancerSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainInfo.LoadBalancerSet` is not array type"));

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

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.State` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetInt64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Ipv6Status") && !value["Ipv6Status"].IsNull())
    {
        if (!value["Ipv6Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.Ipv6Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ipv6Status = value["Ipv6Status"].GetInt64();
        m_ipv6StatusHasBeenSet = true;
    }

    if (value.HasMember("BotStatus") && !value["BotStatus"].IsNull())
    {
        if (!value["BotStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.BotStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_botStatus = value["BotStatus"].GetInt64();
        m_botStatusHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("PostCLSStatus") && !value["PostCLSStatus"].IsNull())
    {
        if (!value["PostCLSStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.PostCLSStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_postCLSStatus = value["PostCLSStatus"].GetInt64();
        m_postCLSStatusHasBeenSet = true;
    }

    if (value.HasMember("PostCKafkaStatus") && !value["PostCKafkaStatus"].IsNull())
    {
        if (!value["PostCKafkaStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.PostCKafkaStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_postCKafkaStatus = value["PostCKafkaStatus"].GetInt64();
        m_postCKafkaStatusHasBeenSet = true;
    }

    if (value.HasMember("CdcClusters") && !value["CdcClusters"].IsNull())
    {
        if (!value["CdcClusters"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.CdcClusters` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cdcClusters = string(value["CdcClusters"].GetString());
        m_cdcClustersHasBeenSet = true;
    }

    if (value.HasMember("ApiStatus") && !value["ApiStatus"].IsNull())
    {
        if (!value["ApiStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.ApiStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_apiStatus = value["ApiStatus"].GetInt64();
        m_apiStatusHasBeenSet = true;
    }

    if (value.HasMember("AlbType") && !value["AlbType"].IsNull())
    {
        if (!value["AlbType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.AlbType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_albType = string(value["AlbType"].GetString());
        m_albTypeHasBeenSet = true;
    }

    if (value.HasMember("SgState") && !value["SgState"].IsNull())
    {
        if (!value["SgState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.SgState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sgState = value["SgState"].GetInt64();
        m_sgStateHasBeenSet = true;
    }

    if (value.HasMember("SgDetail") && !value["SgDetail"].IsNull())
    {
        if (!value["SgDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.SgDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sgDetail = string(value["SgDetail"].GetString());
        m_sgDetailHasBeenSet = true;
    }

    if (value.HasMember("CloudType") && !value["CloudType"].IsNull())
    {
        if (!value["CloudType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.CloudType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloudType = string(value["CloudType"].GetString());
        m_cloudTypeHasBeenSet = true;
    }

    if (value.HasMember("Note") && !value["Note"].IsNull())
    {
        if (!value["Note"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.Note` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_note = string(value["Note"].GetString());
        m_noteHasBeenSet = true;
    }

    if (value.HasMember("SrcList") && !value["SrcList"].IsNull())
    {
        if (!value["SrcList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainInfo.SrcList` is not array type"));

        const rapidjson::Value &tmpValue = value["SrcList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_srcList.push_back((*itr).GetString());
        }
        m_srcListHasBeenSet = true;
    }

    if (value.HasMember("UpstreamDomainList") && !value["UpstreamDomainList"].IsNull())
    {
        if (!value["UpstreamDomainList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainInfo.UpstreamDomainList` is not array type"));

        const rapidjson::Value &tmpValue = value["UpstreamDomainList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_upstreamDomainList.push_back((*itr).GetString());
        }
        m_upstreamDomainListHasBeenSet = true;
    }

    if (value.HasMember("SgID") && !value["SgID"].IsNull())
    {
        if (!value["SgID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.SgID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sgID = string(value["SgID"].GetString());
        m_sgIDHasBeenSet = true;
    }

    if (value.HasMember("AccessStatus") && !value["AccessStatus"].IsNull())
    {
        if (!value["AccessStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.AccessStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accessStatus = value["AccessStatus"].GetInt64();
        m_accessStatusHasBeenSet = true;
    }

    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainInfo.Labels` is not array type"));

        const rapidjson::Value &tmpValue = value["Labels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_labels.push_back((*itr).GetString());
        }
        m_labelsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DomainInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_cnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cname.c_str(), allocator).Move(), allocator);
    }

    if (m_editionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Edition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_edition.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_clsStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clsStatus, allocator);
    }

    if (m_flowModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowMode, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mode, allocator);
    }

    if (m_engineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Engine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_engine, allocator);
    }

    if (m_cCListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CCList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cCList.begin(); itr != m_cCList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_rsListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RsList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_rsList.begin(); itr != m_rsList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_portsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ports";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ports.begin(); itr != m_ports.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_ipv6StatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipv6Status, allocator);
    }

    if (m_botStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_botStatus, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_postCLSStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostCLSStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_postCLSStatus, allocator);
    }

    if (m_postCKafkaStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostCKafkaStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_postCKafkaStatus, allocator);
    }

    if (m_cdcClustersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdcClusters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cdcClusters.c_str(), allocator).Move(), allocator);
    }

    if (m_apiStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_apiStatus, allocator);
    }

    if (m_albTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlbType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_albType.c_str(), allocator).Move(), allocator);
    }

    if (m_sgStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SgState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sgState, allocator);
    }

    if (m_sgDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SgDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sgDetail.c_str(), allocator).Move(), allocator);
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

    if (m_srcListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_srcList.begin(); itr != m_srcList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_upstreamDomainListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamDomainList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_upstreamDomainList.begin(); itr != m_upstreamDomainList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sgIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SgID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sgID.c_str(), allocator).Move(), allocator);
    }

    if (m_accessStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessStatus, allocator);
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


string DomainInfo::GetDomain() const
{
    return m_domain;
}

void DomainInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DomainInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DomainInfo::GetDomainId() const
{
    return m_domainId;
}

void DomainInfo::SetDomainId(const string& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool DomainInfo::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

string DomainInfo::GetInstanceId() const
{
    return m_instanceId;
}

void DomainInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DomainInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DomainInfo::GetCname() const
{
    return m_cname;
}

void DomainInfo::SetCname(const string& _cname)
{
    m_cname = _cname;
    m_cnameHasBeenSet = true;
}

bool DomainInfo::CnameHasBeenSet() const
{
    return m_cnameHasBeenSet;
}

string DomainInfo::GetEdition() const
{
    return m_edition;
}

void DomainInfo::SetEdition(const string& _edition)
{
    m_edition = _edition;
    m_editionHasBeenSet = true;
}

bool DomainInfo::EditionHasBeenSet() const
{
    return m_editionHasBeenSet;
}

string DomainInfo::GetRegion() const
{
    return m_region;
}

void DomainInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DomainInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DomainInfo::GetInstanceName() const
{
    return m_instanceName;
}

void DomainInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool DomainInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

uint64_t DomainInfo::GetClsStatus() const
{
    return m_clsStatus;
}

void DomainInfo::SetClsStatus(const uint64_t& _clsStatus)
{
    m_clsStatus = _clsStatus;
    m_clsStatusHasBeenSet = true;
}

bool DomainInfo::ClsStatusHasBeenSet() const
{
    return m_clsStatusHasBeenSet;
}

uint64_t DomainInfo::GetFlowMode() const
{
    return m_flowMode;
}

void DomainInfo::SetFlowMode(const uint64_t& _flowMode)
{
    m_flowMode = _flowMode;
    m_flowModeHasBeenSet = true;
}

bool DomainInfo::FlowModeHasBeenSet() const
{
    return m_flowModeHasBeenSet;
}

uint64_t DomainInfo::GetStatus() const
{
    return m_status;
}

void DomainInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DomainInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t DomainInfo::GetMode() const
{
    return m_mode;
}

void DomainInfo::SetMode(const uint64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool DomainInfo::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

uint64_t DomainInfo::GetEngine() const
{
    return m_engine;
}

void DomainInfo::SetEngine(const uint64_t& _engine)
{
    m_engine = _engine;
    m_engineHasBeenSet = true;
}

bool DomainInfo::EngineHasBeenSet() const
{
    return m_engineHasBeenSet;
}

vector<string> DomainInfo::GetCCList() const
{
    return m_cCList;
}

void DomainInfo::SetCCList(const vector<string>& _cCList)
{
    m_cCList = _cCList;
    m_cCListHasBeenSet = true;
}

bool DomainInfo::CCListHasBeenSet() const
{
    return m_cCListHasBeenSet;
}

vector<string> DomainInfo::GetRsList() const
{
    return m_rsList;
}

void DomainInfo::SetRsList(const vector<string>& _rsList)
{
    m_rsList = _rsList;
    m_rsListHasBeenSet = true;
}

bool DomainInfo::RsListHasBeenSet() const
{
    return m_rsListHasBeenSet;
}

vector<PortInfo> DomainInfo::GetPorts() const
{
    return m_ports;
}

void DomainInfo::SetPorts(const vector<PortInfo>& _ports)
{
    m_ports = _ports;
    m_portsHasBeenSet = true;
}

bool DomainInfo::PortsHasBeenSet() const
{
    return m_portsHasBeenSet;
}

vector<LoadBalancerPackageNew> DomainInfo::GetLoadBalancerSet() const
{
    return m_loadBalancerSet;
}

void DomainInfo::SetLoadBalancerSet(const vector<LoadBalancerPackageNew>& _loadBalancerSet)
{
    m_loadBalancerSet = _loadBalancerSet;
    m_loadBalancerSetHasBeenSet = true;
}

bool DomainInfo::LoadBalancerSetHasBeenSet() const
{
    return m_loadBalancerSetHasBeenSet;
}

uint64_t DomainInfo::GetAppId() const
{
    return m_appId;
}

void DomainInfo::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DomainInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t DomainInfo::GetState() const
{
    return m_state;
}

void DomainInfo::SetState(const int64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool DomainInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string DomainInfo::GetCreateTime() const
{
    return m_createTime;
}

void DomainInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DomainInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t DomainInfo::GetIpv6Status() const
{
    return m_ipv6Status;
}

void DomainInfo::SetIpv6Status(const int64_t& _ipv6Status)
{
    m_ipv6Status = _ipv6Status;
    m_ipv6StatusHasBeenSet = true;
}

bool DomainInfo::Ipv6StatusHasBeenSet() const
{
    return m_ipv6StatusHasBeenSet;
}

int64_t DomainInfo::GetBotStatus() const
{
    return m_botStatus;
}

void DomainInfo::SetBotStatus(const int64_t& _botStatus)
{
    m_botStatus = _botStatus;
    m_botStatusHasBeenSet = true;
}

bool DomainInfo::BotStatusHasBeenSet() const
{
    return m_botStatusHasBeenSet;
}

int64_t DomainInfo::GetLevel() const
{
    return m_level;
}

void DomainInfo::SetLevel(const int64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool DomainInfo::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

int64_t DomainInfo::GetPostCLSStatus() const
{
    return m_postCLSStatus;
}

void DomainInfo::SetPostCLSStatus(const int64_t& _postCLSStatus)
{
    m_postCLSStatus = _postCLSStatus;
    m_postCLSStatusHasBeenSet = true;
}

bool DomainInfo::PostCLSStatusHasBeenSet() const
{
    return m_postCLSStatusHasBeenSet;
}

int64_t DomainInfo::GetPostCKafkaStatus() const
{
    return m_postCKafkaStatus;
}

void DomainInfo::SetPostCKafkaStatus(const int64_t& _postCKafkaStatus)
{
    m_postCKafkaStatus = _postCKafkaStatus;
    m_postCKafkaStatusHasBeenSet = true;
}

bool DomainInfo::PostCKafkaStatusHasBeenSet() const
{
    return m_postCKafkaStatusHasBeenSet;
}

string DomainInfo::GetCdcClusters() const
{
    return m_cdcClusters;
}

void DomainInfo::SetCdcClusters(const string& _cdcClusters)
{
    m_cdcClusters = _cdcClusters;
    m_cdcClustersHasBeenSet = true;
}

bool DomainInfo::CdcClustersHasBeenSet() const
{
    return m_cdcClustersHasBeenSet;
}

int64_t DomainInfo::GetApiStatus() const
{
    return m_apiStatus;
}

void DomainInfo::SetApiStatus(const int64_t& _apiStatus)
{
    m_apiStatus = _apiStatus;
    m_apiStatusHasBeenSet = true;
}

bool DomainInfo::ApiStatusHasBeenSet() const
{
    return m_apiStatusHasBeenSet;
}

string DomainInfo::GetAlbType() const
{
    return m_albType;
}

void DomainInfo::SetAlbType(const string& _albType)
{
    m_albType = _albType;
    m_albTypeHasBeenSet = true;
}

bool DomainInfo::AlbTypeHasBeenSet() const
{
    return m_albTypeHasBeenSet;
}

int64_t DomainInfo::GetSgState() const
{
    return m_sgState;
}

void DomainInfo::SetSgState(const int64_t& _sgState)
{
    m_sgState = _sgState;
    m_sgStateHasBeenSet = true;
}

bool DomainInfo::SgStateHasBeenSet() const
{
    return m_sgStateHasBeenSet;
}

string DomainInfo::GetSgDetail() const
{
    return m_sgDetail;
}

void DomainInfo::SetSgDetail(const string& _sgDetail)
{
    m_sgDetail = _sgDetail;
    m_sgDetailHasBeenSet = true;
}

bool DomainInfo::SgDetailHasBeenSet() const
{
    return m_sgDetailHasBeenSet;
}

string DomainInfo::GetCloudType() const
{
    return m_cloudType;
}

void DomainInfo::SetCloudType(const string& _cloudType)
{
    m_cloudType = _cloudType;
    m_cloudTypeHasBeenSet = true;
}

bool DomainInfo::CloudTypeHasBeenSet() const
{
    return m_cloudTypeHasBeenSet;
}

string DomainInfo::GetNote() const
{
    return m_note;
}

void DomainInfo::SetNote(const string& _note)
{
    m_note = _note;
    m_noteHasBeenSet = true;
}

bool DomainInfo::NoteHasBeenSet() const
{
    return m_noteHasBeenSet;
}

vector<string> DomainInfo::GetSrcList() const
{
    return m_srcList;
}

void DomainInfo::SetSrcList(const vector<string>& _srcList)
{
    m_srcList = _srcList;
    m_srcListHasBeenSet = true;
}

bool DomainInfo::SrcListHasBeenSet() const
{
    return m_srcListHasBeenSet;
}

vector<string> DomainInfo::GetUpstreamDomainList() const
{
    return m_upstreamDomainList;
}

void DomainInfo::SetUpstreamDomainList(const vector<string>& _upstreamDomainList)
{
    m_upstreamDomainList = _upstreamDomainList;
    m_upstreamDomainListHasBeenSet = true;
}

bool DomainInfo::UpstreamDomainListHasBeenSet() const
{
    return m_upstreamDomainListHasBeenSet;
}

string DomainInfo::GetSgID() const
{
    return m_sgID;
}

void DomainInfo::SetSgID(const string& _sgID)
{
    m_sgID = _sgID;
    m_sgIDHasBeenSet = true;
}

bool DomainInfo::SgIDHasBeenSet() const
{
    return m_sgIDHasBeenSet;
}

int64_t DomainInfo::GetAccessStatus() const
{
    return m_accessStatus;
}

void DomainInfo::SetAccessStatus(const int64_t& _accessStatus)
{
    m_accessStatus = _accessStatus;
    m_accessStatusHasBeenSet = true;
}

bool DomainInfo::AccessStatusHasBeenSet() const
{
    return m_accessStatusHasBeenSet;
}

vector<string> DomainInfo::GetLabels() const
{
    return m_labels;
}

void DomainInfo::SetLabels(const vector<string>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool DomainInfo::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

