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

#include <tencentcloud/tbaas/v20180416/model/EndorserGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

EndorserGroup::EndorserGroup() :
    m_endorserGroupNameHasBeenSet(false),
    m_endorserPeerListHasBeenSet(false)
{
}

CoreInternalOutcome EndorserGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EndorserGroupName") && !value["EndorserGroupName"].IsNull())
    {
        if (!value["EndorserGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndorserGroup.EndorserGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endorserGroupName = string(value["EndorserGroupName"].GetString());
        m_endorserGroupNameHasBeenSet = true;
    }

    if (value.HasMember("EndorserPeerList") && !value["EndorserPeerList"].IsNull())
    {
        if (!value["EndorserPeerList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EndorserGroup.EndorserPeerList` is not array type"));

        const rapidjson::Value &tmpValue = value["EndorserPeerList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_endorserPeerList.push_back((*itr).GetString());
        }
        m_endorserPeerListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EndorserGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_endorserGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndorserGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endorserGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_endorserPeerListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndorserPeerList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_endorserPeerList.begin(); itr != m_endorserPeerList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string EndorserGroup::GetEndorserGroupName() const
{
    return m_endorserGroupName;
}

void EndorserGroup::SetEndorserGroupName(const string& _endorserGroupName)
{
    m_endorserGroupName = _endorserGroupName;
    m_endorserGroupNameHasBeenSet = true;
}

bool EndorserGroup::EndorserGroupNameHasBeenSet() const
{
    return m_endorserGroupNameHasBeenSet;
}

vector<string> EndorserGroup::GetEndorserPeerList() const
{
    return m_endorserPeerList;
}

void EndorserGroup::SetEndorserPeerList(const vector<string>& _endorserPeerList)
{
    m_endorserPeerList = _endorserPeerList;
    m_endorserPeerListHasBeenSet = true;
}

bool EndorserGroup::EndorserPeerListHasBeenSet() const
{
    return m_endorserPeerListHasBeenSet;
}

