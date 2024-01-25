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

#include <tencentcloud/wedata/v20210820/model/DsKettleServerFolderTreeNodeDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DsKettleServerFolderTreeNodeDto::DsKettleServerFolderTreeNodeDto() :
    m_idHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_isLeafHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_childrenHasBeenSet(false),
    m_executeCommandHasBeenSet(false)
{
}

CoreInternalOutcome DsKettleServerFolderTreeNodeDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DsKettleServerFolderTreeNodeDto.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DsKettleServerFolderTreeNodeDto.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DsKettleServerFolderTreeNodeDto.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DsKettleServerFolderTreeNodeDto.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("IsLeaf") && !value["IsLeaf"].IsNull())
    {
        if (!value["IsLeaf"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DsKettleServerFolderTreeNodeDto.IsLeaf` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isLeaf = value["IsLeaf"].GetBool();
        m_isLeafHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DsKettleServerFolderTreeNodeDto.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Children") && !value["Children"].IsNull())
    {
        if (!value["Children"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DsKettleServerFolderTreeNodeDto.Children` is not array type"));

        const rapidjson::Value &tmpValue = value["Children"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DsKettleServerFolderTreeNodeDto item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_children.push_back(item);
        }
        m_childrenHasBeenSet = true;
    }

    if (value.HasMember("ExecuteCommand") && !value["ExecuteCommand"].IsNull())
    {
        if (!value["ExecuteCommand"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DsKettleServerFolderTreeNodeDto.ExecuteCommand` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executeCommand = string(value["ExecuteCommand"].GetString());
        m_executeCommandHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DsKettleServerFolderTreeNodeDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
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

    if (m_isLeafHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLeaf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isLeaf, allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_childrenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Children";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_children.begin(); itr != m_children.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_executeCommandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecuteCommand";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executeCommand.c_str(), allocator).Move(), allocator);
    }

}


string DsKettleServerFolderTreeNodeDto::GetId() const
{
    return m_id;
}

void DsKettleServerFolderTreeNodeDto::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DsKettleServerFolderTreeNodeDto::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DsKettleServerFolderTreeNodeDto::GetTitle() const
{
    return m_title;
}

void DsKettleServerFolderTreeNodeDto::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool DsKettleServerFolderTreeNodeDto::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string DsKettleServerFolderTreeNodeDto::GetName() const
{
    return m_name;
}

void DsKettleServerFolderTreeNodeDto::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DsKettleServerFolderTreeNodeDto::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DsKettleServerFolderTreeNodeDto::GetType() const
{
    return m_type;
}

void DsKettleServerFolderTreeNodeDto::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DsKettleServerFolderTreeNodeDto::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

bool DsKettleServerFolderTreeNodeDto::GetIsLeaf() const
{
    return m_isLeaf;
}

void DsKettleServerFolderTreeNodeDto::SetIsLeaf(const bool& _isLeaf)
{
    m_isLeaf = _isLeaf;
    m_isLeafHasBeenSet = true;
}

bool DsKettleServerFolderTreeNodeDto::IsLeafHasBeenSet() const
{
    return m_isLeafHasBeenSet;
}

string DsKettleServerFolderTreeNodeDto::GetPath() const
{
    return m_path;
}

void DsKettleServerFolderTreeNodeDto::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool DsKettleServerFolderTreeNodeDto::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

vector<DsKettleServerFolderTreeNodeDto> DsKettleServerFolderTreeNodeDto::GetChildren() const
{
    return m_children;
}

void DsKettleServerFolderTreeNodeDto::SetChildren(const vector<DsKettleServerFolderTreeNodeDto>& _children)
{
    m_children = _children;
    m_childrenHasBeenSet = true;
}

bool DsKettleServerFolderTreeNodeDto::ChildrenHasBeenSet() const
{
    return m_childrenHasBeenSet;
}

string DsKettleServerFolderTreeNodeDto::GetExecuteCommand() const
{
    return m_executeCommand;
}

void DsKettleServerFolderTreeNodeDto::SetExecuteCommand(const string& _executeCommand)
{
    m_executeCommand = _executeCommand;
    m_executeCommandHasBeenSet = true;
}

bool DsKettleServerFolderTreeNodeDto::ExecuteCommandHasBeenSet() const
{
    return m_executeCommandHasBeenSet;
}

