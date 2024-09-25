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

#include <tencentcloud/omics/v20221128/model/VolumeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

VolumeInfo::VolumeInfo() :
    m_volumeIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_mountPathHasBeenSet(false)
{
}

CoreInternalOutcome VolumeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VolumeId") && !value["VolumeId"].IsNull())
    {
        if (!value["VolumeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeInfo.VolumeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_volumeId = string(value["VolumeId"].GetString());
        m_volumeIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("MountPath") && !value["MountPath"].IsNull())
    {
        if (!value["MountPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeInfo.MountPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountPath = string(value["MountPath"].GetString());
        m_mountPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VolumeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_volumeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_volumeId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_mountPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mountPath.c_str(), allocator).Move(), allocator);
    }

}


string VolumeInfo::GetVolumeId() const
{
    return m_volumeId;
}

void VolumeInfo::SetVolumeId(const string& _volumeId)
{
    m_volumeId = _volumeId;
    m_volumeIdHasBeenSet = true;
}

bool VolumeInfo::VolumeIdHasBeenSet() const
{
    return m_volumeIdHasBeenSet;
}

string VolumeInfo::GetName() const
{
    return m_name;
}

void VolumeInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VolumeInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string VolumeInfo::GetMountPath() const
{
    return m_mountPath;
}

void VolumeInfo::SetMountPath(const string& _mountPath)
{
    m_mountPath = _mountPath;
    m_mountPathHasBeenSet = true;
}

bool VolumeInfo::MountPathHasBeenSet() const
{
    return m_mountPathHasBeenSet;
}

