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

#include <tencentcloud/csip/v20221121/model/BehaviorInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

BehaviorInfo::BehaviorInfo() :
    m_dateHasBeenSet(false),
    m_nodeInfoHasBeenSet(false)
{
}

CoreInternalOutcome BehaviorInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BehaviorInfo.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("NodeInfo") && !value["NodeInfo"].IsNull())
    {
        if (!value["NodeInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BehaviorInfo.NodeInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["NodeInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NodeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nodeInfo.push_back(item);
        }
        m_nodeInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BehaviorInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodeInfo.begin(); itr != m_nodeInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string BehaviorInfo::GetDate() const
{
    return m_date;
}

void BehaviorInfo::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool BehaviorInfo::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

vector<NodeInfo> BehaviorInfo::GetNodeInfo() const
{
    return m_nodeInfo;
}

void BehaviorInfo::SetNodeInfo(const vector<NodeInfo>& _nodeInfo)
{
    m_nodeInfo = _nodeInfo;
    m_nodeInfoHasBeenSet = true;
}

bool BehaviorInfo::NodeInfoHasBeenSet() const
{
    return m_nodeInfoHasBeenSet;
}

