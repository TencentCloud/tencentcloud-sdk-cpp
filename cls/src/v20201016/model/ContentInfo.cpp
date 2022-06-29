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

#include <tencentcloud/cls/v20201016/model/ContentInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ContentInfo::ContentInfo() :
    m_formatHasBeenSet(false),
    m_csvHasBeenSet(false),
    m_jsonHasBeenSet(false),
    m_parquetHasBeenSet(false)
{
}

CoreInternalOutcome ContentInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Format") && !value["Format"].IsNull())
    {
        if (!value["Format"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContentInfo.Format` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_format = string(value["Format"].GetString());
        m_formatHasBeenSet = true;
    }

    if (value.HasMember("Csv") && !value["Csv"].IsNull())
    {
        if (!value["Csv"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ContentInfo.Csv` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_csv.Deserialize(value["Csv"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_csvHasBeenSet = true;
    }

    if (value.HasMember("Json") && !value["Json"].IsNull())
    {
        if (!value["Json"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ContentInfo.Json` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_json.Deserialize(value["Json"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_jsonHasBeenSet = true;
    }

    if (value.HasMember("Parquet") && !value["Parquet"].IsNull())
    {
        if (!value["Parquet"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ContentInfo.Parquet` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_parquet.Deserialize(value["Parquet"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_parquetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContentInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_csvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Csv";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_csv.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_jsonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Json";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_json.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_parquetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Parquet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_parquet.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ContentInfo::GetFormat() const
{
    return m_format;
}

void ContentInfo::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool ContentInfo::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

CsvInfo ContentInfo::GetCsv() const
{
    return m_csv;
}

void ContentInfo::SetCsv(const CsvInfo& _csv)
{
    m_csv = _csv;
    m_csvHasBeenSet = true;
}

bool ContentInfo::CsvHasBeenSet() const
{
    return m_csvHasBeenSet;
}

JsonInfo ContentInfo::GetJson() const
{
    return m_json;
}

void ContentInfo::SetJson(const JsonInfo& _json)
{
    m_json = _json;
    m_jsonHasBeenSet = true;
}

bool ContentInfo::JsonHasBeenSet() const
{
    return m_jsonHasBeenSet;
}

ParquetInfo ContentInfo::GetParquet() const
{
    return m_parquet;
}

void ContentInfo::SetParquet(const ParquetInfo& _parquet)
{
    m_parquet = _parquet;
    m_parquetHasBeenSet = true;
}

bool ContentInfo::ParquetHasBeenSet() const
{
    return m_parquetHasBeenSet;
}

