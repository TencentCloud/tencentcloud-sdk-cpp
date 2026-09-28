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

#include <tencentcloud/databuddy/v20260715/model/FileNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

FileNode::FileNode() :
    m_nodeHasBeenSet(false),
    m_parentHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_originPathHasBeenSet(false),
    m_deleteTimeHasBeenSet(false),
    m_gitConfigHasBeenSet(false)
{
}

CoreInternalOutcome FileNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Node") && !value["Node"].IsNull())
    {
        if (!value["Node"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FileNode.Node` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_node.Deserialize(value["Node"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nodeHasBeenSet = true;
    }

    if (value.HasMember("Parent") && !value["Parent"].IsNull())
    {
        if (!value["Parent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FileNode.Parent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_parent.Deserialize(value["Parent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_parentHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FileNode.Creator` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_creator.Deserialize(value["Creator"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FileNode.Owner` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_owner.Deserialize(value["Owner"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ownerHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileNode.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("OriginPath") && !value["OriginPath"].IsNull())
    {
        if (!value["OriginPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileNode.OriginPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originPath = string(value["OriginPath"].GetString());
        m_originPathHasBeenSet = true;
    }

    if (value.HasMember("DeleteTime") && !value["DeleteTime"].IsNull())
    {
        if (!value["DeleteTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileNode.DeleteTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deleteTime = string(value["DeleteTime"].GetString());
        m_deleteTimeHasBeenSet = true;
    }

    if (value.HasMember("GitConfig") && !value["GitConfig"].IsNull())
    {
        if (!value["GitConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FileNode.GitConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_gitConfig.Deserialize(value["GitConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_gitConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Node";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_node.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_parentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Parent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_parent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_creator.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_owner.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_originPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originPath.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deleteTime.c_str(), allocator).Move(), allocator);
    }

    if (m_gitConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GitConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_gitConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


FileMeta FileNode::GetNode() const
{
    return m_node;
}

void FileNode::SetNode(const FileMeta& _node)
{
    m_node = _node;
    m_nodeHasBeenSet = true;
}

bool FileNode::NodeHasBeenSet() const
{
    return m_nodeHasBeenSet;
}

FileMeta FileNode::GetParent() const
{
    return m_parent;
}

void FileNode::SetParent(const FileMeta& _parent)
{
    m_parent = _parent;
    m_parentHasBeenSet = true;
}

bool FileNode::ParentHasBeenSet() const
{
    return m_parentHasBeenSet;
}

UserInfo FileNode::GetCreator() const
{
    return m_creator;
}

void FileNode::SetCreator(const UserInfo& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool FileNode::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

UserInfo FileNode::GetOwner() const
{
    return m_owner;
}

void FileNode::SetOwner(const UserInfo& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool FileNode::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string FileNode::GetNodeType() const
{
    return m_nodeType;
}

void FileNode::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool FileNode::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string FileNode::GetOriginPath() const
{
    return m_originPath;
}

void FileNode::SetOriginPath(const string& _originPath)
{
    m_originPath = _originPath;
    m_originPathHasBeenSet = true;
}

bool FileNode::OriginPathHasBeenSet() const
{
    return m_originPathHasBeenSet;
}

string FileNode::GetDeleteTime() const
{
    return m_deleteTime;
}

void FileNode::SetDeleteTime(const string& _deleteTime)
{
    m_deleteTime = _deleteTime;
    m_deleteTimeHasBeenSet = true;
}

bool FileNode::DeleteTimeHasBeenSet() const
{
    return m_deleteTimeHasBeenSet;
}

GitRepoConfig FileNode::GetGitConfig() const
{
    return m_gitConfig;
}

void FileNode::SetGitConfig(const GitRepoConfig& _gitConfig)
{
    m_gitConfig = _gitConfig;
    m_gitConfigHasBeenSet = true;
}

bool FileNode::GitConfigHasBeenSet() const
{
    return m_gitConfigHasBeenSet;
}

