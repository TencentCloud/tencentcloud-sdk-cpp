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

#include <tencentcloud/dlc/v20210125/model/DataFormat.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DataFormat::DataFormat() :
    m_textFileHasBeenSet(false),
    m_cSVHasBeenSet(false),
    m_jsonHasBeenSet(false),
    m_parquetHasBeenSet(false),
    m_oRCHasBeenSet(false),
    m_aVROHasBeenSet(false)
{
}

CoreInternalOutcome DataFormat::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TextFile") && !value["TextFile"].IsNull())
    {
        if (!value["TextFile"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DataFormat.TextFile` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_textFile.Deserialize(value["TextFile"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_textFileHasBeenSet = true;
    }

    if (value.HasMember("CSV") && !value["CSV"].IsNull())
    {
        if (!value["CSV"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DataFormat.CSV` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cSV.Deserialize(value["CSV"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cSVHasBeenSet = true;
    }

    if (value.HasMember("Json") && !value["Json"].IsNull())
    {
        if (!value["Json"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DataFormat.Json` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `DataFormat.Parquet` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_parquet.Deserialize(value["Parquet"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_parquetHasBeenSet = true;
    }

    if (value.HasMember("ORC") && !value["ORC"].IsNull())
    {
        if (!value["ORC"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DataFormat.ORC` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_oRC.Deserialize(value["ORC"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_oRCHasBeenSet = true;
    }

    if (value.HasMember("AVRO") && !value["AVRO"].IsNull())
    {
        if (!value["AVRO"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DataFormat.AVRO` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aVRO.Deserialize(value["AVRO"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aVROHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataFormat::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextFile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_textFile.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cSVHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CSV";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cSV.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_oRCHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ORC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_oRC.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aVROHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AVRO";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aVRO.ToJsonObject(value[key.c_str()], allocator);
    }

}


TextFile DataFormat::GetTextFile() const
{
    return m_textFile;
}

void DataFormat::SetTextFile(const TextFile& _textFile)
{
    m_textFile = _textFile;
    m_textFileHasBeenSet = true;
}

bool DataFormat::TextFileHasBeenSet() const
{
    return m_textFileHasBeenSet;
}

CSV DataFormat::GetCSV() const
{
    return m_cSV;
}

void DataFormat::SetCSV(const CSV& _cSV)
{
    m_cSV = _cSV;
    m_cSVHasBeenSet = true;
}

bool DataFormat::CSVHasBeenSet() const
{
    return m_cSVHasBeenSet;
}

Other DataFormat::GetJson() const
{
    return m_json;
}

void DataFormat::SetJson(const Other& _json)
{
    m_json = _json;
    m_jsonHasBeenSet = true;
}

bool DataFormat::JsonHasBeenSet() const
{
    return m_jsonHasBeenSet;
}

Other DataFormat::GetParquet() const
{
    return m_parquet;
}

void DataFormat::SetParquet(const Other& _parquet)
{
    m_parquet = _parquet;
    m_parquetHasBeenSet = true;
}

bool DataFormat::ParquetHasBeenSet() const
{
    return m_parquetHasBeenSet;
}

Other DataFormat::GetORC() const
{
    return m_oRC;
}

void DataFormat::SetORC(const Other& _oRC)
{
    m_oRC = _oRC;
    m_oRCHasBeenSet = true;
}

bool DataFormat::ORCHasBeenSet() const
{
    return m_oRCHasBeenSet;
}

Other DataFormat::GetAVRO() const
{
    return m_aVRO;
}

void DataFormat::SetAVRO(const Other& _aVRO)
{
    m_aVRO = _aVRO;
    m_aVROHasBeenSet = true;
}

bool DataFormat::AVROHasBeenSet() const
{
    return m_aVROHasBeenSet;
}

