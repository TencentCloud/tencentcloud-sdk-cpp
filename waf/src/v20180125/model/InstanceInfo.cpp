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

#include <tencentcloud/waf/v20180125/model/InstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

InstanceInfo::InstanceInfo() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_resourceIdsHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_validTimeHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_domainCountHasBeenSet(false),
    m_subDomainLimitHasBeenSet(false),
    m_mainDomainCountHasBeenSet(false),
    m_mainDomainLimitHasBeenSet(false),
    m_maxQPSHasBeenSet(false),
    m_qPSHasBeenSet(false),
    m_domainPkgHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_editionHasBeenSet(false),
    m_fraudPkgHasBeenSet(false),
    m_botPkgHasBeenSet(false),
    m_botQPSHasBeenSet(false),
    m_elasticBillingHasBeenSet(false),
    m_attackLogPostHasBeenSet(false),
    m_maxBandwidthHasBeenSet(false),
    m_aPISecurityHasBeenSet(false),
    m_qpsStandardHasBeenSet(false),
    m_bandwidthStandardHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_sandboxQpsHasBeenSet(false),
    m_isAPISecurityTrialHasBeenSet(false),
    m_majorEventsPkgHasBeenSet(false),
    m_hybridPkgHasBeenSet(false),
    m_apiPkgHasBeenSet(false),
    m_miniPkgHasBeenSet(false),
    m_miniQpsStandardHasBeenSet(false),
    m_miniMaxQPSHasBeenSet(false),
    m_lastQpsExceedTimeHasBeenSet(false),
    m_miniExtendPkgHasBeenSet(false),
    m_billingItemHasBeenSet(false),
    m_freeDelayFlagHasBeenSet(false),
    m_last3MaxQPSHasBeenSet(false),
    m_last3MaxBandwidthHasBeenSet(false),
    m_majorEventsProPkgHasBeenSet(false),
    m_basicFlagHasBeenSet(false)
{
}

