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

#include <tencentcloud/mrs/v20200910/model/Maternity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

Maternity::Maternity() :
    m_descHasBeenSet(false),
    m_summaryHasBeenSet(false),
    m_ocrTextHasBeenSet(false),
    m_pageHasBeenSet(false)
{
}

CoreInternalOutcome Maternity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Maternity.Desc` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_desc.Deserialize(value["Desc"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_descHasBeenSet = true;
    }

    if (value.HasMember("Summary") && !value["Summary"].IsNull())
    {
        if (!value["Summary"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Maternity.Summary` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_summary.Deserialize(value["Summary"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_summaryHasBeenSet = true;
    }

    if (value.HasMember("OcrText") && !value["OcrText"].IsNull())
    {
        if (!value["OcrText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Maternity.OcrText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ocrText = string(value["OcrText"].GetString());
        m_ocrTextHasBeenSet = true;
    }

    if (value.HasMember("Page") && !value["Page"].IsNull())
    {
        if (!value["Page"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Maternity.Page` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_page = value["Page"].GetInt64();
        m_pageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Maternity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_desc.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_summaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Summary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_summary.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ocrTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OcrText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ocrText.c_str(), allocator).Move(), allocator);
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_page, allocator);
    }

}


MaternityDesc Maternity::GetDesc() const
{
    return m_desc;
}

void Maternity::SetDesc(const MaternityDesc& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool Maternity::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

MaternitySummary Maternity::GetSummary() const
{
    return m_summary;
}

void Maternity::SetSummary(const MaternitySummary& _summary)
{
    m_summary = _summary;
    m_summaryHasBeenSet = true;
}

bool Maternity::SummaryHasBeenSet() const
{
    return m_summaryHasBeenSet;
}

string Maternity::GetOcrText() const
{
    return m_ocrText;
}

void Maternity::SetOcrText(const string& _ocrText)
{
    m_ocrText = _ocrText;
    m_ocrTextHasBeenSet = true;
}

bool Maternity::OcrTextHasBeenSet() const
{
    return m_ocrTextHasBeenSet;
}

int64_t Maternity::GetPage() const
{
    return m_page;
}

void Maternity::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool Maternity::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

