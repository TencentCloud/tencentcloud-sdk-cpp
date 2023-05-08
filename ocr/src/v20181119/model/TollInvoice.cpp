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

#include <tencentcloud/ocr/v20181119/model/TollInvoice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

TollInvoice::TollInvoice() :
    m_titleHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_numberHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_entranceHasBeenSet(false),
    m_exitHasBeenSet(false),
    m_highwayMarkHasBeenSet(false),
    m_qRCodeMarkHasBeenSet(false)
{
}

CoreInternalOutcome TollInvoice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TollInvoice.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TollInvoice.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Number") && !value["Number"].IsNull())
    {
        if (!value["Number"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TollInvoice.Number` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_number = string(value["Number"].GetString());
        m_numberHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TollInvoice.Total` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_total = string(value["Total"].GetString());
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("Kind") && !value["Kind"].IsNull())
    {
        if (!value["Kind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TollInvoice.Kind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kind = string(value["Kind"].GetString());
        m_kindHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TollInvoice.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TollInvoice.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("Entrance") && !value["Entrance"].IsNull())
    {
        if (!value["Entrance"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TollInvoice.Entrance` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entrance = string(value["Entrance"].GetString());
        m_entranceHasBeenSet = true;
    }

    if (value.HasMember("Exit") && !value["Exit"].IsNull())
    {
        if (!value["Exit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TollInvoice.Exit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exit = string(value["Exit"].GetString());
        m_exitHasBeenSet = true;
    }

    if (value.HasMember("HighwayMark") && !value["HighwayMark"].IsNull())
    {
        if (!value["HighwayMark"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TollInvoice.HighwayMark` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_highwayMark = value["HighwayMark"].GetInt64();
        m_highwayMarkHasBeenSet = true;
    }

    if (value.HasMember("QRCodeMark") && !value["QRCodeMark"].IsNull())
    {
        if (!value["QRCodeMark"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TollInvoice.QRCodeMark` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_qRCodeMark = value["QRCodeMark"].GetInt64();
        m_qRCodeMarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TollInvoice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kind.c_str(), allocator).Move(), allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_entranceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Entrance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entrance.c_str(), allocator).Move(), allocator);
    }

    if (m_exitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exit.c_str(), allocator).Move(), allocator);
    }

    if (m_highwayMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighwayMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highwayMark, allocator);
    }

    if (m_qRCodeMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QRCodeMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qRCodeMark, allocator);
    }

}


string TollInvoice::GetTitle() const
{
    return m_title;
}

void TollInvoice::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool TollInvoice::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string TollInvoice::GetCode() const
{
    return m_code;
}

void TollInvoice::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool TollInvoice::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string TollInvoice::GetNumber() const
{
    return m_number;
}

void TollInvoice::SetNumber(const string& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool TollInvoice::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

string TollInvoice::GetTotal() const
{
    return m_total;
}

void TollInvoice::SetTotal(const string& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool TollInvoice::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

string TollInvoice::GetKind() const
{
    return m_kind;
}

void TollInvoice::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool TollInvoice::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string TollInvoice::GetDate() const
{
    return m_date;
}

void TollInvoice::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool TollInvoice::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string TollInvoice::GetTime() const
{
    return m_time;
}

void TollInvoice::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool TollInvoice::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string TollInvoice::GetEntrance() const
{
    return m_entrance;
}

void TollInvoice::SetEntrance(const string& _entrance)
{
    m_entrance = _entrance;
    m_entranceHasBeenSet = true;
}

bool TollInvoice::EntranceHasBeenSet() const
{
    return m_entranceHasBeenSet;
}

string TollInvoice::GetExit() const
{
    return m_exit;
}

void TollInvoice::SetExit(const string& _exit)
{
    m_exit = _exit;
    m_exitHasBeenSet = true;
}

bool TollInvoice::ExitHasBeenSet() const
{
    return m_exitHasBeenSet;
}

int64_t TollInvoice::GetHighwayMark() const
{
    return m_highwayMark;
}

void TollInvoice::SetHighwayMark(const int64_t& _highwayMark)
{
    m_highwayMark = _highwayMark;
    m_highwayMarkHasBeenSet = true;
}

bool TollInvoice::HighwayMarkHasBeenSet() const
{
    return m_highwayMarkHasBeenSet;
}

int64_t TollInvoice::GetQRCodeMark() const
{
    return m_qRCodeMark;
}

void TollInvoice::SetQRCodeMark(const int64_t& _qRCodeMark)
{
    m_qRCodeMark = _qRCodeMark;
    m_qRCodeMarkHasBeenSet = true;
}

bool TollInvoice::QRCodeMarkHasBeenSet() const
{
    return m_qRCodeMarkHasBeenSet;
}

