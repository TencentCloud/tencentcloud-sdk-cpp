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

#include <tencentcloud/mps/v20190612/model/ComposeAudioItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ComposeAudioItem::ComposeAudioItem() :
    m_sourceMediaHasBeenSet(false),
    m_trackTimeHasBeenSet(false),
    m_audioOperationsHasBeenSet(false)
{
}

CoreInternalOutcome ComposeAudioItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceMedia") && !value["SourceMedia"].IsNull())
    {
        if (!value["SourceMedia"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeAudioItem.SourceMedia` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sourceMedia.Deserialize(value["SourceMedia"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sourceMediaHasBeenSet = true;
    }

    if (value.HasMember("TrackTime") && !value["TrackTime"].IsNull())
    {
        if (!value["TrackTime"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeAudioItem.TrackTime` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_trackTime.Deserialize(value["TrackTime"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_trackTimeHasBeenSet = true;
    }

    if (value.HasMember("AudioOperations") && !value["AudioOperations"].IsNull())
    {
        if (!value["AudioOperations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComposeAudioItem.AudioOperations` is not array type"));

        const rapidjson::Value &tmpValue = value["AudioOperations"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ComposeAudioOperation item;
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

void ComposeAudioItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceMediaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceMedia";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sourceMedia.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_trackTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrackTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_trackTime.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_audioOperationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioOperations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_audioOperations.begin(); itr != m_audioOperations.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


ComposeSourceMedia ComposeAudioItem::GetSourceMedia() const
{
    return m_sourceMedia;
}

void ComposeAudioItem::SetSourceMedia(const ComposeSourceMedia& _sourceMedia)
{
    m_sourceMedia = _sourceMedia;
    m_sourceMediaHasBeenSet = true;
}

bool ComposeAudioItem::SourceMediaHasBeenSet() const
{
    return m_sourceMediaHasBeenSet;
}

ComposeTrackTime ComposeAudioItem::GetTrackTime() const
{
    return m_trackTime;
}

void ComposeAudioItem::SetTrackTime(const ComposeTrackTime& _trackTime)
{
    m_trackTime = _trackTime;
    m_trackTimeHasBeenSet = true;
}

bool ComposeAudioItem::TrackTimeHasBeenSet() const
{
    return m_trackTimeHasBeenSet;
}

vector<ComposeAudioOperation> ComposeAudioItem::GetAudioOperations() const
{
    return m_audioOperations;
}

void ComposeAudioItem::SetAudioOperations(const vector<ComposeAudioOperation>& _audioOperations)
{
    m_audioOperations = _audioOperations;
    m_audioOperationsHasBeenSet = true;
}

bool ComposeAudioItem::AudioOperationsHasBeenSet() const
{
    return m_audioOperationsHasBeenSet;
}

