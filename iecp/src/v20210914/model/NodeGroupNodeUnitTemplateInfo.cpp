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

#include <tencentcloud/iecp/v20210914/model/NodeGroupNodeUnitTemplateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

NodeGroupNodeUnitTemplateInfo::NodeGroupNodeUnitTemplateInfo() :
    m_iDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nodeListHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_relationHasBeenSet(false)
{
}

CoreInternalOutcome NodeGroupNodeUnitTemplateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeGroupNodeUnitTemplateInfo.ID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetUint64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeGroupNodeUnitTemplateInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeGroupNodeUnitTemplateInfo.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeGroupNodeUnitTemplateInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("NodeList") && !value["NodeList"].IsNull())
    {
        if (!value["NodeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodeGroupNodeUnitTemplateInfo.NodeList` is not array type"));

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

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeGroupNodeUnitTemplateInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeGroupNodeUnitTemplateInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Relation") && !value["Relation"].IsNull())
    {
        if (!value["Relation"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NodeGroupNodeUnitTemplateInfo.Relation` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_relation = value["Relation"].GetBool();
        m_relationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeGroupNodeUnitTemplateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_relationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Relation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_relation, allocator);
    }

}


uint64_t NodeGroupNodeUnitTemplateInfo::GetID() const
{
    return m_iD;
}

void NodeGroupNodeUnitTemplateInfo::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool NodeGroupNodeUnitTemplateInfo::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string NodeGroupNodeUnitTemplateInfo::GetName() const
{
    return m_name;
}

void NodeGroupNodeUnitTemplateInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool NodeGroupNodeUnitTemplateInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string NodeGroupNodeUnitTemplateInfo::GetNamespace() const
{
    return m_namespace;
}

void NodeGroupNodeUnitTemplateInfo::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool NodeGroupNodeUnitTemplateInfo::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string NodeGroupNodeUnitTemplateInfo::GetDescription() const
{
    return m_description;
}

void NodeGroupNodeUnitTemplateInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool NodeGroupNodeUnitTemplateInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<NodeSimpleInfo> NodeGroupNodeUnitTemplateInfo::GetNodeList() const
{
    return m_nodeList;
}

void NodeGroupNodeUnitTemplateInfo::SetNodeList(const vector<NodeSimpleInfo>& _nodeList)
{
    m_nodeList = _nodeList;
    m_nodeListHasBeenSet = true;
}

bool NodeGroupNodeUnitTemplateInfo::NodeListHasBeenSet() const
{
    return m_nodeListHasBeenSet;
}

string NodeGroupNodeUnitTemplateInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void NodeGroupNodeUnitTemplateInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool NodeGroupNodeUnitTemplateInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string NodeGroupNodeUnitTemplateInfo::GetCreateTime() const
{
    return m_createTime;
}

void NodeGroupNodeUnitTemplateInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool NodeGroupNodeUnitTemplateInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

bool NodeGroupNodeUnitTemplateInfo::GetRelation() const
{
    return m_relation;
}

void NodeGroupNodeUnitTemplateInfo::SetRelation(const bool& _relation)
{
    m_relation = _relation;
    m_relationHasBeenSet = true;
}

bool NodeGroupNodeUnitTemplateInfo::RelationHasBeenSet() const
{
    return m_relationHasBeenSet;
}

