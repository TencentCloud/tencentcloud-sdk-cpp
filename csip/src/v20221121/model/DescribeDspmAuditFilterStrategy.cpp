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

#include <tencentcloud/csip/v20221121/model/DescribeDspmAuditFilterStrategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeDspmAuditFilterStrategy::DescribeDspmAuditFilterStrategy() :
    m_auditFilterStrategyIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ruleHasBeenSet(false),
    m_isEnabledHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_nickNameHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDspmAuditFilterStrategy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AuditFilterStrategyId") && !value["AuditFilterStrategyId"].IsNull())
    {
        if (!value["AuditFilterStrategyId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDspmAuditFilterStrategy.AuditFilterStrategyId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_auditFilterStrategyId = value["AuditFilterStrategyId"].GetUint64();
        m_auditFilterStrategyIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDspmAuditFilterStrategy.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDspmAuditFilterStrategy.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Rule") && !value["Rule"].IsNull())
    {
        if (!value["Rule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDspmAuditFilterStrategy.Rule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rule = string(value["Rule"].GetString());
        m_ruleHasBeenSet = true;
    }

    if (value.HasMember("IsEnabled") && !value["IsEnabled"].IsNull())
    {
        if (!value["IsEnabled"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDspmAuditFilterStrategy.IsEnabled` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isEnabled = value["IsEnabled"].GetInt64();
        m_isEnabledHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDspmAuditFilterStrategy.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDspmAuditFilterStrategy.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDspmAuditFilterStrategy.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDspmAuditFilterStrategy.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDspmAuditFilterStrategy.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("NickName") && !value["NickName"].IsNull())
    {
        if (!value["NickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDspmAuditFilterStrategy.NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(value["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeDspmAuditFilterStrategy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_auditFilterStrategyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditFilterStrategyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_auditFilterStrategyId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rule.c_str(), allocator).Move(), allocator);
    }

    if (m_isEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEnabled, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
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

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_nickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickName.c_str(), allocator).Move(), allocator);
    }

}


uint64_t DescribeDspmAuditFilterStrategy::GetAuditFilterStrategyId() const
{
    return m_auditFilterStrategyId;
}

void DescribeDspmAuditFilterStrategy::SetAuditFilterStrategyId(const uint64_t& _auditFilterStrategyId)
{
    m_auditFilterStrategyId = _auditFilterStrategyId;
    m_auditFilterStrategyIdHasBeenSet = true;
}

bool DescribeDspmAuditFilterStrategy::AuditFilterStrategyIdHasBeenSet() const
{
    return m_auditFilterStrategyIdHasBeenSet;
}

string DescribeDspmAuditFilterStrategy::GetName() const
{
    return m_name;
}

void DescribeDspmAuditFilterStrategy::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeDspmAuditFilterStrategy::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeDspmAuditFilterStrategy::GetDescription() const
{
    return m_description;
}

void DescribeDspmAuditFilterStrategy::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DescribeDspmAuditFilterStrategy::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DescribeDspmAuditFilterStrategy::GetRule() const
{
    return m_rule;
}

void DescribeDspmAuditFilterStrategy::SetRule(const string& _rule)
{
    m_rule = _rule;
    m_ruleHasBeenSet = true;
}

bool DescribeDspmAuditFilterStrategy::RuleHasBeenSet() const
{
    return m_ruleHasBeenSet;
}

int64_t DescribeDspmAuditFilterStrategy::GetIsEnabled() const
{
    return m_isEnabled;
}

void DescribeDspmAuditFilterStrategy::SetIsEnabled(const int64_t& _isEnabled)
{
    m_isEnabled = _isEnabled;
    m_isEnabledHasBeenSet = true;
}

bool DescribeDspmAuditFilterStrategy::IsEnabledHasBeenSet() const
{
    return m_isEnabledHasBeenSet;
}

string DescribeDspmAuditFilterStrategy::GetRemark() const
{
    return m_remark;
}

void DescribeDspmAuditFilterStrategy::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool DescribeDspmAuditFilterStrategy::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string DescribeDspmAuditFilterStrategy::GetCreateTime() const
{
    return m_createTime;
}

void DescribeDspmAuditFilterStrategy::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DescribeDspmAuditFilterStrategy::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeDspmAuditFilterStrategy::GetModifyTime() const
{
    return m_modifyTime;
}

void DescribeDspmAuditFilterStrategy::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool DescribeDspmAuditFilterStrategy::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

uint64_t DescribeDspmAuditFilterStrategy::GetAppId() const
{
    return m_appId;
}

void DescribeDspmAuditFilterStrategy::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DescribeDspmAuditFilterStrategy::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DescribeDspmAuditFilterStrategy::GetUin() const
{
    return m_uin;
}

void DescribeDspmAuditFilterStrategy::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool DescribeDspmAuditFilterStrategy::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string DescribeDspmAuditFilterStrategy::GetNickName() const
{
    return m_nickName;
}

void DescribeDspmAuditFilterStrategy::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool DescribeDspmAuditFilterStrategy::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

