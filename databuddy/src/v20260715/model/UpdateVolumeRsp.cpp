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

#include <tencentcloud/databuddy/v20260715/model/UpdateVolumeRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

UpdateVolumeRsp::UpdateVolumeRsp() :
    m_volumeHasBeenSet(false)
{
}

CoreInternalOutcome UpdateVolumeRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Volume") && !value["Volume"].IsNull())
    {
        if (!value["Volume"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateVolumeRsp.Volume` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_volume.Deserialize(value["Volume"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_volumeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UpdateVolumeRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_volumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Volume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_volume.ToJsonObject(value[key.c_str()], allocator);
    }

}


Volume UpdateVolumeRsp::GetVolume() const
{
    return m_volume;
}

void UpdateVolumeRsp::SetVolume(const Volume& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool UpdateVolumeRsp::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}

