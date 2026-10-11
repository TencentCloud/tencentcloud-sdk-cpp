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

#include <tencentcloud/monitor/v20230616/model/ChannelContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

ChannelContent::ChannelContent() :
    m_subChannelHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

CoreInternalOutcome ChannelContent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubChannel") && !value["SubChannel"].IsNull())
    {
        if (!value["SubChannel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelContent.SubChannel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subChannel = string(value["SubChannel"].GetString());
        m_subChannelHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelContent.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChannelContent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubChannel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subChannel.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

}


string ChannelContent::GetSubChannel() const
{
    return m_subChannel;
}

void ChannelContent::SetSubChannel(const string& _subChannel)
{
    m_subChannel = _subChannel;
    m_subChannelHasBeenSet = true;
}

bool ChannelContent::SubChannelHasBeenSet() const
{
    return m_subChannelHasBeenSet;
}

string ChannelContent::GetContent() const
{
    return m_content;
}

void ChannelContent::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ChannelContent::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

