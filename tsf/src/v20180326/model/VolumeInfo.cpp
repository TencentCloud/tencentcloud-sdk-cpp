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

#include <tencentcloud/tsf/v20180326/model/VolumeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

VolumeInfo::VolumeInfo() :
    m_volumeTypeHasBeenSet(false),
    m_volumeNameHasBeenSet(false),
    m_volumeConfigHasBeenSet(false)
{
}

CoreInternalOutcome VolumeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VolumeType") && !value["VolumeType"].IsNull())
    {
        if (!value["VolumeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeInfo.VolumeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_volumeType = string(value["VolumeType"].GetString());
        m_volumeTypeHasBeenSet = true;
    }

    if (value.HasMember("VolumeName") && !value["VolumeName"].IsNull())
    {
        if (!value["VolumeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeInfo.VolumeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_volumeName = string(value["VolumeName"].GetString());
        m_volumeNameHasBeenSet = true;
    }

    if (value.HasMember("VolumeConfig") && !value["VolumeConfig"].IsNull())
    {
        if (!value["VolumeConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeInfo.VolumeConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_volumeConfig = string(value["VolumeConfig"].GetString());
        m_volumeConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VolumeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_volumeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_volumeType.c_str(), allocator).Move(), allocator);
    }

    if (m_volumeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_volumeName.c_str(), allocator).Move(), allocator);
    }

    if (m_volumeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_volumeConfig.c_str(), allocator).Move(), allocator);
    }

}


string VolumeInfo::GetVolumeType() const
{
    return m_volumeType;
}

void VolumeInfo::SetVolumeType(const string& _volumeType)
{
    m_volumeType = _volumeType;
    m_volumeTypeHasBeenSet = true;
}

bool VolumeInfo::VolumeTypeHasBeenSet() const
{
    return m_volumeTypeHasBeenSet;
}

string VolumeInfo::GetVolumeName() const
{
    return m_volumeName;
}

void VolumeInfo::SetVolumeName(const string& _volumeName)
{
    m_volumeName = _volumeName;
    m_volumeNameHasBeenSet = true;
}

bool VolumeInfo::VolumeNameHasBeenSet() const
{
    return m_volumeNameHasBeenSet;
}

string VolumeInfo::GetVolumeConfig() const
{
    return m_volumeConfig;
}

void VolumeInfo::SetVolumeConfig(const string& _volumeConfig)
{
    m_volumeConfig = _volumeConfig;
    m_volumeConfigHasBeenSet = true;
}

bool VolumeInfo::VolumeConfigHasBeenSet() const
{
    return m_volumeConfigHasBeenSet;
}

