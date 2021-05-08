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

#include <tencentcloud/tem/v20201221/model/StorageMountConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20201221::Model;
using namespace rapidjson;
using namespace std;

StorageMountConf::StorageMountConf() :
    m_volumeNameHasBeenSet(false),
    m_mountPathHasBeenSet(false)
{
}

CoreInternalOutcome StorageMountConf::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("VolumeName") && !value["VolumeName"].IsNull())
    {
        if (!value["VolumeName"].IsString())
        {
            return CoreInternalOutcome(Error("response `StorageMountConf.VolumeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_volumeName = string(value["VolumeName"].GetString());
        m_volumeNameHasBeenSet = true;
    }

    if (value.HasMember("MountPath") && !value["MountPath"].IsNull())
    {
        if (!value["MountPath"].IsString())
        {
            return CoreInternalOutcome(Error("response `StorageMountConf.MountPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountPath = string(value["MountPath"].GetString());
        m_mountPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StorageMountConf::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_volumeNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VolumeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_volumeName.c_str(), allocator).Move(), allocator);
    }

    if (m_mountPathHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MountPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_mountPath.c_str(), allocator).Move(), allocator);
    }

}


string StorageMountConf::GetVolumeName() const
{
    return m_volumeName;
}

void StorageMountConf::SetVolumeName(const string& _volumeName)
{
    m_volumeName = _volumeName;
    m_volumeNameHasBeenSet = true;
}

bool StorageMountConf::VolumeNameHasBeenSet() const
{
    return m_volumeNameHasBeenSet;
}

string StorageMountConf::GetMountPath() const
{
    return m_mountPath;
}

void StorageMountConf::SetMountPath(const string& _mountPath)
{
    m_mountPath = _mountPath;
    m_mountPathHasBeenSet = true;
}

bool StorageMountConf::MountPathHasBeenSet() const
{
    return m_mountPathHasBeenSet;
}

