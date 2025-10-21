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

#include <tencentcloud/tcb/v20180608/model/CloudBaseRunServiceVolumeMount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CloudBaseRunServiceVolumeMount::CloudBaseRunServiceVolumeMount() :
    m_nameHasBeenSet(false),
    m_mountPathHasBeenSet(false),
    m_readOnlyHasBeenSet(false),
    m_subPathHasBeenSet(false),
    m_mountPropagationHasBeenSet(false)
{
}

CoreInternalOutcome CloudBaseRunServiceVolumeMount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunServiceVolumeMount.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("MountPath") && !value["MountPath"].IsNull())
    {
        if (!value["MountPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunServiceVolumeMount.MountPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountPath = string(value["MountPath"].GetString());
        m_mountPathHasBeenSet = true;
    }

    if (value.HasMember("ReadOnly") && !value["ReadOnly"].IsNull())
    {
        if (!value["ReadOnly"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunServiceVolumeMount.ReadOnly` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_readOnly = value["ReadOnly"].GetBool();
        m_readOnlyHasBeenSet = true;
    }

    if (value.HasMember("SubPath") && !value["SubPath"].IsNull())
    {
        if (!value["SubPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunServiceVolumeMount.SubPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subPath = string(value["SubPath"].GetString());
        m_subPathHasBeenSet = true;
    }

    if (value.HasMember("MountPropagation") && !value["MountPropagation"].IsNull())
    {
        if (!value["MountPropagation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunServiceVolumeMount.MountPropagation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountPropagation = string(value["MountPropagation"].GetString());
        m_mountPropagationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudBaseRunServiceVolumeMount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_readOnlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readOnly, allocator);
    }

    if (m_subPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subPath.c_str(), allocator).Move(), allocator);
    }

    if (m_mountPropagationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountPropagation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mountPropagation.c_str(), allocator).Move(), allocator);
    }

}


string CloudBaseRunServiceVolumeMount::GetName() const
{
    return m_name;
}

void CloudBaseRunServiceVolumeMount::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CloudBaseRunServiceVolumeMount::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CloudBaseRunServiceVolumeMount::GetMountPath() const
{
    return m_mountPath;
}

void CloudBaseRunServiceVolumeMount::SetMountPath(const string& _mountPath)
{
    m_mountPath = _mountPath;
    m_mountPathHasBeenSet = true;
}

bool CloudBaseRunServiceVolumeMount::MountPathHasBeenSet() const
{
    return m_mountPathHasBeenSet;
}

bool CloudBaseRunServiceVolumeMount::GetReadOnly() const
{
    return m_readOnly;
}

void CloudBaseRunServiceVolumeMount::SetReadOnly(const bool& _readOnly)
{
    m_readOnly = _readOnly;
    m_readOnlyHasBeenSet = true;
}

bool CloudBaseRunServiceVolumeMount::ReadOnlyHasBeenSet() const
{
    return m_readOnlyHasBeenSet;
}

string CloudBaseRunServiceVolumeMount::GetSubPath() const
{
    return m_subPath;
}

void CloudBaseRunServiceVolumeMount::SetSubPath(const string& _subPath)
{
    m_subPath = _subPath;
    m_subPathHasBeenSet = true;
}

bool CloudBaseRunServiceVolumeMount::SubPathHasBeenSet() const
{
    return m_subPathHasBeenSet;
}

string CloudBaseRunServiceVolumeMount::GetMountPropagation() const
{
    return m_mountPropagation;
}

void CloudBaseRunServiceVolumeMount::SetMountPropagation(const string& _mountPropagation)
{
    m_mountPropagation = _mountPropagation;
    m_mountPropagationHasBeenSet = true;
}

bool CloudBaseRunServiceVolumeMount::MountPropagationHasBeenSet() const
{
    return m_mountPropagationHasBeenSet;
}

