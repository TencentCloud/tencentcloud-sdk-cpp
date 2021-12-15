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

#include <tencentcloud/iotvideoindustry/v20201201/model/LiveChannelItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

LiveChannelItem::LiveChannelItem() :
    m_channelIdHasBeenSet(false),
    m_channelNameHasBeenSet(false)
{
}

CoreInternalOutcome LiveChannelItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChannelId") && !value["ChannelId"].IsNull())
    {
        if (!value["ChannelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveChannelItem.ChannelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelId = string(value["ChannelId"].GetString());
        m_channelIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelName") && !value["ChannelName"].IsNull())
    {
        if (!value["ChannelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveChannelItem.ChannelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelName = string(value["ChannelName"].GetString());
        m_channelNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LiveChannelItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

}


string LiveChannelItem::GetChannelId() const
{
    return m_channelId;
}

void LiveChannelItem::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool LiveChannelItem::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string LiveChannelItem::GetChannelName() const
{
    return m_channelName;
}

void LiveChannelItem::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool LiveChannelItem::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

