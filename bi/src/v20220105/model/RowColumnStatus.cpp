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

#include <tencentcloud/bi/v20220105/model/RowColumnStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

RowColumnStatus::RowColumnStatus() :
    m_tableIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_openStatusHasBeenSet(false),
    m_roleTypeHasBeenSet(false),
    m_roleIdHasBeenSet(false)
{
}

CoreInternalOutcome RowColumnStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableId") && !value["TableId"].IsNull())
    {
        if (!value["TableId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RowColumnStatus.TableId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tableId = value["TableId"].GetInt64();
        m_tableIdHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RowColumnStatus.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RowColumnStatus.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("OpenStatus") && !value["OpenStatus"].IsNull())
    {
        if (!value["OpenStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RowColumnStatus.OpenStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openStatus = string(value["OpenStatus"].GetString());
        m_openStatusHasBeenSet = true;
    }

    if (value.HasMember("RoleType") && !value["RoleType"].IsNull())
    {
        if (!value["RoleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RowColumnStatus.RoleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleType = string(value["RoleType"].GetString());
        m_roleTypeHasBeenSet = true;
    }

    if (value.HasMember("RoleId") && !value["RoleId"].IsNull())
    {
        if (!value["RoleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RowColumnStatus.RoleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roleId = value["RoleId"].GetInt64();
        m_roleIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RowColumnStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tableId, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_openStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_openStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_roleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleType.c_str(), allocator).Move(), allocator);
    }

    if (m_roleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roleId, allocator);
    }

}


int64_t RowColumnStatus::GetTableId() const
{
    return m_tableId;
}

void RowColumnStatus::SetTableId(const int64_t& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool RowColumnStatus::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

string RowColumnStatus::GetType() const
{
    return m_type;
}

void RowColumnStatus::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RowColumnStatus::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string RowColumnStatus::GetMode() const
{
    return m_mode;
}

void RowColumnStatus::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool RowColumnStatus::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string RowColumnStatus::GetOpenStatus() const
{
    return m_openStatus;
}

void RowColumnStatus::SetOpenStatus(const string& _openStatus)
{
    m_openStatus = _openStatus;
    m_openStatusHasBeenSet = true;
}

bool RowColumnStatus::OpenStatusHasBeenSet() const
{
    return m_openStatusHasBeenSet;
}

string RowColumnStatus::GetRoleType() const
{
    return m_roleType;
}

void RowColumnStatus::SetRoleType(const string& _roleType)
{
    m_roleType = _roleType;
    m_roleTypeHasBeenSet = true;
}

bool RowColumnStatus::RoleTypeHasBeenSet() const
{
    return m_roleTypeHasBeenSet;
}

int64_t RowColumnStatus::GetRoleId() const
{
    return m_roleId;
}

void RowColumnStatus::SetRoleId(const int64_t& _roleId)
{
    m_roleId = _roleId;
    m_roleIdHasBeenSet = true;
}

bool RowColumnStatus::RoleIdHasBeenSet() const
{
    return m_roleIdHasBeenSet;
}

