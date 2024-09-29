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

#include <tencentcloud/cvm/v20170312/model/CreateImageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

CreateImageRequest::CreateImageRequest() :
    m_imageNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_imageDescriptionHasBeenSet(false),
    m_forcePoweroffHasBeenSet(false),
    m_sysprepHasBeenSet(false),
    m_dataDiskIdsHasBeenSet(false),
    m_snapshotIdsHasBeenSet(false),
    m_dryRunHasBeenSet(false),
    m_tagSpecificationHasBeenSet(false),
    m_imageFamilyHasBeenSet(false)
{
}

string CreateImageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_imageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_forcePoweroffHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForcePoweroff";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_forcePoweroff.c_str(), allocator).Move(), allocator);
    }

    if (m_sysprepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sysprep";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sysprep.c_str(), allocator).Move(), allocator);
    }

    if (m_dataDiskIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDiskIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dataDiskIds.begin(); itr != m_dataDiskIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_snapshotIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_snapshotIds.begin(); itr != m_snapshotIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dryRun, allocator);
    }

    if (m_tagSpecificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSpecification";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSpecification.begin(); itr != m_tagSpecification.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_imageFamilyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageFamily";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageFamily.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateImageRequest::GetImageName() const
{
    return m_imageName;
}

void CreateImageRequest::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool CreateImageRequest::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string CreateImageRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateImageRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateImageRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateImageRequest::GetImageDescription() const
{
    return m_imageDescription;
}

void CreateImageRequest::SetImageDescription(const string& _imageDescription)
{
    m_imageDescription = _imageDescription;
    m_imageDescriptionHasBeenSet = true;
}

bool CreateImageRequest::ImageDescriptionHasBeenSet() const
{
    return m_imageDescriptionHasBeenSet;
}

string CreateImageRequest::GetForcePoweroff() const
{
    return m_forcePoweroff;
}

void CreateImageRequest::SetForcePoweroff(const string& _forcePoweroff)
{
    m_forcePoweroff = _forcePoweroff;
    m_forcePoweroffHasBeenSet = true;
}

bool CreateImageRequest::ForcePoweroffHasBeenSet() const
{
    return m_forcePoweroffHasBeenSet;
}

string CreateImageRequest::GetSysprep() const
{
    return m_sysprep;
}

void CreateImageRequest::SetSysprep(const string& _sysprep)
{
    m_sysprep = _sysprep;
    m_sysprepHasBeenSet = true;
}

bool CreateImageRequest::SysprepHasBeenSet() const
{
    return m_sysprepHasBeenSet;
}

vector<string> CreateImageRequest::GetDataDiskIds() const
{
    return m_dataDiskIds;
}

void CreateImageRequest::SetDataDiskIds(const vector<string>& _dataDiskIds)
{
    m_dataDiskIds = _dataDiskIds;
    m_dataDiskIdsHasBeenSet = true;
}

bool CreateImageRequest::DataDiskIdsHasBeenSet() const
{
    return m_dataDiskIdsHasBeenSet;
}

vector<string> CreateImageRequest::GetSnapshotIds() const
{
    return m_snapshotIds;
}

void CreateImageRequest::SetSnapshotIds(const vector<string>& _snapshotIds)
{
    m_snapshotIds = _snapshotIds;
    m_snapshotIdsHasBeenSet = true;
}

bool CreateImageRequest::SnapshotIdsHasBeenSet() const
{
    return m_snapshotIdsHasBeenSet;
}

bool CreateImageRequest::GetDryRun() const
{
    return m_dryRun;
}

void CreateImageRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool CreateImageRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}

vector<TagSpecification> CreateImageRequest::GetTagSpecification() const
{
    return m_tagSpecification;
}

void CreateImageRequest::SetTagSpecification(const vector<TagSpecification>& _tagSpecification)
{
    m_tagSpecification = _tagSpecification;
    m_tagSpecificationHasBeenSet = true;
}

bool CreateImageRequest::TagSpecificationHasBeenSet() const
{
    return m_tagSpecificationHasBeenSet;
}

string CreateImageRequest::GetImageFamily() const
{
    return m_imageFamily;
}

void CreateImageRequest::SetImageFamily(const string& _imageFamily)
{
    m_imageFamily = _imageFamily;
    m_imageFamilyHasBeenSet = true;
}

bool CreateImageRequest::ImageFamilyHasBeenSet() const
{
    return m_imageFamilyHasBeenSet;
}


