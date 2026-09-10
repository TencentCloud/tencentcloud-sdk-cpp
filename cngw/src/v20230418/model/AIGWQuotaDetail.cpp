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

#include <tencentcloud/cngw/v20230418/model/AIGWQuotaDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

AIGWQuotaDetail::AIGWQuotaDetail() :
    m_idHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_quotaTypeHasBeenSet(false),
    m_periodUnitHasBeenSet(false),
    m_quotaLimitHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_usedHasBeenSet(false),
    m_usageRateHasBeenSet(false),
    m_alarmLevelHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_exceedActionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_cacheHitStatHasBeenSet(false)
{
}

CoreInternalOutcome AIGWQuotaDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuotaDetail.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuotaDetail.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuotaDetail.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuotaDetail.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("QuotaType") && !value["QuotaType"].IsNull())
    {
        if (!value["QuotaType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuotaDetail.QuotaType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaType = string(value["QuotaType"].GetString());
        m_quotaTypeHasBeenSet = true;
    }

    if (value.HasMember("PeriodUnit") && !value["PeriodUnit"].IsNull())
    {
        if (!value["PeriodUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuotaDetail.PeriodUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_periodUnit = string(value["PeriodUnit"].GetString());
        m_periodUnitHasBeenSet = true;
    }

    if (value.HasMember("QuotaLimit") && !value["QuotaLimit"].IsNull())
    {
        if (!value["QuotaLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuotaDetail.QuotaLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_quotaLimit = value["QuotaLimit"].GetInt64();
        m_quotaLimitHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuotaDetail.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("Used") && !value["Used"].IsNull())
    {
        if (!value["Used"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuotaDetail.Used` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_used = value["Used"].GetInt64();
        m_usedHasBeenSet = true;
    }

    if (value.HasMember("UsageRate") && !value["UsageRate"].IsNull())
    {
        if (!value["UsageRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuotaDetail.UsageRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_usageRate = value["UsageRate"].GetDouble();
        m_usageRateHasBeenSet = true;
    }

    if (value.HasMember("AlarmLevel") && !value["AlarmLevel"].IsNull())
    {
        if (!value["AlarmLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuotaDetail.AlarmLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmLevel = string(value["AlarmLevel"].GetString());
        m_alarmLevelHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuotaDetail.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("ExceedAction") && !value["ExceedAction"].IsNull())
    {
        if (!value["ExceedAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuotaDetail.ExceedAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exceedAction = string(value["ExceedAction"].GetString());
        m_exceedActionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuotaDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuotaDetail.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("CacheHitStat") && !value["CacheHitStat"].IsNull())
    {
        if (!value["CacheHitStat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuotaDetail.CacheHitStat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cacheHitStat = string(value["CacheHitStat"].GetString());
        m_cacheHitStatHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWQuotaDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_usedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Used";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_used, allocator);
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

    if (m_cacheHitStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheHitStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cacheHitStat.c_str(), allocator).Move(), allocator);
    }

}


string AIGWQuotaDetail::GetId() const
{
    return m_id;
}

void AIGWQuotaDetail::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AIGWQuotaDetail::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string AIGWQuotaDetail::GetResourceType() const
{
    return m_resourceType;
}

void AIGWQuotaDetail::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool AIGWQuotaDetail::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string AIGWQuotaDetail::GetResourceId() const
{
    return m_resourceId;
}

void AIGWQuotaDetail::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool AIGWQuotaDetail::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string AIGWQuotaDetail::GetResourceName() const
{
    return m_resourceName;
}

void AIGWQuotaDetail::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool AIGWQuotaDetail::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

string AIGWQuotaDetail::GetQuotaType() const
{
    return m_quotaType;
}

void AIGWQuotaDetail::SetQuotaType(const string& _quotaType)
{
    m_quotaType = _quotaType;
    m_quotaTypeHasBeenSet = true;
}

bool AIGWQuotaDetail::QuotaTypeHasBeenSet() const
{
    return m_quotaTypeHasBeenSet;
}

string AIGWQuotaDetail::GetPeriodUnit() const
{
    return m_periodUnit;
}

void AIGWQuotaDetail::SetPeriodUnit(const string& _periodUnit)
{
    m_periodUnit = _periodUnit;
    m_periodUnitHasBeenSet = true;
}

bool AIGWQuotaDetail::PeriodUnitHasBeenSet() const
{
    return m_periodUnitHasBeenSet;
}

int64_t AIGWQuotaDetail::GetQuotaLimit() const
{
    return m_quotaLimit;
}

void AIGWQuotaDetail::SetQuotaLimit(const int64_t& _quotaLimit)
{
    m_quotaLimit = _quotaLimit;
    m_quotaLimitHasBeenSet = true;
}

bool AIGWQuotaDetail::QuotaLimitHasBeenSet() const
{
    return m_quotaLimitHasBeenSet;
}

bool AIGWQuotaDetail::GetEnabled() const
{
    return m_enabled;
}

void AIGWQuotaDetail::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool AIGWQuotaDetail::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

int64_t AIGWQuotaDetail::GetUsed() const
{
    return m_used;
}

void AIGWQuotaDetail::SetUsed(const int64_t& _used)
{
    m_used = _used;
    m_usedHasBeenSet = true;
}

bool AIGWQuotaDetail::UsedHasBeenSet() const
{
    return m_usedHasBeenSet;
}

double AIGWQuotaDetail::GetUsageRate() const
{
    return m_usageRate;
}

void AIGWQuotaDetail::SetUsageRate(const double& _usageRate)
{
    m_usageRate = _usageRate;
    m_usageRateHasBeenSet = true;
}

bool AIGWQuotaDetail::UsageRateHasBeenSet() const
{
    return m_usageRateHasBeenSet;
}

string AIGWQuotaDetail::GetAlarmLevel() const
{
    return m_alarmLevel;
}

void AIGWQuotaDetail::SetAlarmLevel(const string& _alarmLevel)
{
    m_alarmLevel = _alarmLevel;
    m_alarmLevelHasBeenSet = true;
}

bool AIGWQuotaDetail::AlarmLevelHasBeenSet() const
{
    return m_alarmLevelHasBeenSet;
}

string AIGWQuotaDetail::GetSource() const
{
    return m_source;
}

void AIGWQuotaDetail::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool AIGWQuotaDetail::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string AIGWQuotaDetail::GetExceedAction() const
{
    return m_exceedAction;
}

void AIGWQuotaDetail::SetExceedAction(const string& _exceedAction)
{
    m_exceedAction = _exceedAction;
    m_exceedActionHasBeenSet = true;
}

bool AIGWQuotaDetail::ExceedActionHasBeenSet() const
{
    return m_exceedActionHasBeenSet;
}

string AIGWQuotaDetail::GetCreateTime() const
{
    return m_createTime;
}

void AIGWQuotaDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AIGWQuotaDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AIGWQuotaDetail::GetModifyTime() const
{
    return m_modifyTime;
}

void AIGWQuotaDetail::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool AIGWQuotaDetail::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string AIGWQuotaDetail::GetCacheHitStat() const
{
    return m_cacheHitStat;
}

void AIGWQuotaDetail::SetCacheHitStat(const string& _cacheHitStat)
{
    m_cacheHitStat = _cacheHitStat;
    m_cacheHitStatHasBeenSet = true;
}

bool AIGWQuotaDetail::CacheHitStatHasBeenSet() const
{
    return m_cacheHitStatHasBeenSet;
}

