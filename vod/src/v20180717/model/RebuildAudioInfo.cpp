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

#include <tencentcloud/vod/v20180717/model/RebuildAudioInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

RebuildAudioInfo::RebuildAudioInfo() :
    m_audioDenoiseInfoHasBeenSet(false)
{
}

CoreInternalOutcome RebuildAudioInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AudioDenoiseInfo") && !value["AudioDenoiseInfo"].IsNull())
    {
        if (!value["AudioDenoiseInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildAudioInfo.AudioDenoiseInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audioDenoiseInfo.Deserialize(value["AudioDenoiseInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_audioDenoiseInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RebuildAudioInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_audioDenoiseInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioDenoiseInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audioDenoiseInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


AudioDenoiseInfo RebuildAudioInfo::GetAudioDenoiseInfo() const
{
    return m_audioDenoiseInfo;
}

void RebuildAudioInfo::SetAudioDenoiseInfo(const AudioDenoiseInfo& _audioDenoiseInfo)
{
    m_audioDenoiseInfo = _audioDenoiseInfo;
    m_audioDenoiseInfoHasBeenSet = true;
}

bool RebuildAudioInfo::AudioDenoiseInfoHasBeenSet() const
{
    return m_audioDenoiseInfoHasBeenSet;
}

