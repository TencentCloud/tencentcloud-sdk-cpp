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

#include <tencentcloud/iss/v20230517/model/BatchAddVideoSnapshotConfigChannelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

BatchAddVideoSnapshotConfigChannelRequest::BatchAddVideoSnapshotConfigChannelRequest() :
    m_configIdHasBeenSet(false),
    m_channelsHasBeenSet(false)
{
}

string BatchAddVideoSnapshotConfigChannelRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_configIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_channels.begin(); itr != m_channels.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BatchAddVideoSnapshotConfigChannelRequest::GetConfigId() const
{
    return m_configId;
}

void BatchAddVideoSnapshotConfigChannelRequest::SetConfigId(const string& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool BatchAddVideoSnapshotConfigChannelRequest::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

vector<string> BatchAddVideoSnapshotConfigChannelRequest::GetChannels() const
{
    return m_channels;
}

void BatchAddVideoSnapshotConfigChannelRequest::SetChannels(const vector<string>& _channels)
{
    m_channels = _channels;
    m_channelsHasBeenSet = true;
}

bool BatchAddVideoSnapshotConfigChannelRequest::ChannelsHasBeenSet() const
{
    return m_channelsHasBeenSet;
}


