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

#include <tencentcloud/aca/v20210323/model/IndicationsDrug.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

IndicationsDrug::IndicationsDrug() :
    m_drugNameHasBeenSet(false),
    m_specificationsHasBeenSet(false),
    m_approvalNumberHasBeenSet(false),
    m_manufacturerHasBeenSet(false),
    m_drugIdHasBeenSet(false),
    m_tradeNameHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome IndicationsDrug::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DrugName") && !value["DrugName"].IsNull())
    {
        if (!value["DrugName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicationsDrug.DrugName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drugName = string(value["DrugName"].GetString());
        m_drugNameHasBeenSet = true;
    }

    if (value.HasMember("Specifications") && !value["Specifications"].IsNull())
    {
        if (!value["Specifications"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicationsDrug.Specifications` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specifications = string(value["Specifications"].GetString());
        m_specificationsHasBeenSet = true;
    }

    if (value.HasMember("ApprovalNumber") && !value["ApprovalNumber"].IsNull())
    {
        if (!value["ApprovalNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicationsDrug.ApprovalNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approvalNumber = string(value["ApprovalNumber"].GetString());
        m_approvalNumberHasBeenSet = true;
    }

    if (value.HasMember("Manufacturer") && !value["Manufacturer"].IsNull())
    {
        if (!value["Manufacturer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicationsDrug.Manufacturer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manufacturer = string(value["Manufacturer"].GetString());
        m_manufacturerHasBeenSet = true;
    }

    if (value.HasMember("DrugId") && !value["DrugId"].IsNull())
    {
        if (!value["DrugId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicationsDrug.DrugId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drugId = string(value["DrugId"].GetString());
        m_drugIdHasBeenSet = true;
    }

    if (value.HasMember("TradeName") && !value["TradeName"].IsNull())
    {
        if (!value["TradeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicationsDrug.TradeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeName = string(value["TradeName"].GetString());
        m_tradeNameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IndicationsDrug.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IndicationsDrug::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_drugNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drugName.c_str(), allocator).Move(), allocator);
    }

    if (m_specificationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Specifications";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specifications.c_str(), allocator).Move(), allocator);
    }

    if (m_approvalNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approvalNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_manufacturerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Manufacturer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manufacturer.c_str(), allocator).Move(), allocator);
    }

    if (m_drugIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drugId.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tradeName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

}


string IndicationsDrug::GetDrugName() const
{
    return m_drugName;
}

void IndicationsDrug::SetDrugName(const string& _drugName)
{
    m_drugName = _drugName;
    m_drugNameHasBeenSet = true;
}

bool IndicationsDrug::DrugNameHasBeenSet() const
{
    return m_drugNameHasBeenSet;
}

string IndicationsDrug::GetSpecifications() const
{
    return m_specifications;
}

void IndicationsDrug::SetSpecifications(const string& _specifications)
{
    m_specifications = _specifications;
    m_specificationsHasBeenSet = true;
}

bool IndicationsDrug::SpecificationsHasBeenSet() const
{
    return m_specificationsHasBeenSet;
}

string IndicationsDrug::GetApprovalNumber() const
{
    return m_approvalNumber;
}

void IndicationsDrug::SetApprovalNumber(const string& _approvalNumber)
{
    m_approvalNumber = _approvalNumber;
    m_approvalNumberHasBeenSet = true;
}

bool IndicationsDrug::ApprovalNumberHasBeenSet() const
{
    return m_approvalNumberHasBeenSet;
}

string IndicationsDrug::GetManufacturer() const
{
    return m_manufacturer;
}

void IndicationsDrug::SetManufacturer(const string& _manufacturer)
{
    m_manufacturer = _manufacturer;
    m_manufacturerHasBeenSet = true;
}

bool IndicationsDrug::ManufacturerHasBeenSet() const
{
    return m_manufacturerHasBeenSet;
}

string IndicationsDrug::GetDrugId() const
{
    return m_drugId;
}

void IndicationsDrug::SetDrugId(const string& _drugId)
{
    m_drugId = _drugId;
    m_drugIdHasBeenSet = true;
}

bool IndicationsDrug::DrugIdHasBeenSet() const
{
    return m_drugIdHasBeenSet;
}

string IndicationsDrug::GetTradeName() const
{
    return m_tradeName;
}

void IndicationsDrug::SetTradeName(const string& _tradeName)
{
    m_tradeName = _tradeName;
    m_tradeNameHasBeenSet = true;
}

bool IndicationsDrug::TradeNameHasBeenSet() const
{
    return m_tradeNameHasBeenSet;
}

int64_t IndicationsDrug::GetType() const
{
    return m_type;
}

void IndicationsDrug::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool IndicationsDrug::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

