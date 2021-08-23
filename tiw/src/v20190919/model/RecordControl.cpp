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

#include <tencentcloud/tiw/v20190919/model/RecordControl.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

RecordControl::RecordControl() :
    m_enabledHasBeenSet(false),
    m_disableRecordHasBeenSet(false),
    m_disableAudioHasBeenSet(false),
    m_pullSmallVideoHasBeenSet(false),
    m_streamControlsHasBeenSet(false)
{
}

CoreInternalOutcome RecordControl::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RecordControl.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("DisableRecord") && !value["DisableRecord"].IsNull())
    {
        if (!value["DisableRecord"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RecordControl.DisableRecord` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_disableRecord = value["DisableRecord"].GetBool();
        m_disableRecordHasBeenSet = true;
    }

    if (value.HasMember("DisableAudio") && !value["DisableAudio"].IsNull())
    {
        if (!value["DisableAudio"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RecordControl.DisableAudio` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_disableAudio = value["DisableAudio"].GetBool();
        m_disableAudioHasBeenSet = true;
    }

    if (value.HasMember("PullSmallVideo") && !value["PullSmallVideo"].IsNull())
    {
        if (!value["PullSmallVideo"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RecordControl.PullSmallVideo` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_pullSmallVideo = value["PullSmallVideo"].GetBool();
        m_pullSmallVideoHasBeenSet = true;
    }

    if (value.HasMember("StreamControls") && !value["StreamControls"].IsNull())
    {
        if (!value["StreamControls"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RecordControl.StreamControls` is not array type"));

        const rapidjson::Value &tmpValue = value["StreamControls"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StreamControl item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_streamControls.push_back(item);
        }
        m_streamControlsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecordControl::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
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

    if (m_streamControlsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamControls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_streamControls.begin(); itr != m_streamControls.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


bool RecordControl::GetEnabled() const
{
    return m_enabled;
}

void RecordControl::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool RecordControl::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

bool RecordControl::GetDisableRecord() const
{
    return m_disableRecord;
}

void RecordControl::SetDisableRecord(const bool& _disableRecord)
{
    m_disableRecord = _disableRecord;
    m_disableRecordHasBeenSet = true;
}

bool RecordControl::DisableRecordHasBeenSet() const
{
    return m_disableRecordHasBeenSet;
}

bool RecordControl::GetDisableAudio() const
{
    return m_disableAudio;
}

void RecordControl::SetDisableAudio(const bool& _disableAudio)
{
    m_disableAudio = _disableAudio;
    m_disableAudioHasBeenSet = true;
}

bool RecordControl::DisableAudioHasBeenSet() const
{
    return m_disableAudioHasBeenSet;
}

bool RecordControl::GetPullSmallVideo() const
{
    return m_pullSmallVideo;
}

void RecordControl::SetPullSmallVideo(const bool& _pullSmallVideo)
{
    m_pullSmallVideo = _pullSmallVideo;
    m_pullSmallVideoHasBeenSet = true;
}

bool RecordControl::PullSmallVideoHasBeenSet() const
{
    return m_pullSmallVideoHasBeenSet;
}

vector<StreamControl> RecordControl::GetStreamControls() const
{
    return m_streamControls;
}

void RecordControl::SetStreamControls(const vector<StreamControl>& _streamControls)
{
    m_streamControls = _streamControls;
    m_streamControlsHasBeenSet = true;
}

bool RecordControl::StreamControlsHasBeenSet() const
{
    return m_streamControlsHasBeenSet;
}

