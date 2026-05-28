/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/ig/v20210518/model/DrugCardInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ig::V20210518::Model;
using namespace std;

DrugCardInfo::DrugCardInfo() :
    m_drugIdHasBeenSet(false),
    m_drugNameHasBeenSet(false),
    m_tradeNameHasBeenSet(false),
    m_specificationHasBeenSet(false),
    m_manufacturerHasBeenSet(false),
    m_drugRxTypeHasBeenSet(false),
    m_docUrlHasBeenSet(false),
    m_identifySourceHasBeenSet(false)
{
}

CoreInternalOutcome DrugCardInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DrugId") && !value["DrugId"].IsNull())
    {
        if (!value["DrugId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrugCardInfo.DrugId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drugId = string(value["DrugId"].GetString());
        m_drugIdHasBeenSet = true;
    }

    if (value.HasMember("DrugName") && !value["DrugName"].IsNull())
    {
        if (!value["DrugName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrugCardInfo.DrugName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drugName = string(value["DrugName"].GetString());
        m_drugNameHasBeenSet = true;
    }

    if (value.HasMember("TradeName") && !value["TradeName"].IsNull())
    {
        if (!value["TradeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrugCardInfo.TradeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeName = string(value["TradeName"].GetString());
        m_tradeNameHasBeenSet = true;
    }

    if (value.HasMember("Specification") && !value["Specification"].IsNull())
    {
        if (!value["Specification"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrugCardInfo.Specification` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specification = string(value["Specification"].GetString());
        m_specificationHasBeenSet = true;
    }

    if (value.HasMember("Manufacturer") && !value["Manufacturer"].IsNull())
    {
        if (!value["Manufacturer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrugCardInfo.Manufacturer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manufacturer = string(value["Manufacturer"].GetString());
        m_manufacturerHasBeenSet = true;
    }

    if (value.HasMember("DrugRxType") && !value["DrugRxType"].IsNull())
    {
        if (!value["DrugRxType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DrugCardInfo.DrugRxType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_drugRxType = value["DrugRxType"].GetInt64();
        m_drugRxTypeHasBeenSet = true;
    }

    if (value.HasMember("DocUrl") && !value["DocUrl"].IsNull())
    {
        if (!value["DocUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrugCardInfo.DocUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docUrl = string(value["DocUrl"].GetString());
        m_docUrlHasBeenSet = true;
    }

    if (value.HasMember("IdentifySource") && !value["IdentifySource"].IsNull())
    {
        if (!value["IdentifySource"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DrugCardInfo.IdentifySource` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_identifySource = value["IdentifySource"].GetInt64();
        m_identifySourceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DrugCardInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_drugIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drugId.c_str(), allocator).Move(), allocator);
    }

    if (m_drugNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drugName.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tradeName.c_str(), allocator).Move(), allocator);
    }

    if (m_specificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Specification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specification.c_str(), allocator).Move(), allocator);
    }

    if (m_manufacturerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Manufacturer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manufacturer.c_str(), allocator).Move(), allocator);
    }

    if (m_drugRxTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugRxType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_drugRxType, allocator);
    }

    if (m_docUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_identifySourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentifySource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_identifySource, allocator);
    }

}


string DrugCardInfo::GetDrugId() const
{
    return m_drugId;
}

void DrugCardInfo::SetDrugId(const string& _drugId)
{
    m_drugId = _drugId;
    m_drugIdHasBeenSet = true;
}

bool DrugCardInfo::DrugIdHasBeenSet() const
{
    return m_drugIdHasBeenSet;
}

string DrugCardInfo::GetDrugName() const
{
    return m_drugName;
}

void DrugCardInfo::SetDrugName(const string& _drugName)
{
    m_drugName = _drugName;
    m_drugNameHasBeenSet = true;
}

bool DrugCardInfo::DrugNameHasBeenSet() const
{
    return m_drugNameHasBeenSet;
}

string DrugCardInfo::GetTradeName() const
{
    return m_tradeName;
}

void DrugCardInfo::SetTradeName(const string& _tradeName)
{
    m_tradeName = _tradeName;
    m_tradeNameHasBeenSet = true;
}

bool DrugCardInfo::TradeNameHasBeenSet() const
{
    return m_tradeNameHasBeenSet;
}

string DrugCardInfo::GetSpecification() const
{
    return m_specification;
}

void DrugCardInfo::SetSpecification(const string& _specification)
{
    m_specification = _specification;
    m_specificationHasBeenSet = true;
}

bool DrugCardInfo::SpecificationHasBeenSet() const
{
    return m_specificationHasBeenSet;
}

string DrugCardInfo::GetManufacturer() const
{
    return m_manufacturer;
}

void DrugCardInfo::SetManufacturer(const string& _manufacturer)
{
    m_manufacturer = _manufacturer;
    m_manufacturerHasBeenSet = true;
}

bool DrugCardInfo::ManufacturerHasBeenSet() const
{
    return m_manufacturerHasBeenSet;
}

int64_t DrugCardInfo::GetDrugRxType() const
{
    return m_drugRxType;
}

void DrugCardInfo::SetDrugRxType(const int64_t& _drugRxType)
{
    m_drugRxType = _drugRxType;
    m_drugRxTypeHasBeenSet = true;
}

bool DrugCardInfo::DrugRxTypeHasBeenSet() const
{
    return m_drugRxTypeHasBeenSet;
}

string DrugCardInfo::GetDocUrl() const
{
    return m_docUrl;
}

void DrugCardInfo::SetDocUrl(const string& _docUrl)
{
    m_docUrl = _docUrl;
    m_docUrlHasBeenSet = true;
}

bool DrugCardInfo::DocUrlHasBeenSet() const
{
    return m_docUrlHasBeenSet;
}

int64_t DrugCardInfo::GetIdentifySource() const
{
    return m_identifySource;
}

void DrugCardInfo::SetIdentifySource(const int64_t& _identifySource)
{
    m_identifySource = _identifySource;
    m_identifySourceHasBeenSet = true;
}

bool DrugCardInfo::IdentifySourceHasBeenSet() const
{
    return m_identifySourceHasBeenSet;
}

