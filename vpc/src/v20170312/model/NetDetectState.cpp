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

#include <tencentcloud/vpc/v20170312/model/NetDetectState.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

NetDetectState::NetDetectState() :
    m_netDetectIdHasBeenSet(false),
    m_netDetectIpStateSetHasBeenSet(false)
{
}

CoreInternalOutcome NetDetectState::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NetDetectId") && !value["NetDetectId"].IsNull())
    {
        if (!value["NetDetectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetDetectState.NetDetectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netDetectId = string(value["NetDetectId"].GetString());
        m_netDetectIdHasBeenSet = true;
    }

    if (value.HasMember("NetDetectIpStateSet") && !value["NetDetectIpStateSet"].IsNull())
    {
        if (!value["NetDetectIpStateSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NetDetectState.NetDetectIpStateSet` is not array type"));

        const rapidjson::Value &tmpValue = value["NetDetectIpStateSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NetDetectIpState item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_netDetectIpStateSet.push_back(item);
        }
        m_netDetectIpStateSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetDetectState::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_netDetectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetDetectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_netDetectId.c_str(), allocator).Move(), allocator);
    }

    if (m_netDetectIpStateSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetDetectIpStateSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_netDetectIpStateSet.begin(); itr != m_netDetectIpStateSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string NetDetectState::GetNetDetectId() const
{
    return m_netDetectId;
}

void NetDetectState::SetNetDetectId(const string& _netDetectId)
{
    m_netDetectId = _netDetectId;
    m_netDetectIdHasBeenSet = true;
}

bool NetDetectState::NetDetectIdHasBeenSet() const
{
    return m_netDetectIdHasBeenSet;
}

vector<NetDetectIpState> NetDetectState::GetNetDetectIpStateSet() const
{
    return m_netDetectIpStateSet;
}

void NetDetectState::SetNetDetectIpStateSet(const vector<NetDetectIpState>& _netDetectIpStateSet)
{
    m_netDetectIpStateSet = _netDetectIpStateSet;
    m_netDetectIpStateSetHasBeenSet = true;
}

bool NetDetectState::NetDetectIpStateSetHasBeenSet() const
{
    return m_netDetectIpStateSetHasBeenSet;
}

