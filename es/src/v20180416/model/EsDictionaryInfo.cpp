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

#include <tencentcloud/es/v20180416/model/EsDictionaryInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace rapidjson;
using namespace std;

EsDictionaryInfo::EsDictionaryInfo() :
    m_mainDictHasBeenSet(false),
    m_stopwordsHasBeenSet(false)
{
}

CoreInternalOutcome EsDictionaryInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("MainDict") && !value["MainDict"].IsNull())
    {
        if (!value["MainDict"].IsArray())
            return CoreInternalOutcome(Error("response `EsDictionaryInfo.MainDict` is not array type"));

        const Value &tmpValue = value["MainDict"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DictInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mainDict.push_back(item);
        }
        m_mainDictHasBeenSet = true;
    }

    if (value.HasMember("Stopwords") && !value["Stopwords"].IsNull())
    {
        if (!value["Stopwords"].IsArray())
            return CoreInternalOutcome(Error("response `EsDictionaryInfo.Stopwords` is not array type"));

        const Value &tmpValue = value["Stopwords"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DictInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_stopwords.push_back(item);
        }
        m_stopwordsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EsDictionaryInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_mainDictHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MainDict";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mainDict.begin(); itr != m_mainDict.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_stopwordsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Stopwords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_stopwords.begin(); itr != m_stopwords.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<DictInfo> EsDictionaryInfo::GetMainDict() const
{
    return m_mainDict;
}

void EsDictionaryInfo::SetMainDict(const vector<DictInfo>& _mainDict)
{
    m_mainDict = _mainDict;
    m_mainDictHasBeenSet = true;
}

bool EsDictionaryInfo::MainDictHasBeenSet() const
{
    return m_mainDictHasBeenSet;
}

vector<DictInfo> EsDictionaryInfo::GetStopwords() const
{
    return m_stopwords;
}

void EsDictionaryInfo::SetStopwords(const vector<DictInfo>& _stopwords)
{
    m_stopwords = _stopwords;
    m_stopwordsHasBeenSet = true;
}

bool EsDictionaryInfo::StopwordsHasBeenSet() const
{
    return m_stopwordsHasBeenSet;
}

