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

#include <tencentcloud/waf/v20180125/model/LLMSdkAccessItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

LLMSdkAccessItem::LLMSdkAccessItem() :
    m_domainHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_sdkSourceHasBeenSet(false),
    m_mainStatusHasBeenSet(false),
    m_limitRuleStatusHasBeenSet(false),
    m_contentRuleStatusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_limitRuleCountHasBeenSet(false),
    m_contentRuleCountHasBeenSet(false),
    m_toolCallStatusHasBeenSet(false),
    m_lLMProtectStatusHasBeenSet(false),
    m_contentComplianceStatusHasBeenSet(false),
    m_dLPStatusHasBeenSet(false),
    m_skillsStatusHasBeenSet(false),
    m_intentStatusHasBeenSet(false),
    m_effectiveRulesHasBeenSet(false)
{
}

CoreInternalOutcome LLMSdkAccessItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMSdkAccessItem.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMSdkAccessItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMSdkAccessItem.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("SdkSource") && !value["SdkSource"].IsNull())
    {
        if (!value["SdkSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMSdkAccessItem.SdkSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sdkSource = string(value["SdkSource"].GetString());
        m_sdkSourceHasBeenSet = true;
    }

    if (value.HasMember("MainStatus") && !value["MainStatus"].IsNull())
    {
        if (!value["MainStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LLMSdkAccessItem.MainStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_mainStatus = value["MainStatus"].GetBool();
        m_mainStatusHasBeenSet = true;
    }

    if (value.HasMember("LimitRuleStatus") && !value["LimitRuleStatus"].IsNull())
    {
        if (!value["LimitRuleStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LLMSdkAccessItem.LimitRuleStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_limitRuleStatus = value["LimitRuleStatus"].GetBool();
        m_limitRuleStatusHasBeenSet = true;
    }

    if (value.HasMember("ContentRuleStatus") && !value["ContentRuleStatus"].IsNull())
    {
        if (!value["ContentRuleStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LLMSdkAccessItem.ContentRuleStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_contentRuleStatus = value["ContentRuleStatus"].GetBool();
        m_contentRuleStatusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LLMSdkAccessItem.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LLMSdkAccessItem.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("LimitRuleCount") && !value["LimitRuleCount"].IsNull())
    {
        if (!value["LimitRuleCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LLMSdkAccessItem.LimitRuleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_limitRuleCount = value["LimitRuleCount"].GetUint64();
        m_limitRuleCountHasBeenSet = true;
    }

    if (value.HasMember("ContentRuleCount") && !value["ContentRuleCount"].IsNull())
    {
        if (!value["ContentRuleCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LLMSdkAccessItem.ContentRuleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_contentRuleCount = value["ContentRuleCount"].GetUint64();
        m_contentRuleCountHasBeenSet = true;
    }

    if (value.HasMember("ToolCallStatus") && !value["ToolCallStatus"].IsNull())
    {
        if (!value["ToolCallStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LLMSdkAccessItem.ToolCallStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_toolCallStatus = value["ToolCallStatus"].GetBool();
        m_toolCallStatusHasBeenSet = true;
    }

    if (value.HasMember("LLMProtectStatus") && !value["LLMProtectStatus"].IsNull())
    {
        if (!value["LLMProtectStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LLMSdkAccessItem.LLMProtectStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_lLMProtectStatus = value["LLMProtectStatus"].GetBool();
        m_lLMProtectStatusHasBeenSet = true;
    }

    if (value.HasMember("ContentComplianceStatus") && !value["ContentComplianceStatus"].IsNull())
    {
        if (!value["ContentComplianceStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LLMSdkAccessItem.ContentComplianceStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_contentComplianceStatus = value["ContentComplianceStatus"].GetBool();
        m_contentComplianceStatusHasBeenSet = true;
    }

    if (value.HasMember("DLPStatus") && !value["DLPStatus"].IsNull())
    {
        if (!value["DLPStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LLMSdkAccessItem.DLPStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_dLPStatus = value["DLPStatus"].GetBool();
        m_dLPStatusHasBeenSet = true;
    }

    if (value.HasMember("SkillsStatus") && !value["SkillsStatus"].IsNull())
    {
        if (!value["SkillsStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LLMSdkAccessItem.SkillsStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_skillsStatus = value["SkillsStatus"].GetBool();
        m_skillsStatusHasBeenSet = true;
    }

    if (value.HasMember("IntentStatus") && !value["IntentStatus"].IsNull())
    {
        if (!value["IntentStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LLMSdkAccessItem.IntentStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_intentStatus = value["IntentStatus"].GetBool();
        m_intentStatusHasBeenSet = true;
    }

    if (value.HasMember("EffectiveRules") && !value["EffectiveRules"].IsNull())
    {
        if (!value["EffectiveRules"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LLMSdkAccessItem.EffectiveRules` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_effectiveRules = value["EffectiveRules"].GetInt64();
        m_effectiveRulesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LLMSdkAccessItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_sdkSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sdkSource.c_str(), allocator).Move(), allocator);
    }

    if (m_mainStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mainStatus, allocator);
    }

    if (m_limitRuleStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitRuleStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limitRuleStatus, allocator);
    }

    if (m_contentRuleStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentRuleStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_contentRuleStatus, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_limitRuleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitRuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limitRuleCount, allocator);
    }

    if (m_contentRuleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentRuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_contentRuleCount, allocator);
    }

    if (m_toolCallStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolCallStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_toolCallStatus, allocator);
    }

    if (m_lLMProtectStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LLMProtectStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lLMProtectStatus, allocator);
    }

    if (m_contentComplianceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentComplianceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_contentComplianceStatus, allocator);
    }

    if (m_dLPStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DLPStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dLPStatus, allocator);
    }

    if (m_skillsStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillsStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_skillsStatus, allocator);
    }

    if (m_intentStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntentStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intentStatus, allocator);
    }

    if (m_effectiveRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectiveRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_effectiveRules, allocator);
    }

}


string LLMSdkAccessItem::GetDomain() const
{
    return m_domain;
}

void LLMSdkAccessItem::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool LLMSdkAccessItem::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string LLMSdkAccessItem::GetName() const
{
    return m_name;
}

void LLMSdkAccessItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool LLMSdkAccessItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string LLMSdkAccessItem::GetRemark() const
{
    return m_remark;
}

void LLMSdkAccessItem::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool LLMSdkAccessItem::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string LLMSdkAccessItem::GetSdkSource() const
{
    return m_sdkSource;
}

void LLMSdkAccessItem::SetSdkSource(const string& _sdkSource)
{
    m_sdkSource = _sdkSource;
    m_sdkSourceHasBeenSet = true;
}

bool LLMSdkAccessItem::SdkSourceHasBeenSet() const
{
    return m_sdkSourceHasBeenSet;
}

bool LLMSdkAccessItem::GetMainStatus() const
{
    return m_mainStatus;
}

void LLMSdkAccessItem::SetMainStatus(const bool& _mainStatus)
{
    m_mainStatus = _mainStatus;
    m_mainStatusHasBeenSet = true;
}

bool LLMSdkAccessItem::MainStatusHasBeenSet() const
{
    return m_mainStatusHasBeenSet;
}

bool LLMSdkAccessItem::GetLimitRuleStatus() const
{
    return m_limitRuleStatus;
}

void LLMSdkAccessItem::SetLimitRuleStatus(const bool& _limitRuleStatus)
{
    m_limitRuleStatus = _limitRuleStatus;
    m_limitRuleStatusHasBeenSet = true;
}

bool LLMSdkAccessItem::LimitRuleStatusHasBeenSet() const
{
    return m_limitRuleStatusHasBeenSet;
}

bool LLMSdkAccessItem::GetContentRuleStatus() const
{
    return m_contentRuleStatus;
}

void LLMSdkAccessItem::SetContentRuleStatus(const bool& _contentRuleStatus)
{
    m_contentRuleStatus = _contentRuleStatus;
    m_contentRuleStatusHasBeenSet = true;
}

bool LLMSdkAccessItem::ContentRuleStatusHasBeenSet() const
{
    return m_contentRuleStatusHasBeenSet;
}

uint64_t LLMSdkAccessItem::GetCreateTime() const
{
    return m_createTime;
}

void LLMSdkAccessItem::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool LLMSdkAccessItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t LLMSdkAccessItem::GetUpdateTime() const
{
    return m_updateTime;
}

void LLMSdkAccessItem::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool LLMSdkAccessItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t LLMSdkAccessItem::GetLimitRuleCount() const
{
    return m_limitRuleCount;
}

void LLMSdkAccessItem::SetLimitRuleCount(const uint64_t& _limitRuleCount)
{
    m_limitRuleCount = _limitRuleCount;
    m_limitRuleCountHasBeenSet = true;
}

bool LLMSdkAccessItem::LimitRuleCountHasBeenSet() const
{
    return m_limitRuleCountHasBeenSet;
}

uint64_t LLMSdkAccessItem::GetContentRuleCount() const
{
    return m_contentRuleCount;
}

void LLMSdkAccessItem::SetContentRuleCount(const uint64_t& _contentRuleCount)
{
    m_contentRuleCount = _contentRuleCount;
    m_contentRuleCountHasBeenSet = true;
}

bool LLMSdkAccessItem::ContentRuleCountHasBeenSet() const
{
    return m_contentRuleCountHasBeenSet;
}

bool LLMSdkAccessItem::GetToolCallStatus() const
{
    return m_toolCallStatus;
}

void LLMSdkAccessItem::SetToolCallStatus(const bool& _toolCallStatus)
{
    m_toolCallStatus = _toolCallStatus;
    m_toolCallStatusHasBeenSet = true;
}

bool LLMSdkAccessItem::ToolCallStatusHasBeenSet() const
{
    return m_toolCallStatusHasBeenSet;
}

bool LLMSdkAccessItem::GetLLMProtectStatus() const
{
    return m_lLMProtectStatus;
}

void LLMSdkAccessItem::SetLLMProtectStatus(const bool& _lLMProtectStatus)
{
    m_lLMProtectStatus = _lLMProtectStatus;
    m_lLMProtectStatusHasBeenSet = true;
}

bool LLMSdkAccessItem::LLMProtectStatusHasBeenSet() const
{
    return m_lLMProtectStatusHasBeenSet;
}

bool LLMSdkAccessItem::GetContentComplianceStatus() const
{
    return m_contentComplianceStatus;
}

void LLMSdkAccessItem::SetContentComplianceStatus(const bool& _contentComplianceStatus)
{
    m_contentComplianceStatus = _contentComplianceStatus;
    m_contentComplianceStatusHasBeenSet = true;
}

bool LLMSdkAccessItem::ContentComplianceStatusHasBeenSet() const
{
    return m_contentComplianceStatusHasBeenSet;
}

bool LLMSdkAccessItem::GetDLPStatus() const
{
    return m_dLPStatus;
}

void LLMSdkAccessItem::SetDLPStatus(const bool& _dLPStatus)
{
    m_dLPStatus = _dLPStatus;
    m_dLPStatusHasBeenSet = true;
}

bool LLMSdkAccessItem::DLPStatusHasBeenSet() const
{
    return m_dLPStatusHasBeenSet;
}

bool LLMSdkAccessItem::GetSkillsStatus() const
{
    return m_skillsStatus;
}

void LLMSdkAccessItem::SetSkillsStatus(const bool& _skillsStatus)
{
    m_skillsStatus = _skillsStatus;
    m_skillsStatusHasBeenSet = true;
}

bool LLMSdkAccessItem::SkillsStatusHasBeenSet() const
{
    return m_skillsStatusHasBeenSet;
}

bool LLMSdkAccessItem::GetIntentStatus() const
{
    return m_intentStatus;
}

void LLMSdkAccessItem::SetIntentStatus(const bool& _intentStatus)
{
    m_intentStatus = _intentStatus;
    m_intentStatusHasBeenSet = true;
}

bool LLMSdkAccessItem::IntentStatusHasBeenSet() const
{
    return m_intentStatusHasBeenSet;
}

int64_t LLMSdkAccessItem::GetEffectiveRules() const
{
    return m_effectiveRules;
}

void LLMSdkAccessItem::SetEffectiveRules(const int64_t& _effectiveRules)
{
    m_effectiveRules = _effectiveRules;
    m_effectiveRulesHasBeenSet = true;
}

bool LLMSdkAccessItem::EffectiveRulesHasBeenSet() const
{
    return m_effectiveRulesHasBeenSet;
}

