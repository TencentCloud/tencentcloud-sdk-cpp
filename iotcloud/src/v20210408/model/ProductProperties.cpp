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

#include <tencentcloud/iotcloud/v20210408/model/ProductProperties.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotcloud::V20210408::Model;
using namespace std;

ProductProperties::ProductProperties() :
    m_productDescriptionHasBeenSet(false),
    m_encryptionTypeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_productTypeHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_appeuiHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_productKeyHasBeenSet(false),
    m_registerTypeHasBeenSet(false),
    m_productSecretHasBeenSet(false),
    m_registerLimitHasBeenSet(false),
    m_originProductIdHasBeenSet(false),
    m_privateCANameHasBeenSet(false),
    m_originUserIdHasBeenSet(false),
    m_deviceLimitHasBeenSet(false),
    m_forbiddenStatusHasBeenSet(false),
    m_appEUIHasBeenSet(false)
{
}

CoreInternalOutcome ProductProperties::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProductDescription") && !value["ProductDescription"].IsNull())
    {
        if (!value["ProductDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductProperties.ProductDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productDescription = string(value["ProductDescription"].GetString());
        m_productDescriptionHasBeenSet = true;
    }

    if (value.HasMember("EncryptionType") && !value["EncryptionType"].IsNull())
    {
        if (!value["EncryptionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductProperties.EncryptionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptionType = string(value["EncryptionType"].GetString());
        m_encryptionTypeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductProperties.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("ProductType") && !value["ProductType"].IsNull())
    {
        if (!value["ProductType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductProperties.ProductType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_productType = value["ProductType"].GetUint64();
        m_productTypeHasBeenSet = true;
    }

    if (value.HasMember("Format") && !value["Format"].IsNull())
    {
        if (!value["Format"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductProperties.Format` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_format = string(value["Format"].GetString());
        m_formatHasBeenSet = true;
    }

    if (value.HasMember("Platform") && !value["Platform"].IsNull())
    {
        if (!value["Platform"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductProperties.Platform` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platform = string(value["Platform"].GetString());
        m_platformHasBeenSet = true;
    }

    if (value.HasMember("Appeui") && !value["Appeui"].IsNull())
    {
        if (!value["Appeui"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductProperties.Appeui` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appeui = string(value["Appeui"].GetString());
        m_appeuiHasBeenSet = true;
    }

    if (value.HasMember("ModelId") && !value["ModelId"].IsNull())
    {
        if (!value["ModelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductProperties.ModelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = string(value["ModelId"].GetString());
        m_modelIdHasBeenSet = true;
    }

    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductProperties.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (value.HasMember("ProductKey") && !value["ProductKey"].IsNull())
    {
        if (!value["ProductKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductProperties.ProductKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productKey = string(value["ProductKey"].GetString());
        m_productKeyHasBeenSet = true;
    }

    if (value.HasMember("RegisterType") && !value["RegisterType"].IsNull())
    {
        if (!value["RegisterType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductProperties.RegisterType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_registerType = value["RegisterType"].GetUint64();
        m_registerTypeHasBeenSet = true;
    }

    if (value.HasMember("ProductSecret") && !value["ProductSecret"].IsNull())
    {
        if (!value["ProductSecret"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductProperties.ProductSecret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productSecret = string(value["ProductSecret"].GetString());
        m_productSecretHasBeenSet = true;
    }

    if (value.HasMember("RegisterLimit") && !value["RegisterLimit"].IsNull())
    {
        if (!value["RegisterLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductProperties.RegisterLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_registerLimit = value["RegisterLimit"].GetUint64();
        m_registerLimitHasBeenSet = true;
    }

    if (value.HasMember("OriginProductId") && !value["OriginProductId"].IsNull())
    {
        if (!value["OriginProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductProperties.OriginProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originProductId = string(value["OriginProductId"].GetString());
        m_originProductIdHasBeenSet = true;
    }

    if (value.HasMember("PrivateCAName") && !value["PrivateCAName"].IsNull())
    {
        if (!value["PrivateCAName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductProperties.PrivateCAName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateCAName = string(value["PrivateCAName"].GetString());
        m_privateCANameHasBeenSet = true;
    }

    if (value.HasMember("OriginUserId") && !value["OriginUserId"].IsNull())
    {
        if (!value["OriginUserId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductProperties.OriginUserId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_originUserId = value["OriginUserId"].GetUint64();
        m_originUserIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceLimit") && !value["DeviceLimit"].IsNull())
    {
        if (!value["DeviceLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductProperties.DeviceLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deviceLimit = value["DeviceLimit"].GetUint64();
        m_deviceLimitHasBeenSet = true;
    }

    if (value.HasMember("ForbiddenStatus") && !value["ForbiddenStatus"].IsNull())
    {
        if (!value["ForbiddenStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductProperties.ForbiddenStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_forbiddenStatus = value["ForbiddenStatus"].GetUint64();
        m_forbiddenStatusHasBeenSet = true;
    }

    if (value.HasMember("AppEUI") && !value["AppEUI"].IsNull())
    {
        if (!value["AppEUI"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductProperties.AppEUI` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appEUI = string(value["AppEUI"].GetString());
        m_appEUIHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProductProperties::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_productDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptionType.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_productTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_productType, allocator);
    }

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_appeuiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Appeui";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appeui.c_str(), allocator).Move(), allocator);
    }

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_productKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productKey.c_str(), allocator).Move(), allocator);
    }

    if (m_registerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_registerType, allocator);
    }

    if (m_productSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductSecret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productSecret.c_str(), allocator).Move(), allocator);
    }

    if (m_registerLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisterLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_registerLimit, allocator);
    }

    if (m_originProductIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originProductId.c_str(), allocator).Move(), allocator);
    }

    if (m_privateCANameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateCAName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateCAName.c_str(), allocator).Move(), allocator);
    }

    if (m_originUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originUserId, allocator);
    }

    if (m_deviceLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deviceLimit, allocator);
    }

    if (m_forbiddenStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForbiddenStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_forbiddenStatus, allocator);
    }

    if (m_appEUIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppEUI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appEUI.c_str(), allocator).Move(), allocator);
    }

}