CoreInternalOutcome InstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceIds") && !value["ResourceIds"].IsNull())
    {
        if (!value["ResourceIds"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ResourceIds` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceIds = string(value["ResourceIds"].GetString());
        m_resourceIdsHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.PayMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetUint64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.RenewFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = value["RenewFlag"].GetUint64();
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Mode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mode = value["Mode"].GetUint64();
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Level` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetUint64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("ValidTime") && !value["ValidTime"].IsNull())
    {
        if (!value["ValidTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ValidTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validTime = string(value["ValidTime"].GetString());
        m_validTimeHasBeenSet = true;
    }

    if (value.HasMember("BeginTime") && !value["BeginTime"].IsNull())
    {
        if (!value["BeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.BeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = string(value["BeginTime"].GetString());
        m_beginTimeHasBeenSet = true;
    }

    if (value.HasMember("DomainCount") && !value["DomainCount"].IsNull())
    {
        if (!value["DomainCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.DomainCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_domainCount = value["DomainCount"].GetUint64();
        m_domainCountHasBeenSet = true;
    }

    if (value.HasMember("SubDomainLimit") && !value["SubDomainLimit"].IsNull())
    {
        if (!value["SubDomainLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.SubDomainLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_subDomainLimit = value["SubDomainLimit"].GetUint64();
        m_subDomainLimitHasBeenSet = true;
    }

    if (value.HasMember("MainDomainCount") && !value["MainDomainCount"].IsNull())
    {
        if (!value["MainDomainCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.MainDomainCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mainDomainCount = value["MainDomainCount"].GetUint64();
        m_mainDomainCountHasBeenSet = true;
    }

    if (value.HasMember("MainDomainLimit") && !value["MainDomainLimit"].IsNull())
    {
        if (!value["MainDomainLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.MainDomainLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mainDomainLimit = value["MainDomainLimit"].GetUint64();
        m_mainDomainLimitHasBeenSet = true;
    }

    if (value.HasMember("MaxQPS") && !value["MaxQPS"].IsNull())
    {
        if (!value["MaxQPS"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.MaxQPS` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxQPS = value["MaxQPS"].GetUint64();
        m_maxQPSHasBeenSet = true;
    }

    if (value.HasMember("QPS") && !value["QPS"].IsNull())
    {
        if (!value["QPS"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.QPS` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_qPS.Deserialize(value["QPS"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_qPSHasBeenSet = true;
    }

    if (value.HasMember("DomainPkg") && !value["DomainPkg"].IsNull())
    {
        if (!value["DomainPkg"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.DomainPkg` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_domainPkg.Deserialize(value["DomainPkg"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_domainPkgHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Edition") && !value["Edition"].IsNull())
    {
        if (!value["Edition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Edition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_edition = string(value["Edition"].GetString());
        m_editionHasBeenSet = true;
    }

    if (value.HasMember("FraudPkg") && !value["FraudPkg"].IsNull())
    {
        if (!value["FraudPkg"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.FraudPkg` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fraudPkg.Deserialize(value["FraudPkg"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fraudPkgHasBeenSet = true;
    }

    if (value.HasMember("BotPkg") && !value["BotPkg"].IsNull())
    {
        if (!value["BotPkg"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.BotPkg` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_botPkg.Deserialize(value["BotPkg"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_botPkgHasBeenSet = true;
    }

    if (value.HasMember("BotQPS") && !value["BotQPS"].IsNull())
    {
        if (!value["BotQPS"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.BotQPS` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_botQPS.Deserialize(value["BotQPS"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_botQPSHasBeenSet = true;
    }

    if (value.HasMember("ElasticBilling") && !value["ElasticBilling"].IsNull())
    {
        if (!value["ElasticBilling"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ElasticBilling` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_elasticBilling = value["ElasticBilling"].GetUint64();
        m_elasticBillingHasBeenSet = true;
    }

    if (value.HasMember("AttackLogPost") && !value["AttackLogPost"].IsNull())
    {
        if (!value["AttackLogPost"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.AttackLogPost` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attackLogPost = value["AttackLogPost"].GetInt64();
        m_attackLogPostHasBeenSet = true;
    }

    if (value.HasMember("MaxBandwidth") && !value["MaxBandwidth"].IsNull())
    {
        if (!value["MaxBandwidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.MaxBandwidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxBandwidth = value["MaxBandwidth"].GetUint64();
        m_maxBandwidthHasBeenSet = true;
    }

    if (value.HasMember("APISecurity") && !value["APISecurity"].IsNull())
    {
        if (!value["APISecurity"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.APISecurity` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_aPISecurity = value["APISecurity"].GetUint64();
        m_aPISecurityHasBeenSet = true;
    }

    if (value.HasMember("QpsStandard") && !value["QpsStandard"].IsNull())
    {
        if (!value["QpsStandard"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.QpsStandard` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_qpsStandard = value["QpsStandard"].GetUint64();
        m_qpsStandardHasBeenSet = true;
    }

    if (value.HasMember("BandwidthStandard") && !value["BandwidthStandard"].IsNull())
    {
        if (!value["BandwidthStandard"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.BandwidthStandard` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidthStandard = value["BandwidthStandard"].GetUint64();
        m_bandwidthStandardHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SandboxQps") && !value["SandboxQps"].IsNull())
    {
        if (!value["SandboxQps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.SandboxQps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sandboxQps = value["SandboxQps"].GetUint64();
        m_sandboxQpsHasBeenSet = true;
    }

    if (value.HasMember("IsAPISecurityTrial") && !value["IsAPISecurityTrial"].IsNull())
    {
        if (!value["IsAPISecurityTrial"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.IsAPISecurityTrial` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isAPISecurityTrial = value["IsAPISecurityTrial"].GetUint64();
        m_isAPISecurityTrialHasBeenSet = true;
    }

    if (value.HasMember("MajorEventsPkg") && !value["MajorEventsPkg"].IsNull())
    {
        if (!value["MajorEventsPkg"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.MajorEventsPkg` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_majorEventsPkg.Deserialize(value["MajorEventsPkg"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_majorEventsPkgHasBeenSet = true;
    }

    if (value.HasMember("HybridPkg") && !value["HybridPkg"].IsNull())
    {
        if (!value["HybridPkg"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.HybridPkg` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hybridPkg.Deserialize(value["HybridPkg"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hybridPkgHasBeenSet = true;
    }

    if (value.HasMember("ApiPkg") && !value["ApiPkg"].IsNull())
    {
        if (!value["ApiPkg"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ApiPkg` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_apiPkg.Deserialize(value["ApiPkg"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_apiPkgHasBeenSet = true;
    }

    if (value.HasMember("MiniPkg") && !value["MiniPkg"].IsNull())
    {
        if (!value["MiniPkg"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.MiniPkg` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_miniPkg.Deserialize(value["MiniPkg"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_miniPkgHasBeenSet = true;
    }

    if (value.HasMember("MiniQpsStandard") && !value["MiniQpsStandard"].IsNull())
    {
        if (!value["MiniQpsStandard"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.MiniQpsStandard` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_miniQpsStandard = value["MiniQpsStandard"].GetUint64();
        m_miniQpsStandardHasBeenSet = true;
    }

    if (value.HasMember("MiniMaxQPS") && !value["MiniMaxQPS"].IsNull())
    {
        if (!value["MiniMaxQPS"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.MiniMaxQPS` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_miniMaxQPS = value["MiniMaxQPS"].GetUint64();
        m_miniMaxQPSHasBeenSet = true;
    }

    if (value.HasMember("LastQpsExceedTime") && !value["LastQpsExceedTime"].IsNull())
    {
        if (!value["LastQpsExceedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.LastQpsExceedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastQpsExceedTime = string(value["LastQpsExceedTime"].GetString());
        m_lastQpsExceedTimeHasBeenSet = true;
    }

    if (value.HasMember("MiniExtendPkg") && !value["MiniExtendPkg"].IsNull())
    {
        if (!value["MiniExtendPkg"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.MiniExtendPkg` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_miniExtendPkg.Deserialize(value["MiniExtendPkg"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_miniExtendPkgHasBeenSet = true;
    }

    if (value.HasMember("BillingItem") && !value["BillingItem"].IsNull())
    {
        if (!value["BillingItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.BillingItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingItem = string(value["BillingItem"].GetString());
        m_billingItemHasBeenSet = true;
    }

    if (value.HasMember("FreeDelayFlag") && !value["FreeDelayFlag"].IsNull())
    {
        if (!value["FreeDelayFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.FreeDelayFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_freeDelayFlag = value["FreeDelayFlag"].GetUint64();
        m_freeDelayFlagHasBeenSet = true;
    }

    if (value.HasMember("Last3MaxQPS") && !value["Last3MaxQPS"].IsNull())
    {
        if (!value["Last3MaxQPS"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Last3MaxQPS` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_last3MaxQPS = value["Last3MaxQPS"].GetUint64();
        m_last3MaxQPSHasBeenSet = true;
    }

    if (value.HasMember("Last3MaxBandwidth") && !value["Last3MaxBandwidth"].IsNull())
    {
        if (!value["Last3MaxBandwidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Last3MaxBandwidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_last3MaxBandwidth = value["Last3MaxBandwidth"].GetUint64();
        m_last3MaxBandwidthHasBeenSet = true;
    }

    if (value.HasMember("MajorEventsProPkg") && !value["MajorEventsProPkg"].IsNull())
    {
        if (!value["MajorEventsProPkg"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.MajorEventsProPkg` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_majorEventsProPkg.Deserialize(value["MajorEventsProPkg"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_majorEventsProPkgHasBeenSet = true;
    }

    if (value.HasMember("BasicFlag") && !value["BasicFlag"].IsNull())
    {
        if (!value["BasicFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.BasicFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_basicFlag = value["BasicFlag"].GetUint64();
        m_basicFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_resourceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceIds.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewFlag, allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mode, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_validTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validTime.c_str(), allocator).Move(), allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_domainCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_domainCount, allocator);
    }

    if (m_subDomainLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubDomainLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subDomainLimit, allocator);
    }

    if (m_mainDomainCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainDomainCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mainDomainCount, allocator);
    }

    if (m_mainDomainLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainDomainLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mainDomainLimit, allocator);
    }

    if (m_maxQPSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxQPS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxQPS, allocator);
    }

    if (m_qPSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QPS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_qPS.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_domainPkgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainPkg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_domainPkg.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_editionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Edition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_edition.c_str(), allocator).Move(), allocator);
    }

    if (m_fraudPkgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FraudPkg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fraudPkg.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_botPkgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotPkg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_botPkg.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_botQPSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotQPS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_botQPS.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_elasticBillingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElasticBilling";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_elasticBilling, allocator);
    }

    if (m_attackLogPostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackLogPost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackLogPost, allocator);
    }

    if (m_maxBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxBandwidth, allocator);
    }

    if (m_aPISecurityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APISecurity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aPISecurity, allocator);
    }

    if (m_qpsStandardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QpsStandard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qpsStandard, allocator);
    }

    if (m_bandwidthStandardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthStandard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidthStandard, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_sandboxQpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SandboxQps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sandboxQps, allocator);
    }

    if (m_isAPISecurityTrialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAPISecurityTrial";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAPISecurityTrial, allocator);
    }

    if (m_majorEventsPkgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MajorEventsPkg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_majorEventsPkg.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hybridPkgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HybridPkg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hybridPkg.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_apiPkgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiPkg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_apiPkg.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_miniPkgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniPkg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_miniPkg.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_miniQpsStandardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniQpsStandard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_miniQpsStandard, allocator);
    }

    if (m_miniMaxQPSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniMaxQPS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_miniMaxQPS, allocator);
    }

    if (m_lastQpsExceedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastQpsExceedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastQpsExceedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_miniExtendPkgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniExtendPkg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_miniExtendPkg.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_billingItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billingItem.c_str(), allocator).Move(), allocator);
    }

    if (m_freeDelayFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreeDelayFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_freeDelayFlag, allocator);
    }

    if (m_last3MaxQPSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Last3MaxQPS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_last3MaxQPS, allocator);
    }

    if (m_last3MaxBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Last3MaxBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_last3MaxBandwidth, allocator);
    }

    if (m_majorEventsProPkgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MajorEventsProPkg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_majorEventsProPkg.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_basicFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_basicFlag, allocator);
    }

}


string InstanceInfo::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string InstanceInfo::GetInstanceName() const
{
    return m_instanceName;
}

void InstanceInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool InstanceInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string InstanceInfo::GetResourceIds() const
{
    return m_resourceIds;
}

void InstanceInfo::SetResourceIds(const string& _resourceIds)
{
    m_resourceIds = _resourceIds;
    m_resourceIdsHasBeenSet = true;
}

bool InstanceInfo::ResourceIdsHasBeenSet() const
{
    return m_resourceIdsHasBeenSet;
}

string InstanceInfo::GetRegion() const
{
    return m_region;
}

void InstanceInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool InstanceInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

uint64_t InstanceInfo::GetPayMode() const
{
    return m_payMode;
}

void InstanceInfo::SetPayMode(const uint64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool InstanceInfo::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

uint64_t InstanceInfo::GetRenewFlag() const
{
    return m_renewFlag;
}

void InstanceInfo::SetRenewFlag(const uint64_t& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool InstanceInfo::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

uint64_t InstanceInfo::GetMode() const
{
    return m_mode;
}

void InstanceInfo::SetMode(const uint64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool InstanceInfo::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

uint64_t InstanceInfo::GetLevel() const
{
    return m_level;
}

void InstanceInfo::SetLevel(const uint64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool InstanceInfo::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string InstanceInfo::GetValidTime() const
{
    return m_validTime;
}

void InstanceInfo::SetValidTime(const string& _validTime)
{
    m_validTime = _validTime;
    m_validTimeHasBeenSet = true;
}

bool InstanceInfo::ValidTimeHasBeenSet() const
{
    return m_validTimeHasBeenSet;
}

string InstanceInfo::GetBeginTime() const
{
    return m_beginTime;
}

void InstanceInfo::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool InstanceInfo::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

uint64_t InstanceInfo::GetDomainCount() const
{
    return m_domainCount;
}

void InstanceInfo::SetDomainCount(const uint64_t& _domainCount)
{
    m_domainCount = _domainCount;
    m_domainCountHasBeenSet = true;
}

bool InstanceInfo::DomainCountHasBeenSet() const
{
    return m_domainCountHasBeenSet;
}

uint64_t InstanceInfo::GetSubDomainLimit() const
{
    return m_subDomainLimit;
}

void InstanceInfo::SetSubDomainLimit(const uint64_t& _subDomainLimit)
{
    m_subDomainLimit = _subDomainLimit;
    m_subDomainLimitHasBeenSet = true;
}

bool InstanceInfo::SubDomainLimitHasBeenSet() const
{
    return m_subDomainLimitHasBeenSet;
}

uint64_t InstanceInfo::GetMainDomainCount() const
{
    return m_mainDomainCount;
}

void InstanceInfo::SetMainDomainCount(const uint64_t& _mainDomainCount)
{
    m_mainDomainCount = _mainDomainCount;
    m_mainDomainCountHasBeenSet = true;
}

bool InstanceInfo::MainDomainCountHasBeenSet() const
{
    return m_mainDomainCountHasBeenSet;
}

uint64_t InstanceInfo::GetMainDomainLimit() const
{
    return m_mainDomainLimit;
}

void InstanceInfo::SetMainDomainLimit(const uint64_t& _mainDomainLimit)
{
    m_mainDomainLimit = _mainDomainLimit;
    m_mainDomainLimitHasBeenSet = true;
}

bool InstanceInfo::MainDomainLimitHasBeenSet() const
{
    return m_mainDomainLimitHasBeenSet;
}

uint64_t InstanceInfo::GetMaxQPS() const
{
    return m_maxQPS;
}

void InstanceInfo::SetMaxQPS(const uint64_t& _maxQPS)
{
    m_maxQPS = _maxQPS;
    m_maxQPSHasBeenSet = true;
}

bool InstanceInfo::MaxQPSHasBeenSet() const
{
    return m_maxQPSHasBeenSet;
}

QPSPackageNew InstanceInfo::GetQPS() const
{
    return m_qPS;
}

void InstanceInfo::SetQPS(const QPSPackageNew& _qPS)
{
    m_qPS = _qPS;
    m_qPSHasBeenSet = true;
}

bool InstanceInfo::QPSHasBeenSet() const
{
    return m_qPSHasBeenSet;
}

DomainPackageNew InstanceInfo::GetDomainPkg() const
{
    return m_domainPkg;
}

void InstanceInfo::SetDomainPkg(const DomainPackageNew& _domainPkg)
{
    m_domainPkg = _domainPkg;
    m_domainPkgHasBeenSet = true;
}

bool InstanceInfo::DomainPkgHasBeenSet() const
{
    return m_domainPkgHasBeenSet;
}

uint64_t InstanceInfo::GetAppId() const
{
    return m_appId;
}

void InstanceInfo::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool InstanceInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string InstanceInfo::GetEdition() const
{
    return m_edition;
}

void InstanceInfo::SetEdition(const string& _edition)
{
    m_edition = _edition;
    m_editionHasBeenSet = true;
}

bool InstanceInfo::EditionHasBeenSet() const
{
    return m_editionHasBeenSet;
}

FraudPkg InstanceInfo::GetFraudPkg() const
{
    return m_fraudPkg;
}

void InstanceInfo::SetFraudPkg(const FraudPkg& _fraudPkg)
{
    m_fraudPkg = _fraudPkg;
    m_fraudPkgHasBeenSet = true;
}

bool InstanceInfo::FraudPkgHasBeenSet() const
{
    return m_fraudPkgHasBeenSet;
}

BotPkg InstanceInfo::GetBotPkg() const
{
    return m_botPkg;
}

void InstanceInfo::SetBotPkg(const BotPkg& _botPkg)
{
    m_botPkg = _botPkg;
    m_botPkgHasBeenSet = true;
}

bool InstanceInfo::BotPkgHasBeenSet() const
{
    return m_botPkgHasBeenSet;
}

BotQPS InstanceInfo::GetBotQPS() const
{
    return m_botQPS;
}

void InstanceInfo::SetBotQPS(const BotQPS& _botQPS)
{
    m_botQPS = _botQPS;
    m_botQPSHasBeenSet = true;
}

bool InstanceInfo::BotQPSHasBeenSet() const
{
    return m_botQPSHasBeenSet;
}

uint64_t InstanceInfo::GetElasticBilling() const
{
    return m_elasticBilling;
}

void InstanceInfo::SetElasticBilling(const uint64_t& _elasticBilling)
{
    m_elasticBilling = _elasticBilling;
    m_elasticBillingHasBeenSet = true;
}

bool InstanceInfo::ElasticBillingHasBeenSet() const
{
    return m_elasticBillingHasBeenSet;
}

int64_t InstanceInfo::GetAttackLogPost() const
{
    return m_attackLogPost;
}

void InstanceInfo::SetAttackLogPost(const int64_t& _attackLogPost)
{
    m_attackLogPost = _attackLogPost;
    m_attackLogPostHasBeenSet = true;
}

bool InstanceInfo::AttackLogPostHasBeenSet() const
{
    return m_attackLogPostHasBeenSet;
}

uint64_t InstanceInfo::GetMaxBandwidth() const
{
    return m_maxBandwidth;
}

void InstanceInfo::SetMaxBandwidth(const uint64_t& _maxBandwidth)
{
    m_maxBandwidth = _maxBandwidth;
    m_maxBandwidthHasBeenSet = true;
}

bool InstanceInfo::MaxBandwidthHasBeenSet() const
{
    return m_maxBandwidthHasBeenSet;
}

uint64_t InstanceInfo::GetAPISecurity() const
{
    return m_aPISecurity;
}

void InstanceInfo::SetAPISecurity(const uint64_t& _aPISecurity)
{
    m_aPISecurity = _aPISecurity;
    m_aPISecurityHasBeenSet = true;
}

bool InstanceInfo::APISecurityHasBeenSet() const
{
    return m_aPISecurityHasBeenSet;
}

uint64_t InstanceInfo::GetQpsStandard() const
{
    return m_qpsStandard;
}

void InstanceInfo::SetQpsStandard(const uint64_t& _qpsStandard)
{
    m_qpsStandard = _qpsStandard;
    m_qpsStandardHasBeenSet = true;
}

bool InstanceInfo::QpsStandardHasBeenSet() const
{
    return m_qpsStandardHasBeenSet;
}

uint64_t InstanceInfo::GetBandwidthStandard() const
{
    return m_bandwidthStandard;
}

void InstanceInfo::SetBandwidthStandard(const uint64_t& _bandwidthStandard)
{
    m_bandwidthStandard = _bandwidthStandard;
    m_bandwidthStandardHasBeenSet = true;
}

bool InstanceInfo::BandwidthStandardHasBeenSet() const
{
    return m_bandwidthStandardHasBeenSet;
}

uint64_t InstanceInfo::GetStatus() const
{
    return m_status;
}

void InstanceInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InstanceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t InstanceInfo::GetSandboxQps() const
{
    return m_sandboxQps;
}

void InstanceInfo::SetSandboxQps(const uint64_t& _sandboxQps)
{
    m_sandboxQps = _sandboxQps;
    m_sandboxQpsHasBeenSet = true;
}

bool InstanceInfo::SandboxQpsHasBeenSet() const
{
    return m_sandboxQpsHasBeenSet;
}

uint64_t InstanceInfo::GetIsAPISecurityTrial() const
{
    return m_isAPISecurityTrial;
}

void InstanceInfo::SetIsAPISecurityTrial(const uint64_t& _isAPISecurityTrial)
{
    m_isAPISecurityTrial = _isAPISecurityTrial;
    m_isAPISecurityTrialHasBeenSet = true;
}

bool InstanceInfo::IsAPISecurityTrialHasBeenSet() const
{
    return m_isAPISecurityTrialHasBeenSet;
}

MajorEventsPkg InstanceInfo::GetMajorEventsPkg() const
{
    return m_majorEventsPkg;
}

void InstanceInfo::SetMajorEventsPkg(const MajorEventsPkg& _majorEventsPkg)
{
    m_majorEventsPkg = _majorEventsPkg;
    m_majorEventsPkgHasBeenSet = true;
}

bool InstanceInfo::MajorEventsPkgHasBeenSet() const
{
    return m_majorEventsPkgHasBeenSet;
}

HybridPkg InstanceInfo::GetHybridPkg() const
{
    return m_hybridPkg;
}

void InstanceInfo::SetHybridPkg(const HybridPkg& _hybridPkg)
{
    m_hybridPkg = _hybridPkg;
    m_hybridPkgHasBeenSet = true;
}

bool InstanceInfo::HybridPkgHasBeenSet() const
{
    return m_hybridPkgHasBeenSet;
}

ApiPkg InstanceInfo::GetApiPkg() const
{
    return m_apiPkg;
}

void InstanceInfo::SetApiPkg(const ApiPkg& _apiPkg)
{
    m_apiPkg = _apiPkg;
    m_apiPkgHasBeenSet = true;
}

bool InstanceInfo::ApiPkgHasBeenSet() const
{
    return m_apiPkgHasBeenSet;
}

MiniPkg InstanceInfo::GetMiniPkg() const
{
    return m_miniPkg;
}

void InstanceInfo::SetMiniPkg(const MiniPkg& _miniPkg)
{
    m_miniPkg = _miniPkg;
    m_miniPkgHasBeenSet = true;
}

bool InstanceInfo::MiniPkgHasBeenSet() const
{
    return m_miniPkgHasBeenSet;
}

uint64_t InstanceInfo::GetMiniQpsStandard() const
{
    return m_miniQpsStandard;
}

void InstanceInfo::SetMiniQpsStandard(const uint64_t& _miniQpsStandard)
{
    m_miniQpsStandard = _miniQpsStandard;
    m_miniQpsStandardHasBeenSet = true;
}

bool InstanceInfo::MiniQpsStandardHasBeenSet() const
{
    return m_miniQpsStandardHasBeenSet;
}

uint64_t InstanceInfo::GetMiniMaxQPS() const
{
    return m_miniMaxQPS;
}

void InstanceInfo::SetMiniMaxQPS(const uint64_t& _miniMaxQPS)
{
    m_miniMaxQPS = _miniMaxQPS;
    m_miniMaxQPSHasBeenSet = true;
}

bool InstanceInfo::MiniMaxQPSHasBeenSet() const
{
    return m_miniMaxQPSHasBeenSet;
}

string InstanceInfo::GetLastQpsExceedTime() const
{
    return m_lastQpsExceedTime;
}

void InstanceInfo::SetLastQpsExceedTime(const string& _lastQpsExceedTime)
{
    m_lastQpsExceedTime = _lastQpsExceedTime;
    m_lastQpsExceedTimeHasBeenSet = true;
}

bool InstanceInfo::LastQpsExceedTimeHasBeenSet() const
{
    return m_lastQpsExceedTimeHasBeenSet;
}

MiniExtendPkg InstanceInfo::GetMiniExtendPkg() const
{
    return m_miniExtendPkg;
}

void InstanceInfo::SetMiniExtendPkg(const MiniExtendPkg& _miniExtendPkg)
{
    m_miniExtendPkg = _miniExtendPkg;
    m_miniExtendPkgHasBeenSet = true;
}

bool InstanceInfo::MiniExtendPkgHasBeenSet() const
{
    return m_miniExtendPkgHasBeenSet;
}

string InstanceInfo::GetBillingItem() const
{
    return m_billingItem;
}

void InstanceInfo::SetBillingItem(const string& _billingItem)
{
    m_billingItem = _billingItem;
    m_billingItemHasBeenSet = true;
}

bool InstanceInfo::BillingItemHasBeenSet() const
{
    return m_billingItemHasBeenSet;
}

uint64_t InstanceInfo::GetFreeDelayFlag() const
{
    return m_freeDelayFlag;
}

void InstanceInfo::SetFreeDelayFlag(const uint64_t& _freeDelayFlag)
{
    m_freeDelayFlag = _freeDelayFlag;
    m_freeDelayFlagHasBeenSet = true;
}

bool InstanceInfo::FreeDelayFlagHasBeenSet() const
{
    return m_freeDelayFlagHasBeenSet;
}

uint64_t InstanceInfo::GetLast3MaxQPS() const
{
    return m_last3MaxQPS;
}

void InstanceInfo::SetLast3MaxQPS(const uint64_t& _last3MaxQPS)
{
    m_last3MaxQPS = _last3MaxQPS;
    m_last3MaxQPSHasBeenSet = true;
}

bool InstanceInfo::Last3MaxQPSHasBeenSet() const
{
    return m_last3MaxQPSHasBeenSet;
}

uint64_t InstanceInfo::GetLast3MaxBandwidth() const
{
    return m_last3MaxBandwidth;
}

void InstanceInfo::SetLast3MaxBandwidth(const uint64_t& _last3MaxBandwidth)
{
    m_last3MaxBandwidth = _last3MaxBandwidth;
    m_last3MaxBandwidthHasBeenSet = true;
}

bool InstanceInfo::Last3MaxBandwidthHasBeenSet() const
{
    return m_last3MaxBandwidthHasBeenSet;
}

MajorEventsProPkg InstanceInfo::GetMajorEventsProPkg() const
{
    return m_majorEventsProPkg;
}

void InstanceInfo::SetMajorEventsProPkg(const MajorEventsProPkg& _majorEventsProPkg)
{
    m_majorEventsProPkg = _majorEventsProPkg;
    m_majorEventsProPkgHasBeenSet = true;
}

bool InstanceInfo::MajorEventsProPkgHasBeenSet() const
{
    return m_majorEventsProPkgHasBeenSet;
}

uint64_t InstanceInfo::GetBasicFlag() const
{
    return m_basicFlag;
}

void InstanceInfo::SetBasicFlag(const uint64_t& _basicFlag)
{
    m_basicFlag = _basicFlag;
    m_basicFlagHasBeenSet = true;
}

bool InstanceInfo::BasicFlagHasBeenSet() const
{
    return m_basicFlagHasBeenSet;
}

