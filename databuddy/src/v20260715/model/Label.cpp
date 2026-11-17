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

#include <tencentcloud/databuddy/v20260715/model/Label.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

Label::Label() :
    m_columnNameHasBeenSet(false),
    m_missingValueImputationHasBeenSet(false),
    m_formatHasBeenSet(false)
{
}

CoreInternalOutcome Label::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ColumnName") && !value["ColumnName"].IsNull())
    {
        if (!value["ColumnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Label.ColumnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_columnName = string(value["ColumnName"].GetString());
        m_columnNameHasBeenSet = true;
    }

    if (value.HasMember("MissingValueImputation") && !value["MissingValueImputation"].IsNull())
    {
        if (!value["MissingValueImputation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Label.MissingValueImputation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_missingValueImputation = string(value["MissingValueImputation"].GetString());
        m_missingValueImputationHasBeenSet = true;
    }

    if (value.HasMember("Format") && !value["Format"].IsNull())
    {
        if (!value["Format"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Label.Format` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_format = string(value["Format"].GetString());
        m_formatHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Label::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_columnNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_columnName.c_str(), allocator).Move(), allocator);
    }

    if (m_missingValueImputationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MissingValueImputation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_missingValueImputation.c_str(), allocator).Move(), allocator);
    }

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

}


string Label::GetColumnName() const
{
    return m_columnName;
}

void Label::SetColumnName(const string& _columnName)
{
    m_columnName = _columnName;
    m_columnNameHasBeenSet = true;
}

bool Label::ColumnNameHasBeenSet() const
{
    return m_columnNameHasBeenSet;
}

string Label::GetMissingValueImputation() const
{
    return m_missingValueImputation;
}

void Label::SetMissingValueImputation(const string& _missingValueImputation)
{
    m_missingValueImputation = _missingValueImputation;
    m_missingValueImputationHasBeenSet = true;
}

bool Label::MissingValueImputationHasBeenSet() const
{
    return m_missingValueImputationHasBeenSet;
}

string Label::GetFormat() const
{
    return m_format;
}

void Label::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool Label::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