string ProductProperties::GetProductDescription() const
{
    return m_productDescription;
}

void ProductProperties::SetProductDescription(const string& _productDescription)
{
    m_productDescription = _productDescription;
    m_productDescriptionHasBeenSet = true;
}

bool ProductProperties::ProductDescriptionHasBeenSet() const
{
    return m_productDescriptionHasBeenSet;
}

string ProductProperties::GetEncryptionType() const
{
    return m_encryptionType;
}

void ProductProperties::SetEncryptionType(const string& _encryptionType)
{
    m_encryptionType = _encryptionType;
    m_encryptionTypeHasBeenSet = true;
}

bool ProductProperties::EncryptionTypeHasBeenSet() const
{
    return m_encryptionTypeHasBeenSet;
}

string ProductProperties::GetRegion() const
{
    return m_region;
}

void ProductProperties::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ProductProperties::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

uint64_t ProductProperties::GetProductType() const
{
    return m_productType;
}

void ProductProperties::SetProductType(const uint64_t& _productType)
{
    m_productType = _productType;
    m_productTypeHasBeenSet = true;
}

bool ProductProperties::ProductTypeHasBeenSet() const
{
    return m_productTypeHasBeenSet;
}

string ProductProperties::GetFormat() const
{
    return m_format;
}

void ProductProperties::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool ProductProperties::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

string ProductProperties::GetPlatform() const
{
    return m_platform;
}

void ProductProperties::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool ProductProperties::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string ProductProperties::GetAppeui() const
{
    return m_appeui;
}

void ProductProperties::SetAppeui(const string& _appeui)
{
    m_appeui = _appeui;
    m_appeuiHasBeenSet = true;
}

bool ProductProperties::AppeuiHasBeenSet() const
{
    return m_appeuiHasBeenSet;
}

string ProductProperties::GetModelId() const
{
    return m_modelId;
}

