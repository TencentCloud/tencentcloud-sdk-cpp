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

#include <tencentcloud/cwp/v20180228/model/FileTamperRuleDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

FileTamperRuleDetail::FileTamperRuleDetail() :
    m_nameHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ruleHasBeenSet(false),
    m_uuidsHasBeenSet(false),
    m_idHasBeenSet(false),
    m_isGlobalHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_uuidTotalCountHasBeenSet(false),
    m_addWhiteTypeHasBeenSet(false)
{
}

CoreInternalOutcome FileTamperRuleDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperRuleDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperRuleDetail.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperRuleDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperRuleDetail.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Rule") && !value["Rule"].IsNull())
    {
        if (!value["Rule"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FileTamperRuleDetail.Rule` is not array type"));

        const rapidjson::Value &tmpValue = value["Rule"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FileTamperRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rule.push_back(item);
        }
        m_ruleHasBeenSet = true;
    }

    if (value.HasMember("Uuids") && !value["Uuids"].IsNull())
    {
        if (!value["Uuids"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FileTamperRuleDetail.Uuids` is not array type"));

        const rapidjson::Value &tmpValue = value["Uuids"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_uuids.push_back((*itr).GetString());
        }
        m_uuidsHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperRuleDetail.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("IsGlobal") && !value["IsGlobal"].IsNull())
    {
        if (!value["IsGlobal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperRuleDetail.IsGlobal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isGlobal = value["IsGlobal"].GetUint64();
        m_isGlobalHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperRuleDetail.Level` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetUint64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("UuidTotalCount") && !value["UuidTotalCount"].IsNull())
    {
        if (!value["UuidTotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperRuleDetail.UuidTotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uuidTotalCount = value["UuidTotalCount"].GetUint64();
        m_uuidTotalCountHasBeenSet = true;
    }

    if (value.HasMember("AddWhiteType") && !value["AddWhiteType"].IsNull())
    {
        if (!value["AddWhiteType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperRuleDetail.AddWhiteType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addWhiteType = string(value["AddWhiteType"].GetString());
        m_addWhiteTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileTamperRuleDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_ruleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rule.begin(); itr != m_rule.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_uuidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuids";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_uuids.begin(); itr != m_uuids.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_isGlobalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsGlobal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isGlobal, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_uuidTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UuidTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uuidTotalCount, allocator);
    }

    if (m_addWhiteTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddWhiteType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addWhiteType.c_str(), allocator).Move(), allocator);
    }

}


string FileTamperRuleDetail::GetName() const
{
    return m_name;
}

void FileTamperRuleDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool FileTamperRuleDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string FileTamperRuleDetail::GetModifyTime() const
{
    return m_modifyTime;
}

void FileTamperRuleDetail::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool FileTamperRuleDetail::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string FileTamperRuleDetail::GetCreateTime() const
{
    return m_createTime;
}

void FileTamperRuleDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool FileTamperRuleDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t FileTamperRuleDetail::GetStatus() const
{
    return m_status;
}

void FileTamperRuleDetail::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool FileTamperRuleDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<FileTamperRule> FileTamperRuleDetail::GetRule() const
{
    return m_rule;
}

void FileTamperRuleDetail::SetRule(const vector<FileTamperRule>& _rule)
{
    m_rule = _rule;
    m_ruleHasBeenSet = true;
}

bool FileTamperRuleDetail::RuleHasBeenSet() const
{
    return m_ruleHasBeenSet;
}

vector<string> FileTamperRuleDetail::GetUuids() const
{
    return m_uuids;
}

void FileTamperRuleDetail::SetUuids(const vector<string>& _uuids)
{
    m_uuids = _uuids;
    m_uuidsHasBeenSet = true;
}

bool FileTamperRuleDetail::UuidsHasBeenSet() const
{
    return m_uuidsHasBeenSet;
}

uint64_t FileTamperRuleDetail::GetId() const
{
    return m_id;
}

void FileTamperRuleDetail::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool FileTamperRuleDetail::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t FileTamperRuleDetail::GetIsGlobal() const
{
    return m_isGlobal;
}

void FileTamperRuleDetail::SetIsGlobal(const uint64_t& _isGlobal)
{
    m_isGlobal = _isGlobal;
    m_isGlobalHasBeenSet = true;
}

bool FileTamperRuleDetail::IsGlobalHasBeenSet() const
{
    return m_isGlobalHasBeenSet;
}

uint64_t FileTamperRuleDetail::GetLevel() const
{
    return m_level;
}

void FileTamperRuleDetail::SetLevel(const uint64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool FileTamperRuleDetail::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

uint64_t FileTamperRuleDetail::GetUuidTotalCount() const
{
    return m_uuidTotalCount;
}

void FileTamperRuleDetail::SetUuidTotalCount(const uint64_t& _uuidTotalCount)
{
    m_uuidTotalCount = _uuidTotalCount;
    m_uuidTotalCountHasBeenSet = true;
}

bool FileTamperRuleDetail::UuidTotalCountHasBeenSet() const
{
    return m_uuidTotalCountHasBeenSet;
}

string FileTamperRuleDetail::GetAddWhiteType() const
{
    return m_addWhiteType;
}

void FileTamperRuleDetail::SetAddWhiteType(const string& _addWhiteType)
{
    m_addWhiteType = _addWhiteType;
    m_addWhiteTypeHasBeenSet = true;
}

bool FileTamperRuleDetail::AddWhiteTypeHasBeenSet() const
{
    return m_addWhiteTypeHasBeenSet;
}

