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

#include <tencentcloud/cngw/v20230418/model/AIGWQuota.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

AIGWQuota::AIGWQuota() :
    m_idHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_quotaTypeHasBeenSet(false),
    m_periodUnitHasBeenSet(false),
    m_quotaLimitHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_exceedActionHasBeenSet(false),
    m_cacheHitStatHasBeenSet(false),
    m_exceedPercentageHasBeenSet(false),
    m_setExceedPercentageHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_subResourceTypeHasBeenSet(false),
    m_subResourceCountHasBeenSet(false),
    m_consumerGroupPathHasBeenSet(false),
    m_consumerGroupActiveHasBeenSet(false),
    m_usedHasBeenSet(false),
    m_usedExactHasBeenSet(false),
    m_usageRateHasBeenSet(false),
    m_alarmLevelHasBeenSet(false),
    m_secretKeyCountHasBeenSet(false)
{
}

CoreInternalOutcome AIGWQuota::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuota.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuota.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuota.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuota.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("QuotaType") && !value["QuotaType"].IsNull())
    {
        if (!value["QuotaType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuota.QuotaType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaType = string(value["QuotaType"].GetString());
        m_quotaTypeHasBeenSet = true;
    }

    if (value.HasMember("PeriodUnit") && !value["PeriodUnit"].IsNull())
    {
        if (!value["PeriodUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuota.PeriodUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_periodUnit = string(value["PeriodUnit"].GetString());
        m_periodUnitHasBeenSet = true;
    }

    if (value.HasMember("QuotaLimit") && !value["QuotaLimit"].IsNull())
    {
        if (!value["QuotaLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuota.QuotaLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_quotaLimit = value["QuotaLimit"].GetUint64();
        m_quotaLimitHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuota.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuota.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuota.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuota.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("ExceedAction") && !value["ExceedAction"].IsNull())
    {
        if (!value["ExceedAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuota.ExceedAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exceedAction = string(value["ExceedAction"].GetString());
        m_exceedActionHasBeenSet = true;
    }

    if (value.HasMember("CacheHitStat") && !value["CacheHitStat"].IsNull())
    {
        if (!value["CacheHitStat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuota.CacheHitStat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cacheHitStat = string(value["CacheHitStat"].GetString());
        m_cacheHitStatHasBeenSet = true;
    }

    if (value.HasMember("ExceedPercentage") && !value["ExceedPercentage"].IsNull())
    {
        if (!value["ExceedPercentage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuota.ExceedPercentage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_exceedPercentage = value["ExceedPercentage"].GetUint64();
        m_exceedPercentageHasBeenSet = true;
    }

    if (value.HasMember("SetExceedPercentage") && !value["SetExceedPercentage"].IsNull())
    {
        if (!value["SetExceedPercentage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuota.SetExceedPercentage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_setExceedPercentage = value["SetExceedPercentage"].GetBool();
        m_setExceedPercentageHasBeenSet = true;
    }

    if (value.HasMember("Scope") && !value["Scope"].IsNull())
    {
        if (!value["Scope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuota.Scope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scope = string(value["Scope"].GetString());
        m_scopeHasBeenSet = true;
    }

    if (value.HasMember("SubResourceType") && !value["SubResourceType"].IsNull())
    {
        if (!value["SubResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuota.SubResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subResourceType = string(value["SubResourceType"].GetString());
        m_subResourceTypeHasBeenSet = true;
    }

    if (value.HasMember("SubResourceCount") && !value["SubResourceCount"].IsNull())
    {
        if (!value["SubResourceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuota.SubResourceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subResourceCount = value["SubResourceCount"].GetInt64();
        m_subResourceCountHasBeenSet = true;
    }

    if (value.HasMember("ConsumerGroupPath") && !value["ConsumerGroupPath"].IsNull())
    {
        if (!value["ConsumerGroupPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuota.ConsumerGroupPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerGroupPath = string(value["ConsumerGroupPath"].GetString());
        m_consumerGroupPathHasBeenSet = true;
    }

    if (value.HasMember("ConsumerGroupActive") && !value["ConsumerGroupActive"].IsNull())
    {
        if (!value["ConsumerGroupActive"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuota.ConsumerGroupActive` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_consumerGroupActive = value["ConsumerGroupActive"].GetBool();
        m_consumerGroupActiveHasBeenSet = true;
    }

    if (value.HasMember("Used") && !value["Used"].IsNull())
    {
        if (!value["Used"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuota.Used` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_used = value["Used"].GetInt64();
        m_usedHasBeenSet = true;
    }

    if (value.HasMember("UsedExact") && !value["UsedExact"].IsNull())
    {
        if (!value["UsedExact"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuota.UsedExact` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_usedExact = value["UsedExact"].GetDouble();
        m_usedExactHasBeenSet = true;
    }

    if (value.HasMember("UsageRate") && !value["UsageRate"].IsNull())
    {
        if (!value["UsageRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuota.UsageRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_usageRate = value["UsageRate"].GetDouble();
        m_usageRateHasBeenSet = true;
    }

    if (value.HasMember("AlarmLevel") && !value["AlarmLevel"].IsNull())
    {
        if (!value["AlarmLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuota.AlarmLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmLevel = string(value["AlarmLevel"].GetString());
        m_alarmLevelHasBeenSet = true;
    }

    if (value.HasMember("SecretKeyCount") && !value["SecretKeyCount"].IsNull())
    {
        if (!value["SecretKeyCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuota.SecretKeyCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_secretKeyCount = value["SecretKeyCount"].GetInt64();
        m_secretKeyCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWQuota::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quotaType.c_str(), allocator).Move(), allocator);
    }

    if (m_periodUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_periodUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quotaLimit, allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_exceedActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExceedAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exceedAction.c_str(), allocator).Move(), allocator);
    }

    if (m_cacheHitStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheHitStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cacheHitStat.c_str(), allocator).Move(), allocator);
    }

    if (m_exceedPercentageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExceedPercentage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exceedPercentage, allocator);
    }

    if (m_setExceedPercentageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetExceedPercentage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_setExceedPercentage, allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scope.c_str(), allocator).Move(), allocator);
    }

    if (m_subResourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subResourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_subResourceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubResourceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subResourceCount, allocator);
    }

    if (m_consumerGroupPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerGroupPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumerGroupPath.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerGroupActiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerGroupActive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumerGroupActive, allocator);
    }

    if (m_usedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Used";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_used, allocator);
    }

    if (m_usedExactHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedExact";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedExact, allocator);
    }

    if (m_usageRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsageRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usageRate, allocator);
    }

    if (m_alarmLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_secretKeyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKeyCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_secretKeyCount, allocator);
    }

}


string AIGWQuota::GetId() const
{
    return m_id;
}

void AIGWQuota::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AIGWQuota::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string AIGWQuota::GetResourceType() const
{
    return m_resourceType;
}

void AIGWQuota::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool AIGWQuota::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string AIGWQuota::GetResourceId() const
{
    return m_resourceId;
}

void AIGWQuota::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool AIGWQuota::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string AIGWQuota::GetResourceName() const
{
    return m_resourceName;
}

void AIGWQuota::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool AIGWQuota::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

string AIGWQuota::GetQuotaType() const
{
    return m_quotaType;
}

void AIGWQuota::SetQuotaType(const string& _quotaType)
{
    m_quotaType = _quotaType;
    m_quotaTypeHasBeenSet = true;
}

bool AIGWQuota::QuotaTypeHasBeenSet() const
{
    return m_quotaTypeHasBeenSet;
}

string AIGWQuota::GetPeriodUnit() const
{
    return m_periodUnit;
}

void AIGWQuota::SetPeriodUnit(const string& _periodUnit)
{
    m_periodUnit = _periodUnit;
    m_periodUnitHasBeenSet = true;
}

bool AIGWQuota::PeriodUnitHasBeenSet() const
{
    return m_periodUnitHasBeenSet;
}

uint64_t AIGWQuota::GetQuotaLimit() const
{
    return m_quotaLimit;
}

void AIGWQuota::SetQuotaLimit(const uint64_t& _quotaLimit)
{
    m_quotaLimit = _quotaLimit;
    m_quotaLimitHasBeenSet = true;
}

bool AIGWQuota::QuotaLimitHasBeenSet() const
{
    return m_quotaLimitHasBeenSet;
}

bool AIGWQuota::GetEnabled() const
{
    return m_enabled;
}

void AIGWQuota::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool AIGWQuota::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string AIGWQuota::GetCreateTime() const
{
    return m_createTime;
}

void AIGWQuota::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AIGWQuota::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AIGWQuota::GetModifyTime() const
{
    return m_modifyTime;
}

void AIGWQuota::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool AIGWQuota::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string AIGWQuota::GetSource() const
{
    return m_source;
}

void AIGWQuota::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool AIGWQuota::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string AIGWQuota::GetExceedAction() const
{
    return m_exceedAction;
}

void AIGWQuota::SetExceedAction(const string& _exceedAction)
{
    m_exceedAction = _exceedAction;
    m_exceedActionHasBeenSet = true;
}

bool AIGWQuota::ExceedActionHasBeenSet() const
{
    return m_exceedActionHasBeenSet;
}

string AIGWQuota::GetCacheHitStat() const
{
    return m_cacheHitStat;
}

void AIGWQuota::SetCacheHitStat(const string& _cacheHitStat)
{
    m_cacheHitStat = _cacheHitStat;
    m_cacheHitStatHasBeenSet = true;
}

bool AIGWQuota::CacheHitStatHasBeenSet() const
{
    return m_cacheHitStatHasBeenSet;
}

uint64_t AIGWQuota::GetExceedPercentage() const
{
    return m_exceedPercentage;
}

void AIGWQuota::SetExceedPercentage(const uint64_t& _exceedPercentage)
{
    m_exceedPercentage = _exceedPercentage;
    m_exceedPercentageHasBeenSet = true;
}

bool AIGWQuota::ExceedPercentageHasBeenSet() const
{
    return m_exceedPercentageHasBeenSet;
}

bool AIGWQuota::GetSetExceedPercentage() const
{
    return m_setExceedPercentage;
}

void AIGWQuota::SetSetExceedPercentage(const bool& _setExceedPercentage)
{
    m_setExceedPercentage = _setExceedPercentage;
    m_setExceedPercentageHasBeenSet = true;
}

bool AIGWQuota::SetExceedPercentageHasBeenSet() const
{
    return m_setExceedPercentageHasBeenSet;
}

string AIGWQuota::GetScope() const
{
    return m_scope;
}

void AIGWQuota::SetScope(const string& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool AIGWQuota::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

string AIGWQuota::GetSubResourceType() const
{
    return m_subResourceType;
}

void AIGWQuota::SetSubResourceType(const string& _subResourceType)
{
    m_subResourceType = _subResourceType;
    m_subResourceTypeHasBeenSet = true;
}

bool AIGWQuota::SubResourceTypeHasBeenSet() const
{
    return m_subResourceTypeHasBeenSet;
}

int64_t AIGWQuota::GetSubResourceCount() const
{
    return m_subResourceCount;
}

void AIGWQuota::SetSubResourceCount(const int64_t& _subResourceCount)
{
    m_subResourceCount = _subResourceCount;
    m_subResourceCountHasBeenSet = true;
}

bool AIGWQuota::SubResourceCountHasBeenSet() const
{
    return m_subResourceCountHasBeenSet;
}

string AIGWQuota::GetConsumerGroupPath() const
{
    return m_consumerGroupPath;
}

void AIGWQuota::SetConsumerGroupPath(const string& _consumerGroupPath)
{
    m_consumerGroupPath = _consumerGroupPath;
    m_consumerGroupPathHasBeenSet = true;
}

bool AIGWQuota::ConsumerGroupPathHasBeenSet() const
{
    return m_consumerGroupPathHasBeenSet;
}

bool AIGWQuota::GetConsumerGroupActive() const
{
    return m_consumerGroupActive;
}

void AIGWQuota::SetConsumerGroupActive(const bool& _consumerGroupActive)
{
    m_consumerGroupActive = _consumerGroupActive;
    m_consumerGroupActiveHasBeenSet = true;
}

bool AIGWQuota::ConsumerGroupActiveHasBeenSet() const
{
    return m_consumerGroupActiveHasBeenSet;
}

int64_t AIGWQuota::GetUsed() const
{
    return m_used;
}

void AIGWQuota::SetUsed(const int64_t& _used)
{
    m_used = _used;
    m_usedHasBeenSet = true;
}

bool AIGWQuota::UsedHasBeenSet() const
{
    return m_usedHasBeenSet;
}

double AIGWQuota::GetUsedExact() const
{
    return m_usedExact;
}

void AIGWQuota::SetUsedExact(const double& _usedExact)
{
    m_usedExact = _usedExact;
    m_usedExactHasBeenSet = true;
}

bool AIGWQuota::UsedExactHasBeenSet() const
{
    return m_usedExactHasBeenSet;
}

double AIGWQuota::GetUsageRate() const
{
    return m_usageRate;
}

void AIGWQuota::SetUsageRate(const double& _usageRate)
{
    m_usageRate = _usageRate;
    m_usageRateHasBeenSet = true;
}

bool AIGWQuota::UsageRateHasBeenSet() const
{
    return m_usageRateHasBeenSet;
}

string AIGWQuota::GetAlarmLevel() const
{
    return m_alarmLevel;
}

void AIGWQuota::SetAlarmLevel(const string& _alarmLevel)
{
    m_alarmLevel = _alarmLevel;
    m_alarmLevelHasBeenSet = true;
}

bool AIGWQuota::AlarmLevelHasBeenSet() const
{
    return m_alarmLevelHasBeenSet;
}

int64_t AIGWQuota::GetSecretKeyCount() const
{
    return m_secretKeyCount;
}

void AIGWQuota::SetSecretKeyCount(const int64_t& _secretKeyCount)
{
    m_secretKeyCount = _secretKeyCount;
    m_secretKeyCountHasBeenSet = true;
}

bool AIGWQuota::SecretKeyCountHasBeenSet() const
{
    return m_secretKeyCountHasBeenSet;
}

