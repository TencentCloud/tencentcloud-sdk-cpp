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

#include <tencentcloud/wedata/v20250806/model/CodeFolderNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

CodeFolderNode::CodeFolderNode() :
    m_idHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_isLeafHasBeenSet(false),
    m_paramsHasBeenSet(false),
    m_accessScopeHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_createUserUinHasBeenSet(false),
    m_nodePermissionHasBeenSet(false),
    m_childrenHasBeenSet(false)
{
}

CoreInternalOutcome CodeFolderNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeFolderNode.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeFolderNode.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeFolderNode.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("IsLeaf") && !value["IsLeaf"].IsNull())
    {
        if (!value["IsLeaf"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CodeFolderNode.IsLeaf` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isLeaf = value["IsLeaf"].GetBool();
        m_isLeafHasBeenSet = true;
    }

    if (value.HasMember("Params") && !value["Params"].IsNull())
    {
        if (!value["Params"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeFolderNode.Params` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_params = string(value["Params"].GetString());
        m_paramsHasBeenSet = true;
    }

    if (value.HasMember("AccessScope") && !value["AccessScope"].IsNull())
    {
        if (!value["AccessScope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeFolderNode.AccessScope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessScope = string(value["AccessScope"].GetString());
        m_accessScopeHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeFolderNode.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeFolderNode.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("CreateUserUin") && !value["CreateUserUin"].IsNull())
    {
        if (!value["CreateUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeFolderNode.CreateUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUserUin = string(value["CreateUserUin"].GetString());
        m_createUserUinHasBeenSet = true;
    }

    if (value.HasMember("NodePermission") && !value["NodePermission"].IsNull())
    {
        if (!value["NodePermission"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeFolderNode.NodePermission` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodePermission = string(value["NodePermission"].GetString());
        m_nodePermissionHasBeenSet = true;
    }

    if (value.HasMember("Children") && !value["Children"].IsNull())
    {
        if (!value["Children"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CodeFolderNode.Children` is not array type"));

        const rapidjson::Value &tmpValue = value["Children"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CodeFolderNode item;
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


    return CoreInternalOutcome(true);
}

void CodeFolderNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_paramsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Params";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_params.c_str(), allocator).Move(), allocator);
    }

    if (m_accessScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessScope.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_createUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUserUin.c_str(), allocator).Move(), allocator);
    }

    if (m_nodePermissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodePermission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodePermission.c_str(), allocator).Move(), allocator);
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

}


string CodeFolderNode::GetId() const
{
    return m_id;
}

void CodeFolderNode::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CodeFolderNode::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string CodeFolderNode::GetTitle() const
{
    return m_title;
}

void CodeFolderNode::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool CodeFolderNode::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string CodeFolderNode::GetType() const
{
    return m_type;
}

void CodeFolderNode::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CodeFolderNode::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

bool CodeFolderNode::GetIsLeaf() const
{
    return m_isLeaf;
}

void CodeFolderNode::SetIsLeaf(const bool& _isLeaf)
{
    m_isLeaf = _isLeaf;
    m_isLeafHasBeenSet = true;
}

bool CodeFolderNode::IsLeafHasBeenSet() const
{
    return m_isLeafHasBeenSet;
}

string CodeFolderNode::GetParams() const
{
    return m_params;
}

void CodeFolderNode::SetParams(const string& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool CodeFolderNode::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

string CodeFolderNode::GetAccessScope() const
{
    return m_accessScope;
}

void CodeFolderNode::SetAccessScope(const string& _accessScope)
{
    m_accessScope = _accessScope;
    m_accessScopeHasBeenSet = true;
}

bool CodeFolderNode::AccessScopeHasBeenSet() const
{
    return m_accessScopeHasBeenSet;
}

string CodeFolderNode::GetPath() const
{
    return m_path;
}

void CodeFolderNode::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool CodeFolderNode::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string CodeFolderNode::GetOwnerUin() const
{
    return m_ownerUin;
}

void CodeFolderNode::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool CodeFolderNode::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string CodeFolderNode::GetCreateUserUin() const
{
    return m_createUserUin;
}

void CodeFolderNode::SetCreateUserUin(const string& _createUserUin)
{
    m_createUserUin = _createUserUin;
    m_createUserUinHasBeenSet = true;
}

bool CodeFolderNode::CreateUserUinHasBeenSet() const
{
    return m_createUserUinHasBeenSet;
}

string CodeFolderNode::GetNodePermission() const
{
    return m_nodePermission;
}

void CodeFolderNode::SetNodePermission(const string& _nodePermission)
{
    m_nodePermission = _nodePermission;
    m_nodePermissionHasBeenSet = true;
}

bool CodeFolderNode::NodePermissionHasBeenSet() const
{
    return m_nodePermissionHasBeenSet;
}

vector<CodeFolderNode> CodeFolderNode::GetChildren() const
{
    return m_children;
}

void CodeFolderNode::SetChildren(const vector<CodeFolderNode>& _children)
{
    m_children = _children;
    m_childrenHasBeenSet = true;
}

bool CodeFolderNode::ChildrenHasBeenSet() const
{
    return m_childrenHasBeenSet;
}

