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

#include <tencentcloud/mps/v20190612/model/TrackInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

TrackInfo::TrackInfo() :
    m_trackNumHasBeenSet(false),
    m_channelVolumeHasBeenSet(false)
{
}

CoreInternalOutcome TrackInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TrackNum") && !value["TrackNum"].IsNull())
    {
        if (!value["TrackNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrackInfo.TrackNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trackNum = string(value["TrackNum"].GetString());
        m_trackNumHasBeenSet = true;
    }

    if (value.HasMember("ChannelVolume") && !value["ChannelVolume"].IsNull())
    {
        if (!value["ChannelVolume"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrackInfo.ChannelVolume` is not array type"));

        const rapidjson::Value &tmpValue = value["ChannelVolume"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_channelVolume.push_back((*itr).GetDouble());
        }
        m_channelVolumeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrackInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_trackNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrackNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trackNum.c_str(), allocator).Move(), allocator);
    }

    if (m_channelVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_channelVolume.begin(); itr != m_channelVolume.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

}


string TrackInfo::GetTrackNum() const
{
    return m_trackNum;
}

void TrackInfo::SetTrackNum(const string& _trackNum)
{
    m_trackNum = _trackNum;
    m_trackNumHasBeenSet = true;
}

bool TrackInfo::TrackNumHasBeenSet() const
{
    return m_trackNumHasBeenSet;
}

vector<double> TrackInfo::GetChannelVolume() const
{
    return m_channelVolume;
}

void TrackInfo::SetChannelVolume(const vector<double>& _channelVolume)
{
    m_channelVolume = _channelVolume;
    m_channelVolumeHasBeenSet = true;
}

bool TrackInfo::ChannelVolumeHasBeenSet() const
{
    return m_channelVolumeHasBeenSet;
}

