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

#include <tencentcloud/cvm/v20170312/model/SyncImagesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

SyncImagesRequest::SyncImagesRequest() :
    m_imageIdsHasBeenSet(false),
    m_destinationRegionsHasBeenSet(false),
    m_dryRunHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_imageSetRequiredHasBeenSet(false),
    m_encryptHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
}

string SyncImagesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_imageIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imageIds.begin(); itr != m_imageIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_destinationRegionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationRegions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_destinationRegions.begin(); itr != m_destinationRegions.end(); ++itr)
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

    if (m_imageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageSetRequiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageSetRequired";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_imageSetRequired, allocator);
    }

    if (m_encryptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encrypt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_encrypt, allocator);
    }

    if (m_kmsKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KmsKeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kmsKeyId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> SyncImagesRequest::GetImageIds() const
{
    return m_imageIds;
}

void SyncImagesRequest::SetImageIds(const vector<string>& _imageIds)
{
    m_imageIds = _imageIds;
    m_imageIdsHasBeenSet = true;
}

bool SyncImagesRequest::ImageIdsHasBeenSet() const
{
    return m_imageIdsHasBeenSet;
}

vector<string> SyncImagesRequest::GetDestinationRegions() const
{
    return m_destinationRegions;
}

void SyncImagesRequest::SetDestinationRegions(const vector<string>& _destinationRegions)
{
    m_destinationRegions = _destinationRegions;
    m_destinationRegionsHasBeenSet = true;
}

bool SyncImagesRequest::DestinationRegionsHasBeenSet() const
{
    return m_destinationRegionsHasBeenSet;
}

bool SyncImagesRequest::GetDryRun() const
{
    return m_dryRun;
}

void SyncImagesRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool SyncImagesRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}

string SyncImagesRequest::GetImageName() const
{
    return m_imageName;
}

void SyncImagesRequest::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool SyncImagesRequest::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

bool SyncImagesRequest::GetImageSetRequired() const
{
    return m_imageSetRequired;
}

void SyncImagesRequest::SetImageSetRequired(const bool& _imageSetRequired)
{
    m_imageSetRequired = _imageSetRequired;
    m_imageSetRequiredHasBeenSet = true;
}

bool SyncImagesRequest::ImageSetRequiredHasBeenSet() const
{
    return m_imageSetRequiredHasBeenSet;
}

bool SyncImagesRequest::GetEncrypt() const
{
    return m_encrypt;
}

void SyncImagesRequest::SetEncrypt(const bool& _encrypt)
{
    m_encrypt = _encrypt;
    m_encryptHasBeenSet = true;
}

bool SyncImagesRequest::EncryptHasBeenSet() const
{
    return m_encryptHasBeenSet;
}

string SyncImagesRequest::GetKmsKeyId() const
{
    return m_kmsKeyId;
}

void SyncImagesRequest::SetKmsKeyId(const string& _kmsKeyId)
{
    m_kmsKeyId = _kmsKeyId;
    m_kmsKeyIdHasBeenSet = true;
}

bool SyncImagesRequest::KmsKeyIdHasBeenSet() const
{
    return m_kmsKeyIdHasBeenSet;
}


