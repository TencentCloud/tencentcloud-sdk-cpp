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

#include <tencentcloud/ocr/v20181119/model/QuotaInvoice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

QuotaInvoice::QuotaInvoice() :
    m_titleHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_numberHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_totalCnHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_qRCodeMarkHasBeenSet(false),
    m_companySealMarkHasBeenSet(false)
{
}

CoreInternalOutcome QuotaInvoice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaInvoice.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaInvoice.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Number") && !value["Number"].IsNull())
    {
        if (!value["Number"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaInvoice.Number` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_number = string(value["Number"].GetString());
        m_numberHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaInvoice.Total` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_total = string(value["Total"].GetString());
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("TotalCn") && !value["TotalCn"].IsNull())
    {
        if (!value["TotalCn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaInvoice.TotalCn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCn = string(value["TotalCn"].GetString());
        m_totalCnHasBeenSet = true;
    }

    if (value.HasMember("Kind") && !value["Kind"].IsNull())
    {
        if (!value["Kind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaInvoice.Kind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kind = string(value["Kind"].GetString());
        m_kindHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaInvoice.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaInvoice.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("QRCodeMark") && !value["QRCodeMark"].IsNull())
    {
        if (!value["QRCodeMark"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaInvoice.QRCodeMark` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_qRCodeMark = value["QRCodeMark"].GetInt64();
        m_qRCodeMarkHasBeenSet = true;
    }

    if (value.HasMember("CompanySealMark") && !value["CompanySealMark"].IsNull())
    {
        if (!value["CompanySealMark"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaInvoice.CompanySealMark` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_companySealMark = value["CompanySealMark"].GetInt64();
        m_companySealMarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QuotaInvoice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_numberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Number";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_number.c_str(), allocator).Move(), allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_total.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalCn.c_str(), allocator).Move(), allocator);
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kind.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_province.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_qRCodeMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QRCodeMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qRCodeMark, allocator);
    }

    if (m_companySealMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanySealMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_companySealMark, allocator);
    }

}


string QuotaInvoice::GetTitle() const
{
    return m_title;
}

void QuotaInvoice::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool QuotaInvoice::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string QuotaInvoice::GetCode() const
{
    return m_code;
}

void QuotaInvoice::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool QuotaInvoice::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string QuotaInvoice::GetNumber() const
{
    return m_number;
}

void QuotaInvoice::SetNumber(const string& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool QuotaInvoice::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

string QuotaInvoice::GetTotal() const
{
    return m_total;
}

void QuotaInvoice::SetTotal(const string& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool QuotaInvoice::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

string QuotaInvoice::GetTotalCn() const
{
    return m_totalCn;
}

void QuotaInvoice::SetTotalCn(const string& _totalCn)
{
    m_totalCn = _totalCn;
    m_totalCnHasBeenSet = true;
}

bool QuotaInvoice::TotalCnHasBeenSet() const
{
    return m_totalCnHasBeenSet;
}

string QuotaInvoice::GetKind() const
{
    return m_kind;
}

void QuotaInvoice::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool QuotaInvoice::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string QuotaInvoice::GetProvince() const
{
    return m_province;
}

void QuotaInvoice::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool QuotaInvoice::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string QuotaInvoice::GetCity() const
{
    return m_city;
}

void QuotaInvoice::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool QuotaInvoice::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

int64_t QuotaInvoice::GetQRCodeMark() const
{
    return m_qRCodeMark;
}

void QuotaInvoice::SetQRCodeMark(const int64_t& _qRCodeMark)
{
    m_qRCodeMark = _qRCodeMark;
    m_qRCodeMarkHasBeenSet = true;
}

bool QuotaInvoice::QRCodeMarkHasBeenSet() const
{
    return m_qRCodeMarkHasBeenSet;
}

int64_t QuotaInvoice::GetCompanySealMark() const
{
    return m_companySealMark;
}

void QuotaInvoice::SetCompanySealMark(const int64_t& _companySealMark)
{
    m_companySealMark = _companySealMark;
    m_companySealMarkHasBeenSet = true;
}

bool QuotaInvoice::CompanySealMarkHasBeenSet() const
{
    return m_companySealMarkHasBeenSet;
}

