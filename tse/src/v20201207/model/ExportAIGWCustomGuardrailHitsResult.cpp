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

#include <tencentcloud/tse/v20201207/model/ExportAIGWCustomGuardrailHitsResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

ExportAIGWCustomGuardrailHitsResult::ExportAIGWCustomGuardrailHitsResult() :
    m_formatHasBeenSet(false),
    m_rowCountHasBeenSet(false),
    m_truncatedHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

CoreInternalOutcome ExportAIGWCustomGuardrailHitsResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Format") && !value["Format"].IsNull())
    {
        if (!value["Format"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportAIGWCustomGuardrailHitsResult.Format` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_format = string(value["Format"].GetString());
        m_formatHasBeenSet = true;
    }

    if (value.HasMember("RowCount") && !value["RowCount"].IsNull())
    {
        if (!value["RowCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExportAIGWCustomGuardrailHitsResult.RowCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rowCount = value["RowCount"].GetInt64();
        m_rowCountHasBeenSet = true;
    }

    if (value.HasMember("Truncated") && !value["Truncated"].IsNull())
    {
        if (!value["Truncated"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ExportAIGWCustomGuardrailHitsResult.Truncated` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_truncated = value["Truncated"].GetBool();
        m_truncatedHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportAIGWCustomGuardrailHitsResult.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExportAIGWCustomGuardrailHitsResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_rowCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RowCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rowCount, allocator);
    }

    if (m_truncatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Truncated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_truncated, allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

}


string ExportAIGWCustomGuardrailHitsResult::GetFormat() const
{
    return m_format;
}

void ExportAIGWCustomGuardrailHitsResult::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool ExportAIGWCustomGuardrailHitsResult::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

int64_t ExportAIGWCustomGuardrailHitsResult::GetRowCount() const
{
    return m_rowCount;
}

void ExportAIGWCustomGuardrailHitsResult::SetRowCount(const int64_t& _rowCount)
{
    m_rowCount = _rowCount;
    m_rowCountHasBeenSet = true;
}

bool ExportAIGWCustomGuardrailHitsResult::RowCountHasBeenSet() const
{
    return m_rowCountHasBeenSet;
}

bool ExportAIGWCustomGuardrailHitsResult::GetTruncated() const
{
    return m_truncated;
}

void ExportAIGWCustomGuardrailHitsResult::SetTruncated(const bool& _truncated)
{
    m_truncated = _truncated;
    m_truncatedHasBeenSet = true;
}

bool ExportAIGWCustomGuardrailHitsResult::TruncatedHasBeenSet() const
{
    return m_truncatedHasBeenSet;
}

string ExportAIGWCustomGuardrailHitsResult::GetContent() const
{
    return m_content;
}

void ExportAIGWCustomGuardrailHitsResult::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ExportAIGWCustomGuardrailHitsResult::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

