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

#include <tencentcloud/dlc/v20210125/model/CSV.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CSV::CSV() :
    m_codeCompressHasBeenSet(false),
    m_cSVSerdeHasBeenSet(false),
    m_headLinesHasBeenSet(false),
    m_formatHasBeenSet(false)
{
}

CoreInternalOutcome CSV::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CodeCompress") && !value["CodeCompress"].IsNull())
    {
        if (!value["CodeCompress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CSV.CodeCompress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeCompress = string(value["CodeCompress"].GetString());
        m_codeCompressHasBeenSet = true;
    }

    if (value.HasMember("CSVSerde") && !value["CSVSerde"].IsNull())
    {
        if (!value["CSVSerde"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CSV.CSVSerde` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cSVSerde.Deserialize(value["CSVSerde"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cSVSerdeHasBeenSet = true;
    }

    if (value.HasMember("HeadLines") && !value["HeadLines"].IsNull())
    {
        if (!value["HeadLines"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CSV.HeadLines` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_headLines = value["HeadLines"].GetInt64();
        m_headLinesHasBeenSet = true;
    }

    if (value.HasMember("Format") && !value["Format"].IsNull())
    {
        if (!value["Format"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CSV.Format` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_format = string(value["Format"].GetString());
        m_formatHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CSV::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeCompressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeCompress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeCompress.c_str(), allocator).Move(), allocator);
    }

    if (m_cSVSerdeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CSVSerde";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cSVSerde.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_headLinesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadLines";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_headLines, allocator);
    }

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

}


string CSV::GetCodeCompress() const
{
    return m_codeCompress;
}

void CSV::SetCodeCompress(const string& _codeCompress)
{
    m_codeCompress = _codeCompress;
    m_codeCompressHasBeenSet = true;
}

bool CSV::CodeCompressHasBeenSet() const
{
    return m_codeCompressHasBeenSet;
}

CSVSerde CSV::GetCSVSerde() const
{
    return m_cSVSerde;
}

void CSV::SetCSVSerde(const CSVSerde& _cSVSerde)
{
    m_cSVSerde = _cSVSerde;
    m_cSVSerdeHasBeenSet = true;
}

bool CSV::CSVSerdeHasBeenSet() const
{
    return m_cSVSerdeHasBeenSet;
}

int64_t CSV::GetHeadLines() const
{
    return m_headLines;
}

void CSV::SetHeadLines(const int64_t& _headLines)
{
    m_headLines = _headLines;
    m_headLinesHasBeenSet = true;
}

bool CSV::HeadLinesHasBeenSet() const
{
    return m_headLinesHasBeenSet;
}

string CSV::GetFormat() const
{
    return m_format;
}

void CSV::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool CSV::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

