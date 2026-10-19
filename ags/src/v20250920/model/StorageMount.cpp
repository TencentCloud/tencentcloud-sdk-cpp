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

#include <tencentcloud/ags/v20250920/model/StorageMount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

StorageMount::StorageMount() :
    m_nameHasBeenSet(false),
    m_storageSourceHasBeenSet(false),
    m_mountPathHasBeenSet(false),
    m_readOnlyHasBeenSet(false),
    m_volumeHasBeenSet(false),
    m_volumeTemplateHasBeenSet(false)
{
}

CoreInternalOutcome StorageMount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageMount.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("StorageSource") && !value["StorageSource"].IsNull())
    {
        if (!value["StorageSource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StorageMount.StorageSource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_storageSource.Deserialize(value["StorageSource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_storageSourceHasBeenSet = true;
    }

    if (value.HasMember("MountPath") && !value["MountPath"].IsNull())
    {
        if (!value["MountPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageMount.MountPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountPath = string(value["MountPath"].GetString());
        m_mountPathHasBeenSet = true;
    }

    if (value.HasMember("ReadOnly") && !value["ReadOnly"].IsNull())
    {
        if (!value["ReadOnly"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `StorageMount.ReadOnly` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_readOnly = value["ReadOnly"].GetBool();
        m_readOnlyHasBeenSet = true;
    }

    if (value.HasMember("Volume") && !value["Volume"].IsNull())
    {
        if (!value["Volume"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StorageMount.Volume` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_volume.Deserialize(value["Volume"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_volumeHasBeenSet = true;
    }

    if (value.HasMember("VolumeTemplate") && !value["VolumeTemplate"].IsNull())
    {
        if (!value["VolumeTemplate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StorageMount.VolumeTemplate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_volumeTemplate.Deserialize(value["VolumeTemplate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_volumeTemplateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StorageMount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_storageSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_storageSource.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_volumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Volume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_volume.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_volumeTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_volumeTemplate.ToJsonObject(value[key.c_str()], allocator);
    }

}


string StorageMount::GetName() const
{
    return m_name;
}

void StorageMount::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool StorageMount::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

StorageSource StorageMount::GetStorageSource() const
{
    return m_storageSource;
}

void StorageMount::SetStorageSource(const StorageSource& _storageSource)
{
    m_storageSource = _storageSource;
    m_storageSourceHasBeenSet = true;
}

bool StorageMount::StorageSourceHasBeenSet() const
{
    return m_storageSourceHasBeenSet;
}

string StorageMount::GetMountPath() const
{
    return m_mountPath;
}

void StorageMount::SetMountPath(const string& _mountPath)
{
    m_mountPath = _mountPath;
    m_mountPathHasBeenSet = true;
}

bool StorageMount::MountPathHasBeenSet() const
{
    return m_mountPathHasBeenSet;
}

bool StorageMount::GetReadOnly() const
{
    return m_readOnly;
}

void StorageMount::SetReadOnly(const bool& _readOnly)
{
    m_readOnly = _readOnly;
    m_readOnlyHasBeenSet = true;
}

bool StorageMount::ReadOnlyHasBeenSet() const
{
    return m_readOnlyHasBeenSet;
}

VolumeRef StorageMount::GetVolume() const
{
    return m_volume;
}

void StorageMount::SetVolume(const VolumeRef& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool StorageMount::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}

VolumeTemplateRef StorageMount::GetVolumeTemplate() const
{
    return m_volumeTemplate;
}

void StorageMount::SetVolumeTemplate(const VolumeTemplateRef& _volumeTemplate)
{
    m_volumeTemplate = _volumeTemplate;
    m_volumeTemplateHasBeenSet = true;
}

bool StorageMount::VolumeTemplateHasBeenSet() const
{
    return m_volumeTemplateHasBeenSet;
}

