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

#include <tencentcloud/iotcloud/v20210408/model/UploadFirmwareRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotcloud::V20210408::Model;
using namespace std;

UploadFirmwareRequest::UploadFirmwareRequest() :
    m_productIdHasBeenSet(false),
    m_firmwareVersionHasBeenSet(false),
    m_md5sumHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_firmwareNameHasBeenSet(false),
    m_firmwareDescriptionHasBeenSet(false),
    m_firmwareUserDefinedHasBeenSet(false)
{
}

string UploadFirmwareRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_firmwareVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirmwareVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_firmwareVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_md5sumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Md5sum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_md5sum.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fileSize, allocator);
    }

    if (m_firmwareNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirmwareName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_firmwareName.c_str(), allocator).Move(), allocator);
    }

    if (m_firmwareDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirmwareDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_firmwareDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_firmwareUserDefinedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirmwareUserDefined";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_firmwareUserDefined.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UploadFirmwareRequest::GetProductId() const
{
    return m_productId;
}

void UploadFirmwareRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool UploadFirmwareRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string UploadFirmwareRequest::GetFirmwareVersion() const
{
    return m_firmwareVersion;
}

void UploadFirmwareRequest::SetFirmwareVersion(const string& _firmwareVersion)
{
    m_firmwareVersion = _firmwareVersion;
    m_firmwareVersionHasBeenSet = true;
}

bool UploadFirmwareRequest::FirmwareVersionHasBeenSet() const
{
    return m_firmwareVersionHasBeenSet;
}

string UploadFirmwareRequest::GetMd5sum() const
{
    return m_md5sum;
}

void UploadFirmwareRequest::SetMd5sum(const string& _md5sum)
{
    m_md5sum = _md5sum;
    m_md5sumHasBeenSet = true;
}

bool UploadFirmwareRequest::Md5sumHasBeenSet() const
{
    return m_md5sumHasBeenSet;
}

uint64_t UploadFirmwareRequest::GetFileSize() const
{
    return m_fileSize;
}

void UploadFirmwareRequest::SetFileSize(const uint64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool UploadFirmwareRequest::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string UploadFirmwareRequest::GetFirmwareName() const
{
    return m_firmwareName;
}

void UploadFirmwareRequest::SetFirmwareName(const string& _firmwareName)
{
    m_firmwareName = _firmwareName;
    m_firmwareNameHasBeenSet = true;
}

bool UploadFirmwareRequest::FirmwareNameHasBeenSet() const
{
    return m_firmwareNameHasBeenSet;
}

string UploadFirmwareRequest::GetFirmwareDescription() const
{
    return m_firmwareDescription;
}

void UploadFirmwareRequest::SetFirmwareDescription(const string& _firmwareDescription)
{
    m_firmwareDescription = _firmwareDescription;
    m_firmwareDescriptionHasBeenSet = true;
}

bool UploadFirmwareRequest::FirmwareDescriptionHasBeenSet() const
{
    return m_firmwareDescriptionHasBeenSet;
}

string UploadFirmwareRequest::GetFirmwareUserDefined() const
{
    return m_firmwareUserDefined;
}

void UploadFirmwareRequest::SetFirmwareUserDefined(const string& _firmwareUserDefined)
{
    m_firmwareUserDefined = _firmwareUserDefined;
    m_firmwareUserDefinedHasBeenSet = true;
}

bool UploadFirmwareRequest::FirmwareUserDefinedHasBeenSet() const
{
    return m_firmwareUserDefinedHasBeenSet;
}


