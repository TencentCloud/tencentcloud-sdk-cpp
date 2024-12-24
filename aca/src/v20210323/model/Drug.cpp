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

#include <tencentcloud/aca/v20210323/model/Drug.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

Drug::Drug() :
    m_drugOrgIdHasBeenSet(false),
    m_drugNameHasBeenSet(false),
    m_drugCommodityNameHasBeenSet(false),
    m_specificationsHasBeenSet(false),
    m_approvalNumberHasBeenSet(false),
    m_manufacturerHasBeenSet(false),
    m_dosageFormHasBeenSet(false),
    m_unuseHasBeenSet(false),
    m_dosageFormCodeHasBeenSet(false),
    m_definedDailyDoseHasBeenSet(false),
    m_amountHasBeenSet(false),
    m_ybCodeHasBeenSet(false),
    m_drugBasicCodeHasBeenSet(false),
    m_propertyInfoHasBeenSet(false)
{
}

CoreInternalOutcome Drug::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DrugOrgId") && !value["DrugOrgId"].IsNull())
    {
        if (!value["DrugOrgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Drug.DrugOrgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drugOrgId = string(value["DrugOrgId"].GetString());
        m_drugOrgIdHasBeenSet = true;
    }

    if (value.HasMember("DrugName") && !value["DrugName"].IsNull())
    {
        if (!value["DrugName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Drug.DrugName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drugName = string(value["DrugName"].GetString());
        m_drugNameHasBeenSet = true;
    }

    if (value.HasMember("DrugCommodityName") && !value["DrugCommodityName"].IsNull())
    {
        if (!value["DrugCommodityName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Drug.DrugCommodityName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drugCommodityName = string(value["DrugCommodityName"].GetString());
        m_drugCommodityNameHasBeenSet = true;
    }

    if (value.HasMember("Specifications") && !value["Specifications"].IsNull())
    {
        if (!value["Specifications"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Drug.Specifications` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specifications = string(value["Specifications"].GetString());
        m_specificationsHasBeenSet = true;
    }

    if (value.HasMember("ApprovalNumber") && !value["ApprovalNumber"].IsNull())
    {
        if (!value["ApprovalNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Drug.ApprovalNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approvalNumber = string(value["ApprovalNumber"].GetString());
        m_approvalNumberHasBeenSet = true;
    }

    if (value.HasMember("Manufacturer") && !value["Manufacturer"].IsNull())
    {
        if (!value["Manufacturer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Drug.Manufacturer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manufacturer = string(value["Manufacturer"].GetString());
        m_manufacturerHasBeenSet = true;
    }

    if (value.HasMember("DosageForm") && !value["DosageForm"].IsNull())
    {
        if (!value["DosageForm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Drug.DosageForm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dosageForm = string(value["DosageForm"].GetString());
        m_dosageFormHasBeenSet = true;
    }

    if (value.HasMember("Unuse") && !value["Unuse"].IsNull())
    {
        if (!value["Unuse"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Drug.Unuse` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unuse = value["Unuse"].GetInt64();
        m_unuseHasBeenSet = true;
    }

    if (value.HasMember("DosageFormCode") && !value["DosageFormCode"].IsNull())
    {
        if (!value["DosageFormCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Drug.DosageFormCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dosageFormCode = string(value["DosageFormCode"].GetString());
        m_dosageFormCodeHasBeenSet = true;
    }

    if (value.HasMember("DefinedDailyDose") && !value["DefinedDailyDose"].IsNull())
    {
        if (!value["DefinedDailyDose"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Drug.DefinedDailyDose` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_definedDailyDose = string(value["DefinedDailyDose"].GetString());
        m_definedDailyDoseHasBeenSet = true;
    }

    if (value.HasMember("Amount") && !value["Amount"].IsNull())
    {
        if (!value["Amount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Drug.Amount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_amount = string(value["Amount"].GetString());
        m_amountHasBeenSet = true;
    }

    if (value.HasMember("YbCode") && !value["YbCode"].IsNull())
    {
        if (!value["YbCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Drug.YbCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ybCode = string(value["YbCode"].GetString());
        m_ybCodeHasBeenSet = true;
    }

    if (value.HasMember("DrugBasicCode") && !value["DrugBasicCode"].IsNull())
    {
        if (!value["DrugBasicCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Drug.DrugBasicCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drugBasicCode = string(value["DrugBasicCode"].GetString());
        m_drugBasicCodeHasBeenSet = true;
    }

    if (value.HasMember("PropertyInfo") && !value["PropertyInfo"].IsNull())
    {
        if (!value["PropertyInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Drug.PropertyInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_propertyInfo.Deserialize(value["PropertyInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_propertyInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Drug::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_drugOrgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugOrgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drugOrgId.c_str(), allocator).Move(), allocator);
    }

    if (m_drugNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drugName.c_str(), allocator).Move(), allocator);
    }

    if (m_drugCommodityNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugCommodityName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drugCommodityName.c_str(), allocator).Move(), allocator);
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

    if (m_dosageFormHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DosageForm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dosageForm.c_str(), allocator).Move(), allocator);
    }

    if (m_unuseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unuse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unuse, allocator);
    }

    if (m_dosageFormCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DosageFormCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dosageFormCode.c_str(), allocator).Move(), allocator);
    }

    if (m_definedDailyDoseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefinedDailyDose";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_definedDailyDose.c_str(), allocator).Move(), allocator);
    }

    if (m_amountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Amount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_amount.c_str(), allocator).Move(), allocator);
    }

    if (m_ybCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YbCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ybCode.c_str(), allocator).Move(), allocator);
    }

    if (m_drugBasicCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugBasicCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drugBasicCode.c_str(), allocator).Move(), allocator);
    }

    if (m_propertyInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PropertyInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_propertyInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string Drug::GetDrugOrgId() const
{
    return m_drugOrgId;
}

void Drug::SetDrugOrgId(const string& _drugOrgId)
{
    m_drugOrgId = _drugOrgId;
    m_drugOrgIdHasBeenSet = true;
}

bool Drug::DrugOrgIdHasBeenSet() const
{
    return m_drugOrgIdHasBeenSet;
}

string Drug::GetDrugName() const
{
    return m_drugName;
}

void Drug::SetDrugName(const string& _drugName)
{
    m_drugName = _drugName;
    m_drugNameHasBeenSet = true;
}

bool Drug::DrugNameHasBeenSet() const
{
    return m_drugNameHasBeenSet;
}

string Drug::GetDrugCommodityName() const
{
    return m_drugCommodityName;
}

void Drug::SetDrugCommodityName(const string& _drugCommodityName)
{
    m_drugCommodityName = _drugCommodityName;
    m_drugCommodityNameHasBeenSet = true;
}

bool Drug::DrugCommodityNameHasBeenSet() const
{
    return m_drugCommodityNameHasBeenSet;
}

string Drug::GetSpecifications() const
{
    return m_specifications;
}

void Drug::SetSpecifications(const string& _specifications)
{
    m_specifications = _specifications;
    m_specificationsHasBeenSet = true;
}

bool Drug::SpecificationsHasBeenSet() const
{
    return m_specificationsHasBeenSet;
}

string Drug::GetApprovalNumber() const
{
    return m_approvalNumber;
}

void Drug::SetApprovalNumber(const string& _approvalNumber)
{
    m_approvalNumber = _approvalNumber;
    m_approvalNumberHasBeenSet = true;
}

bool Drug::ApprovalNumberHasBeenSet() const
{
    return m_approvalNumberHasBeenSet;
}

string Drug::GetManufacturer() const
{
    return m_manufacturer;
}

void Drug::SetManufacturer(const string& _manufacturer)
{
    m_manufacturer = _manufacturer;
    m_manufacturerHasBeenSet = true;
}

bool Drug::ManufacturerHasBeenSet() const
{
    return m_manufacturerHasBeenSet;
}

string Drug::GetDosageForm() const
{
    return m_dosageForm;
}

void Drug::SetDosageForm(const string& _dosageForm)
{
    m_dosageForm = _dosageForm;
    m_dosageFormHasBeenSet = true;
}

bool Drug::DosageFormHasBeenSet() const
{
    return m_dosageFormHasBeenSet;
}

int64_t Drug::GetUnuse() const
{
    return m_unuse;
}

void Drug::SetUnuse(const int64_t& _unuse)
{
    m_unuse = _unuse;
    m_unuseHasBeenSet = true;
}

bool Drug::UnuseHasBeenSet() const
{
    return m_unuseHasBeenSet;
}

string Drug::GetDosageFormCode() const
{
    return m_dosageFormCode;
}

void Drug::SetDosageFormCode(const string& _dosageFormCode)
{
    m_dosageFormCode = _dosageFormCode;
    m_dosageFormCodeHasBeenSet = true;
}

bool Drug::DosageFormCodeHasBeenSet() const
{
    return m_dosageFormCodeHasBeenSet;
}

string Drug::GetDefinedDailyDose() const
{
    return m_definedDailyDose;
}

void Drug::SetDefinedDailyDose(const string& _definedDailyDose)
{
    m_definedDailyDose = _definedDailyDose;
    m_definedDailyDoseHasBeenSet = true;
}

bool Drug::DefinedDailyDoseHasBeenSet() const
{
    return m_definedDailyDoseHasBeenSet;
}

string Drug::GetAmount() const
{
    return m_amount;
}

void Drug::SetAmount(const string& _amount)
{
    m_amount = _amount;
    m_amountHasBeenSet = true;
}

bool Drug::AmountHasBeenSet() const
{
    return m_amountHasBeenSet;
}

string Drug::GetYbCode() const
{
    return m_ybCode;
}

void Drug::SetYbCode(const string& _ybCode)
{
    m_ybCode = _ybCode;
    m_ybCodeHasBeenSet = true;
}

bool Drug::YbCodeHasBeenSet() const
{
    return m_ybCodeHasBeenSet;
}

string Drug::GetDrugBasicCode() const
{
    return m_drugBasicCode;
}

void Drug::SetDrugBasicCode(const string& _drugBasicCode)
{
    m_drugBasicCode = _drugBasicCode;
    m_drugBasicCodeHasBeenSet = true;
}

bool Drug::DrugBasicCodeHasBeenSet() const
{
    return m_drugBasicCodeHasBeenSet;
}

DurgPropertyInfo Drug::GetPropertyInfo() const
{
    return m_propertyInfo;
}

void Drug::SetPropertyInfo(const DurgPropertyInfo& _propertyInfo)
{
    m_propertyInfo = _propertyInfo;
    m_propertyInfoHasBeenSet = true;
}

bool Drug::PropertyInfoHasBeenSet() const
{
    return m_propertyInfoHasBeenSet;
}

