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

#include <tencentcloud/iotcloud/v20180614/model/CreateMultiDevicesTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotcloud::V20180614::Model;
using namespace std;

CreateMultiDevicesTaskRequest::CreateMultiDevicesTaskRequest() :
    m_productIdHasBeenSet(false),
    m_parametersTypeHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_batchCountHasBeenSet(false),
    m_hashHasBeenSet(false)
{
}

string CreateMultiDevicesTaskRequest::ToJsonString() const
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

    if (m_parametersTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParametersType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_parametersType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fileSize, allocator);
    }

    if (m_batchCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_batchCount, allocator);
    }

    if (m_hashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hash";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hash.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateMultiDevicesTaskRequest::GetProductId() const
{
    return m_productId;
}

void CreateMultiDevicesTaskRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool CreateMultiDevicesTaskRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string CreateMultiDevicesTaskRequest::GetParametersType() const
{
    return m_parametersType;
}

void CreateMultiDevicesTaskRequest::SetParametersType(const string& _parametersType)
{
    m_parametersType = _parametersType;
    m_parametersTypeHasBeenSet = true;
}

bool CreateMultiDevicesTaskRequest::ParametersTypeHasBeenSet() const
{
    return m_parametersTypeHasBeenSet;
}

string CreateMultiDevicesTaskRequest::GetFileName() const
{
    return m_fileName;
}

void CreateMultiDevicesTaskRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool CreateMultiDevicesTaskRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

uint64_t CreateMultiDevicesTaskRequest::GetFileSize() const
{
    return m_fileSize;
}

void CreateMultiDevicesTaskRequest::SetFileSize(const uint64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool CreateMultiDevicesTaskRequest::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

uint64_t CreateMultiDevicesTaskRequest::GetBatchCount() const
{
    return m_batchCount;
}

void CreateMultiDevicesTaskRequest::SetBatchCount(const uint64_t& _batchCount)
{
    m_batchCount = _batchCount;
    m_batchCountHasBeenSet = true;
}

bool CreateMultiDevicesTaskRequest::BatchCountHasBeenSet() const
{
    return m_batchCountHasBeenSet;
}

string CreateMultiDevicesTaskRequest::GetHash() const
{
    return m_hash;
}

void CreateMultiDevicesTaskRequest::SetHash(const string& _hash)
{
    m_hash = _hash;
    m_hashHasBeenSet = true;
}

bool CreateMultiDevicesTaskRequest::HashHasBeenSet() const
{
    return m_hashHasBeenSet;
}


