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

#include <tencentcloud/oceanus/v20190422/model/Warehouse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

Warehouse::Warehouse() :
    m_statusHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_catalogTypeHasBeenSet(false),
    m_uriHasBeenSet(false),
    m_warehouseUrlHasBeenSet(false),
    m_authenticationHasBeenSet(false),
    m_resourceRefsHasBeenSet(false),
    m_hiveUriHasBeenSet(false),
    m_propertiesHasBeenSet(false)
{
}

CoreInternalOutcome Warehouse::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Warehouse.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Warehouse.Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(value["Location"].GetString());
        m_locationHasBeenSet = true;
    }

    if (value.HasMember("CatalogType") && !value["CatalogType"].IsNull())
    {
        if (!value["CatalogType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Warehouse.CatalogType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalogType = string(value["CatalogType"].GetString());
        m_catalogTypeHasBeenSet = true;
    }

    if (value.HasMember("Uri") && !value["Uri"].IsNull())
    {
        if (!value["Uri"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Warehouse.Uri` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uri = string(value["Uri"].GetString());
        m_uriHasBeenSet = true;
    }

    if (value.HasMember("WarehouseUrl") && !value["WarehouseUrl"].IsNull())
    {
        if (!value["WarehouseUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Warehouse.WarehouseUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_warehouseUrl = string(value["WarehouseUrl"].GetString());
        m_warehouseUrlHasBeenSet = true;
    }

    if (value.HasMember("Authentication") && !value["Authentication"].IsNull())
    {
        if (!value["Authentication"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Warehouse.Authentication` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authentication = string(value["Authentication"].GetString());
        m_authenticationHasBeenSet = true;
    }

    if (value.HasMember("ResourceRefs") && !value["ResourceRefs"].IsNull())
    {
        if (!value["ResourceRefs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Warehouse.ResourceRefs` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceRefs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResourceRefLatest item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceRefs.push_back(item);
        }
        m_resourceRefsHasBeenSet = true;
    }

    if (value.HasMember("HiveUri") && !value["HiveUri"].IsNull())
    {
        if (!value["HiveUri"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Warehouse.HiveUri` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hiveUri = string(value["HiveUri"].GetString());
        m_hiveUriHasBeenSet = true;
    }

    if (value.HasMember("Properties") && !value["Properties"].IsNull())
    {
        if (!value["Properties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Warehouse.Properties` is not array type"));

        const rapidjson::Value &tmpValue = value["Properties"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Property item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_properties.push_back(item);
        }
        m_propertiesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Warehouse::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_location.c_str(), allocator).Move(), allocator);
    }

    if (m_catalogTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catalogType.c_str(), allocator).Move(), allocator);
    }

    if (m_uriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uri";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uri.c_str(), allocator).Move(), allocator);
    }

    if (m_warehouseUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarehouseUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_warehouseUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_authenticationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Authentication";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authentication.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceRefsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRefs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceRefs.begin(); itr != m_resourceRefs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_hiveUriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HiveUri";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hiveUri.c_str(), allocator).Move(), allocator);
    }

    if (m_propertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_properties.begin(); itr != m_properties.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t Warehouse::GetStatus() const
{
    return m_status;
}

void Warehouse::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Warehouse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string Warehouse::GetLocation() const
{
    return m_location;
}

void Warehouse::SetLocation(const string& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool Warehouse::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

string Warehouse::GetCatalogType() const
{
    return m_catalogType;
}

void Warehouse::SetCatalogType(const string& _catalogType)
{
    m_catalogType = _catalogType;
    m_catalogTypeHasBeenSet = true;
}

bool Warehouse::CatalogTypeHasBeenSet() const
{
    return m_catalogTypeHasBeenSet;
}

string Warehouse::GetUri() const
{
    return m_uri;
}

void Warehouse::SetUri(const string& _uri)
{
    m_uri = _uri;
    m_uriHasBeenSet = true;
}

bool Warehouse::UriHasBeenSet() const
{
    return m_uriHasBeenSet;
}

string Warehouse::GetWarehouseUrl() const
{
    return m_warehouseUrl;
}

void Warehouse::SetWarehouseUrl(const string& _warehouseUrl)
{
    m_warehouseUrl = _warehouseUrl;
    m_warehouseUrlHasBeenSet = true;
}

bool Warehouse::WarehouseUrlHasBeenSet() const
{
    return m_warehouseUrlHasBeenSet;
}

string Warehouse::GetAuthentication() const
{
    return m_authentication;
}

void Warehouse::SetAuthentication(const string& _authentication)
{
    m_authentication = _authentication;
    m_authenticationHasBeenSet = true;
}

bool Warehouse::AuthenticationHasBeenSet() const
{
    return m_authenticationHasBeenSet;
}

vector<ResourceRefLatest> Warehouse::GetResourceRefs() const
{
    return m_resourceRefs;
}

void Warehouse::SetResourceRefs(const vector<ResourceRefLatest>& _resourceRefs)
{
    m_resourceRefs = _resourceRefs;
    m_resourceRefsHasBeenSet = true;
}

bool Warehouse::ResourceRefsHasBeenSet() const
{
    return m_resourceRefsHasBeenSet;
}

string Warehouse::GetHiveUri() const
{
    return m_hiveUri;
}

void Warehouse::SetHiveUri(const string& _hiveUri)
{
    m_hiveUri = _hiveUri;
    m_hiveUriHasBeenSet = true;
}

bool Warehouse::HiveUriHasBeenSet() const
{
    return m_hiveUriHasBeenSet;
}

vector<Property> Warehouse::GetProperties() const
{
    return m_properties;
}

void Warehouse::SetProperties(const vector<Property>& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool Warehouse::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

