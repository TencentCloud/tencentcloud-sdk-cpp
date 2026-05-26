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

#include <tencentcloud/emr/v20190103/model/StorageVolumeDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

StorageVolumeDetail::StorageVolumeDetail() :
    m_volumeNameHasBeenSet(false),
    m_volumeTypeHasBeenSet(false),
    m_descHasBeenSet(false)
{
}

CoreInternalOutcome StorageVolumeDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VolumeName") && !value["VolumeName"].IsNull())
    {
        if (!value["VolumeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageVolumeDetail.VolumeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_volumeName = string(value["VolumeName"].GetString());
        m_volumeNameHasBeenSet = true;
    }

    if (value.HasMember("VolumeType") && !value["VolumeType"].IsNull())
    {
        if (!value["VolumeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageVolumeDetail.VolumeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_volumeType = string(value["VolumeType"].GetString());
        m_volumeTypeHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageVolumeDetail.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StorageVolumeDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_volumeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_volumeName.c_str(), allocator).Move(), allocator);
    }

    if (m_volumeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_volumeType.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

}


string StorageVolumeDetail::GetVolumeName() const
{
    return m_volumeName;
}

void StorageVolumeDetail::SetVolumeName(const string& _volumeName)
{
    m_volumeName = _volumeName;
    m_volumeNameHasBeenSet = true;
}

bool StorageVolumeDetail::VolumeNameHasBeenSet() const
{
    return m_volumeNameHasBeenSet;
}

string StorageVolumeDetail::GetVolumeType() const
{
    return m_volumeType;
}

void StorageVolumeDetail::SetVolumeType(const string& _volumeType)
{
    m_volumeType = _volumeType;
    m_volumeTypeHasBeenSet = true;
}

bool StorageVolumeDetail::VolumeTypeHasBeenSet() const
{
    return m_volumeTypeHasBeenSet;
}

string StorageVolumeDetail::GetDesc() const
{
    return m_desc;
}

void StorageVolumeDetail::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool StorageVolumeDetail::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

