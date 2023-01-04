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

#include <tencentcloud/emr/v20190103/model/NodeDetailPriceResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

NodeDetailPriceResult::NodeDetailPriceResult() :
    m_nodeTypeHasBeenSet(false),
    m_partDetailPriceHasBeenSet(false)
{
}

CoreInternalOutcome NodeDetailPriceResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeDetailPriceResult.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("PartDetailPrice") && !value["PartDetailPrice"].IsNull())
    {
        if (!value["PartDetailPrice"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodeDetailPriceResult.PartDetailPrice` is not array type"));

        const rapidjson::Value &tmpValue = value["PartDetailPrice"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PartDetailPriceItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_partDetailPrice.push_back(item);
        }
        m_partDetailPriceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeDetailPriceResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_partDetailPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartDetailPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_partDetailPrice.begin(); itr != m_partDetailPrice.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string NodeDetailPriceResult::GetNodeType() const
{
    return m_nodeType;
}

void NodeDetailPriceResult::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool NodeDetailPriceResult::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

vector<PartDetailPriceItem> NodeDetailPriceResult::GetPartDetailPrice() const
{
    return m_partDetailPrice;
}

void NodeDetailPriceResult::SetPartDetailPrice(const vector<PartDetailPriceItem>& _partDetailPrice)
{
    m_partDetailPrice = _partDetailPrice;
    m_partDetailPriceHasBeenSet = true;
}

bool NodeDetailPriceResult::PartDetailPriceHasBeenSet() const
{
    return m_partDetailPriceHasBeenSet;
}

