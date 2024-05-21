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

#include <tencentcloud/iotexplorer/v20190423/model/CreateStudioProductRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

CreateStudioProductRequest::CreateStudioProductRequest() :
    m_productNameHasBeenSet(false),
    m_categoryIdHasBeenSet(false),
    m_productTypeHasBeenSet(false),
    m_encryptionTypeHasBeenSet(false),
    m_netTypeHasBeenSet(false),
    m_dataProtocolHasBeenSet(false),
    m_productDescHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_rateHasBeenSet(false),
    m_periodHasBeenSet(false)
{
}

string CreateStudioProductRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_categoryId, allocator);
    }

    if (m_productTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_productType, allocator);
    }

    if (m_encryptionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_encryptionType.c_str(), allocator).Move(), allocator);
    }

    if (m_netTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_netType.c_str(), allocator).Move(), allocator);
    }

    if (m_dataProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataProtocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dataProtocol, allocator);
    }

    if (m_productDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_rateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rate.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_period.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateStudioProductRequest::GetProductName() const
{
    return m_productName;
}

void CreateStudioProductRequest::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool CreateStudioProductRequest::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

int64_t CreateStudioProductRequest::GetCategoryId() const
{
    return m_categoryId;
}

void CreateStudioProductRequest::SetCategoryId(const int64_t& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool CreateStudioProductRequest::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

int64_t CreateStudioProductRequest::GetProductType() const
{
    return m_productType;
}

void CreateStudioProductRequest::SetProductType(const int64_t& _productType)
{
    m_productType = _productType;
    m_productTypeHasBeenSet = true;
}

bool CreateStudioProductRequest::ProductTypeHasBeenSet() const
{
    return m_productTypeHasBeenSet;
}

string CreateStudioProductRequest::GetEncryptionType() const
{
    return m_encryptionType;
}

void CreateStudioProductRequest::SetEncryptionType(const string& _encryptionType)
{
    m_encryptionType = _encryptionType;
    m_encryptionTypeHasBeenSet = true;
}

bool CreateStudioProductRequest::EncryptionTypeHasBeenSet() const
{
    return m_encryptionTypeHasBeenSet;
}

string CreateStudioProductRequest::GetNetType() const
{
    return m_netType;
}

void CreateStudioProductRequest::SetNetType(const string& _netType)
{
    m_netType = _netType;
    m_netTypeHasBeenSet = true;
}

bool CreateStudioProductRequest::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

int64_t CreateStudioProductRequest::GetDataProtocol() const
{
    return m_dataProtocol;
}

void CreateStudioProductRequest::SetDataProtocol(const int64_t& _dataProtocol)
{
    m_dataProtocol = _dataProtocol;
    m_dataProtocolHasBeenSet = true;
}

bool CreateStudioProductRequest::DataProtocolHasBeenSet() const
{
    return m_dataProtocolHasBeenSet;
}

string CreateStudioProductRequest::GetProductDesc() const
{
    return m_productDesc;
}

void CreateStudioProductRequest::SetProductDesc(const string& _productDesc)
{
    m_productDesc = _productDesc;
    m_productDescHasBeenSet = true;
}

bool CreateStudioProductRequest::ProductDescHasBeenSet() const
{
    return m_productDescHasBeenSet;
}

string CreateStudioProductRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateStudioProductRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateStudioProductRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateStudioProductRequest::GetRate() const
{
    return m_rate;
}

void CreateStudioProductRequest::SetRate(const string& _rate)
{
    m_rate = _rate;
    m_rateHasBeenSet = true;
}

bool CreateStudioProductRequest::RateHasBeenSet() const
{
    return m_rateHasBeenSet;
}

string CreateStudioProductRequest::GetPeriod() const
{
    return m_period;
}

void CreateStudioProductRequest::SetPeriod(const string& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CreateStudioProductRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}


