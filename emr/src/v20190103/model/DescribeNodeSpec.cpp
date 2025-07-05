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

#include <tencentcloud/emr/v20190103/model/DescribeNodeSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DescribeNodeSpec::DescribeNodeSpec() :
    m_nodeTypeHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_typesHasBeenSet(false),
    m_cmnTypesHasBeenSet(false)
{
}

CoreInternalOutcome DescribeNodeSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeNodeSpec.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeNodeSpec.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("Types") && !value["Types"].IsNull())
    {
        if (!value["Types"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeNodeSpec.Types` is not array type"));

        const rapidjson::Value &tmpValue = value["Types"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NodeSpecType item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_types.push_back(item);
        }
        m_typesHasBeenSet = true;
    }

    if (value.HasMember("CmnTypes") && !value["CmnTypes"].IsNull())
    {
        if (!value["CmnTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeNodeSpec.CmnTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["CmnTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NodeSpecType item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cmnTypes.push_back(item);
        }
        m_cmnTypesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeNodeSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_typesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Types";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_types.begin(); itr != m_types.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cmnTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmnTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cmnTypes.begin(); itr != m_cmnTypes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DescribeNodeSpec::GetNodeType() const
{
    return m_nodeType;
}

void DescribeNodeSpec::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool DescribeNodeSpec::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string DescribeNodeSpec::GetNodeName() const
{
    return m_nodeName;
}

void DescribeNodeSpec::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool DescribeNodeSpec::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

vector<NodeSpecType> DescribeNodeSpec::GetTypes() const
{
    return m_types;
}

void DescribeNodeSpec::SetTypes(const vector<NodeSpecType>& _types)
{
    m_types = _types;
    m_typesHasBeenSet = true;
}

bool DescribeNodeSpec::TypesHasBeenSet() const
{
    return m_typesHasBeenSet;
}

vector<NodeSpecType> DescribeNodeSpec::GetCmnTypes() const
{
    return m_cmnTypes;
}

void DescribeNodeSpec::SetCmnTypes(const vector<NodeSpecType>& _cmnTypes)
{
    m_cmnTypes = _cmnTypes;
    m_cmnTypesHasBeenSet = true;
}

bool DescribeNodeSpec::CmnTypesHasBeenSet() const
{
    return m_cmnTypesHasBeenSet;
}

