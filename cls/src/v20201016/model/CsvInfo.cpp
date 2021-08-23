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

#include <tencentcloud/cls/v20201016/model/CsvInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

CsvInfo::CsvInfo() :
    m_printKeyHasBeenSet(false),
    m_keysHasBeenSet(false),
    m_delimiterHasBeenSet(false),
    m_escapeCharHasBeenSet(false),
    m_nonExistingFieldHasBeenSet(false)
{
}

CoreInternalOutcome CsvInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PrintKey") && !value["PrintKey"].IsNull())
    {
        if (!value["PrintKey"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CsvInfo.PrintKey` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_printKey = value["PrintKey"].GetBool();
        m_printKeyHasBeenSet = true;
    }

    if (value.HasMember("Keys") && !value["Keys"].IsNull())
    {
        if (!value["Keys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CsvInfo.Keys` is not array type"));

        const rapidjson::Value &tmpValue = value["Keys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keys.push_back((*itr).GetString());
        }
        m_keysHasBeenSet = true;
    }

    if (value.HasMember("Delimiter") && !value["Delimiter"].IsNull())
    {
        if (!value["Delimiter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CsvInfo.Delimiter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_delimiter = string(value["Delimiter"].GetString());
        m_delimiterHasBeenSet = true;
    }

    if (value.HasMember("EscapeChar") && !value["EscapeChar"].IsNull())
    {
        if (!value["EscapeChar"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CsvInfo.EscapeChar` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_escapeChar = string(value["EscapeChar"].GetString());
        m_escapeCharHasBeenSet = true;
    }

    if (value.HasMember("NonExistingField") && !value["NonExistingField"].IsNull())
    {
        if (!value["NonExistingField"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CsvInfo.NonExistingField` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nonExistingField = string(value["NonExistingField"].GetString());
        m_nonExistingFieldHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CsvInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_printKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrintKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_printKey, allocator);
    }

    if (m_keysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_keys.begin(); itr != m_keys.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_delimiterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Delimiter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_delimiter.c_str(), allocator).Move(), allocator);
    }

    if (m_escapeCharHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EscapeChar";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_escapeChar.c_str(), allocator).Move(), allocator);
    }

    if (m_nonExistingFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NonExistingField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nonExistingField.c_str(), allocator).Move(), allocator);
    }

}


bool CsvInfo::GetPrintKey() const
{
    return m_printKey;
}

void CsvInfo::SetPrintKey(const bool& _printKey)
{
    m_printKey = _printKey;
    m_printKeyHasBeenSet = true;
}

bool CsvInfo::PrintKeyHasBeenSet() const
{
    return m_printKeyHasBeenSet;
}

vector<string> CsvInfo::GetKeys() const
{
    return m_keys;
}

void CsvInfo::SetKeys(const vector<string>& _keys)
{
    m_keys = _keys;
    m_keysHasBeenSet = true;
}

bool CsvInfo::KeysHasBeenSet() const
{
    return m_keysHasBeenSet;
}

string CsvInfo::GetDelimiter() const
{
    return m_delimiter;
}

void CsvInfo::SetDelimiter(const string& _delimiter)
{
    m_delimiter = _delimiter;
    m_delimiterHasBeenSet = true;
}

bool CsvInfo::DelimiterHasBeenSet() const
{
    return m_delimiterHasBeenSet;
}

string CsvInfo::GetEscapeChar() const
{
    return m_escapeChar;
}

void CsvInfo::SetEscapeChar(const string& _escapeChar)
{
    m_escapeChar = _escapeChar;
    m_escapeCharHasBeenSet = true;
}

bool CsvInfo::EscapeCharHasBeenSet() const
{
    return m_escapeCharHasBeenSet;
}

string CsvInfo::GetNonExistingField() const
{
    return m_nonExistingField;
}

void CsvInfo::SetNonExistingField(const string& _nonExistingField)
{
    m_nonExistingField = _nonExistingField;
    m_nonExistingFieldHasBeenSet = true;
}

bool CsvInfo::NonExistingFieldHasBeenSet() const
{
    return m_nonExistingFieldHasBeenSet;
}

