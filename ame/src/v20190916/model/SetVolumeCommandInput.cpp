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

#include <tencentcloud/ame/v20190916/model/SetVolumeCommandInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

SetVolumeCommandInput::SetVolumeCommandInput() :
    m_volumeHasBeenSet(false)
{
}

CoreInternalOutcome SetVolumeCommandInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Volume") && !value["Volume"].IsNull())
    {
        if (!value["Volume"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SetVolumeCommandInput.Volume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_volume = value["Volume"].GetInt64();
        m_volumeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SetVolumeCommandInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_volumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Volume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_volume, allocator);
    }

}


int64_t SetVolumeCommandInput::GetVolume() const
{
    return m_volume;
}

void SetVolumeCommandInput::SetVolume(const int64_t& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool SetVolumeCommandInput::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}

