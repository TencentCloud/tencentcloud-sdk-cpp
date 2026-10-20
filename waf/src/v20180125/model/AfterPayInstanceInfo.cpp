/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/waf/v20180125/model/AfterPayInstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

AfterPayInstanceInfo::AfterPayInstanceInfo() :
    m_appIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_resourceIdsHasBeenSet(false),
    m_editionHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_validTimeHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_billingItemHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_subDomainLimitHasBeenSet(false),
    m_mainDomainLimitHasBeenSet(false),
    m_elasticBillingHasBeenSet(false),
    m_attackLogPostHasBeenSet(false),
    m_aPISecurityHasBeenSet(false),
    m_isAPISecurityTrialHasBeenSet(false),
    m_freeDelayFlagHasBeenSet(false),
    m_basicFlagHasBeenSet(false),
    m_lLMPkgHasBeenSet(false),
    m_lLMTokenUsageHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_domainCountHasBeenSet(false),
    m_mainDomainCountHasBeenSet(false),
    m_expertRuleCountHasBeenSet(false),
    m_customRuleCountHasBeenSet(false),
    m_maxQPSHasBeenSet(false),
    m_qPSHasBeenSet(false),
    m_domainPkgHasBeenSet(false),
    m_fraudPkgHasBeenSet(false),
    m_botPkgHasBeenSet(false),
    m_botQPSHasBeenSet(false),
    m_maxBandwidthHasBeenSet(false),
    m_qpsStandardHasBeenSet(false),
    m_bandwidthStandardHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_sandboxQpsHasBeenSet(false),
    m_majorEventsPkgHasBeenSet(false),
    m_hybridPkgHasBeenSet(false),
    m_apiPkgHasBeenSet(false),
    m_miniPkgHasBeenSet(false),
    m_miniQpsStandardHasBeenSet(false),
    m_miniMaxQPSHasBeenSet(false),
    m_lastQpsExceedTimeHasBeenSet(false),
    m_miniExtendPkgHasBeenSet(false),
    m_last3MaxQPSHasBeenSet(false),
    m_last3MaxBandwidthHasBeenSet(false),
    m_last7MaxMiniBandwidthHasBeenSet(false),
    m_miniBandwidthStandardHasBeenSet(false),
    m_majorEventsProPkgHasBeenSet(false),
    m_networkConfigHasBeenSet(false),
    m_rCEPkgHasBeenSet(false),
    m_exceedPolicyHasBeenSet(false),
    m_elasticResourceIdHasBeenSet(false),
    m_lLMMonPkgHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_botSecurityPkgHasBeenSet(false),
    m_botMonitorPkgHasBeenSet(false),
    m_dedicatedIPPkgHasBeenSet(false),
    m_dedicatedIPCountHasBeenSet(false),
    m_tagInfosHasBeenSet(false)
{
}

