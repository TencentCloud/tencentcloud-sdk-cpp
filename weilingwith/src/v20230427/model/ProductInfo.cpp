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

#include <tencentcloud/weilingwith/v20230427/model/ProductInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

ProductInfo::ProductInfo() :
    m_workspaceIdHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_deviceTypeNameHasBeenSet(false),
    m_deviceTypeIdHasBeenSet(false),
    m_attributeHasBeenSet(false),
    m_productTypeHasBeenSet(false),
    m_productAbilityHasBeenSet(false),
    m_manufacturerHasBeenSet(false),
    m_maintenanceMfrHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_modelTypeHasBeenSet(false)
{
}

CoreInternalOutcome ProductInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkspaceId") && !value["WorkspaceId"].IsNull())
    {
        if (!value["WorkspaceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInfo.WorkspaceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_workspaceId = value["WorkspaceId"].GetInt64();
        m_workspaceIdHasBeenSet = true;
    }

    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInfo.ProductId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_productId = value["ProductId"].GetInt64();
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInfo.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("DeviceTypeName") && !value["DeviceTypeName"].IsNull())
    {
        if (!value["DeviceTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInfo.DeviceTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceTypeName = string(value["DeviceTypeName"].GetString());
        m_deviceTypeNameHasBeenSet = true;
    }

    if (value.HasMember("DeviceTypeId") && !value["DeviceTypeId"].IsNull())
    {
        if (!value["DeviceTypeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInfo.DeviceTypeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceTypeId = string(value["DeviceTypeId"].GetString());
        m_deviceTypeIdHasBeenSet = true;
    }

    if (value.HasMember("Attribute") && !value["Attribute"].IsNull())
    {
        if (!value["Attribute"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInfo.Attribute` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attribute = value["Attribute"].GetInt64();
        m_attributeHasBeenSet = true;
    }

    if (value.HasMember("ProductType") && !value["ProductType"].IsNull())
    {
        if (!value["ProductType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInfo.ProductType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productType = string(value["ProductType"].GetString());
        m_productTypeHasBeenSet = true;
    }

    if (value.HasMember("ProductAbility") && !value["ProductAbility"].IsNull())
    {
        if (!value["ProductAbility"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInfo.ProductAbility` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_productAbility = value["ProductAbility"].GetInt64();
        m_productAbilityHasBeenSet = true;
    }

    if (value.HasMember("Manufacturer") && !value["Manufacturer"].IsNull())
    {
        if (!value["Manufacturer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInfo.Manufacturer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manufacturer = string(value["Manufacturer"].GetString());
        m_manufacturerHasBeenSet = true;
    }

    if (value.HasMember("MaintenanceMfr") && !value["MaintenanceMfr"].IsNull())
    {
        if (!value["MaintenanceMfr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInfo.MaintenanceMfr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maintenanceMfr = string(value["MaintenanceMfr"].GetString());
        m_maintenanceMfrHasBeenSet = true;
    }

    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInfo.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (value.HasMember("ModelId") && !value["ModelId"].IsNull())
    {
        if (!value["ModelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInfo.ModelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = string(value["ModelId"].GetString());
        m_modelIdHasBeenSet = true;
    }

    if (value.HasMember("ModelType") && !value["ModelType"].IsNull())
    {
        if (!value["ModelType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInfo.ModelType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_modelType = value["ModelType"].GetInt64();
        m_modelTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProductInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_workspaceId, allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_productId, allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceTypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceTypeId.c_str(), allocator).Move(), allocator);
    }

    if (m_attributeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attribute";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attribute, allocator);
    }

    if (m_productTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productType.c_str(), allocator).Move(), allocator);
    }

    if (m_productAbilityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductAbility";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_productAbility, allocator);
    }

    if (m_manufacturerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Manufacturer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manufacturer.c_str(), allocator).Move(), allocator);
    }

    if (m_maintenanceMfrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaintenanceMfr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maintenanceMfr.c_str(), allocator).Move(), allocator);
    }

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modelType, allocator);
    }

}


int64_t ProductInfo::GetWorkspaceId() const
{
    return m_workspaceId;
}

void ProductInfo::SetWorkspaceId(const int64_t& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool ProductInfo::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

int64_t ProductInfo::GetProductId() const
{
    return m_productId;
}

void ProductInfo::SetProductId(const int64_t& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool ProductInfo::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string ProductInfo::GetProductName() const
{
    return m_productName;
}

void ProductInfo::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool ProductInfo::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string ProductInfo::GetDeviceTypeName() const
{
    return m_deviceTypeName;
}

void ProductInfo::SetDeviceTypeName(const string& _deviceTypeName)
{
    m_deviceTypeName = _deviceTypeName;
    m_deviceTypeNameHasBeenSet = true;
}

bool ProductInfo::DeviceTypeNameHasBeenSet() const
{
    return m_deviceTypeNameHasBeenSet;
}

string ProductInfo::GetDeviceTypeId() const
{
    return m_deviceTypeId;
}

void ProductInfo::SetDeviceTypeId(const string& _deviceTypeId)
{
    m_deviceTypeId = _deviceTypeId;
    m_deviceTypeIdHasBeenSet = true;
}

bool ProductInfo::DeviceTypeIdHasBeenSet() const
{
    return m_deviceTypeIdHasBeenSet;
}

int64_t ProductInfo::GetAttribute() const
{
    return m_attribute;
}

void ProductInfo::SetAttribute(const int64_t& _attribute)
{
    m_attribute = _attribute;
    m_attributeHasBeenSet = true;
}

bool ProductInfo::AttributeHasBeenSet() const
{
    return m_attributeHasBeenSet;
}

string ProductInfo::GetProductType() const
{
    return m_productType;
}

void ProductInfo::SetProductType(const string& _productType)
{
    m_productType = _productType;
    m_productTypeHasBeenSet = true;
}

bool ProductInfo::ProductTypeHasBeenSet() const
{
    return m_productTypeHasBeenSet;
}

int64_t ProductInfo::GetProductAbility() const
{
    return m_productAbility;
}

void ProductInfo::SetProductAbility(const int64_t& _productAbility)
{
    m_productAbility = _productAbility;
    m_productAbilityHasBeenSet = true;
}

bool ProductInfo::ProductAbilityHasBeenSet() const
{
    return m_productAbilityHasBeenSet;
}

string ProductInfo::GetManufacturer() const
{
    return m_manufacturer;
}

void ProductInfo::SetManufacturer(const string& _manufacturer)
{
    m_manufacturer = _manufacturer;
    m_manufacturerHasBeenSet = true;
}

bool ProductInfo::ManufacturerHasBeenSet() const
{
    return m_manufacturerHasBeenSet;
}

string ProductInfo::GetMaintenanceMfr() const
{
    return m_maintenanceMfr;
}

void ProductInfo::SetMaintenanceMfr(const string& _maintenanceMfr)
{
    m_maintenanceMfr = _maintenanceMfr;
    m_maintenanceMfrHasBeenSet = true;
}

bool ProductInfo::MaintenanceMfrHasBeenSet() const
{
    return m_maintenanceMfrHasBeenSet;
}

string ProductInfo::GetModelName() const
{
    return m_modelName;
}

void ProductInfo::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool ProductInfo::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string ProductInfo::GetModelId() const
{
    return m_modelId;
}

void ProductInfo::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool ProductInfo::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

int64_t ProductInfo::GetModelType() const
{
    return m_modelType;
}

void ProductInfo::SetModelType(const int64_t& _modelType)
{
    m_modelType = _modelType;
    m_modelTypeHasBeenSet = true;
}

bool ProductInfo::ModelTypeHasBeenSet() const
{
    return m_modelTypeHasBeenSet;
}

