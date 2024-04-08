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

#include <tencentcloud/ccc/v20200210/model/UploadAudioInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

UploadAudioInfo::UploadAudioInfo() :
    m_customFileNameHasBeenSet(false),
    m_audioUrlHasBeenSet(false)
{
}

CoreInternalOutcome UploadAudioInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CustomFileName") && !value["CustomFileName"].IsNull())
    {
        if (!value["CustomFileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadAudioInfo.CustomFileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customFileName = string(value["CustomFileName"].GetString());
        m_customFileNameHasBeenSet = true;
    }

    if (value.HasMember("AudioUrl") && !value["AudioUrl"].IsNull())
    {
        if (!value["AudioUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadAudioInfo.AudioUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioUrl = string(value["AudioUrl"].GetString());
        m_audioUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UploadAudioInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_customFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomFileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customFileName.c_str(), allocator).Move(), allocator);
    }

    if (m_audioUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioUrl.c_str(), allocator).Move(), allocator);
    }

}


string UploadAudioInfo::GetCustomFileName() const
{
    return m_customFileName;
}

void UploadAudioInfo::SetCustomFileName(const string& _customFileName)
{
    m_customFileName = _customFileName;
    m_customFileNameHasBeenSet = true;
}

bool UploadAudioInfo::CustomFileNameHasBeenSet() const
{
    return m_customFileNameHasBeenSet;
}

string UploadAudioInfo::GetAudioUrl() const
{
    return m_audioUrl;
}

void UploadAudioInfo::SetAudioUrl(const string& _audioUrl)
{
    m_audioUrl = _audioUrl;
    m_audioUrlHasBeenSet = true;
}

bool UploadAudioInfo::AudioUrlHasBeenSet() const
{
    return m_audioUrlHasBeenSet;
}

