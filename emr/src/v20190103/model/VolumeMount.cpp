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

#include <tencentcloud/emr/v20190103/model/VolumeMount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

VolumeMount::VolumeMount() :
    m_mountNameHasBeenSet(false),
    m_mountPathHasBeenSet(false),
    m_subPathModeHasBeenSet(false),
    m_subPathHasBeenSet(false),
    m_mountModeHasBeenSet(false)
{
}

CoreInternalOutcome VolumeMount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MountName") && !value["MountName"].IsNull())
    {
        if (!value["MountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeMount.MountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountName = string(value["MountName"].GetString());
        m_mountNameHasBeenSet = true;
    }

    if (value.HasMember("MountPath") && !value["MountPath"].IsNull())
    {
        if (!value["MountPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeMount.MountPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountPath = string(value["MountPath"].GetString());
        m_mountPathHasBeenSet = true;
    }

    if (value.HasMember("SubPathMode") && !value["SubPathMode"].IsNull())
    {
        if (!value["SubPathMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeMount.SubPathMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subPathMode = string(value["SubPathMode"].GetString());
        m_subPathModeHasBeenSet = true;
    }

    if (value.HasMember("SubPath") && !value["SubPath"].IsNull())
    {
        if (!value["SubPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeMount.SubPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subPath = string(value["SubPath"].GetString());
        m_subPathHasBeenSet = true;
    }

    if (value.HasMember("MountMode") && !value["MountMode"].IsNull())
    {
        if (!value["MountMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeMount.MountMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountMode = string(value["MountMode"].GetString());
        m_mountModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VolumeMount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mountName.c_str(), allocator).Move(), allocator);
    }

    if (m_mountPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mountPath.c_str(), allocator).Move(), allocator);
    }

    if (m_subPathModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubPathMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subPathMode.c_str(), allocator).Move(), allocator);
    }

    if (m_subPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subPath.c_str(), allocator).Move(), allocator);
    }

    if (m_mountModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mountMode.c_str(), allocator).Move(), allocator);
    }

}


string VolumeMount::GetMountName() const
{
    return m_mountName;
}

void VolumeMount::SetMountName(const string& _mountName)
{
    m_mountName = _mountName;
    m_mountNameHasBeenSet = true;
}

bool VolumeMount::MountNameHasBeenSet() const
{
    return m_mountNameHasBeenSet;
}

string VolumeMount::GetMountPath() const
{
    return m_mountPath;
}

void VolumeMount::SetMountPath(const string& _mountPath)
{
    m_mountPath = _mountPath;
    m_mountPathHasBeenSet = true;
}

bool VolumeMount::MountPathHasBeenSet() const
{
    return m_mountPathHasBeenSet;
}

string VolumeMount::GetSubPathMode() const
{
    return m_subPathMode;
}

void VolumeMount::SetSubPathMode(const string& _subPathMode)
{
    m_subPathMode = _subPathMode;
    m_subPathModeHasBeenSet = true;
}

bool VolumeMount::SubPathModeHasBeenSet() const
{
    return m_subPathModeHasBeenSet;
}

string VolumeMount::GetSubPath() const
{
    return m_subPath;
}

void VolumeMount::SetSubPath(const string& _subPath)
{
    m_subPath = _subPath;
    m_subPathHasBeenSet = true;
}

bool VolumeMount::SubPathHasBeenSet() const
{
    return m_subPathHasBeenSet;
}

string VolumeMount::GetMountMode() const
{
    return m_mountMode;
}

void VolumeMount::SetMountMode(const string& _mountMode)
{
    m_mountMode = _mountMode;
    m_mountModeHasBeenSet = true;
}

bool VolumeMount::MountModeHasBeenSet() const
{
    return m_mountModeHasBeenSet;
}

