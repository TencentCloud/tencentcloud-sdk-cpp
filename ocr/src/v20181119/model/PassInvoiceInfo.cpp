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

#include <tencentcloud/ocr/v20181119/model/PassInvoiceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

PassInvoiceInfo::PassInvoiceInfo() :
    m_numberPlateHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_passDateBeginHasBeenSet(false),
    m_passDateEndHasBeenSet(false),
    m_taxClassifyCodeHasBeenSet(false),
    m_carTypeHasBeenSet(false),
    m_plateNumberHasBeenSet(false)
{
}

CoreInternalOutcome PassInvoiceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NumberPlate") && !value["NumberPlate"].IsNull())
    {
        if (!value["NumberPlate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PassInvoiceInfo.NumberPlate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_numberPlate = string(value["NumberPlate"].GetString());
        m_numberPlateHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PassInvoiceInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("PassDateBegin") && !value["PassDateBegin"].IsNull())
    {
        if (!value["PassDateBegin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PassInvoiceInfo.PassDateBegin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passDateBegin = string(value["PassDateBegin"].GetString());
        m_passDateBeginHasBeenSet = true;
    }

    if (value.HasMember("PassDateEnd") && !value["PassDateEnd"].IsNull())
    {
        if (!value["PassDateEnd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PassInvoiceInfo.PassDateEnd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passDateEnd = string(value["PassDateEnd"].GetString());
        m_passDateEndHasBeenSet = true;
    }

    if (value.HasMember("TaxClassifyCode") && !value["TaxClassifyCode"].IsNull())
    {
        if (!value["TaxClassifyCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PassInvoiceInfo.TaxClassifyCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxClassifyCode = string(value["TaxClassifyCode"].GetString());
        m_taxClassifyCodeHasBeenSet = true;
    }

    if (value.HasMember("CarType") && !value["CarType"].IsNull())
    {
        if (!value["CarType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PassInvoiceInfo.CarType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_carType = string(value["CarType"].GetString());
        m_carTypeHasBeenSet = true;
    }

    if (value.HasMember("PlateNumber") && !value["PlateNumber"].IsNull())
    {
        if (!value["PlateNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PassInvoiceInfo.PlateNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_plateNumber = string(value["PlateNumber"].GetString());
        m_plateNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PassInvoiceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_numberPlateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumberPlate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_numberPlate.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_passDateBeginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassDateBegin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_passDateBegin.c_str(), allocator).Move(), allocator);
    }

    if (m_passDateEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassDateEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_passDateEnd.c_str(), allocator).Move(), allocator);
    }

    if (m_taxClassifyCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxClassifyCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxClassifyCode.c_str(), allocator).Move(), allocator);
    }

    if (m_carTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CarType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_carType.c_str(), allocator).Move(), allocator);
    }

    if (m_plateNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlateNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_plateNumber.c_str(), allocator).Move(), allocator);
    }

}


string PassInvoiceInfo::GetNumberPlate() const
{
    return m_numberPlate;
}

void PassInvoiceInfo::SetNumberPlate(const string& _numberPlate)
{
    m_numberPlate = _numberPlate;
    m_numberPlateHasBeenSet = true;
}

bool PassInvoiceInfo::NumberPlateHasBeenSet() const
{
    return m_numberPlateHasBeenSet;
}

string PassInvoiceInfo::GetType() const
{
    return m_type;
}

void PassInvoiceInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool PassInvoiceInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string PassInvoiceInfo::GetPassDateBegin() const
{
    return m_passDateBegin;
}

void PassInvoiceInfo::SetPassDateBegin(const string& _passDateBegin)
{
    m_passDateBegin = _passDateBegin;
    m_passDateBeginHasBeenSet = true;
}

bool PassInvoiceInfo::PassDateBeginHasBeenSet() const
{
    return m_passDateBeginHasBeenSet;
}

string PassInvoiceInfo::GetPassDateEnd() const
{
    return m_passDateEnd;
}

void PassInvoiceInfo::SetPassDateEnd(const string& _passDateEnd)
{
    m_passDateEnd = _passDateEnd;
    m_passDateEndHasBeenSet = true;
}

bool PassInvoiceInfo::PassDateEndHasBeenSet() const
{
    return m_passDateEndHasBeenSet;
}

string PassInvoiceInfo::GetTaxClassifyCode() const
{
    return m_taxClassifyCode;
}

void PassInvoiceInfo::SetTaxClassifyCode(const string& _taxClassifyCode)
{
    m_taxClassifyCode = _taxClassifyCode;
    m_taxClassifyCodeHasBeenSet = true;
}

bool PassInvoiceInfo::TaxClassifyCodeHasBeenSet() const
{
    return m_taxClassifyCodeHasBeenSet;
}

string PassInvoiceInfo::GetCarType() const
{
    return m_carType;
}

void PassInvoiceInfo::SetCarType(const string& _carType)
{
    m_carType = _carType;
    m_carTypeHasBeenSet = true;
}

bool PassInvoiceInfo::CarTypeHasBeenSet() const
{
    return m_carTypeHasBeenSet;
}

string PassInvoiceInfo::GetPlateNumber() const
{
    return m_plateNumber;
}

void PassInvoiceInfo::SetPlateNumber(const string& _plateNumber)
{
    m_plateNumber = _plateNumber;
    m_plateNumberHasBeenSet = true;
}

bool PassInvoiceInfo::PlateNumberHasBeenSet() const
{
    return m_plateNumberHasBeenSet;
}

