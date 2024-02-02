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

#include <tencentcloud/iotexplorer/v20190423/model/UploadFirmwareRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

UploadFirmwareRequest::UploadFirmwareRequest() :
    m_productIDHasBeenSet(false),
    m_firmwareVersionHasBeenSet(false),
    m_md5sumHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_firmwareNameHasBeenSet(false),
    m_firmwareDescriptionHasBeenSet(false),
    m_fwTypeHasBeenSet(false),
    m_firmwareUserDefinedHasBeenSet(false)
{
}

string UploadFirmwareRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productID.c_str(), allocator).Move(), allocator);
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

    if (m_fwTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fwType.c_str(), allocator).Move(), allocator);
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


string UploadFirmwareRequest::GetProductID() const
{
    return m_productID;
}

void UploadFirmwareRequest::SetProductID(const string& _productID)
{
    m_productID = _productID;
    m_productIDHasBeenSet = true;
}

bool UploadFirmwareRequest::ProductIDHasBeenSet() const
{
    return m_productIDHasBeenSet;
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

string UploadFirmwareRequest::GetFwType() const
{
    return m_fwType;
}

void UploadFirmwareRequest::SetFwType(const string& _fwType)
{
    m_fwType = _fwType;
    m_fwTypeHasBeenSet = true;
}

bool UploadFirmwareRequest::FwTypeHasBeenSet() const
{
    return m_fwTypeHasBeenSet;
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


