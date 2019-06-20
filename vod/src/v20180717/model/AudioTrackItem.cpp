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

#include <tencentcloud/vod/v20180717/model/AudioTrackItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

AudioTrackItem::AudioTrackItem() :
    m_sourceMediaHasBeenSet(false),
    m_sourceMediaStartTimeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_audioOperationsHasBeenSet(false)
{
}

CoreInternalOutcome AudioTrackItem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceMedia") && !value["SourceMedia"].IsNull())
    {
        if (!value["SourceMedia"].IsString())
        {
            return CoreInternalOutcome(Error("response `AudioTrackItem.SourceMedia` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceMedia = string(value["SourceMedia"].GetString());
        m_sourceMediaHasBeenSet = true;
    }

    if (value.HasMember("SourceMediaStartTime") && !value["SourceMediaStartTime"].IsNull())
    {
        if (!value["SourceMediaStartTime"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `AudioTrackItem.SourceMediaStartTime` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_sourceMediaStartTime = value["SourceMediaStartTime"].GetDouble();
        m_sourceMediaStartTimeHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `AudioTrackItem.Duration` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetDouble();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("AudioOperations") && !value["AudioOperations"].IsNull())
    {
        if (!value["AudioOperations"].IsArray())
            return CoreInternalOutcome(Error("response `AudioTrackItem.AudioOperations` is not array type"));

        const Value &tmpValue = value["AudioOperations"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AudioTransform item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_audioOperations.push_back(item);
        }
        m_audioOperationsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AudioTrackItem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_sourceMediaHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SourceMedia";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_sourceMedia.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceMediaStartTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SourceMediaStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceMediaStartTime, allocator);
    }

    if (m_durationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_audioOperationsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AudioOperations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_audioOperations.begin(); itr != m_audioOperations.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AudioTrackItem::GetSourceMedia() const
{
    return m_sourceMedia;
}

void AudioTrackItem::SetSourceMedia(const string& _sourceMedia)
{
    m_sourceMedia = _sourceMedia;
    m_sourceMediaHasBeenSet = true;
}

bool AudioTrackItem::SourceMediaHasBeenSet() const
{
    return m_sourceMediaHasBeenSet;
}

double AudioTrackItem::GetSourceMediaStartTime() const
{
    return m_sourceMediaStartTime;
}

void AudioTrackItem::SetSourceMediaStartTime(const double& _sourceMediaStartTime)
{
    m_sourceMediaStartTime = _sourceMediaStartTime;
    m_sourceMediaStartTimeHasBeenSet = true;
}

bool AudioTrackItem::SourceMediaStartTimeHasBeenSet() const
{
    return m_sourceMediaStartTimeHasBeenSet;
}

double AudioTrackItem::GetDuration() const
{
    return m_duration;
}

void AudioTrackItem::SetDuration(const double& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool AudioTrackItem::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

vector<AudioTransform> AudioTrackItem::GetAudioOperations() const
{
    return m_audioOperations;
}

void AudioTrackItem::SetAudioOperations(const vector<AudioTransform>& _audioOperations)
{
    m_audioOperations = _audioOperations;
    m_audioOperationsHasBeenSet = true;
}

bool AudioTrackItem::AudioOperationsHasBeenSet() const
{
    return m_audioOperationsHasBeenSet;
}

