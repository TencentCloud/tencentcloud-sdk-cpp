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

#include <tencentcloud/iot/v20180123/model/ProductEntry.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iot::V20180123::Model;
using namespace std;

ProductEntry::ProductEntry() :
    m_productIdHasBeenSet(false),
    m_productKeyHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_dataProtocolHasBeenSet(false),
    m_deletedHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_commProtocolHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_deviceTypeHasBeenSet(false)
{
}

CoreInternalOutcome ProductEntry::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductEntry.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("ProductKey") && !value["ProductKey"].IsNull())
    {
        if (!value["ProductKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductEntry.ProductKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productKey = string(value["ProductKey"].GetString());
        m_productKeyHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductEntry.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductEntry.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductEntry.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductEntry.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("AuthType") && !value["AuthType"].IsNull())
    {
        if (!value["AuthType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductEntry.AuthType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_authType = value["AuthType"].GetUint64();
        m_authTypeHasBeenSet = true;
    }

    if (value.HasMember("DataProtocol") && !value["DataProtocol"].IsNull())
    {
        if (!value["DataProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductEntry.DataProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataProtocol = string(value["DataProtocol"].GetString());
        m_dataProtocolHasBeenSet = true;
    }

    if (value.HasMember("Deleted") && !value["Deleted"].IsNull())
    {
        if (!value["Deleted"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductEntry.Deleted` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deleted = value["Deleted"].GetUint64();
        m_deletedHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductEntry.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductEntry.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("CommProtocol") && !value["CommProtocol"].IsNull())
    {
        if (!value["CommProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductEntry.CommProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_commProtocol = string(value["CommProtocol"].GetString());
        m_commProtocolHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductEntry.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductEntry.DeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = string(value["DeviceType"].GetString());
        m_deviceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProductEntry::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_productKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productKey.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authType, allocator);
    }

    if (m_dataProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_deletedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deleted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleted, allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_commProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_commProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

}


string ProductEntry::GetProductId() const
{
    return m_productId;
}

void ProductEntry::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool ProductEntry::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string ProductEntry::GetProductKey() const
{
    return m_productKey;
}

void ProductEntry::SetProductKey(const string& _productKey)
{
    m_productKey = _productKey;
    m_productKeyHasBeenSet = true;
}

bool ProductEntry::ProductKeyHasBeenSet() const
{
    return m_productKeyHasBeenSet;
}

uint64_t ProductEntry::GetAppId() const
{
    return m_appId;
}

void ProductEntry::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ProductEntry::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string ProductEntry::GetName() const
{
    return m_name;
}

void ProductEntry::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ProductEntry::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ProductEntry::GetDescription() const
{
    return m_description;
}

void ProductEntry::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ProductEntry::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ProductEntry::GetDomain() const
{
    return m_domain;
}

void ProductEntry::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ProductEntry::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t ProductEntry::GetAuthType() const
{
    return m_authType;
}

void ProductEntry::SetAuthType(const uint64_t& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool ProductEntry::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

string ProductEntry::GetDataProtocol() const
{
    return m_dataProtocol;
}

void ProductEntry::SetDataProtocol(const string& _dataProtocol)
{
    m_dataProtocol = _dataProtocol;
    m_dataProtocolHasBeenSet = true;
}

bool ProductEntry::DataProtocolHasBeenSet() const
{
    return m_dataProtocolHasBeenSet;
}

uint64_t ProductEntry::GetDeleted() const
{
    return m_deleted;
}

void ProductEntry::SetDeleted(const uint64_t& _deleted)
{
    m_deleted = _deleted;
    m_deletedHasBeenSet = true;
}

bool ProductEntry::DeletedHasBeenSet() const
{
    return m_deletedHasBeenSet;
}

string ProductEntry::GetMessage() const
{
    return m_message;
}

void ProductEntry::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool ProductEntry::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string ProductEntry::GetCreateTime() const
{
    return m_createTime;
}

void ProductEntry::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ProductEntry::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ProductEntry::GetCommProtocol() const
{
    return m_commProtocol;
}

void ProductEntry::SetCommProtocol(const string& _commProtocol)
{
    m_commProtocol = _commProtocol;
    m_commProtocolHasBeenSet = true;
}

bool ProductEntry::CommProtocolHasBeenSet() const
{
    return m_commProtocolHasBeenSet;
}

string ProductEntry::GetRegion() const
{
    return m_region;
}

void ProductEntry::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ProductEntry::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string ProductEntry::GetDeviceType() const
{
    return m_deviceType;
}

void ProductEntry::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool ProductEntry::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

