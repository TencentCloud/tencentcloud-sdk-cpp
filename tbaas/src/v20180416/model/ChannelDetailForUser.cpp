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

#include <tencentcloud/tbaas/v20180416/model/ChannelDetailForUser.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

ChannelDetailForUser::ChannelDetailForUser() :
    m_channelNameHasBeenSet(false),
    m_peerListHasBeenSet(false)
{
}

CoreInternalOutcome ChannelDetailForUser::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChannelName") && !value["ChannelName"].IsNull())
    {
        if (!value["ChannelName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ChannelDetailForUser.ChannelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelName = string(value["ChannelName"].GetString());
        m_channelNameHasBeenSet = true;
    }

    if (value.HasMember("PeerList") && !value["PeerList"].IsNull())
    {
        if (!value["PeerList"].IsArray())
            return CoreInternalOutcome(Error("response `ChannelDetailForUser.PeerList` is not array type"));

        const rapidjson::Value &tmpValue = value["PeerList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PeerDetailForUser item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_peerList.push_back(item);
        }
        m_peerListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChannelDetailForUser::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_peerListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_peerList.begin(); itr != m_peerList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ChannelDetailForUser::GetChannelName() const
{
    return m_channelName;
}

void ChannelDetailForUser::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool ChannelDetailForUser::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

vector<PeerDetailForUser> ChannelDetailForUser::GetPeerList() const
{
    return m_peerList;
}

void ChannelDetailForUser::SetPeerList(const vector<PeerDetailForUser>& _peerList)
{
    m_peerList = _peerList;
    m_peerListHasBeenSet = true;
}

bool ChannelDetailForUser::PeerListHasBeenSet() const
{
    return m_peerListHasBeenSet;
}

