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

#include <tencentcloud/mrs/v20200910/model/Medicine.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

Medicine::Medicine() :
    m_nameHasBeenSet(false),
    m_tradeNameHasBeenSet(false),
    m_firmHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_specificationHasBeenSet(false),
    m_minQuantityHasBeenSet(false),
    m_dosageUnitHasBeenSet(false),
    m_packingUnitHasBeenSet(false)
{
}

CoreInternalOutcome Medicine::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Medicine.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("TradeName") && !value["TradeName"].IsNull())
    {
        if (!value["TradeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Medicine.TradeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeName = string(value["TradeName"].GetString());
        m_tradeNameHasBeenSet = true;
    }

    if (value.HasMember("Firm") && !value["Firm"].IsNull())
    {
        if (!value["Firm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Medicine.Firm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firm = string(value["Firm"].GetString());
        m_firmHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Medicine.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("Specification") && !value["Specification"].IsNull())
    {
        if (!value["Specification"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Medicine.Specification` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specification = string(value["Specification"].GetString());
        m_specificationHasBeenSet = true;
    }

    if (value.HasMember("MinQuantity") && !value["MinQuantity"].IsNull())
    {
        if (!value["MinQuantity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Medicine.MinQuantity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_minQuantity = string(value["MinQuantity"].GetString());
        m_minQuantityHasBeenSet = true;
    }

    if (value.HasMember("DosageUnit") && !value["DosageUnit"].IsNull())
    {
        if (!value["DosageUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Medicine.DosageUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dosageUnit = string(value["DosageUnit"].GetString());
        m_dosageUnitHasBeenSet = true;
    }

    if (value.HasMember("PackingUnit") && !value["PackingUnit"].IsNull())
    {
        if (!value["PackingUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Medicine.PackingUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packingUnit = string(value["PackingUnit"].GetString());
        m_packingUnitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Medicine::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tradeName.c_str(), allocator).Move(), allocator);
    }

    if (m_firmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Firm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firm.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_specificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Specification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specification.c_str(), allocator).Move(), allocator);
    }

    if (m_minQuantityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinQuantity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_minQuantity.c_str(), allocator).Move(), allocator);
    }

    if (m_dosageUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DosageUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dosageUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_packingUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackingUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packingUnit.c_str(), allocator).Move(), allocator);
    }

}


string Medicine::GetName() const
{
    return m_name;
}

void Medicine::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Medicine::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Medicine::GetTradeName() const
{
    return m_tradeName;
}

void Medicine::SetTradeName(const string& _tradeName)
{
    m_tradeName = _tradeName;
    m_tradeNameHasBeenSet = true;
}

bool Medicine::TradeNameHasBeenSet() const
{
    return m_tradeNameHasBeenSet;
}

string Medicine::GetFirm() const
{
    return m_firm;
}

void Medicine::SetFirm(const string& _firm)
{
    m_firm = _firm;
    m_firmHasBeenSet = true;
}

bool Medicine::FirmHasBeenSet() const
{
    return m_firmHasBeenSet;
}

string Medicine::GetCategory() const
{
    return m_category;
}

void Medicine::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool Medicine::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string Medicine::GetSpecification() const
{
    return m_specification;
}

void Medicine::SetSpecification(const string& _specification)
{
    m_specification = _specification;
    m_specificationHasBeenSet = true;
}

bool Medicine::SpecificationHasBeenSet() const
{
    return m_specificationHasBeenSet;
}

string Medicine::GetMinQuantity() const
{
    return m_minQuantity;
}

void Medicine::SetMinQuantity(const string& _minQuantity)
{
    m_minQuantity = _minQuantity;
    m_minQuantityHasBeenSet = true;
}

bool Medicine::MinQuantityHasBeenSet() const
{
    return m_minQuantityHasBeenSet;
}

string Medicine::GetDosageUnit() const
{
    return m_dosageUnit;
}

void Medicine::SetDosageUnit(const string& _dosageUnit)
{
    m_dosageUnit = _dosageUnit;
    m_dosageUnitHasBeenSet = true;
}

bool Medicine::DosageUnitHasBeenSet() const
{
    return m_dosageUnitHasBeenSet;
}

string Medicine::GetPackingUnit() const
{
    return m_packingUnit;
}

void Medicine::SetPackingUnit(const string& _packingUnit)
{
    m_packingUnit = _packingUnit;
    m_packingUnitHasBeenSet = true;
}

bool Medicine::PackingUnitHasBeenSet() const
{
    return m_packingUnitHasBeenSet;
}

