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

#include <tencentcloud/eis/v20200715/model/EisConnectorSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eis::V20200715::Model;
using namespace std;

EisConnectorSummary::EisConnectorSummary() :
    m_connectorNameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_companyHasBeenSet(false),
    m_productHasBeenSet(false),
    m_connectorVersionHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome EisConnectorSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConnectorName") && !value["ConnectorName"].IsNull())
    {
        if (!value["ConnectorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EisConnectorSummary.ConnectorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectorName = string(value["ConnectorName"].GetString());
        m_connectorNameHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EisConnectorSummary.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("Company") && !value["Company"].IsNull())
    {
        if (!value["Company"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EisConnectorSummary.Company` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_company = string(value["Company"].GetString());
        m_companyHasBeenSet = true;
    }

    if (value.HasMember("Product") && !value["Product"].IsNull())
    {
        if (!value["Product"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EisConnectorSummary.Product` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_product = string(value["Product"].GetString());
        m_productHasBeenSet = true;
    }

    if (value.HasMember("ConnectorVersion") && !value["ConnectorVersion"].IsNull())
    {
        if (!value["ConnectorVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EisConnectorSummary.ConnectorVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectorVersion = string(value["ConnectorVersion"].GetString());
        m_connectorVersionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EisConnectorSummary.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EisConnectorSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_connectorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectorName.c_str(), allocator).Move(), allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_companyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Company";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_company.c_str(), allocator).Move(), allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_connectorVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectorVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectorVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

}


string EisConnectorSummary::GetConnectorName() const
{
    return m_connectorName;
}

void EisConnectorSummary::SetConnectorName(const string& _connectorName)
{
    m_connectorName = _connectorName;
    m_connectorNameHasBeenSet = true;
}

bool EisConnectorSummary::ConnectorNameHasBeenSet() const
{
    return m_connectorNameHasBeenSet;
}

string EisConnectorSummary::GetDisplayName() const
{
    return m_displayName;
}

void EisConnectorSummary::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool EisConnectorSummary::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string EisConnectorSummary::GetCompany() const
{
    return m_company;
}

void EisConnectorSummary::SetCompany(const string& _company)
{
    m_company = _company;
    m_companyHasBeenSet = true;
}

bool EisConnectorSummary::CompanyHasBeenSet() const
{
    return m_companyHasBeenSet;
}

string EisConnectorSummary::GetProduct() const
{
    return m_product;
}

void EisConnectorSummary::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool EisConnectorSummary::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

string EisConnectorSummary::GetConnectorVersion() const
{
    return m_connectorVersion;
}

void EisConnectorSummary::SetConnectorVersion(const string& _connectorVersion)
{
    m_connectorVersion = _connectorVersion;
    m_connectorVersionHasBeenSet = true;
}

bool EisConnectorSummary::ConnectorVersionHasBeenSet() const
{
    return m_connectorVersionHasBeenSet;
}

int64_t EisConnectorSummary::GetCreateTime() const
{
    return m_createTime;
}

void EisConnectorSummary::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool EisConnectorSummary::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

