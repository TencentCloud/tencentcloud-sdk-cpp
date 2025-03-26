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

#include <tencentcloud/tke/v20180525/model/VolumeMount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

VolumeMount::VolumeMount() :
    m_mountPathHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_mountPropagationHasBeenSet(false),
    m_readOnlyHasBeenSet(false),
    m_subPathHasBeenSet(false),
    m_subPathExprHasBeenSet(false)
{
}

CoreInternalOutcome VolumeMount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MountPath") && !value["MountPath"].IsNull())
    {
        if (!value["MountPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeMount.MountPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountPath = string(value["MountPath"].GetString());
        m_mountPathHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeMount.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("MountPropagation") && !value["MountPropagation"].IsNull())
    {
        if (!value["MountPropagation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeMount.MountPropagation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountPropagation = string(value["MountPropagation"].GetString());
        m_mountPropagationHasBeenSet = true;
    }

    if (value.HasMember("ReadOnly") && !value["ReadOnly"].IsNull())
    {
        if (!value["ReadOnly"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeMount.ReadOnly` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_readOnly = value["ReadOnly"].GetBool();
        m_readOnlyHasBeenSet = true;
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

    if (value.HasMember("SubPathExpr") && !value["SubPathExpr"].IsNull())
    {
        if (!value["SubPathExpr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeMount.SubPathExpr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subPathExpr = string(value["SubPathExpr"].GetString());
        m_subPathExprHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VolumeMount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mountPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mountPath.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_mountPropagationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountPropagation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mountPropagation.c_str(), allocator).Move(), allocator);
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

    if (m_subPathExprHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubPathExpr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subPathExpr.c_str(), allocator).Move(), allocator);
    }

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

string VolumeMount::GetName() const
{
    return m_name;
}

void VolumeMount::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VolumeMount::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string VolumeMount::GetMountPropagation() const
{
    return m_mountPropagation;
}

void VolumeMount::SetMountPropagation(const string& _mountPropagation)
{
    m_mountPropagation = _mountPropagation;
    m_mountPropagationHasBeenSet = true;
}

bool VolumeMount::MountPropagationHasBeenSet() const
{
    return m_mountPropagationHasBeenSet;
}

bool VolumeMount::GetReadOnly() const
{
    return m_readOnly;
}

void VolumeMount::SetReadOnly(const bool& _readOnly)
{
    m_readOnly = _readOnly;
    m_readOnlyHasBeenSet = true;
}

bool VolumeMount::ReadOnlyHasBeenSet() const
{
    return m_readOnlyHasBeenSet;
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

string VolumeMount::GetSubPathExpr() const
{
    return m_subPathExpr;
}

void VolumeMount::SetSubPathExpr(const string& _subPathExpr)
{
    m_subPathExpr = _subPathExpr;
    m_subPathExprHasBeenSet = true;
}

bool VolumeMount::SubPathExprHasBeenSet() const
{
    return m_subPathExprHasBeenSet;
}

