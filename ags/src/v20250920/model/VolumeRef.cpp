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

#include <tencentcloud/ags/v20250920/model/VolumeRef.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

VolumeRef::VolumeRef() :
    m_volumeNameHasBeenSet(false),
    m_volumeIdHasBeenSet(false)
{
}

CoreInternalOutcome VolumeRef::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VolumeName") && !value["VolumeName"].IsNull())
    {
        if (!value["VolumeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeRef.VolumeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_volumeName = string(value["VolumeName"].GetString());
        m_volumeNameHasBeenSet = true;
    }

    if (value.HasMember("VolumeId") && !value["VolumeId"].IsNull())
    {
        if (!value["VolumeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeRef.VolumeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_volumeId = string(value["VolumeId"].GetString());
        m_volumeIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VolumeRef::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_volumeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_volumeName.c_str(), allocator).Move(), allocator);
    }

    if (m_volumeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_volumeId.c_str(), allocator).Move(), allocator);
    }

}


string VolumeRef::GetVolumeName() const
{
    return m_volumeName;
}

void VolumeRef::SetVolumeName(const string& _volumeName)
{
    m_volumeName = _volumeName;
    m_volumeNameHasBeenSet = true;
}

bool VolumeRef::VolumeNameHasBeenSet() const
{
    return m_volumeNameHasBeenSet;
}

string VolumeRef::GetVolumeId() const
{
    return m_volumeId;
}

void VolumeRef::SetVolumeId(const string& _volumeId)
{
    m_volumeId = _volumeId;
    m_volumeIdHasBeenSet = true;
}

bool VolumeRef::VolumeIdHasBeenSet() const
{
    return m_volumeIdHasBeenSet;
}

