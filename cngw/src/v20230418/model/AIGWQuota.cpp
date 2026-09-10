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
    m_cacheHitStatHasBeenSet(false)
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

