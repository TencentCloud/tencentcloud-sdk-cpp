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

#include <tencentcloud/tcaplusdb/v20190823/model/BackupExpireRuleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

BackupExpireRuleInfo::BackupExpireRuleInfo() :
    m_tableGroupIdHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_fileTagHasBeenSet(false),
    m_expireDayHasBeenSet(false),
    m_operTypeHasBeenSet(false)
{
}

CoreInternalOutcome BackupExpireRuleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableGroupId") && !value["TableGroupId"].IsNull())
    {
        if (!value["TableGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupExpireRuleInfo.TableGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableGroupId = string(value["TableGroupId"].GetString());
        m_tableGroupIdHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupExpireRuleInfo.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("FileTag") && !value["FileTag"].IsNull())
    {
        if (!value["FileTag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupExpireRuleInfo.FileTag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fileTag = value["FileTag"].GetUint64();
        m_fileTagHasBeenSet = true;
    }

    if (value.HasMember("ExpireDay") && !value["ExpireDay"].IsNull())
    {
        if (!value["ExpireDay"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupExpireRuleInfo.ExpireDay` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expireDay = value["ExpireDay"].GetUint64();
        m_expireDayHasBeenSet = true;
    }

    if (value.HasMember("OperType") && !value["OperType"].IsNull())
    {
        if (!value["OperType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupExpireRuleInfo.OperType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_operType = value["OperType"].GetUint64();
        m_operTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupExpireRuleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileTag, allocator);
    }

    if (m_expireDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireDay, allocator);
    }

    if (m_operTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operType, allocator);
    }

}


string BackupExpireRuleInfo::GetTableGroupId() const
{
    return m_tableGroupId;
}

void BackupExpireRuleInfo::SetTableGroupId(const string& _tableGroupId)
{
    m_tableGroupId = _tableGroupId;
    m_tableGroupIdHasBeenSet = true;
}

bool BackupExpireRuleInfo::TableGroupIdHasBeenSet() const
{
    return m_tableGroupIdHasBeenSet;
}

string BackupExpireRuleInfo::GetTableName() const
{
    return m_tableName;
}

void BackupExpireRuleInfo::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool BackupExpireRuleInfo::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

uint64_t BackupExpireRuleInfo::GetFileTag() const
{
    return m_fileTag;
}

void BackupExpireRuleInfo::SetFileTag(const uint64_t& _fileTag)
{
    m_fileTag = _fileTag;
    m_fileTagHasBeenSet = true;
}

bool BackupExpireRuleInfo::FileTagHasBeenSet() const
{
    return m_fileTagHasBeenSet;
}

uint64_t BackupExpireRuleInfo::GetExpireDay() const
{
    return m_expireDay;
}

void BackupExpireRuleInfo::SetExpireDay(const uint64_t& _expireDay)
{
    m_expireDay = _expireDay;
    m_expireDayHasBeenSet = true;
}

bool BackupExpireRuleInfo::ExpireDayHasBeenSet() const
{
    return m_expireDayHasBeenSet;
}

uint64_t BackupExpireRuleInfo::GetOperType() const
{
    return m_operType;
}

void BackupExpireRuleInfo::SetOperType(const uint64_t& _operType)
{
    m_operType = _operType;
    m_operTypeHasBeenSet = true;
}

bool BackupExpireRuleInfo::OperTypeHasBeenSet() const
{
    return m_operTypeHasBeenSet;
}

