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

#include <tencentcloud/ckafka/v20190819/model/RowParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

RowParam::RowParam() :
    m_rowContentHasBeenSet(false),
    m_keyValueDelimiterHasBeenSet(false),
    m_entryDelimiterHasBeenSet(false)
{
}

CoreInternalOutcome RowParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RowContent") && !value["RowContent"].IsNull())
    {
        if (!value["RowContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RowParam.RowContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rowContent = string(value["RowContent"].GetString());
        m_rowContentHasBeenSet = true;
    }

    if (value.HasMember("KeyValueDelimiter") && !value["KeyValueDelimiter"].IsNull())
    {
        if (!value["KeyValueDelimiter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RowParam.KeyValueDelimiter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyValueDelimiter = string(value["KeyValueDelimiter"].GetString());
        m_keyValueDelimiterHasBeenSet = true;
    }

    if (value.HasMember("EntryDelimiter") && !value["EntryDelimiter"].IsNull())
    {
        if (!value["EntryDelimiter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RowParam.EntryDelimiter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entryDelimiter = string(value["EntryDelimiter"].GetString());
        m_entryDelimiterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RowParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rowContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RowContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rowContent.c_str(), allocator).Move(), allocator);
    }

    if (m_keyValueDelimiterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyValueDelimiter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyValueDelimiter.c_str(), allocator).Move(), allocator);
    }

    if (m_entryDelimiterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntryDelimiter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entryDelimiter.c_str(), allocator).Move(), allocator);
    }

}


string RowParam::GetRowContent() const
{
    return m_rowContent;
}

void RowParam::SetRowContent(const string& _rowContent)
{
    m_rowContent = _rowContent;
    m_rowContentHasBeenSet = true;
}

bool RowParam::RowContentHasBeenSet() const
{
    return m_rowContentHasBeenSet;
}

string RowParam::GetKeyValueDelimiter() const
{
    return m_keyValueDelimiter;
}

void RowParam::SetKeyValueDelimiter(const string& _keyValueDelimiter)
{
    m_keyValueDelimiter = _keyValueDelimiter;
    m_keyValueDelimiterHasBeenSet = true;
}

bool RowParam::KeyValueDelimiterHasBeenSet() const
{
    return m_keyValueDelimiterHasBeenSet;
}

string RowParam::GetEntryDelimiter() const
{
    return m_entryDelimiter;
}

void RowParam::SetEntryDelimiter(const string& _entryDelimiter)
{
    m_entryDelimiter = _entryDelimiter;
    m_entryDelimiterHasBeenSet = true;
}

bool RowParam::EntryDelimiterHasBeenSet() const
{
    return m_entryDelimiterHasBeenSet;
}

