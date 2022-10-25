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

#include <tencentcloud/iotexplorer/v20190423/model/BindProductInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

BindProductInfo::BindProductInfo() :
    m_productIdHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_dataProtocolHasBeenSet(false),
    m_categoryIdHasBeenSet(false),
    m_productTypeHasBeenSet(false),
    m_netTypeHasBeenSet(false),
    m_devStatusHasBeenSet(false),
    m_productOwnerNameHasBeenSet(false)
{
}

CoreInternalOutcome BindProductInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindProductInfo.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindProductInfo.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindProductInfo.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("DataProtocol") && !value["DataProtocol"].IsNull())
    {
        if (!value["DataProtocol"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BindProductInfo.DataProtocol` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataProtocol = value["DataProtocol"].GetInt64();
        m_dataProtocolHasBeenSet = true;
    }

    if (value.HasMember("CategoryId") && !value["CategoryId"].IsNull())
    {
        if (!value["CategoryId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BindProductInfo.CategoryId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_categoryId = value["CategoryId"].GetInt64();
        m_categoryIdHasBeenSet = true;
    }

    if (value.HasMember("ProductType") && !value["ProductType"].IsNull())
    {
        if (!value["ProductType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BindProductInfo.ProductType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_productType = value["ProductType"].GetInt64();
        m_productTypeHasBeenSet = true;
    }

    if (value.HasMember("NetType") && !value["NetType"].IsNull())
    {
        if (!value["NetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindProductInfo.NetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netType = string(value["NetType"].GetString());
        m_netTypeHasBeenSet = true;
    }

    if (value.HasMember("DevStatus") && !value["DevStatus"].IsNull())
    {
        if (!value["DevStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindProductInfo.DevStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devStatus = string(value["DevStatus"].GetString());
        m_devStatusHasBeenSet = true;
    }

    if (value.HasMember("ProductOwnerName") && !value["ProductOwnerName"].IsNull())
    {
        if (!value["ProductOwnerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindProductInfo.ProductOwnerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productOwnerName = string(value["ProductOwnerName"].GetString());
        m_productOwnerNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BindProductInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataProtocol, allocator);
    }

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_categoryId, allocator);
    }

    if (m_productTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_productType, allocator);
    }

    if (m_netTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_netType.c_str(), allocator).Move(), allocator);
    }

    if (m_devStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_devStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_productOwnerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductOwnerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productOwnerName.c_str(), allocator).Move(), allocator);
    }

}


string BindProductInfo::GetProductId() const
{
    return m_productId;
}

void BindProductInfo::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool BindProductInfo::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string BindProductInfo::GetProductName() const
{
    return m_productName;
}

void BindProductInfo::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool BindProductInfo::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string BindProductInfo::GetProjectId() const
{
    return m_projectId;
}

void BindProductInfo::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool BindProductInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t BindProductInfo::GetDataProtocol() const
{
    return m_dataProtocol;
}

void BindProductInfo::SetDataProtocol(const int64_t& _dataProtocol)
{
    m_dataProtocol = _dataProtocol;
    m_dataProtocolHasBeenSet = true;
}

bool BindProductInfo::DataProtocolHasBeenSet() const
{
    return m_dataProtocolHasBeenSet;
}

int64_t BindProductInfo::GetCategoryId() const
{
    return m_categoryId;
}

void BindProductInfo::SetCategoryId(const int64_t& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool BindProductInfo::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

int64_t BindProductInfo::GetProductType() const
{
    return m_productType;
}

void BindProductInfo::SetProductType(const int64_t& _productType)
{
    m_productType = _productType;
    m_productTypeHasBeenSet = true;
}

bool BindProductInfo::ProductTypeHasBeenSet() const
{
    return m_productTypeHasBeenSet;
}

string BindProductInfo::GetNetType() const
{
    return m_netType;
}

void BindProductInfo::SetNetType(const string& _netType)
{
    m_netType = _netType;
    m_netTypeHasBeenSet = true;
}

bool BindProductInfo::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

string BindProductInfo::GetDevStatus() const
{
    return m_devStatus;
}

void BindProductInfo::SetDevStatus(const string& _devStatus)
{
    m_devStatus = _devStatus;
    m_devStatusHasBeenSet = true;
}

bool BindProductInfo::DevStatusHasBeenSet() const
{
    return m_devStatusHasBeenSet;
}

string BindProductInfo::GetProductOwnerName() const
{
    return m_productOwnerName;
}

void BindProductInfo::SetProductOwnerName(const string& _productOwnerName)
{
    m_productOwnerName = _productOwnerName;
    m_productOwnerNameHasBeenSet = true;
}

bool BindProductInfo::ProductOwnerNameHasBeenSet() const
{
    return m_productOwnerNameHasBeenSet;
}

