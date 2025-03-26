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

#include <tencentcloud/mps/v20190612/model/AudioTrackChannelInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AudioTrackChannelInfo::AudioTrackChannelInfo() :
    m_channelsRemixHasBeenSet(false),
    m_selectTypeHasBeenSet(false),
    m_inputTrackInfoHasBeenSet(false)
{
}

CoreInternalOutcome AudioTrackChannelInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChannelsRemix") && !value["ChannelsRemix"].IsNull())
    {
        if (!value["ChannelsRemix"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AudioTrackChannelInfo.ChannelsRemix` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_channelsRemix = value["ChannelsRemix"].GetInt64();
        m_channelsRemixHasBeenSet = true;
    }

    if (value.HasMember("SelectType") && !value["SelectType"].IsNull())
    {
        if (!value["SelectType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioTrackChannelInfo.SelectType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_selectType = string(value["SelectType"].GetString());
        m_selectTypeHasBeenSet = true;
    }

    if (value.HasMember("InputTrackInfo") && !value["InputTrackInfo"].IsNull())
    {
        if (!value["InputTrackInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AudioTrackChannelInfo.InputTrackInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["InputTrackInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TrackInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_inputTrackInfo.push_back(item);
        }
        m_inputTrackInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AudioTrackChannelInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_channelsRemixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelsRemix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channelsRemix, allocator);
    }

    if (m_selectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_selectType.c_str(), allocator).Move(), allocator);
    }

    if (m_inputTrackInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputTrackInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inputTrackInfo.begin(); itr != m_inputTrackInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t AudioTrackChannelInfo::GetChannelsRemix() const
{
    return m_channelsRemix;
}

void AudioTrackChannelInfo::SetChannelsRemix(const int64_t& _channelsRemix)
{
    m_channelsRemix = _channelsRemix;
    m_channelsRemixHasBeenSet = true;
}

bool AudioTrackChannelInfo::ChannelsRemixHasBeenSet() const
{
    return m_channelsRemixHasBeenSet;
}

string AudioTrackChannelInfo::GetSelectType() const
{
    return m_selectType;
}

void AudioTrackChannelInfo::SetSelectType(const string& _selectType)
{
    m_selectType = _selectType;
    m_selectTypeHasBeenSet = true;
}

bool AudioTrackChannelInfo::SelectTypeHasBeenSet() const
{
    return m_selectTypeHasBeenSet;
}

vector<TrackInfo> AudioTrackChannelInfo::GetInputTrackInfo() const
{
    return m_inputTrackInfo;
}

void AudioTrackChannelInfo::SetInputTrackInfo(const vector<TrackInfo>& _inputTrackInfo)
{
    m_inputTrackInfo = _inputTrackInfo;
    m_inputTrackInfoHasBeenSet = true;
}

bool AudioTrackChannelInfo::InputTrackInfoHasBeenSet() const
{
    return m_inputTrackInfoHasBeenSet;
}

