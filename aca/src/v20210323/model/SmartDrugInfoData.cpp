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

#include <tencentcloud/aca/v20210323/model/SmartDrugInfoData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

SmartDrugInfoData::SmartDrugInfoData() :
    m_drugNameHasBeenSet(false),
    m_specificationsHasBeenSet(false),
    m_approvalNumberHasBeenSet(false),
    m_manufacturerHasBeenSet(false),
    m_drugIdHasBeenSet(false),
    m_diagnosisHasBeenSet(false),
    m_ageHasBeenSet(false)
{
}

CoreInternalOutcome SmartDrugInfoData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DrugName") && !value["DrugName"].IsNull())
    {
        if (!value["DrugName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoData.DrugName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drugName = string(value["DrugName"].GetString());
        m_drugNameHasBeenSet = true;
    }

    if (value.HasMember("Specifications") && !value["Specifications"].IsNull())
    {
        if (!value["Specifications"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoData.Specifications` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specifications = string(value["Specifications"].GetString());
        m_specificationsHasBeenSet = true;
    }

    if (value.HasMember("ApprovalNumber") && !value["ApprovalNumber"].IsNull())
    {
        if (!value["ApprovalNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoData.ApprovalNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approvalNumber = string(value["ApprovalNumber"].GetString());
        m_approvalNumberHasBeenSet = true;
    }

    if (value.HasMember("Manufacturer") && !value["Manufacturer"].IsNull())
    {
        if (!value["Manufacturer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoData.Manufacturer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manufacturer = string(value["Manufacturer"].GetString());
        m_manufacturerHasBeenSet = true;
    }

    if (value.HasMember("DrugId") && !value["DrugId"].IsNull())
    {
        if (!value["DrugId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoData.DrugId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drugId = string(value["DrugId"].GetString());
        m_drugIdHasBeenSet = true;
    }

    if (value.HasMember("Diagnosis") && !value["Diagnosis"].IsNull())
    {
        if (!value["Diagnosis"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoData.Diagnosis` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diagnosis = string(value["Diagnosis"].GetString());
        m_diagnosisHasBeenSet = true;
    }

    if (value.HasMember("Age") && !value["Age"].IsNull())
    {
        if (!value["Age"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SmartDrugInfoData.Age` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_age = value["Age"].GetDouble();
        m_ageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmartDrugInfoData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_diagnosisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Diagnosis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diagnosis.c_str(), allocator).Move(), allocator);
    }

    if (m_ageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Age";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_age, allocator);
    }

}


string SmartDrugInfoData::GetDrugName() const
{
    return m_drugName;
}

void SmartDrugInfoData::SetDrugName(const string& _drugName)
{
    m_drugName = _drugName;
    m_drugNameHasBeenSet = true;
}

bool SmartDrugInfoData::DrugNameHasBeenSet() const
{
    return m_drugNameHasBeenSet;
}

string SmartDrugInfoData::GetSpecifications() const
{
    return m_specifications;
}

void SmartDrugInfoData::SetSpecifications(const string& _specifications)
{
    m_specifications = _specifications;
    m_specificationsHasBeenSet = true;
}

bool SmartDrugInfoData::SpecificationsHasBeenSet() const
{
    return m_specificationsHasBeenSet;
}

string SmartDrugInfoData::GetApprovalNumber() const
{
    return m_approvalNumber;
}

void SmartDrugInfoData::SetApprovalNumber(const string& _approvalNumber)
{
    m_approvalNumber = _approvalNumber;
    m_approvalNumberHasBeenSet = true;
}

bool SmartDrugInfoData::ApprovalNumberHasBeenSet() const
{
    return m_approvalNumberHasBeenSet;
}

string SmartDrugInfoData::GetManufacturer() const
{
    return m_manufacturer;
}

void SmartDrugInfoData::SetManufacturer(const string& _manufacturer)
{
    m_manufacturer = _manufacturer;
    m_manufacturerHasBeenSet = true;
}

bool SmartDrugInfoData::ManufacturerHasBeenSet() const
{
    return m_manufacturerHasBeenSet;
}

string SmartDrugInfoData::GetDrugId() const
{
    return m_drugId;
}

void SmartDrugInfoData::SetDrugId(const string& _drugId)
{
    m_drugId = _drugId;
    m_drugIdHasBeenSet = true;
}

bool SmartDrugInfoData::DrugIdHasBeenSet() const
{
    return m_drugIdHasBeenSet;
}

string SmartDrugInfoData::GetDiagnosis() const
{
    return m_diagnosis;
}

void SmartDrugInfoData::SetDiagnosis(const string& _diagnosis)
{
    m_diagnosis = _diagnosis;
    m_diagnosisHasBeenSet = true;
}

bool SmartDrugInfoData::DiagnosisHasBeenSet() const
{
    return m_diagnosisHasBeenSet;
}

double SmartDrugInfoData::GetAge() const
{
    return m_age;
}

void SmartDrugInfoData::SetAge(const double& _age)
{
    m_age = _age;
    m_ageHasBeenSet = true;
}

bool SmartDrugInfoData::AgeHasBeenSet() const
{
    return m_ageHasBeenSet;
}

