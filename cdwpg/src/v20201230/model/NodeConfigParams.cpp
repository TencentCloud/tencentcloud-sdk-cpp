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

#include <tencentcloud/cdwpg/v20201230/model/NodeConfigParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwpg::V20201230::Model;
using namespace std;

NodeConfigParams::NodeConfigParams() :
    m_nodeTypeHasBeenSet(false),
    m_configParamsHasBeenSet(false)
{
}

CoreInternalOutcome NodeConfigParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeConfigParams.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("ConfigParams") && !value["ConfigParams"].IsNull())
    {
        if (!value["ConfigParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodeConfigParams.ConfigParams` is not array type"));

        const rapidjson::Value &tmpValue = value["ConfigParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConfigParams item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_configParams.push_back(item);
        }
        m_configParamsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeConfigParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_configParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_configParams.begin(); itr != m_configParams.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string NodeConfigParams::GetNodeType() const
{
    return m_nodeType;
}

void NodeConfigParams::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool NodeConfigParams::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

vector<ConfigParams> NodeConfigParams::GetConfigParams() const
{
    return m_configParams;
}

void NodeConfigParams::SetConfigParams(const vector<ConfigParams>& _configParams)
{
    m_configParams = _configParams;
    m_configParamsHasBeenSet = true;
}

bool NodeConfigParams::ConfigParamsHasBeenSet() const
{
    return m_configParamsHasBeenSet;
}

