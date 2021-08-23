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

#include <tencentcloud/tiw/v20190919/model/StreamControl.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

StreamControl::StreamControl() :
    m_streamIdHasBeenSet(false),
    m_disableRecordHasBeenSet(false),
    m_disableAudioHasBeenSet(false),
    m_pullSmallVideoHasBeenSet(false)
{
}

CoreInternalOutcome StreamControl::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StreamId") && !value["StreamId"].IsNull())
    {
        if (!value["StreamId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StreamControl.StreamId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamId = string(value["StreamId"].GetString());
        m_streamIdHasBeenSet = true;
    }

    if (value.HasMember("DisableRecord") && !value["DisableRecord"].IsNull())
    {
        if (!value["DisableRecord"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `StreamControl.DisableRecord` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_disableRecord = value["DisableRecord"].GetBool();
        m_disableRecordHasBeenSet = true;
    }

    if (value.HasMember("DisableAudio") && !value["DisableAudio"].IsNull())
    {
        if (!value["DisableAudio"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `StreamControl.DisableAudio` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_disableAudio = value["DisableAudio"].GetBool();
        m_disableAudioHasBeenSet = true;
    }

    if (value.HasMember("PullSmallVideo") && !value["PullSmallVideo"].IsNull())
    {
        if (!value["PullSmallVideo"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `StreamControl.PullSmallVideo` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_pullSmallVideo = value["PullSmallVideo"].GetBool();
        m_pullSmallVideoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StreamControl::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_streamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streamId.c_str(), allocator).Move(), allocator);
    }

    if (m_disableRecordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableRecord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disableRecord, allocator);
    }

    if (m_disableAudioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableAudio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disableAudio, allocator);
    }

    if (m_pullSmallVideoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PullSmallVideo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pullSmallVideo, allocator);
    }

}


string StreamControl::GetStreamId() const
{
    return m_streamId;
}

void StreamControl::SetStreamId(const string& _streamId)
{
    m_streamId = _streamId;
    m_streamIdHasBeenSet = true;
}

bool StreamControl::StreamIdHasBeenSet() const
{
    return m_streamIdHasBeenSet;
}

bool StreamControl::GetDisableRecord() const
{
    return m_disableRecord;
}

void StreamControl::SetDisableRecord(const bool& _disableRecord)
{
    m_disableRecord = _disableRecord;
    m_disableRecordHasBeenSet = true;
}

bool StreamControl::DisableRecordHasBeenSet() const
{
    return m_disableRecordHasBeenSet;
}

bool StreamControl::GetDisableAudio() const
{
    return m_disableAudio;
}

void StreamControl::SetDisableAudio(const bool& _disableAudio)
{
    m_disableAudio = _disableAudio;
    m_disableAudioHasBeenSet = true;
}

bool StreamControl::DisableAudioHasBeenSet() const
{
    return m_disableAudioHasBeenSet;
}

bool StreamControl::GetPullSmallVideo() const
{
    return m_pullSmallVideo;
}

void StreamControl::SetPullSmallVideo(const bool& _pullSmallVideo)
{
    m_pullSmallVideo = _pullSmallVideo;
    m_pullSmallVideoHasBeenSet = true;
}

bool StreamControl::PullSmallVideoHasBeenSet() const
{
    return m_pullSmallVideoHasBeenSet;
}

