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

#include <tencentcloud/iecp/v20210914/model/NodeUnitTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

NodeUnitTemplate::NodeUnitTemplate() :
    m_iDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nodeListHasBeenSet(false),
    m_nodeGroupsHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome NodeUnitTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeUnitTemplate.ID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetUint64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeUnitTemplate.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeUnitTemplate.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeUnitTemplate.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("NodeList") && !value["NodeList"].IsNull())
    {
        if (!value["NodeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodeUnitTemplate.NodeList` is not array type"));

        const rapidjson::Value &tmpValue = value["NodeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NodeSimpleInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nodeList.push_back(item);
        }
        m_nodeListHasBeenSet = true;
    }

    if (value.HasMember("NodeGroups") && !value["NodeGroups"].IsNull())
    {
        if (!value["NodeGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodeUnitTemplate.NodeGroups` is not array type"));

        const rapidjson::Value &tmpValue = value["NodeGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_nodeGroups.push_back((*itr).GetString());
        }
        m_nodeGroupsHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeUnitTemplate.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeUnitTemplate.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeUnitTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodeList.begin(); itr != m_nodeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_nodeGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nodeGroups.begin(); itr != m_nodeGroups.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

}


uint64_t NodeUnitTemplate::GetID() const
{
    return m_iD;
}

void NodeUnitTemplate::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool NodeUnitTemplate::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string NodeUnitTemplate::GetName() const
{
    return m_name;
}

void NodeUnitTemplate::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool NodeUnitTemplate::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string NodeUnitTemplate::GetNamespace() const
{
    return m_namespace;
}

void NodeUnitTemplate::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool NodeUnitTemplate::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string NodeUnitTemplate::GetDescription() const
{
    return m_description;
}

void NodeUnitTemplate::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool NodeUnitTemplate::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<NodeSimpleInfo> NodeUnitTemplate::GetNodeList() const
{
    return m_nodeList;
}

void NodeUnitTemplate::SetNodeList(const vector<NodeSimpleInfo>& _nodeList)
{
    m_nodeList = _nodeList;
    m_nodeListHasBeenSet = true;
}

bool NodeUnitTemplate::NodeListHasBeenSet() const
{
    return m_nodeListHasBeenSet;
}

vector<string> NodeUnitTemplate::GetNodeGroups() const
{
    return m_nodeGroups;
}

void NodeUnitTemplate::SetNodeGroups(const vector<string>& _nodeGroups)
{
    m_nodeGroups = _nodeGroups;
    m_nodeGroupsHasBeenSet = true;
}

bool NodeUnitTemplate::NodeGroupsHasBeenSet() const
{
    return m_nodeGroupsHasBeenSet;
}

string NodeUnitTemplate::GetUpdateTime() const
{
    return m_updateTime;
}

void NodeUnitTemplate::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool NodeUnitTemplate::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string NodeUnitTemplate::GetCreateTime() const
{
    return m_createTime;
}

void NodeUnitTemplate::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool NodeUnitTemplate::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

