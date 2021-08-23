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

#include <tencentcloud/emr/v20190103/model/PodVolume.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

PodVolume::PodVolume() :
    m_volumeTypeHasBeenSet(false),
    m_pVCVolumeHasBeenSet(false),
    m_hostVolumeHasBeenSet(false)
{
}

CoreInternalOutcome PodVolume::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VolumeType") && !value["VolumeType"].IsNull())
    {
        if (!value["VolumeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodVolume.VolumeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_volumeType = string(value["VolumeType"].GetString());
        m_volumeTypeHasBeenSet = true;
    }

    if (value.HasMember("PVCVolume") && !value["PVCVolume"].IsNull())
    {
        if (!value["PVCVolume"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PodVolume.PVCVolume` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pVCVolume.Deserialize(value["PVCVolume"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pVCVolumeHasBeenSet = true;
    }

    if (value.HasMember("HostVolume") && !value["HostVolume"].IsNull())
    {
        if (!value["HostVolume"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PodVolume.HostVolume` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hostVolume.Deserialize(value["HostVolume"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hostVolumeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PodVolume::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_volumeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_volumeType.c_str(), allocator).Move(), allocator);
    }

    if (m_pVCVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PVCVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pVCVolume.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hostVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hostVolume.ToJsonObject(value[key.c_str()], allocator);
    }

}


string PodVolume::GetVolumeType() const
{
    return m_volumeType;
}

void PodVolume::SetVolumeType(const string& _volumeType)
{
    m_volumeType = _volumeType;
    m_volumeTypeHasBeenSet = true;
}

bool PodVolume::VolumeTypeHasBeenSet() const
{
    return m_volumeTypeHasBeenSet;
}

PersistentVolumeContext PodVolume::GetPVCVolume() const
{
    return m_pVCVolume;
}

void PodVolume::SetPVCVolume(const PersistentVolumeContext& _pVCVolume)
{
    m_pVCVolume = _pVCVolume;
    m_pVCVolumeHasBeenSet = true;
}

bool PodVolume::PVCVolumeHasBeenSet() const
{
    return m_pVCVolumeHasBeenSet;
}

HostVolumeContext PodVolume::GetHostVolume() const
{
    return m_hostVolume;
}

void PodVolume::SetHostVolume(const HostVolumeContext& _hostVolume)
{
    m_hostVolume = _hostVolume;
    m_hostVolumeHasBeenSet = true;
}

bool PodVolume::HostVolumeHasBeenSet() const
{
    return m_hostVolumeHasBeenSet;
}

