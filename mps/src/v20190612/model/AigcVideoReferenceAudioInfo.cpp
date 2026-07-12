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

#include <tencentcloud/mps/v20190612/model/AigcVideoReferenceAudioInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AigcVideoReferenceAudioInfo::AigcVideoReferenceAudioInfo() :
    m_audioUrlHasBeenSet(false)
{
}

CoreInternalOutcome AigcVideoReferenceAudioInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AudioUrl") && !value["AudioUrl"].IsNull())
    {
        if (!value["AudioUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoReferenceAudioInfo.AudioUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioUrl = string(value["AudioUrl"].GetString());
        m_audioUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AigcVideoReferenceAudioInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_audioUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioUrl.c_str(), allocator).Move(), allocator);
    }

}


string AigcVideoReferenceAudioInfo::GetAudioUrl() const
{
    return m_audioUrl;
}

void AigcVideoReferenceAudioInfo::SetAudioUrl(const string& _audioUrl)
{
    m_audioUrl = _audioUrl;
    m_audioUrlHasBeenSet = true;
}

bool AigcVideoReferenceAudioInfo::AudioUrlHasBeenSet() const
{
    return m_audioUrlHasBeenSet;
}

