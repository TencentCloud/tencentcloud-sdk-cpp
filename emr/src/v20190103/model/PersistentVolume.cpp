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

#include <tencentcloud/emr/v20190103/model/PersistentVolume.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

PersistentVolume::PersistentVolume() :
    m_cBSVolumesHasBeenSet(false),
    m_cFSVolumesHasBeenSet(false),
    m_cOSVolumesHasBeenSet(false),
    m_storageVolumeNameHasBeenSet(false),
    m_volumeMountsHasBeenSet(false),
    m_storageVolumeDetailHasBeenSet(false),
    m_cFSTurboVolumesHasBeenSet(false)
{
}

CoreInternalOutcome PersistentVolume::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CBSVolumes") && !value["CBSVolumes"].IsNull())
    {
        if (!value["CBSVolumes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PersistentVolume.CBSVolumes` is not array type"));

        const rapidjson::Value &tmpValue = value["CBSVolumes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CBSVolume item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cBSVolumes.push_back(item);
        }
        m_cBSVolumesHasBeenSet = true;
    }

    if (value.HasMember("CFSVolumes") && !value["CFSVolumes"].IsNull())
    {
        if (!value["CFSVolumes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PersistentVolume.CFSVolumes` is not array type"));

        const rapidjson::Value &tmpValue = value["CFSVolumes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CFSVolume item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cFSVolumes.push_back(item);
        }
        m_cFSVolumesHasBeenSet = true;
    }

    if (value.HasMember("COSVolumes") && !value["COSVolumes"].IsNull())
    {
        if (!value["COSVolumes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PersistentVolume.COSVolumes` is not array type"));

        const rapidjson::Value &tmpValue = value["COSVolumes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            COSVolume item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cOSVolumes.push_back(item);
        }
        m_cOSVolumesHasBeenSet = true;
    }

    if (value.HasMember("StorageVolumeName") && !value["StorageVolumeName"].IsNull())
    {
        if (!value["StorageVolumeName"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PersistentVolume.StorageVolumeName` is not array type"));

        const rapidjson::Value &tmpValue = value["StorageVolumeName"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_storageVolumeName.push_back((*itr).GetString());
        }
        m_storageVolumeNameHasBeenSet = true;
    }

    if (value.HasMember("VolumeMounts") && !value["VolumeMounts"].IsNull())
    {
        if (!value["VolumeMounts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PersistentVolume.VolumeMounts` is not array type"));

        const rapidjson::Value &tmpValue = value["VolumeMounts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VolumeMount item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_volumeMounts.push_back(item);
        }
        m_volumeMountsHasBeenSet = true;
    }

    if (value.HasMember("StorageVolumeDetail") && !value["StorageVolumeDetail"].IsNull())
    {
        if (!value["StorageVolumeDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PersistentVolume.StorageVolumeDetail` is not array type"));

        const rapidjson::Value &tmpValue = value["StorageVolumeDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StorageVolumeDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_storageVolumeDetail.push_back(item);
        }
        m_storageVolumeDetailHasBeenSet = true;
    }

    if (value.HasMember("CFSTurboVolumes") && !value["CFSTurboVolumes"].IsNull())
    {
        if (!value["CFSTurboVolumes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PersistentVolume.CFSTurboVolumes` is not array type"));

        const rapidjson::Value &tmpValue = value["CFSTurboVolumes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CFSTurboVolume item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cFSTurboVolumes.push_back(item);
        }
        m_cFSTurboVolumesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PersistentVolume::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cBSVolumesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CBSVolumes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cBSVolumes.begin(); itr != m_cBSVolumes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cFSVolumesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CFSVolumes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cFSVolumes.begin(); itr != m_cFSVolumes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cOSVolumesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "COSVolumes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cOSVolumes.begin(); itr != m_cOSVolumes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_storageVolumeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageVolumeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_storageVolumeName.begin(); itr != m_storageVolumeName.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_volumeMountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeMounts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_volumeMounts.begin(); itr != m_volumeMounts.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_storageVolumeDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageVolumeDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_storageVolumeDetail.begin(); itr != m_storageVolumeDetail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cFSTurboVolumesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CFSTurboVolumes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cFSTurboVolumes.begin(); itr != m_cFSTurboVolumes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<CBSVolume> PersistentVolume::GetCBSVolumes() const
{
    return m_cBSVolumes;
}

void PersistentVolume::SetCBSVolumes(const vector<CBSVolume>& _cBSVolumes)
{
    m_cBSVolumes = _cBSVolumes;
    m_cBSVolumesHasBeenSet = true;
}

bool PersistentVolume::CBSVolumesHasBeenSet() const
{
    return m_cBSVolumesHasBeenSet;
}

vector<CFSVolume> PersistentVolume::GetCFSVolumes() const
{
    return m_cFSVolumes;
}

void PersistentVolume::SetCFSVolumes(const vector<CFSVolume>& _cFSVolumes)
{
    m_cFSVolumes = _cFSVolumes;
    m_cFSVolumesHasBeenSet = true;
}

bool PersistentVolume::CFSVolumesHasBeenSet() const
{
    return m_cFSVolumesHasBeenSet;
}

vector<COSVolume> PersistentVolume::GetCOSVolumes() const
{
    return m_cOSVolumes;
}

void PersistentVolume::SetCOSVolumes(const vector<COSVolume>& _cOSVolumes)
{
    m_cOSVolumes = _cOSVolumes;
    m_cOSVolumesHasBeenSet = true;
}

bool PersistentVolume::COSVolumesHasBeenSet() const
{
    return m_cOSVolumesHasBeenSet;
}

vector<string> PersistentVolume::GetStorageVolumeName() const
{
    return m_storageVolumeName;
}

void PersistentVolume::SetStorageVolumeName(const vector<string>& _storageVolumeName)
{
    m_storageVolumeName = _storageVolumeName;
    m_storageVolumeNameHasBeenSet = true;
}

bool PersistentVolume::StorageVolumeNameHasBeenSet() const
{
    return m_storageVolumeNameHasBeenSet;
}

vector<VolumeMount> PersistentVolume::GetVolumeMounts() const
{
    return m_volumeMounts;
}

void PersistentVolume::SetVolumeMounts(const vector<VolumeMount>& _volumeMounts)
{
    m_volumeMounts = _volumeMounts;
    m_volumeMountsHasBeenSet = true;
}

bool PersistentVolume::VolumeMountsHasBeenSet() const
{
    return m_volumeMountsHasBeenSet;
}

vector<StorageVolumeDetail> PersistentVolume::GetStorageVolumeDetail() const
{
    return m_storageVolumeDetail;
}

void PersistentVolume::SetStorageVolumeDetail(const vector<StorageVolumeDetail>& _storageVolumeDetail)
{
    m_storageVolumeDetail = _storageVolumeDetail;
    m_storageVolumeDetailHasBeenSet = true;
}

bool PersistentVolume::StorageVolumeDetailHasBeenSet() const
{
    return m_storageVolumeDetailHasBeenSet;
}

vector<CFSTurboVolume> PersistentVolume::GetCFSTurboVolumes() const
{
    return m_cFSTurboVolumes;
}

void PersistentVolume::SetCFSTurboVolumes(const vector<CFSTurboVolume>& _cFSTurboVolumes)
{
    m_cFSTurboVolumes = _cFSTurboVolumes;
    m_cFSTurboVolumesHasBeenSet = true;
}

bool PersistentVolume::CFSTurboVolumesHasBeenSet() const
{
    return m_cFSTurboVolumesHasBeenSet;
}

