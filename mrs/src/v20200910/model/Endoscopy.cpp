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

#include <tencentcloud/mrs/v20200910/model/Endoscopy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

Endoscopy::Endoscopy() :
    m_biopsyPartHasBeenSet(false),
    m_descHasBeenSet(false),
    m_summaryHasBeenSet(false),
    m_pageHasBeenSet(false)
{
}

CoreInternalOutcome Endoscopy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BiopsyPart") && !value["BiopsyPart"].IsNull())
    {
        if (!value["BiopsyPart"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Endoscopy.BiopsyPart` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_biopsyPart.Deserialize(value["BiopsyPart"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_biopsyPartHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Endoscopy.Desc` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `Endoscopy.Summary` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_summary.Deserialize(value["Summary"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_summaryHasBeenSet = true;
    }

    if (value.HasMember("Page") && !value["Page"].IsNull())
    {
        if (!value["Page"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Endoscopy.Page` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_page = value["Page"].GetInt64();
        m_pageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Endoscopy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_biopsyPartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BiopsyPart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_biopsyPart.ToJsonObject(value[key.c_str()], allocator);
    }

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

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_page, allocator);
    }

}


BiopsyPart Endoscopy::GetBiopsyPart() const
{
    return m_biopsyPart;
}

void Endoscopy::SetBiopsyPart(const BiopsyPart& _biopsyPart)
{
    m_biopsyPart = _biopsyPart;
    m_biopsyPartHasBeenSet = true;
}

bool Endoscopy::BiopsyPartHasBeenSet() const
{
    return m_biopsyPartHasBeenSet;
}

EndoscopyDesc Endoscopy::GetDesc() const
{
    return m_desc;
}

void Endoscopy::SetDesc(const EndoscopyDesc& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool Endoscopy::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

Summary Endoscopy::GetSummary() const
{
    return m_summary;
}

void Endoscopy::SetSummary(const Summary& _summary)
{
    m_summary = _summary;
    m_summaryHasBeenSet = true;
}

bool Endoscopy::SummaryHasBeenSet() const
{
    return m_summaryHasBeenSet;
}

int64_t Endoscopy::GetPage() const
{
    return m_page;
}

void Endoscopy::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool Endoscopy::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