CoreInternalOutcome AfterPayInstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceIds") && !value["ResourceIds"].IsNull())
    {
        if (!value["ResourceIds"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.ResourceIds` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceIds = string(value["ResourceIds"].GetString());
        m_resourceIdsHasBeenSet = true;
    }

    if (value.HasMember("Edition") && !value["Edition"].IsNull())
    {
        if (!value["Edition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.Edition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_edition = string(value["Edition"].GetString());
        m_editionHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.PayMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetUint64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("ValidTime") && !value["ValidTime"].IsNull())
    {
        if (!value["ValidTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.ValidTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validTime = string(value["ValidTime"].GetString());
        m_validTimeHasBeenSet = true;
    }

    if (value.HasMember("BeginTime") && !value["BeginTime"].IsNull())
    {
        if (!value["BeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.BeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = string(value["BeginTime"].GetString());
        m_beginTimeHasBeenSet = true;
    }

    if (value.HasMember("BillingItem") && !value["BillingItem"].IsNull())
    {
        if (!value["BillingItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.BillingItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingItem = string(value["BillingItem"].GetString());
        m_billingItemHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.RenewFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = value["RenewFlag"].GetUint64();
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.Level` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetUint64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("SubDomainLimit") && !value["SubDomainLimit"].IsNull())
    {
        if (!value["SubDomainLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.SubDomainLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_subDomainLimit = value["SubDomainLimit"].GetUint64();
        m_subDomainLimitHasBeenSet = true;
    }

    if (value.HasMember("MainDomainLimit") && !value["MainDomainLimit"].IsNull())
    {
        if (!value["MainDomainLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.MainDomainLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mainDomainLimit = value["MainDomainLimit"].GetUint64();
        m_mainDomainLimitHasBeenSet = true;
    }

    if (value.HasMember("ElasticBilling") && !value["ElasticBilling"].IsNull())
    {
        if (!value["ElasticBilling"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.ElasticBilling` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_elasticBilling = value["ElasticBilling"].GetUint64();
        m_elasticBillingHasBeenSet = true;
    }

    if (value.HasMember("AttackLogPost") && !value["AttackLogPost"].IsNull())
    {
        if (!value["AttackLogPost"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.AttackLogPost` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attackLogPost = value["AttackLogPost"].GetInt64();
        m_attackLogPostHasBeenSet = true;
    }

    if (value.HasMember("APISecurity") && !value["APISecurity"].IsNull())
    {
        if (!value["APISecurity"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.APISecurity` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_aPISecurity = value["APISecurity"].GetUint64();
        m_aPISecurityHasBeenSet = true;
    }

    if (value.HasMember("IsAPISecurityTrial") && !value["IsAPISecurityTrial"].IsNull())
    {
        if (!value["IsAPISecurityTrial"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.IsAPISecurityTrial` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isAPISecurityTrial = value["IsAPISecurityTrial"].GetUint64();
        m_isAPISecurityTrialHasBeenSet = true;
    }

    if (value.HasMember("FreeDelayFlag") && !value["FreeDelayFlag"].IsNull())
    {
        if (!value["FreeDelayFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.FreeDelayFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_freeDelayFlag = value["FreeDelayFlag"].GetUint64();
        m_freeDelayFlagHasBeenSet = true;
    }

    if (value.HasMember("BasicFlag") && !value["BasicFlag"].IsNull())
    {
        if (!value["BasicFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.BasicFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_basicFlag = value["BasicFlag"].GetUint64();
        m_basicFlagHasBeenSet = true;
    }

    if (value.HasMember("LLMPkg") && !value["LLMPkg"].IsNull())
    {
        if (!value["LLMPkg"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.LLMPkg` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lLMPkg.Deserialize(value["LLMPkg"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lLMPkgHasBeenSet = true;
    }

    if (value.HasMember("LLMTokenUsage") && !value["LLMTokenUsage"].IsNull())
    {
        if (!value["LLMTokenUsage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.LLMTokenUsage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lLMTokenUsage.Deserialize(value["LLMTokenUsage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lLMTokenUsageHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.Mode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mode = value["Mode"].GetUint64();
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("DomainCount") && !value["DomainCount"].IsNull())
    {
        if (!value["DomainCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.DomainCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_domainCount = value["DomainCount"].GetUint64();
        m_domainCountHasBeenSet = true;
    }

    if (value.HasMember("MainDomainCount") && !value["MainDomainCount"].IsNull())
    {
        if (!value["MainDomainCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.MainDomainCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mainDomainCount = value["MainDomainCount"].GetUint64();
        m_mainDomainCountHasBeenSet = true;
    }

    if (value.HasMember("ExpertRuleCount") && !value["ExpertRuleCount"].IsNull())
    {
        if (!value["ExpertRuleCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.ExpertRuleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expertRuleCount = value["ExpertRuleCount"].GetUint64();
        m_expertRuleCountHasBeenSet = true;
    }

    if (value.HasMember("CustomRuleCount") && !value["CustomRuleCount"].IsNull())
    {
        if (!value["CustomRuleCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.CustomRuleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_customRuleCount = value["CustomRuleCount"].GetUint64();
        m_customRuleCountHasBeenSet = true;
    }

    if (value.HasMember("MaxQPS") && !value["MaxQPS"].IsNull())
    {
        if (!value["MaxQPS"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.MaxQPS` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxQPS = value["MaxQPS"].GetUint64();
        m_maxQPSHasBeenSet = true;
    }

    if (value.HasMember("QPS") && !value["QPS"].IsNull())
    {
        if (!value["QPS"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.QPS` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.DomainPkg` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_domainPkg.Deserialize(value["DomainPkg"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_domainPkgHasBeenSet = true;
    }

    if (value.HasMember("FraudPkg") && !value["FraudPkg"].IsNull())
    {
        if (!value["FraudPkg"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.FraudPkg` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.BotPkg` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.BotQPS` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_botQPS.Deserialize(value["BotQPS"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_botQPSHasBeenSet = true;
    }

    if (value.HasMember("MaxBandwidth") && !value["MaxBandwidth"].IsNull())
    {
        if (!value["MaxBandwidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.MaxBandwidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxBandwidth = value["MaxBandwidth"].GetUint64();
        m_maxBandwidthHasBeenSet = true;
    }

    if (value.HasMember("QpsStandard") && !value["QpsStandard"].IsNull())
    {
        if (!value["QpsStandard"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.QpsStandard` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_qpsStandard = value["QpsStandard"].GetUint64();
        m_qpsStandardHasBeenSet = true;
    }

    if (value.HasMember("BandwidthStandard") && !value["BandwidthStandard"].IsNull())
    {
        if (!value["BandwidthStandard"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.BandwidthStandard` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidthStandard = value["BandwidthStandard"].GetUint64();
        m_bandwidthStandardHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SandboxQps") && !value["SandboxQps"].IsNull())
    {
        if (!value["SandboxQps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.SandboxQps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sandboxQps = value["SandboxQps"].GetUint64();
        m_sandboxQpsHasBeenSet = true;
    }

    if (value.HasMember("MajorEventsPkg") && !value["MajorEventsPkg"].IsNull())
    {
        if (!value["MajorEventsPkg"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.MajorEventsPkg` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.HybridPkg` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.ApiPkg` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.MiniPkg` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.MiniQpsStandard` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_miniQpsStandard = value["MiniQpsStandard"].GetUint64();
        m_miniQpsStandardHasBeenSet = true;
    }

    if (value.HasMember("MiniMaxQPS") && !value["MiniMaxQPS"].IsNull())
    {
        if (!value["MiniMaxQPS"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.MiniMaxQPS` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_miniMaxQPS = value["MiniMaxQPS"].GetUint64();
        m_miniMaxQPSHasBeenSet = true;
    }

    if (value.HasMember("LastQpsExceedTime") && !value["LastQpsExceedTime"].IsNull())
    {
        if (!value["LastQpsExceedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.LastQpsExceedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastQpsExceedTime = string(value["LastQpsExceedTime"].GetString());
        m_lastQpsExceedTimeHasBeenSet = true;
    }

    if (value.HasMember("MiniExtendPkg") && !value["MiniExtendPkg"].IsNull())
    {
        if (!value["MiniExtendPkg"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.MiniExtendPkg` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_miniExtendPkg.Deserialize(value["MiniExtendPkg"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_miniExtendPkgHasBeenSet = true;
    }

    if (value.HasMember("Last3MaxQPS") && !value["Last3MaxQPS"].IsNull())
    {
        if (!value["Last3MaxQPS"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.Last3MaxQPS` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_last3MaxQPS = value["Last3MaxQPS"].GetUint64();
        m_last3MaxQPSHasBeenSet = true;
    }

    if (value.HasMember("Last3MaxBandwidth") && !value["Last3MaxBandwidth"].IsNull())
    {
        if (!value["Last3MaxBandwidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.Last3MaxBandwidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_last3MaxBandwidth = value["Last3MaxBandwidth"].GetUint64();
        m_last3MaxBandwidthHasBeenSet = true;
    }

    if (value.HasMember("Last7MaxMiniBandwidth") && !value["Last7MaxMiniBandwidth"].IsNull())
    {
        if (!value["Last7MaxMiniBandwidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.Last7MaxMiniBandwidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_last7MaxMiniBandwidth = value["Last7MaxMiniBandwidth"].GetUint64();
        m_last7MaxMiniBandwidthHasBeenSet = true;
    }

    if (value.HasMember("MiniBandwidthStandard") && !value["MiniBandwidthStandard"].IsNull())
    {
        if (!value["MiniBandwidthStandard"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.MiniBandwidthStandard` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_miniBandwidthStandard = value["MiniBandwidthStandard"].GetUint64();
        m_miniBandwidthStandardHasBeenSet = true;
    }

    if (value.HasMember("MajorEventsProPkg") && !value["MajorEventsProPkg"].IsNull())
    {
        if (!value["MajorEventsProPkg"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.MajorEventsProPkg` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_majorEventsProPkg.Deserialize(value["MajorEventsProPkg"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_majorEventsProPkgHasBeenSet = true;
    }

    if (value.HasMember("NetworkConfig") && !value["NetworkConfig"].IsNull())
    {
        if (!value["NetworkConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.NetworkConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_networkConfig.Deserialize(value["NetworkConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_networkConfigHasBeenSet = true;
    }

    if (value.HasMember("RCEPkg") && !value["RCEPkg"].IsNull())
    {
        if (!value["RCEPkg"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.RCEPkg` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rCEPkg.Deserialize(value["RCEPkg"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rCEPkgHasBeenSet = true;
    }

    if (value.HasMember("ExceedPolicy") && !value["ExceedPolicy"].IsNull())
    {
        if (!value["ExceedPolicy"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.ExceedPolicy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_exceedPolicy = value["ExceedPolicy"].GetInt64();
        m_exceedPolicyHasBeenSet = true;
    }

    if (value.HasMember("ElasticResourceId") && !value["ElasticResourceId"].IsNull())
    {
        if (!value["ElasticResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.ElasticResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_elasticResourceId = string(value["ElasticResourceId"].GetString());
        m_elasticResourceIdHasBeenSet = true;
    }

    if (value.HasMember("LLMMonPkg") && !value["LLMMonPkg"].IsNull())
    {
        if (!value["LLMMonPkg"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.LLMMonPkg` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lLMMonPkg.Deserialize(value["LLMMonPkg"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lLMMonPkgHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.RegionId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetUint64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("BotSecurityPkg") && !value["BotSecurityPkg"].IsNull())
    {
        if (!value["BotSecurityPkg"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.BotSecurityPkg` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_botSecurityPkg.Deserialize(value["BotSecurityPkg"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_botSecurityPkgHasBeenSet = true;
    }

    if (value.HasMember("BotMonitorPkg") && !value["BotMonitorPkg"].IsNull())
    {
        if (!value["BotMonitorPkg"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.BotMonitorPkg` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_botMonitorPkg.Deserialize(value["BotMonitorPkg"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_botMonitorPkgHasBeenSet = true;
    }

    if (value.HasMember("DedicatedIPPkg") && !value["DedicatedIPPkg"].IsNull())
    {
        if (!value["DedicatedIPPkg"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.DedicatedIPPkg` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dedicatedIPPkg.Deserialize(value["DedicatedIPPkg"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dedicatedIPPkgHasBeenSet = true;
    }

    if (value.HasMember("DedicatedIPCount") && !value["DedicatedIPCount"].IsNull())
    {
        if (!value["DedicatedIPCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.DedicatedIPCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dedicatedIPCount = value["DedicatedIPCount"].GetInt64();
        m_dedicatedIPCountHasBeenSet = true;
    }

    if (value.HasMember("TagInfos") && !value["TagInfos"].IsNull())
    {
        if (!value["TagInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AfterPayInstanceInfo.TagInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["TagInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagInfos.push_back(item);
        }
        m_tagInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AfterPayInstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
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

    if (m_resourceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceIds.c_str(), allocator).Move(), allocator);
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

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
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

    if (m_billingItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billingItem.c_str(), allocator).Move(), allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewFlag, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_subDomainLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubDomainLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subDomainLimit, allocator);
    }

    if (m_mainDomainLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainDomainLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mainDomainLimit, allocator);
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

    if (m_aPISecurityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APISecurity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aPISecurity, allocator);
    }

    if (m_isAPISecurityTrialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAPISecurityTrial";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAPISecurityTrial, allocator);
    }

    if (m_freeDelayFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreeDelayFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_freeDelayFlag, allocator);
    }

    if (m_basicFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_basicFlag, allocator);
    }

    if (m_lLMPkgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LLMPkg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lLMPkg.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lLMTokenUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LLMTokenUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lLMTokenUsage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mode, allocator);
    }

    if (m_domainCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_domainCount, allocator);
    }

    if (m_mainDomainCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainDomainCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mainDomainCount, allocator);
    }

    if (m_expertRuleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpertRuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expertRuleCount, allocator);
    }

    if (m_customRuleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomRuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_customRuleCount, allocator);
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

    if (m_maxBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxBandwidth, allocator);
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

    if (m_last7MaxMiniBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Last7MaxMiniBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_last7MaxMiniBandwidth, allocator);
    }

    if (m_miniBandwidthStandardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniBandwidthStandard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_miniBandwidthStandard, allocator);
    }

    if (m_majorEventsProPkgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MajorEventsProPkg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_majorEventsProPkg.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_networkConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_networkConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rCEPkgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RCEPkg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rCEPkg.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_exceedPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExceedPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exceedPolicy, allocator);
    }

    if (m_elasticResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElasticResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_elasticResourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_lLMMonPkgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LLMMonPkg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lLMMonPkg.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_botSecurityPkgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotSecurityPkg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_botSecurityPkg.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_botMonitorPkgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotMonitorPkg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_botMonitorPkg.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dedicatedIPPkgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DedicatedIPPkg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dedicatedIPPkg.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dedicatedIPCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DedicatedIPCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dedicatedIPCount, allocator);
    }

    if (m_tagInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagInfos.begin(); itr != m_tagInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t AfterPayInstanceInfo::GetAppId() const
{
    return m_appId;
}

void AfterPayInstanceInfo::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool AfterPayInstanceInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string AfterPayInstanceInfo::GetInstanceId() const
{
    return m_instanceId;
}

void AfterPayInstanceInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AfterPayInstanceInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string AfterPayInstanceInfo::GetInstanceName() const
{
    return m_instanceName;
}

void AfterPayInstanceInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool AfterPayInstanceInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string AfterPayInstanceInfo::GetResourceIds() const
{
    return m_resourceIds;
}

void AfterPayInstanceInfo::SetResourceIds(const string& _resourceIds)
{
    m_resourceIds = _resourceIds;
    m_resourceIdsHasBeenSet = true;
}

bool AfterPayInstanceInfo::ResourceIdsHasBeenSet() const
{
    return m_resourceIdsHasBeenSet;
}

string AfterPayInstanceInfo::GetEdition() const
{
    return m_edition;
}

void AfterPayInstanceInfo::SetEdition(const string& _edition)
{
    m_edition = _edition;
    m_editionHasBeenSet = true;
}

bool AfterPayInstanceInfo::EditionHasBeenSet() const
{
    return m_editionHasBeenSet;
}

string AfterPayInstanceInfo::GetRegion() const
{
    return m_region;
}

void AfterPayInstanceInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool AfterPayInstanceInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

uint64_t AfterPayInstanceInfo::GetPayMode() const
{
    return m_payMode;
}

void AfterPayInstanceInfo::SetPayMode(const uint64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool AfterPayInstanceInfo::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string AfterPayInstanceInfo::GetValidTime() const
{
    return m_validTime;
}

void AfterPayInstanceInfo::SetValidTime(const string& _validTime)
{
    m_validTime = _validTime;
    m_validTimeHasBeenSet = true;
}

bool AfterPayInstanceInfo::ValidTimeHasBeenSet() const
{
    return m_validTimeHasBeenSet;
}

string AfterPayInstanceInfo::GetBeginTime() const
{
    return m_beginTime;
}

void AfterPayInstanceInfo::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool AfterPayInstanceInfo::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string AfterPayInstanceInfo::GetBillingItem() const
{
    return m_billingItem;
}

void AfterPayInstanceInfo::SetBillingItem(const string& _billingItem)
{
    m_billingItem = _billingItem;
    m_billingItemHasBeenSet = true;
}

bool AfterPayInstanceInfo::BillingItemHasBeenSet() const
{
    return m_billingItemHasBeenSet;
}

uint64_t AfterPayInstanceInfo::GetRenewFlag() const
{
    return m_renewFlag;
}

void AfterPayInstanceInfo::SetRenewFlag(const uint64_t& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool AfterPayInstanceInfo::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

uint64_t AfterPayInstanceInfo::GetLevel() const
{
    return m_level;
}

void AfterPayInstanceInfo::SetLevel(const uint64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool AfterPayInstanceInfo::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string AfterPayInstanceInfo::GetModifyTime() const
{
    return m_modifyTime;
}

void AfterPayInstanceInfo::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool AfterPayInstanceInfo::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

uint64_t AfterPayInstanceInfo::GetSubDomainLimit() const
{
    return m_subDomainLimit;
}

void AfterPayInstanceInfo::SetSubDomainLimit(const uint64_t& _subDomainLimit)
{
    m_subDomainLimit = _subDomainLimit;
    m_subDomainLimitHasBeenSet = true;
}

bool AfterPayInstanceInfo::SubDomainLimitHasBeenSet() const
{
    return m_subDomainLimitHasBeenSet;
}

uint64_t AfterPayInstanceInfo::GetMainDomainLimit() const
{
    return m_mainDomainLimit;
}

void AfterPayInstanceInfo::SetMainDomainLimit(const uint64_t& _mainDomainLimit)
{
    m_mainDomainLimit = _mainDomainLimit;
    m_mainDomainLimitHasBeenSet = true;
}

bool AfterPayInstanceInfo::MainDomainLimitHasBeenSet() const
{
    return m_mainDomainLimitHasBeenSet;
}

uint64_t AfterPayInstanceInfo::GetElasticBilling() const
{
    return m_elasticBilling;
}

void AfterPayInstanceInfo::SetElasticBilling(const uint64_t& _elasticBilling)
{
    m_elasticBilling = _elasticBilling;
    m_elasticBillingHasBeenSet = true;
}

bool AfterPayInstanceInfo::ElasticBillingHasBeenSet() const
{
    return m_elasticBillingHasBeenSet;
}

int64_t AfterPayInstanceInfo::GetAttackLogPost() const
{
    return m_attackLogPost;
}

void AfterPayInstanceInfo::SetAttackLogPost(const int64_t& _attackLogPost)
{
    m_attackLogPost = _attackLogPost;
    m_attackLogPostHasBeenSet = true;
}

bool AfterPayInstanceInfo::AttackLogPostHasBeenSet() const
{
    return m_attackLogPostHasBeenSet;
}

uint64_t AfterPayInstanceInfo::GetAPISecurity() const
{
    return m_aPISecurity;
}

void AfterPayInstanceInfo::SetAPISecurity(const uint64_t& _aPISecurity)
{
    m_aPISecurity = _aPISecurity;
    m_aPISecurityHasBeenSet = true;
}

bool AfterPayInstanceInfo::APISecurityHasBeenSet() const
{
    return m_aPISecurityHasBeenSet;
}

uint64_t AfterPayInstanceInfo::GetIsAPISecurityTrial() const
{
    return m_isAPISecurityTrial;
}

void AfterPayInstanceInfo::SetIsAPISecurityTrial(const uint64_t& _isAPISecurityTrial)
{
    m_isAPISecurityTrial = _isAPISecurityTrial;
    m_isAPISecurityTrialHasBeenSet = true;
}

bool AfterPayInstanceInfo::IsAPISecurityTrialHasBeenSet() const
{
    return m_isAPISecurityTrialHasBeenSet;
}

uint64_t AfterPayInstanceInfo::GetFreeDelayFlag() const
{
    return m_freeDelayFlag;
}

void AfterPayInstanceInfo::SetFreeDelayFlag(const uint64_t& _freeDelayFlag)
{
    m_freeDelayFlag = _freeDelayFlag;
    m_freeDelayFlagHasBeenSet = true;
}

bool AfterPayInstanceInfo::FreeDelayFlagHasBeenSet() const
{
    return m_freeDelayFlagHasBeenSet;
}

uint64_t AfterPayInstanceInfo::GetBasicFlag() const
{
    return m_basicFlag;
}

void AfterPayInstanceInfo::SetBasicFlag(const uint64_t& _basicFlag)
{
    m_basicFlag = _basicFlag;
    m_basicFlagHasBeenSet = true;
}

bool AfterPayInstanceInfo::BasicFlagHasBeenSet() const
{
    return m_basicFlagHasBeenSet;
}

LLMPkg AfterPayInstanceInfo::GetLLMPkg() const
{
    return m_lLMPkg;
}

void AfterPayInstanceInfo::SetLLMPkg(const LLMPkg& _lLMPkg)
{
    m_lLMPkg = _lLMPkg;
    m_lLMPkgHasBeenSet = true;
}

bool AfterPayInstanceInfo::LLMPkgHasBeenSet() const
{
    return m_lLMPkgHasBeenSet;
}

LLMTokenUsage AfterPayInstanceInfo::GetLLMTokenUsage() const
{
    return m_lLMTokenUsage;
}

void AfterPayInstanceInfo::SetLLMTokenUsage(const LLMTokenUsage& _lLMTokenUsage)
{
    m_lLMTokenUsage = _lLMTokenUsage;
    m_lLMTokenUsageHasBeenSet = true;
}

bool AfterPayInstanceInfo::LLMTokenUsageHasBeenSet() const
{
    return m_lLMTokenUsageHasBeenSet;
}

uint64_t AfterPayInstanceInfo::GetMode() const
{
    return m_mode;
}

void AfterPayInstanceInfo::SetMode(const uint64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool AfterPayInstanceInfo::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

uint64_t AfterPayInstanceInfo::GetDomainCount() const
{
    return m_domainCount;
}

void AfterPayInstanceInfo::SetDomainCount(const uint64_t& _domainCount)
{
    m_domainCount = _domainCount;
    m_domainCountHasBeenSet = true;
}

bool AfterPayInstanceInfo::DomainCountHasBeenSet() const
{
    return m_domainCountHasBeenSet;
}

uint64_t AfterPayInstanceInfo::GetMainDomainCount() const
{
    return m_mainDomainCount;
}

void AfterPayInstanceInfo::SetMainDomainCount(const uint64_t& _mainDomainCount)
{
    m_mainDomainCount = _mainDomainCount;
    m_mainDomainCountHasBeenSet = true;
}

bool AfterPayInstanceInfo::MainDomainCountHasBeenSet() const
{
    return m_mainDomainCountHasBeenSet;
}

uint64_t AfterPayInstanceInfo::GetExpertRuleCount() const
{
    return m_expertRuleCount;
}

void AfterPayInstanceInfo::SetExpertRuleCount(const uint64_t& _expertRuleCount)
{
    m_expertRuleCount = _expertRuleCount;
    m_expertRuleCountHasBeenSet = true;
}

bool AfterPayInstanceInfo::ExpertRuleCountHasBeenSet() const
{
    return m_expertRuleCountHasBeenSet;
}

uint64_t AfterPayInstanceInfo::GetCustomRuleCount() const
{
    return m_customRuleCount;
}

void AfterPayInstanceInfo::SetCustomRuleCount(const uint64_t& _customRuleCount)
{
    m_customRuleCount = _customRuleCount;
    m_customRuleCountHasBeenSet = true;
}

bool AfterPayInstanceInfo::CustomRuleCountHasBeenSet() const
{
    return m_customRuleCountHasBeenSet;
}

uint64_t AfterPayInstanceInfo::GetMaxQPS() const
{
    return m_maxQPS;
}

void AfterPayInstanceInfo::SetMaxQPS(const uint64_t& _maxQPS)
{
    m_maxQPS = _maxQPS;
    m_maxQPSHasBeenSet = true;
}

bool AfterPayInstanceInfo::MaxQPSHasBeenSet() const
{
    return m_maxQPSHasBeenSet;
}

QPSPackageNew AfterPayInstanceInfo::GetQPS() const
{
    return m_qPS;
}

void AfterPayInstanceInfo::SetQPS(const QPSPackageNew& _qPS)
{
    m_qPS = _qPS;
    m_qPSHasBeenSet = true;
}

bool AfterPayInstanceInfo::QPSHasBeenSet() const
{
    return m_qPSHasBeenSet;
}

DomainPackageNew AfterPayInstanceInfo::GetDomainPkg() const
{
    return m_domainPkg;
}

void AfterPayInstanceInfo::SetDomainPkg(const DomainPackageNew& _domainPkg)
{
    m_domainPkg = _domainPkg;
    m_domainPkgHasBeenSet = true;
}

bool AfterPayInstanceInfo::DomainPkgHasBeenSet() const
{
    return m_domainPkgHasBeenSet;
}

FraudPkg AfterPayInstanceInfo::GetFraudPkg() const
{
    return m_fraudPkg;
}

void AfterPayInstanceInfo::SetFraudPkg(const FraudPkg& _fraudPkg)
{
    m_fraudPkg = _fraudPkg;
    m_fraudPkgHasBeenSet = true;
}

bool AfterPayInstanceInfo::FraudPkgHasBeenSet() const
{
    return m_fraudPkgHasBeenSet;
}

BotPkg AfterPayInstanceInfo::GetBotPkg() const
{
    return m_botPkg;
}

void AfterPayInstanceInfo::SetBotPkg(const BotPkg& _botPkg)
{
    m_botPkg = _botPkg;
    m_botPkgHasBeenSet = true;
}

bool AfterPayInstanceInfo::BotPkgHasBeenSet() const
{
    return m_botPkgHasBeenSet;
}

BotQPS AfterPayInstanceInfo::GetBotQPS() const
{
    return m_botQPS;
}

void AfterPayInstanceInfo::SetBotQPS(const BotQPS& _botQPS)
{
    m_botQPS = _botQPS;
    m_botQPSHasBeenSet = true;
}

bool AfterPayInstanceInfo::BotQPSHasBeenSet() const
{
    return m_botQPSHasBeenSet;
}

uint64_t AfterPayInstanceInfo::GetMaxBandwidth() const
{
    return m_maxBandwidth;
}

void AfterPayInstanceInfo::SetMaxBandwidth(const uint64_t& _maxBandwidth)
{
    m_maxBandwidth = _maxBandwidth;
    m_maxBandwidthHasBeenSet = true;
}

bool AfterPayInstanceInfo::MaxBandwidthHasBeenSet() const
{
    return m_maxBandwidthHasBeenSet;
}

uint64_t AfterPayInstanceInfo::GetQpsStandard() const
{
    return m_qpsStandard;
}

void AfterPayInstanceInfo::SetQpsStandard(const uint64_t& _qpsStandard)
{
    m_qpsStandard = _qpsStandard;
    m_qpsStandardHasBeenSet = true;
}

bool AfterPayInstanceInfo::QpsStandardHasBeenSet() const
{
    return m_qpsStandardHasBeenSet;
}

uint64_t AfterPayInstanceInfo::GetBandwidthStandard() const
{
    return m_bandwidthStandard;
}

void AfterPayInstanceInfo::SetBandwidthStandard(const uint64_t& _bandwidthStandard)
{
    m_bandwidthStandard = _bandwidthStandard;
    m_bandwidthStandardHasBeenSet = true;
}

bool AfterPayInstanceInfo::BandwidthStandardHasBeenSet() const
{
    return m_bandwidthStandardHasBeenSet;
}

uint64_t AfterPayInstanceInfo::GetStatus() const
{
    return m_status;
}

void AfterPayInstanceInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AfterPayInstanceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t AfterPayInstanceInfo::GetSandboxQps() const
{
    return m_sandboxQps;
}

void AfterPayInstanceInfo::SetSandboxQps(const uint64_t& _sandboxQps)
{
    m_sandboxQps = _sandboxQps;
    m_sandboxQpsHasBeenSet = true;
}

bool AfterPayInstanceInfo::SandboxQpsHasBeenSet() const
{
    return m_sandboxQpsHasBeenSet;
}

MajorEventsPkg AfterPayInstanceInfo::GetMajorEventsPkg() const
{
    return m_majorEventsPkg;
}

void AfterPayInstanceInfo::SetMajorEventsPkg(const MajorEventsPkg& _majorEventsPkg)
{
    m_majorEventsPkg = _majorEventsPkg;
    m_majorEventsPkgHasBeenSet = true;
}

bool AfterPayInstanceInfo::MajorEventsPkgHasBeenSet() const
{
    return m_majorEventsPkgHasBeenSet;
}

HybridPkg AfterPayInstanceInfo::GetHybridPkg() const
{
    return m_hybridPkg;
}

void AfterPayInstanceInfo::SetHybridPkg(const HybridPkg& _hybridPkg)
{
    m_hybridPkg = _hybridPkg;
    m_hybridPkgHasBeenSet = true;
}

bool AfterPayInstanceInfo::HybridPkgHasBeenSet() const
{
    return m_hybridPkgHasBeenSet;
}

ApiPkg AfterPayInstanceInfo::GetApiPkg() const
{
    return m_apiPkg;
}

void AfterPayInstanceInfo::SetApiPkg(const ApiPkg& _apiPkg)
{
    m_apiPkg = _apiPkg;
    m_apiPkgHasBeenSet = true;
}

bool AfterPayInstanceInfo::ApiPkgHasBeenSet() const
{
    return m_apiPkgHasBeenSet;
}

MiniPkg AfterPayInstanceInfo::GetMiniPkg() const
{
    return m_miniPkg;
}

void AfterPayInstanceInfo::SetMiniPkg(const MiniPkg& _miniPkg)
{
    m_miniPkg = _miniPkg;
    m_miniPkgHasBeenSet = true;
}

bool AfterPayInstanceInfo::MiniPkgHasBeenSet() const
{
    return m_miniPkgHasBeenSet;
}

uint64_t AfterPayInstanceInfo::GetMiniQpsStandard() const
{
    return m_miniQpsStandard;
}

void AfterPayInstanceInfo::SetMiniQpsStandard(const uint64_t& _miniQpsStandard)
{
    m_miniQpsStandard = _miniQpsStandard;
    m_miniQpsStandardHasBeenSet = true;
}

bool AfterPayInstanceInfo::MiniQpsStandardHasBeenSet() const
{
    return m_miniQpsStandardHasBeenSet;
}

uint64_t AfterPayInstanceInfo::GetMiniMaxQPS() const
{
    return m_miniMaxQPS;
}

void AfterPayInstanceInfo::SetMiniMaxQPS(const uint64_t& _miniMaxQPS)
{
    m_miniMaxQPS = _miniMaxQPS;
    m_miniMaxQPSHasBeenSet = true;
}

bool AfterPayInstanceInfo::MiniMaxQPSHasBeenSet() const
{
    return m_miniMaxQPSHasBeenSet;
}

string AfterPayInstanceInfo::GetLastQpsExceedTime() const
{
    return m_lastQpsExceedTime;
}

void AfterPayInstanceInfo::SetLastQpsExceedTime(const string& _lastQpsExceedTime)
{
    m_lastQpsExceedTime = _lastQpsExceedTime;
    m_lastQpsExceedTimeHasBeenSet = true;
}

bool AfterPayInstanceInfo::LastQpsExceedTimeHasBeenSet() const
{
    return m_lastQpsExceedTimeHasBeenSet;
}

MiniExtendPkg AfterPayInstanceInfo::GetMiniExtendPkg() const
{
    return m_miniExtendPkg;
}

void AfterPayInstanceInfo::SetMiniExtendPkg(const MiniExtendPkg& _miniExtendPkg)
{
    m_miniExtendPkg = _miniExtendPkg;
    m_miniExtendPkgHasBeenSet = true;
}

bool AfterPayInstanceInfo::MiniExtendPkgHasBeenSet() const
{
    return m_miniExtendPkgHasBeenSet;
}

uint64_t AfterPayInstanceInfo::GetLast3MaxQPS() const
{
    return m_last3MaxQPS;
}

void AfterPayInstanceInfo::SetLast3MaxQPS(const uint64_t& _last3MaxQPS)
{
    m_last3MaxQPS = _last3MaxQPS;
    m_last3MaxQPSHasBeenSet = true;
}

bool AfterPayInstanceInfo::Last3MaxQPSHasBeenSet() const
{
    return m_last3MaxQPSHasBeenSet;
}

uint64_t AfterPayInstanceInfo::GetLast3MaxBandwidth() const
{
    return m_last3MaxBandwidth;
}

void AfterPayInstanceInfo::SetLast3MaxBandwidth(const uint64_t& _last3MaxBandwidth)
{
    m_last3MaxBandwidth = _last3MaxBandwidth;
    m_last3MaxBandwidthHasBeenSet = true;
}

bool AfterPayInstanceInfo::Last3MaxBandwidthHasBeenSet() const
{
    return m_last3MaxBandwidthHasBeenSet;
}

uint64_t AfterPayInstanceInfo::GetLast7MaxMiniBandwidth() const
{
    return m_last7MaxMiniBandwidth;
}

void AfterPayInstanceInfo::SetLast7MaxMiniBandwidth(const uint64_t& _last7MaxMiniBandwidth)
{
    m_last7MaxMiniBandwidth = _last7MaxMiniBandwidth;
    m_last7MaxMiniBandwidthHasBeenSet = true;
}

bool AfterPayInstanceInfo::Last7MaxMiniBandwidthHasBeenSet() const
{
    return m_last7MaxMiniBandwidthHasBeenSet;
}

uint64_t AfterPayInstanceInfo::GetMiniBandwidthStandard() const
{
    return m_miniBandwidthStandard;
}

void AfterPayInstanceInfo::SetMiniBandwidthStandard(const uint64_t& _miniBandwidthStandard)
{
    m_miniBandwidthStandard = _miniBandwidthStandard;
    m_miniBandwidthStandardHasBeenSet = true;
}

bool AfterPayInstanceInfo::MiniBandwidthStandardHasBeenSet() const
{
    return m_miniBandwidthStandardHasBeenSet;
}

MajorEventsProPkg AfterPayInstanceInfo::GetMajorEventsProPkg() const
{
    return m_majorEventsProPkg;
}

void AfterPayInstanceInfo::SetMajorEventsProPkg(const MajorEventsProPkg& _majorEventsProPkg)
{
    m_majorEventsProPkg = _majorEventsProPkg;
    m_majorEventsProPkgHasBeenSet = true;
}

bool AfterPayInstanceInfo::MajorEventsProPkgHasBeenSet() const
{
    return m_majorEventsProPkgHasBeenSet;
}

NetworkConfig AfterPayInstanceInfo::GetNetworkConfig() const
{
    return m_networkConfig;
}

void AfterPayInstanceInfo::SetNetworkConfig(const NetworkConfig& _networkConfig)
{
    m_networkConfig = _networkConfig;
    m_networkConfigHasBeenSet = true;
}

bool AfterPayInstanceInfo::NetworkConfigHasBeenSet() const
{
    return m_networkConfigHasBeenSet;
}

RCEPkg AfterPayInstanceInfo::GetRCEPkg() const
{
    return m_rCEPkg;
}

void AfterPayInstanceInfo::SetRCEPkg(const RCEPkg& _rCEPkg)
{
    m_rCEPkg = _rCEPkg;
    m_rCEPkgHasBeenSet = true;
}

bool AfterPayInstanceInfo::RCEPkgHasBeenSet() const
{
    return m_rCEPkgHasBeenSet;
}

int64_t AfterPayInstanceInfo::GetExceedPolicy() const
{
    return m_exceedPolicy;
}

void AfterPayInstanceInfo::SetExceedPolicy(const int64_t& _exceedPolicy)
{
    m_exceedPolicy = _exceedPolicy;
    m_exceedPolicyHasBeenSet = true;
}

bool AfterPayInstanceInfo::ExceedPolicyHasBeenSet() const
{
    return m_exceedPolicyHasBeenSet;
}

string AfterPayInstanceInfo::GetElasticResourceId() const
{
    return m_elasticResourceId;
}

void AfterPayInstanceInfo::SetElasticResourceId(const string& _elasticResourceId)
{
    m_elasticResourceId = _elasticResourceId;
    m_elasticResourceIdHasBeenSet = true;
}

bool AfterPayInstanceInfo::ElasticResourceIdHasBeenSet() const
{
    return m_elasticResourceIdHasBeenSet;
}

LLMMonPkg AfterPayInstanceInfo::GetLLMMonPkg() const
{
    return m_lLMMonPkg;
}

void AfterPayInstanceInfo::SetLLMMonPkg(const LLMMonPkg& _lLMMonPkg)
{
    m_lLMMonPkg = _lLMMonPkg;
    m_lLMMonPkgHasBeenSet = true;
}

bool AfterPayInstanceInfo::LLMMonPkgHasBeenSet() const
{
    return m_lLMMonPkgHasBeenSet;
}

uint64_t AfterPayInstanceInfo::GetRegionId() const
{
    return m_regionId;
}

void AfterPayInstanceInfo::SetRegionId(const uint64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool AfterPayInstanceInfo::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

BotSecurityPkg AfterPayInstanceInfo::GetBotSecurityPkg() const
{
    return m_botSecurityPkg;
}

void AfterPayInstanceInfo::SetBotSecurityPkg(const BotSecurityPkg& _botSecurityPkg)
{
    m_botSecurityPkg = _botSecurityPkg;
    m_botSecurityPkgHasBeenSet = true;
}

bool AfterPayInstanceInfo::BotSecurityPkgHasBeenSet() const
{
    return m_botSecurityPkgHasBeenSet;
}

BotMonitorPkg AfterPayInstanceInfo::GetBotMonitorPkg() const
{
    return m_botMonitorPkg;
}

void AfterPayInstanceInfo::SetBotMonitorPkg(const BotMonitorPkg& _botMonitorPkg)
{
    m_botMonitorPkg = _botMonitorPkg;
    m_botMonitorPkgHasBeenSet = true;
}

bool AfterPayInstanceInfo::BotMonitorPkgHasBeenSet() const
{
    return m_botMonitorPkgHasBeenSet;
}

DedicatedIPPkg AfterPayInstanceInfo::GetDedicatedIPPkg() const
{
    return m_dedicatedIPPkg;
}

void AfterPayInstanceInfo::SetDedicatedIPPkg(const DedicatedIPPkg& _dedicatedIPPkg)
{
    m_dedicatedIPPkg = _dedicatedIPPkg;
    m_dedicatedIPPkgHasBeenSet = true;
}

bool AfterPayInstanceInfo::DedicatedIPPkgHasBeenSet() const
{
    return m_dedicatedIPPkgHasBeenSet;
}

int64_t AfterPayInstanceInfo::GetDedicatedIPCount() const
{
    return m_dedicatedIPCount;
}

void AfterPayInstanceInfo::SetDedicatedIPCount(const int64_t& _dedicatedIPCount)
{
    m_dedicatedIPCount = _dedicatedIPCount;
    m_dedicatedIPCountHasBeenSet = true;
}

bool AfterPayInstanceInfo::DedicatedIPCountHasBeenSet() const
{
    return m_dedicatedIPCountHasBeenSet;
}

vector<TagInfo> AfterPayInstanceInfo::GetTagInfos() const
{
    return m_tagInfos;
}

void AfterPayInstanceInfo::SetTagInfos(const vector<TagInfo>& _tagInfos)
{
    m_tagInfos = _tagInfos;
    m_tagInfosHasBeenSet = true;
}

bool AfterPayInstanceInfo::TagInfosHasBeenSet() const
{
    return m_tagInfosHasBeenSet;
}

