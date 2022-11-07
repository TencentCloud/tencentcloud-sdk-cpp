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

#include <tencentcloud/wedata/v20210820/model/RecordsSpeed.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RecordsSpeed::RecordsSpeed() :
    m_nodeTypeHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

CoreInternalOutcome RecordsSpeed::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordsSpeed.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordsSpeed.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("Values") && !value["Values"].IsNull())
    {
        if (!value["Values"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RecordsSpeed.Values` is not array type"));

        const rapidjson::Value &tmpValue = value["Values"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SpeedValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_values.push_back(item);
        }
        m_valuesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecordsSpeed::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_valuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Values";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_values.begin(); itr != m_values.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string RecordsSpeed::GetNodeType() const
{
    return m_nodeType;
}

void RecordsSpeed::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool RecordsSpeed::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string RecordsSpeed::GetNodeName() const
{
    return m_nodeName;
}

void RecordsSpeed::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool RecordsSpeed::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

vector<SpeedValue> RecordsSpeed::GetValues() const
{
    return m_values;
}

void RecordsSpeed::SetValues(const vector<SpeedValue>& _values)
{
    m_values = _values;
    m_valuesHasBeenSet = true;
}

bool RecordsSpeed::ValuesHasBeenSet() const
{
    return m_valuesHasBeenSet;
}

