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

#include <tencentcloud/cwp/v20180228/model/FileTamperRuleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

FileTamperRuleInfo::FileTamperRuleInfo() :
    m_nameHasBeenSet(false),
    m_ruleCategoryHasBeenSet(false),
    m_hostCountHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_idHasBeenSet(false),
    m_isGlobalHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_writeRuleCountHasBeenSet(false),
    m_readRuleCountHasBeenSet(false),
    m_readWriteRuleCountHasBeenSet(false),
    m_fileActionHasBeenSet(false),
    m_addWhiteTypeHasBeenSet(false)
{
}

CoreInternalOutcome FileTamperRuleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperRuleInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("RuleCategory") && !value["RuleCategory"].IsNull())
    {
        if (!value["RuleCategory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperRuleInfo.RuleCategory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleCategory = value["RuleCategory"].GetUint64();
        m_ruleCategoryHasBeenSet = true;
    }

    if (value.HasMember("HostCount") && !value["HostCount"].IsNull())
    {
        if (!value["HostCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperRuleInfo.HostCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hostCount = value["HostCount"].GetUint64();
        m_hostCountHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperRuleInfo.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperRuleInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperRuleInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperRuleInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("IsGlobal") && !value["IsGlobal"].IsNull())
    {
        if (!value["IsGlobal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperRuleInfo.IsGlobal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isGlobal = value["IsGlobal"].GetUint64();
        m_isGlobalHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperRuleInfo.Level` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetUint64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("WriteRuleCount") && !value["WriteRuleCount"].IsNull())
    {
        if (!value["WriteRuleCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperRuleInfo.WriteRuleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_writeRuleCount = value["WriteRuleCount"].GetUint64();
        m_writeRuleCountHasBeenSet = true;
    }

    if (value.HasMember("ReadRuleCount") && !value["ReadRuleCount"].IsNull())
    {
        if (!value["ReadRuleCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperRuleInfo.ReadRuleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_readRuleCount = value["ReadRuleCount"].GetUint64();
        m_readRuleCountHasBeenSet = true;
    }

    if (value.HasMember("ReadWriteRuleCount") && !value["ReadWriteRuleCount"].IsNull())
    {
        if (!value["ReadWriteRuleCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperRuleInfo.ReadWriteRuleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_readWriteRuleCount = value["ReadWriteRuleCount"].GetUint64();
        m_readWriteRuleCountHasBeenSet = true;
    }

    if (value.HasMember("FileAction") && !value["FileAction"].IsNull())
    {
        if (!value["FileAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperRuleInfo.FileAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileAction = string(value["FileAction"].GetString());
        m_fileActionHasBeenSet = true;
    }

    if (value.HasMember("AddWhiteType") && !value["AddWhiteType"].IsNull())
    {
        if (!value["AddWhiteType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperRuleInfo.AddWhiteType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addWhiteType = string(value["AddWhiteType"].GetString());
        m_addWhiteTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileTamperRuleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleCategory, allocator);
    }

    if (m_hostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostCount, allocator);
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

    if (m_writeRuleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WriteRuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_writeRuleCount, allocator);
    }

    if (m_readRuleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadRuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readRuleCount, allocator);
    }

    if (m_readWriteRuleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadWriteRuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readWriteRuleCount, allocator);
    }

    if (m_fileActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileAction.c_str(), allocator).Move(), allocator);
    }

    if (m_addWhiteTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddWhiteType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addWhiteType.c_str(), allocator).Move(), allocator);
    }

}


string FileTamperRuleInfo::GetName() const
{
    return m_name;
}

void FileTamperRuleInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool FileTamperRuleInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t FileTamperRuleInfo::GetRuleCategory() const
{
    return m_ruleCategory;
}

void FileTamperRuleInfo::SetRuleCategory(const uint64_t& _ruleCategory)
{
    m_ruleCategory = _ruleCategory;
    m_ruleCategoryHasBeenSet = true;
}

bool FileTamperRuleInfo::RuleCategoryHasBeenSet() const
{
    return m_ruleCategoryHasBeenSet;
}

uint64_t FileTamperRuleInfo::GetHostCount() const
{
    return m_hostCount;
}

void FileTamperRuleInfo::SetHostCount(const uint64_t& _hostCount)
{
    m_hostCount = _hostCount;
    m_hostCountHasBeenSet = true;
}

bool FileTamperRuleInfo::HostCountHasBeenSet() const
{
    return m_hostCountHasBeenSet;
}

string FileTamperRuleInfo::GetModifyTime() const
{
    return m_modifyTime;
}

void FileTamperRuleInfo::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool FileTamperRuleInfo::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string FileTamperRuleInfo::GetCreateTime() const
{
    return m_createTime;
}

void FileTamperRuleInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool FileTamperRuleInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t FileTamperRuleInfo::GetStatus() const
{
    return m_status;
}

void FileTamperRuleInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool FileTamperRuleInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t FileTamperRuleInfo::GetId() const
{
    return m_id;
}

void FileTamperRuleInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool FileTamperRuleInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t FileTamperRuleInfo::GetIsGlobal() const
{
    return m_isGlobal;
}

void FileTamperRuleInfo::SetIsGlobal(const uint64_t& _isGlobal)
{
    m_isGlobal = _isGlobal;
    m_isGlobalHasBeenSet = true;
}

bool FileTamperRuleInfo::IsGlobalHasBeenSet() const
{
    return m_isGlobalHasBeenSet;
}

uint64_t FileTamperRuleInfo::GetLevel() const
{
    return m_level;
}

void FileTamperRuleInfo::SetLevel(const uint64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool FileTamperRuleInfo::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

uint64_t FileTamperRuleInfo::GetWriteRuleCount() const
{
    return m_writeRuleCount;
}

void FileTamperRuleInfo::SetWriteRuleCount(const uint64_t& _writeRuleCount)
{
    m_writeRuleCount = _writeRuleCount;
    m_writeRuleCountHasBeenSet = true;
}

bool FileTamperRuleInfo::WriteRuleCountHasBeenSet() const
{
    return m_writeRuleCountHasBeenSet;
}

uint64_t FileTamperRuleInfo::GetReadRuleCount() const
{
    return m_readRuleCount;
}

void FileTamperRuleInfo::SetReadRuleCount(const uint64_t& _readRuleCount)
{
    m_readRuleCount = _readRuleCount;
    m_readRuleCountHasBeenSet = true;
}

bool FileTamperRuleInfo::ReadRuleCountHasBeenSet() const
{
    return m_readRuleCountHasBeenSet;
}

uint64_t FileTamperRuleInfo::GetReadWriteRuleCount() const
{
    return m_readWriteRuleCount;
}

void FileTamperRuleInfo::SetReadWriteRuleCount(const uint64_t& _readWriteRuleCount)
{
    m_readWriteRuleCount = _readWriteRuleCount;
    m_readWriteRuleCountHasBeenSet = true;
}

bool FileTamperRuleInfo::ReadWriteRuleCountHasBeenSet() const
{
    return m_readWriteRuleCountHasBeenSet;
}

string FileTamperRuleInfo::GetFileAction() const
{
    return m_fileAction;
}

void FileTamperRuleInfo::SetFileAction(const string& _fileAction)
{
    m_fileAction = _fileAction;
    m_fileActionHasBeenSet = true;
}

bool FileTamperRuleInfo::FileActionHasBeenSet() const
{
    return m_fileActionHasBeenSet;
}

string FileTamperRuleInfo::GetAddWhiteType() const
{
    return m_addWhiteType;
}

void FileTamperRuleInfo::SetAddWhiteType(const string& _addWhiteType)
{
    m_addWhiteType = _addWhiteType;
    m_addWhiteTypeHasBeenSet = true;
}

bool FileTamperRuleInfo::AddWhiteTypeHasBeenSet() const
{
    return m_addWhiteTypeHasBeenSet;
}

