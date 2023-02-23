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

#include <tencentcloud/ame/v20190916/model/SetRealVolumeCommandInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

SetRealVolumeCommandInput::SetRealVolumeCommandInput() :
    m_realVolumeHasBeenSet(false)
{
}

CoreInternalOutcome SetRealVolumeCommandInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RealVolume") && !value["RealVolume"].IsNull())
    {
        if (!value["RealVolume"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SetRealVolumeCommandInput.RealVolume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_realVolume = value["RealVolume"].GetInt64();
        m_realVolumeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SetRealVolumeCommandInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_realVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_realVolume, allocator);
    }

}


int64_t SetRealVolumeCommandInput::GetRealVolume() const
{
    return m_realVolume;
}

void SetRealVolumeCommandInput::SetRealVolume(const int64_t& _realVolume)
{
    m_realVolume = _realVolume;
    m_realVolumeHasBeenSet = true;
}

bool SetRealVolumeCommandInput::RealVolumeHasBeenSet() const
{
    return m_realVolumeHasBeenSet;
}

