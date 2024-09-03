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

#include <tencentcloud/asr/v20190614/model/KeyWordResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Asr::V20190614::Model;
using namespace std;

KeyWordResult::KeyWordResult() :
    m_keyWordLibIDHasBeenSet(false),
    m_keyWordLibNameHasBeenSet(false),
    m_keyWordsHasBeenSet(false)
{
}

CoreInternalOutcome KeyWordResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KeyWordLibID") && !value["KeyWordLibID"].IsNull())
    {
        if (!value["KeyWordLibID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyWordResult.KeyWordLibID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyWordLibID = string(value["KeyWordLibID"].GetString());
        m_keyWordLibIDHasBeenSet = true;
    }

    if (value.HasMember("KeyWordLibName") && !value["KeyWordLibName"].IsNull())
    {
        if (!value["KeyWordLibName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyWordResult.KeyWordLibName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyWordLibName = string(value["KeyWordLibName"].GetString());
        m_keyWordLibNameHasBeenSet = true;
    }

    if (value.HasMember("KeyWords") && !value["KeyWords"].IsNull())
    {
        if (!value["KeyWords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KeyWordResult.KeyWords` is not array type"));

        const rapidjson::Value &tmpValue = value["KeyWords"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keyWords.push_back((*itr).GetString());
        }
        m_keyWordsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KeyWordResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyWordLibIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyWordLibID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyWordLibID.c_str(), allocator).Move(), allocator);
    }

    if (m_keyWordLibNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyWordLibName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyWordLibName.c_str(), allocator).Move(), allocator);
    }

    if (m_keyWordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyWords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_keyWords.begin(); itr != m_keyWords.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string KeyWordResult::GetKeyWordLibID() const
{
    return m_keyWordLibID;
}

void KeyWordResult::SetKeyWordLibID(const string& _keyWordLibID)
{
    m_keyWordLibID = _keyWordLibID;
    m_keyWordLibIDHasBeenSet = true;
}

bool KeyWordResult::KeyWordLibIDHasBeenSet() const
{
    return m_keyWordLibIDHasBeenSet;
}

string KeyWordResult::GetKeyWordLibName() const
{
    return m_keyWordLibName;
}

void KeyWordResult::SetKeyWordLibName(const string& _keyWordLibName)
{
    m_keyWordLibName = _keyWordLibName;
    m_keyWordLibNameHasBeenSet = true;
}

bool KeyWordResult::KeyWordLibNameHasBeenSet() const
{
    return m_keyWordLibNameHasBeenSet;
}

vector<string> KeyWordResult::GetKeyWords() const
{
    return m_keyWords;
}

void KeyWordResult::SetKeyWords(const vector<string>& _keyWords)
{
    m_keyWords = _keyWords;
    m_keyWordsHasBeenSet = true;
}

bool KeyWordResult::KeyWordsHasBeenSet() const
{
    return m_keyWordsHasBeenSet;
}

