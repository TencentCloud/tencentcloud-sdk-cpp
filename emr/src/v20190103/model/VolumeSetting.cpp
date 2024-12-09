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

#include <tencentcloud/emr/v20190103/model/VolumeSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

VolumeSetting::VolumeSetting() :
    m_volumeTypeHasBeenSet(false),
    m_hostPathHasBeenSet(false)
{
}

CoreInternalOutcome VolumeSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VolumeType") && !value["VolumeType"].IsNull())
    {
        if (!value["VolumeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeSetting.VolumeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_volumeType = string(value["VolumeType"].GetString());
        m_volumeTypeHasBeenSet = true;
    }

    if (value.HasMember("HostPath") && !value["HostPath"].IsNull())
    {
        if (!value["HostPath"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeSetting.HostPath` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hostPath.Deserialize(value["HostPath"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hostPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VolumeSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_volumeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_volumeType.c_str(), allocator).Move(), allocator);
    }

    if (m_hostPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hostPath.ToJsonObject(value[key.c_str()], allocator);
    }

}


string VolumeSetting::GetVolumeType() const
{
    return m_volumeType;
}

void VolumeSetting::SetVolumeType(const string& _volumeType)
{
    m_volumeType = _volumeType;
    m_volumeTypeHasBeenSet = true;
}

bool VolumeSetting::VolumeTypeHasBeenSet() const
{
    return m_volumeTypeHasBeenSet;
}

HostPathVolumeSource VolumeSetting::GetHostPath() const
{
    return m_hostPath;
}

void VolumeSetting::SetHostPath(const HostPathVolumeSource& _hostPath)
{
    m_hostPath = _hostPath;
    m_hostPathHasBeenSet = true;
}

bool VolumeSetting::HostPathHasBeenSet() const
{
    return m_hostPathHasBeenSet;
}

