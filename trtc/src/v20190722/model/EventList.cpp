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

#include <tencentcloud/trtc/v20190722/model/EventList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

EventList::EventList() :
    m_contentHasBeenSet(false),
    m_peerIdHasBeenSet(false)
{
}

CoreInternalOutcome EventList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EventList.Content` is not array type"));

        const rapidjson::Value &tmpValue = value["Content"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EventMessage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_content.push_back(item);
        }
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("PeerId") && !value["PeerId"].IsNull())
    {
        if (!value["PeerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventList.PeerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_peerId = string(value["PeerId"].GetString());
        m_peerIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_content.begin(); itr != m_content.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_peerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_peerId.c_str(), allocator).Move(), allocator);
    }

}


vector<EventMessage> EventList::GetContent() const
{
    return m_content;
}

void EventList::SetContent(const vector<EventMessage>& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool EventList::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string EventList::GetPeerId() const
{
    return m_peerId;
}

void EventList::SetPeerId(const string& _peerId)
{
    m_peerId = _peerId;
    m_peerIdHasBeenSet = true;
}

bool EventList::PeerIdHasBeenSet() const
{
    return m_peerIdHasBeenSet;
}

