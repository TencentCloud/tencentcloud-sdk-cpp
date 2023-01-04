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

#include <tencentcloud/emr/v20190103/model/ZoneDetailPriceResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ZoneDetailPriceResult::ZoneDetailPriceResult() :
    m_zoneIdHasBeenSet(false),
    m_nodeDetailPriceHasBeenSet(false)
{
}

CoreInternalOutcome ZoneDetailPriceResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneDetailPriceResult.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("NodeDetailPrice") && !value["NodeDetailPrice"].IsNull())
    {
        if (!value["NodeDetailPrice"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ZoneDetailPriceResult.NodeDetailPrice` is not array type"));

        const rapidjson::Value &tmpValue = value["NodeDetailPrice"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NodeDetailPriceResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nodeDetailPrice.push_back(item);
        }
        m_nodeDetailPriceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZoneDetailPriceResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeDetailPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeDetailPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodeDetailPrice.begin(); itr != m_nodeDetailPrice.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ZoneDetailPriceResult::GetZoneId() const
{
    return m_zoneId;
}

void ZoneDetailPriceResult::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ZoneDetailPriceResult::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

vector<NodeDetailPriceResult> ZoneDetailPriceResult::GetNodeDetailPrice() const
{
    return m_nodeDetailPrice;
}

void ZoneDetailPriceResult::SetNodeDetailPrice(const vector<NodeDetailPriceResult>& _nodeDetailPrice)
{
    m_nodeDetailPrice = _nodeDetailPrice;
    m_nodeDetailPriceHasBeenSet = true;
}

bool ZoneDetailPriceResult::NodeDetailPriceHasBeenSet() const
{
    return m_nodeDetailPriceHasBeenSet;
}

