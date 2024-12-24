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

#include <tencentcloud/aca/v20210323/model/DurgPropertyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

DurgPropertyInfo::DurgPropertyInfo() :
    m_drugTypeHasBeenSet(false),
    m_antibacterialTypeHasBeenSet(false),
    m_antibacterialClassHasBeenSet(false),
    m_speciallyDrugTypeHasBeenSet(false),
    m_isBasicDrugHasBeenSet(false),
    m_chargeTypeHasBeenSet(false)
{
}

CoreInternalOutcome DurgPropertyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DrugType") && !value["DrugType"].IsNull())
    {
        if (!value["DrugType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DurgPropertyInfo.DrugType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_drugType = value["DrugType"].GetInt64();
        m_drugTypeHasBeenSet = true;
    }

    if (value.HasMember("AntibacterialType") && !value["AntibacterialType"].IsNull())
    {
        if (!value["AntibacterialType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DurgPropertyInfo.AntibacterialType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_antibacterialType = value["AntibacterialType"].GetInt64();
        m_antibacterialTypeHasBeenSet = true;
    }

    if (value.HasMember("AntibacterialClass") && !value["AntibacterialClass"].IsNull())
    {
        if (!value["AntibacterialClass"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DurgPropertyInfo.AntibacterialClass` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_antibacterialClass = value["AntibacterialClass"].GetInt64();
        m_antibacterialClassHasBeenSet = true;
    }

    if (value.HasMember("SpeciallyDrugType") && !value["SpeciallyDrugType"].IsNull())
    {
        if (!value["SpeciallyDrugType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DurgPropertyInfo.SpeciallyDrugType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_speciallyDrugType = value["SpeciallyDrugType"].GetInt64();
        m_speciallyDrugTypeHasBeenSet = true;
    }

    if (value.HasMember("IsBasicDrug") && !value["IsBasicDrug"].IsNull())
    {
        if (!value["IsBasicDrug"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DurgPropertyInfo.IsBasicDrug` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isBasicDrug = value["IsBasicDrug"].GetInt64();
        m_isBasicDrugHasBeenSet = true;
    }

    if (value.HasMember("ChargeType") && !value["ChargeType"].IsNull())
    {
        if (!value["ChargeType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DurgPropertyInfo.ChargeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_chargeType = value["ChargeType"].GetInt64();
        m_chargeTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DurgPropertyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_drugTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_drugType, allocator);
    }

    if (m_antibacterialTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AntibacterialType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_antibacterialType, allocator);
    }

    if (m_antibacterialClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AntibacterialClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_antibacterialClass, allocator);
    }

    if (m_speciallyDrugTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpeciallyDrugType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_speciallyDrugType, allocator);
    }

    if (m_isBasicDrugHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsBasicDrug";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isBasicDrug, allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chargeType, allocator);
    }

}


int64_t DurgPropertyInfo::GetDrugType() const
{
    return m_drugType;
}

void DurgPropertyInfo::SetDrugType(const int64_t& _drugType)
{
    m_drugType = _drugType;
    m_drugTypeHasBeenSet = true;
}

bool DurgPropertyInfo::DrugTypeHasBeenSet() const
{
    return m_drugTypeHasBeenSet;
}

int64_t DurgPropertyInfo::GetAntibacterialType() const
{
    return m_antibacterialType;
}

void DurgPropertyInfo::SetAntibacterialType(const int64_t& _antibacterialType)
{
    m_antibacterialType = _antibacterialType;
    m_antibacterialTypeHasBeenSet = true;
}

bool DurgPropertyInfo::AntibacterialTypeHasBeenSet() const
{
    return m_antibacterialTypeHasBeenSet;
}

int64_t DurgPropertyInfo::GetAntibacterialClass() const
{
    return m_antibacterialClass;
}

void DurgPropertyInfo::SetAntibacterialClass(const int64_t& _antibacterialClass)
{
    m_antibacterialClass = _antibacterialClass;
    m_antibacterialClassHasBeenSet = true;
}

bool DurgPropertyInfo::AntibacterialClassHasBeenSet() const
{
    return m_antibacterialClassHasBeenSet;
}

int64_t DurgPropertyInfo::GetSpeciallyDrugType() const
{
    return m_speciallyDrugType;
}

void DurgPropertyInfo::SetSpeciallyDrugType(const int64_t& _speciallyDrugType)
{
    m_speciallyDrugType = _speciallyDrugType;
    m_speciallyDrugTypeHasBeenSet = true;
}

bool DurgPropertyInfo::SpeciallyDrugTypeHasBeenSet() const
{
    return m_speciallyDrugTypeHasBeenSet;
}

int64_t DurgPropertyInfo::GetIsBasicDrug() const
{
    return m_isBasicDrug;
}

void DurgPropertyInfo::SetIsBasicDrug(const int64_t& _isBasicDrug)
{
    m_isBasicDrug = _isBasicDrug;
    m_isBasicDrugHasBeenSet = true;
}

bool DurgPropertyInfo::IsBasicDrugHasBeenSet() const
{
    return m_isBasicDrugHasBeenSet;
}

int64_t DurgPropertyInfo::GetChargeType() const
{
    return m_chargeType;
}

void DurgPropertyInfo::SetChargeType(const int64_t& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool DurgPropertyInfo::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

