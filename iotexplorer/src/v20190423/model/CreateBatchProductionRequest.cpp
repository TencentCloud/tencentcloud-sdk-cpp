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

#include <tencentcloud/iotexplorer/v20190423/model/CreateBatchProductionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

CreateBatchProductionRequest::CreateBatchProductionRequest() :
    m_projectIdHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_burnMethodHasBeenSet(false),
    m_generationMethodHasBeenSet(false),
    m_uploadUrlHasBeenSet(false),
    m_batchCntHasBeenSet(false),
    m_generationQRCodeHasBeenSet(false)
{
}

string CreateBatchProductionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_burnMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BurnMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_burnMethod, allocator);
    }

    if (m_generationMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GenerationMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_generationMethod, allocator);
    }

    if (m_uploadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uploadUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_batchCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchCnt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_batchCnt, allocator);
    }

    if (m_generationQRCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GenerationQRCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_generationQRCode, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateBatchProductionRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateBatchProductionRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateBatchProductionRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateBatchProductionRequest::GetProductId() const
{
    return m_productId;
}

void CreateBatchProductionRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool CreateBatchProductionRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

int64_t CreateBatchProductionRequest::GetBurnMethod() const
{
    return m_burnMethod;
}

void CreateBatchProductionRequest::SetBurnMethod(const int64_t& _burnMethod)
{
    m_burnMethod = _burnMethod;
    m_burnMethodHasBeenSet = true;
}

bool CreateBatchProductionRequest::BurnMethodHasBeenSet() const
{
    return m_burnMethodHasBeenSet;
}

int64_t CreateBatchProductionRequest::GetGenerationMethod() const
{
    return m_generationMethod;
}

void CreateBatchProductionRequest::SetGenerationMethod(const int64_t& _generationMethod)
{
    m_generationMethod = _generationMethod;
    m_generationMethodHasBeenSet = true;
}

bool CreateBatchProductionRequest::GenerationMethodHasBeenSet() const
{
    return m_generationMethodHasBeenSet;
}

string CreateBatchProductionRequest::GetUploadUrl() const
{
    return m_uploadUrl;
}

void CreateBatchProductionRequest::SetUploadUrl(const string& _uploadUrl)
{
    m_uploadUrl = _uploadUrl;
    m_uploadUrlHasBeenSet = true;
}

bool CreateBatchProductionRequest::UploadUrlHasBeenSet() const
{
    return m_uploadUrlHasBeenSet;
}

int64_t CreateBatchProductionRequest::GetBatchCnt() const
{
    return m_batchCnt;
}

void CreateBatchProductionRequest::SetBatchCnt(const int64_t& _batchCnt)
{
    m_batchCnt = _batchCnt;
    m_batchCntHasBeenSet = true;
}

bool CreateBatchProductionRequest::BatchCntHasBeenSet() const
{
    return m_batchCntHasBeenSet;
}

int64_t CreateBatchProductionRequest::GetGenerationQRCode() const
{
    return m_generationQRCode;
}

void CreateBatchProductionRequest::SetGenerationQRCode(const int64_t& _generationQRCode)
{
    m_generationQRCode = _generationQRCode;
    m_generationQRCodeHasBeenSet = true;
}

bool CreateBatchProductionRequest::GenerationQRCodeHasBeenSet() const
{
    return m_generationQRCodeHasBeenSet;
}


