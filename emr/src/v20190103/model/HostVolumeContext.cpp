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

#include <tencentcloud/emr/v20190103/model/HostVolumeContext.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

HostVolumeContext::HostVolumeContext() :
    m_volumePathHasBeenSet(false)
{
}

CoreInternalOutcome HostVolumeContext::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VolumePath") && !value["VolumePath"].IsNull())
    {
        if (!value["VolumePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostVolumeContext.VolumePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_volumePath = string(value["VolumePath"].GetString());
        m_volumePathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HostVolumeContext::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_volumePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_volumePath.c_str(), allocator).Move(), allocator);
    }

}


string HostVolumeContext::GetVolumePath() const
{
    return m_volumePath;
}

void HostVolumeContext::SetVolumePath(const string& _volumePath)
{
    m_volumePath = _volumePath;
    m_volumePathHasBeenSet = true;
}

bool HostVolumeContext::VolumePathHasBeenSet() const
{
    return m_volumePathHasBeenSet;
}

