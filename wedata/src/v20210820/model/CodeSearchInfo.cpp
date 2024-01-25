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

#include <tencentcloud/wedata/v20210820/model/CodeSearchInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CodeSearchInfo::CodeSearchInfo() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_ownerNameHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_matchRowsHasBeenSet(false),
    m_submitTimeHasBeenSet(false),
    m_displayTypeHasBeenSet(false),
    m_cosPathHasBeenSet(false)
{
}

CoreInternalOutcome CodeSearchInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSearchInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSearchInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSearchInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CodeSearchInfo.Content` is not array type"));

        const rapidjson::Value &tmpValue = value["Content"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CodeMatchInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_content.push_back(item);
        }
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("OwnerName") && !value["OwnerName"].IsNull())
    {
        if (!value["OwnerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSearchInfo.OwnerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerName = string(value["OwnerName"].GetString());
        m_ownerNameHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSearchInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSearchInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("MatchRows") && !value["MatchRows"].IsNull())
    {
        if (!value["MatchRows"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSearchInfo.MatchRows` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_matchRows = value["MatchRows"].GetUint64();
        m_matchRowsHasBeenSet = true;
    }

    if (value.HasMember("SubmitTime") && !value["SubmitTime"].IsNull())
    {
        if (!value["SubmitTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSearchInfo.SubmitTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_submitTime = string(value["SubmitTime"].GetString());
        m_submitTimeHasBeenSet = true;
    }

    if (value.HasMember("DisplayType") && !value["DisplayType"].IsNull())
    {
        if (!value["DisplayType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSearchInfo.DisplayType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayType = string(value["DisplayType"].GetString());
        m_displayTypeHasBeenSet = true;
    }

    if (value.HasMember("CosPath") && !value["CosPath"].IsNull())
    {
        if (!value["CosPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSearchInfo.CosPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosPath = string(value["CosPath"].GetString());
        m_cosPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CodeSearchInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_content.begin(); itr != m_content.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ownerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerName.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_matchRowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchRows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_matchRows, allocator);
    }

    if (m_submitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubmitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_submitTime.c_str(), allocator).Move(), allocator);
    }

    if (m_displayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayType.c_str(), allocator).Move(), allocator);
    }

    if (m_cosPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosPath.c_str(), allocator).Move(), allocator);
    }

}


string CodeSearchInfo::GetId() const
{
    return m_id;
}

void CodeSearchInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CodeSearchInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string CodeSearchInfo::GetName() const
{
    return m_name;
}

void CodeSearchInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CodeSearchInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CodeSearchInfo::GetType() const
{
    return m_type;
}

void CodeSearchInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CodeSearchInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<CodeMatchInfo> CodeSearchInfo::GetContent() const
{
    return m_content;
}

void CodeSearchInfo::SetContent(const vector<CodeMatchInfo>& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool CodeSearchInfo::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string CodeSearchInfo::GetOwnerName() const
{
    return m_ownerName;
}

void CodeSearchInfo::SetOwnerName(const string& _ownerName)
{
    m_ownerName = _ownerName;
    m_ownerNameHasBeenSet = true;
}

bool CodeSearchInfo::OwnerNameHasBeenSet() const
{
    return m_ownerNameHasBeenSet;
}

string CodeSearchInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void CodeSearchInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool CodeSearchInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string CodeSearchInfo::GetCreateTime() const
{
    return m_createTime;
}

void CodeSearchInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CodeSearchInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t CodeSearchInfo::GetMatchRows() const
{
    return m_matchRows;
}

void CodeSearchInfo::SetMatchRows(const uint64_t& _matchRows)
{
    m_matchRows = _matchRows;
    m_matchRowsHasBeenSet = true;
}

bool CodeSearchInfo::MatchRowsHasBeenSet() const
{
    return m_matchRowsHasBeenSet;
}

string CodeSearchInfo::GetSubmitTime() const
{
    return m_submitTime;
}

void CodeSearchInfo::SetSubmitTime(const string& _submitTime)
{
    m_submitTime = _submitTime;
    m_submitTimeHasBeenSet = true;
}

bool CodeSearchInfo::SubmitTimeHasBeenSet() const
{
    return m_submitTimeHasBeenSet;
}

string CodeSearchInfo::GetDisplayType() const
{
    return m_displayType;
}

void CodeSearchInfo::SetDisplayType(const string& _displayType)
{
    m_displayType = _displayType;
    m_displayTypeHasBeenSet = true;
}

bool CodeSearchInfo::DisplayTypeHasBeenSet() const
{
    return m_displayTypeHasBeenSet;
}

string CodeSearchInfo::GetCosPath() const
{
    return m_cosPath;
}

void CodeSearchInfo::SetCosPath(const string& _cosPath)
{
    m_cosPath = _cosPath;
    m_cosPathHasBeenSet = true;
}

bool CodeSearchInfo::CosPathHasBeenSet() const
{
    return m_cosPathHasBeenSet;
}

