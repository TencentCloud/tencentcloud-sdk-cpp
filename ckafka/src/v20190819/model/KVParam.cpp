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

#include <tencentcloud/ckafka/v20190819/model/KVParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

KVParam::KVParam() :
    m_delimiterHasBeenSet(false),
    m_regexHasBeenSet(false),
    m_keepOriginalKeyHasBeenSet(false)
{
}

CoreInternalOutcome KVParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Delimiter") && !value["Delimiter"].IsNull())
    {
        if (!value["Delimiter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KVParam.Delimiter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_delimiter = string(value["Delimiter"].GetString());
        m_delimiterHasBeenSet = true;
    }

    if (value.HasMember("Regex") && !value["Regex"].IsNull())
    {
        if (!value["Regex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KVParam.Regex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regex = string(value["Regex"].GetString());
        m_regexHasBeenSet = true;
    }

    if (value.HasMember("KeepOriginalKey") && !value["KeepOriginalKey"].IsNull())
    {
        if (!value["KeepOriginalKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KVParam.KeepOriginalKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keepOriginalKey = string(value["KeepOriginalKey"].GetString());
        m_keepOriginalKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KVParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_delimiterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Delimiter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_delimiter.c_str(), allocator).Move(), allocator);
    }

    if (m_regexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Regex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regex.c_str(), allocator).Move(), allocator);
    }

    if (m_keepOriginalKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepOriginalKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keepOriginalKey.c_str(), allocator).Move(), allocator);
    }

}


string KVParam::GetDelimiter() const
{
    return m_delimiter;
}

void KVParam::SetDelimiter(const string& _delimiter)
{
    m_delimiter = _delimiter;
    m_delimiterHasBeenSet = true;
}

bool KVParam::DelimiterHasBeenSet() const
{
    return m_delimiterHasBeenSet;
}

string KVParam::GetRegex() const
{
    return m_regex;
}

void KVParam::SetRegex(const string& _regex)
{
    m_regex = _regex;
    m_regexHasBeenSet = true;
}

bool KVParam::RegexHasBeenSet() const
{
    return m_regexHasBeenSet;
}

string KVParam::GetKeepOriginalKey() const
{
    return m_keepOriginalKey;
}

void KVParam::SetKeepOriginalKey(const string& _keepOriginalKey)
{
    m_keepOriginalKey = _keepOriginalKey;
    m_keepOriginalKeyHasBeenSet = true;
}

bool KVParam::KeepOriginalKeyHasBeenSet() const
{
    return m_keepOriginalKeyHasBeenSet;
}