void ProductProperties::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool ProductProperties::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

string ProductProperties::GetModelName() const
{
    return m_modelName;
}

void ProductProperties::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool ProductProperties::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string ProductProperties::GetProductKey() const
{
    return m_productKey;
}

void ProductProperties::SetProductKey(const string& _productKey)
{
    m_productKey = _productKey;
    m_productKeyHasBeenSet = true;
}

bool ProductProperties::ProductKeyHasBeenSet() const
{
    return m_productKeyHasBeenSet;
}

uint64_t ProductProperties::GetRegisterType() const
{
    return m_registerType;
}

void ProductProperties::SetRegisterType(const uint64_t& _registerType)
{
    m_registerType = _registerType;
    m_registerTypeHasBeenSet = true;
}

bool ProductProperties::RegisterTypeHasBeenSet() const
{
    return m_registerTypeHasBeenSet;
}

string ProductProperties::GetProductSecret() const
{
    return m_productSecret;
}

void ProductProperties::SetProductSecret(const string& _productSecret)
{
    m_productSecret = _productSecret;
    m_productSecretHasBeenSet = true;
}

bool ProductProperties::ProductSecretHasBeenSet() const
{
    return m_productSecretHasBeenSet;
}

uint64_t ProductProperties::GetRegisterLimit() const
{
    return m_registerLimit;
}

void ProductProperties::SetRegisterLimit(const uint64_t& _registerLimit)
{
    m_registerLimit = _registerLimit;
    m_registerLimitHasBeenSet = true;
}

bool ProductProperties::RegisterLimitHasBeenSet() const
{
    return m_registerLimitHasBeenSet;
}

string ProductProperties::GetOriginProductId() const
{
    return m_originProductId;
}

void ProductProperties::SetOriginProductId(const string& _originProductId)
{
    m_originProductId = _originProductId;
    m_originProductIdHasBeenSet = true;
}

bool ProductProperties::OriginProductIdHasBeenSet() const
{
    return m_originProductIdHasBeenSet;
}

string ProductProperties::GetPrivateCAName() const
{
    return m_privateCAName;
}

void ProductProperties::SetPrivateCAName(const string& _privateCAName)
{
    m_privateCAName = _privateCAName;
    m_privateCANameHasBeenSet = true;
}

bool ProductProperties::PrivateCANameHasBeenSet() const
{
    return m_privateCANameHasBeenSet;
}

uint64_t ProductProperties::GetOriginUserId() const
{
    return m_originUserId;
}

void ProductProperties::SetOriginUserId(const uint64_t& _originUserId)
{
    m_originUserId = _originUserId;
    m_originUserIdHasBeenSet = true;
}

bool ProductProperties::OriginUserIdHasBeenSet() const
{
    return m_originUserIdHasBeenSet;
}

uint64_t ProductProperties::GetDeviceLimit() const
{
    return m_deviceLimit;
}

void ProductProperties::SetDeviceLimit(const uint64_t& _deviceLimit)
{
    m_deviceLimit = _deviceLimit;
    m_deviceLimitHasBeenSet = true;
}

bool ProductProperties::DeviceLimitHasBeenSet() const
{
    return m_deviceLimitHasBeenSet;
}

uint64_t ProductProperties::GetForbiddenStatus() const
{
    return m_forbiddenStatus;
}

void ProductProperties::SetForbiddenStatus(const uint64_t& _forbiddenStatus)
{
    m_forbiddenStatus = _forbiddenStatus;
    m_forbiddenStatusHasBeenSet = true;
}

bool ProductProperties::ForbiddenStatusHasBeenSet() const
{
    return m_forbiddenStatusHasBeenSet;
}

string ProductProperties::GetAppEUI() const
{
    return m_appEUI;
}

void ProductProperties::SetAppEUI(const string& _appEUI)
{
    m_appEUI = _appEUI;
    m_appEUIHasBeenSet = true;
}

bool ProductProperties::AppEUIHasBeenSet() const
{
    return m_appEUIHasBeenSet;
}

