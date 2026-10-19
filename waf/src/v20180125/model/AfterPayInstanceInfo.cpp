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
    m_lLMTokenUsageHasBeenSet(false)
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

