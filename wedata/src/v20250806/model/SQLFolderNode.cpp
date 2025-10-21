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

#include <tencentcloud/wedata/v20250806/model/SQLFolderNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

SQLFolderNode::SQLFolderNode() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_parentFolderPathHasBeenSet(false),
    m_isLeafHasBeenSet(false),
    m_paramsHasBeenSet(false),
    m_accessScopeHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_createUserUinHasBeenSet(false),
    m_nodePermissionHasBeenSet(false),
    m_childrenHasBeenSet(false),
    m_ownerUinHasBeenSet(false)
{
}

CoreInternalOutcome SQLFolderNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLFolderNode.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLFolderNode.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLFolderNode.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ParentFolderPath") && !value["ParentFolderPath"].IsNull())
    {
        if (!value["ParentFolderPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLFolderNode.ParentFolderPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentFolderPath = string(value["ParentFolderPath"].GetString());
        m_parentFolderPathHasBeenSet = true;
    }

    if (value.HasMember("IsLeaf") && !value["IsLeaf"].IsNull())
    {
        if (!value["IsLeaf"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SQLFolderNode.IsLeaf` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isLeaf = value["IsLeaf"].GetBool();
        m_isLeafHasBeenSet = true;
    }

    if (value.HasMember("Params") && !value["Params"].IsNull())
    {
        if (!value["Params"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLFolderNode.Params` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_params = string(value["Params"].GetString());
        m_paramsHasBeenSet = true;
    }

    if (value.HasMember("AccessScope") && !value["AccessScope"].IsNull())
    {
        if (!value["AccessScope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLFolderNode.AccessScope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessScope = string(value["AccessScope"].GetString());
        m_accessScopeHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLFolderNode.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("CreateUserUin") && !value["CreateUserUin"].IsNull())
    {
        if (!value["CreateUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLFolderNode.CreateUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUserUin = string(value["CreateUserUin"].GetString());
        m_createUserUinHasBeenSet = true;
    }

    if (value.HasMember("NodePermission") && !value["NodePermission"].IsNull())
    {
        if (!value["NodePermission"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLFolderNode.NodePermission` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodePermission = string(value["NodePermission"].GetString());
        m_nodePermissionHasBeenSet = true;
    }

    if (value.HasMember("Children") && !value["Children"].IsNull())
    {
        if (!value["Children"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SQLFolderNode.Children` is not array type"));

        const rapidjson::Value &tmpValue = value["Children"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SQLFolderNode item;
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

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLFolderNode.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SQLFolderNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_parentFolderPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentFolderPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentFolderPath.c_str(), allocator).Move(), allocator);
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

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

}


string SQLFolderNode::GetId() const
{
    return m_id;
}

void SQLFolderNode::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool SQLFolderNode::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string SQLFolderNode::GetName() const
{
    return m_name;
}

void SQLFolderNode::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SQLFolderNode::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SQLFolderNode::GetType() const
{
    return m_type;
}

void SQLFolderNode::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SQLFolderNode::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string SQLFolderNode::GetParentFolderPath() const
{
    return m_parentFolderPath;
}

void SQLFolderNode::SetParentFolderPath(const string& _parentFolderPath)
{
    m_parentFolderPath = _parentFolderPath;
    m_parentFolderPathHasBeenSet = true;
}

bool SQLFolderNode::ParentFolderPathHasBeenSet() const
{
    return m_parentFolderPathHasBeenSet;
}

bool SQLFolderNode::GetIsLeaf() const
{
    return m_isLeaf;
}

void SQLFolderNode::SetIsLeaf(const bool& _isLeaf)
{
    m_isLeaf = _isLeaf;
    m_isLeafHasBeenSet = true;
}

bool SQLFolderNode::IsLeafHasBeenSet() const
{
    return m_isLeafHasBeenSet;
}

string SQLFolderNode::GetParams() const
{
    return m_params;
}

void SQLFolderNode::SetParams(const string& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool SQLFolderNode::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

string SQLFolderNode::GetAccessScope() const
{
    return m_accessScope;
}

void SQLFolderNode::SetAccessScope(const string& _accessScope)
{
    m_accessScope = _accessScope;
    m_accessScopeHasBeenSet = true;
}

bool SQLFolderNode::AccessScopeHasBeenSet() const
{
    return m_accessScopeHasBeenSet;
}

string SQLFolderNode::GetPath() const
{
    return m_path;
}

void SQLFolderNode::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool SQLFolderNode::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string SQLFolderNode::GetCreateUserUin() const
{
    return m_createUserUin;
}

void SQLFolderNode::SetCreateUserUin(const string& _createUserUin)
{
    m_createUserUin = _createUserUin;
    m_createUserUinHasBeenSet = true;
}

bool SQLFolderNode::CreateUserUinHasBeenSet() const
{
    return m_createUserUinHasBeenSet;
}

string SQLFolderNode::GetNodePermission() const
{
    return m_nodePermission;
}

void SQLFolderNode::SetNodePermission(const string& _nodePermission)
{
    m_nodePermission = _nodePermission;
    m_nodePermissionHasBeenSet = true;
}

bool SQLFolderNode::NodePermissionHasBeenSet() const
{
    return m_nodePermissionHasBeenSet;
}

vector<SQLFolderNode> SQLFolderNode::GetChildren() const
{
    return m_children;
}

void SQLFolderNode::SetChildren(const vector<SQLFolderNode>& _children)
{
    m_children = _children;
    m_childrenHasBeenSet = true;
}

bool SQLFolderNode::ChildrenHasBeenSet() const
{
    return m_childrenHasBeenSet;
}

string SQLFolderNode::GetOwnerUin() const
{
    return m_ownerUin;
}

void SQLFolderNode::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool SQLFolderNode::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

