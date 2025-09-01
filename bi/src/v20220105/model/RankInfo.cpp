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

#include <tencentcloud/bi/v20220105/model/RankInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

RankInfo::RankInfo() :
    m_typeHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_rulerInfoHasBeenSet(false),
    m_roleIdHasBeenSet(false),
    m_roleTypeHasBeenSet(false),
    m_tableIdHasBeenSet(false),
    m_rowColumnConfigListHasBeenSet(false)
{
}

CoreInternalOutcome RankInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RankInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RankInfo.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("RulerInfo") && !value["RulerInfo"].IsNull())
    {
        if (!value["RulerInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RankInfo.RulerInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rulerInfo = string(value["RulerInfo"].GetString());
        m_rulerInfoHasBeenSet = true;
    }

    if (value.HasMember("RoleId") && !value["RoleId"].IsNull())
    {
        if (!value["RoleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RankInfo.RoleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roleId = value["RoleId"].GetInt64();
        m_roleIdHasBeenSet = true;
    }

    if (value.HasMember("RoleType") && !value["RoleType"].IsNull())
    {
        if (!value["RoleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RankInfo.RoleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleType = string(value["RoleType"].GetString());
        m_roleTypeHasBeenSet = true;
    }

    if (value.HasMember("TableId") && !value["TableId"].IsNull())
    {
        if (!value["TableId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RankInfo.TableId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tableId = value["TableId"].GetInt64();
        m_tableIdHasBeenSet = true;
    }

    if (value.HasMember("RowColumnConfigList") && !value["RowColumnConfigList"].IsNull())
    {
        if (!value["RowColumnConfigList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RankInfo.RowColumnConfigList` is not array type"));

        const rapidjson::Value &tmpValue = value["RowColumnConfigList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RowColumnConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rowColumnConfigList.push_back(item);
        }
        m_rowColumnConfigListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RankInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_rulerInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RulerInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rulerInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_roleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roleId, allocator);
    }

    if (m_roleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleType.c_str(), allocator).Move(), allocator);
    }

    if (m_tableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tableId, allocator);
    }

    if (m_rowColumnConfigListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RowColumnConfigList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rowColumnConfigList.begin(); itr != m_rowColumnConfigList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string RankInfo::GetType() const
{
    return m_type;
}

void RankInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RankInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string RankInfo::GetMode() const
{
    return m_mode;
}

void RankInfo::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool RankInfo::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string RankInfo::GetRulerInfo() const
{
    return m_rulerInfo;
}

void RankInfo::SetRulerInfo(const string& _rulerInfo)
{
    m_rulerInfo = _rulerInfo;
    m_rulerInfoHasBeenSet = true;
}

bool RankInfo::RulerInfoHasBeenSet() const
{
    return m_rulerInfoHasBeenSet;
}

int64_t RankInfo::GetRoleId() const
{
    return m_roleId;
}

void RankInfo::SetRoleId(const int64_t& _roleId)
{
    m_roleId = _roleId;
    m_roleIdHasBeenSet = true;
}

bool RankInfo::RoleIdHasBeenSet() const
{
    return m_roleIdHasBeenSet;
}

string RankInfo::GetRoleType() const
{
    return m_roleType;
}

void RankInfo::SetRoleType(const string& _roleType)
{
    m_roleType = _roleType;
    m_roleTypeHasBeenSet = true;
}

bool RankInfo::RoleTypeHasBeenSet() const
{
    return m_roleTypeHasBeenSet;
}

int64_t RankInfo::GetTableId() const
{
    return m_tableId;
}

void RankInfo::SetTableId(const int64_t& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool RankInfo::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

vector<RowColumnConfig> RankInfo::GetRowColumnConfigList() const
{
    return m_rowColumnConfigList;
}

void RankInfo::SetRowColumnConfigList(const vector<RowColumnConfig>& _rowColumnConfigList)
{
    m_rowColumnConfigList = _rowColumnConfigList;
    m_rowColumnConfigListHasBeenSet = true;
}

bool RankInfo::RowColumnConfigListHasBeenSet() const
{
    return m_rowColumnConfigListHasBeenSet;
}

