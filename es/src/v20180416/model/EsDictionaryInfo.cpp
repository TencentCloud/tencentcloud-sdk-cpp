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
using namespace std;

EsDictionaryInfo::EsDictionaryInfo() :
    m_mainDictHasBeenSet(false),
    m_stopwordsHasBeenSet(false),
    m_qQDictHasBeenSet(false),
    m_synonymHasBeenSet(false),
    m_updateTypeHasBeenSet(false),
    m_ansjMainHasBeenSet(false),
    m_ansjStopHasBeenSet(false),
    m_ansjAmbiguityHasBeenSet(false),
    m_ansjSynonymsHasBeenSet(false)
{
}

CoreInternalOutcome EsDictionaryInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MainDict") && !value["MainDict"].IsNull())
    {
        if (!value["MainDict"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EsDictionaryInfo.MainDict` is not array type"));

        const rapidjson::Value &tmpValue = value["MainDict"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Core::Error("response `EsDictionaryInfo.Stopwords` is not array type"));

        const rapidjson::Value &tmpValue = value["Stopwords"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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

    if (value.HasMember("QQDict") && !value["QQDict"].IsNull())
    {
        if (!value["QQDict"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EsDictionaryInfo.QQDict` is not array type"));

        const rapidjson::Value &tmpValue = value["QQDict"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DictInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_qQDict.push_back(item);
        }
        m_qQDictHasBeenSet = true;
    }

    if (value.HasMember("Synonym") && !value["Synonym"].IsNull())
    {
        if (!value["Synonym"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EsDictionaryInfo.Synonym` is not array type"));

        const rapidjson::Value &tmpValue = value["Synonym"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DictInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_synonym.push_back(item);
        }
        m_synonymHasBeenSet = true;
    }

    if (value.HasMember("UpdateType") && !value["UpdateType"].IsNull())
    {
        if (!value["UpdateType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EsDictionaryInfo.UpdateType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateType = string(value["UpdateType"].GetString());
        m_updateTypeHasBeenSet = true;
    }

    if (value.HasMember("AnsjMain") && !value["AnsjMain"].IsNull())
    {
        if (!value["AnsjMain"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EsDictionaryInfo.AnsjMain` is not array type"));

        const rapidjson::Value &tmpValue = value["AnsjMain"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DictInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ansjMain.push_back(item);
        }
        m_ansjMainHasBeenSet = true;
    }

    if (value.HasMember("AnsjStop") && !value["AnsjStop"].IsNull())
    {
        if (!value["AnsjStop"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EsDictionaryInfo.AnsjStop` is not array type"));

        const rapidjson::Value &tmpValue = value["AnsjStop"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DictInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ansjStop.push_back(item);
        }
        m_ansjStopHasBeenSet = true;
    }

    if (value.HasMember("AnsjAmbiguity") && !value["AnsjAmbiguity"].IsNull())
    {
        if (!value["AnsjAmbiguity"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EsDictionaryInfo.AnsjAmbiguity` is not array type"));

        const rapidjson::Value &tmpValue = value["AnsjAmbiguity"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DictInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ansjAmbiguity.push_back(item);
        }
        m_ansjAmbiguityHasBeenSet = true;
    }

    if (value.HasMember("AnsjSynonyms") && !value["AnsjSynonyms"].IsNull())
    {
        if (!value["AnsjSynonyms"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EsDictionaryInfo.AnsjSynonyms` is not array type"));

        const rapidjson::Value &tmpValue = value["AnsjSynonyms"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DictInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ansjSynonyms.push_back(item);
        }
        m_ansjSynonymsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EsDictionaryInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mainDictHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainDict";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mainDict.begin(); itr != m_mainDict.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_stopwordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stopwords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_stopwords.begin(); itr != m_stopwords.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_qQDictHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QQDict";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_qQDict.begin(); itr != m_qQDict.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_synonymHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Synonym";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_synonym.begin(); itr != m_synonym.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_updateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateType.c_str(), allocator).Move(), allocator);
    }

    if (m_ansjMainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnsjMain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ansjMain.begin(); itr != m_ansjMain.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ansjStopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnsjStop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ansjStop.begin(); itr != m_ansjStop.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ansjAmbiguityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnsjAmbiguity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ansjAmbiguity.begin(); itr != m_ansjAmbiguity.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ansjSynonymsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnsjSynonyms";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ansjSynonyms.begin(); itr != m_ansjSynonyms.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
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

vector<DictInfo> EsDictionaryInfo::GetQQDict() const
{
    return m_qQDict;
}

void EsDictionaryInfo::SetQQDict(const vector<DictInfo>& _qQDict)
{
    m_qQDict = _qQDict;
    m_qQDictHasBeenSet = true;
}

bool EsDictionaryInfo::QQDictHasBeenSet() const
{
    return m_qQDictHasBeenSet;
}

vector<DictInfo> EsDictionaryInfo::GetSynonym() const
{
    return m_synonym;
}

void EsDictionaryInfo::SetSynonym(const vector<DictInfo>& _synonym)
{
    m_synonym = _synonym;
    m_synonymHasBeenSet = true;
}

bool EsDictionaryInfo::SynonymHasBeenSet() const
{
    return m_synonymHasBeenSet;
}

string EsDictionaryInfo::GetUpdateType() const
{
    return m_updateType;
}

void EsDictionaryInfo::SetUpdateType(const string& _updateType)
{
    m_updateType = _updateType;
    m_updateTypeHasBeenSet = true;
}

bool EsDictionaryInfo::UpdateTypeHasBeenSet() const
{
    return m_updateTypeHasBeenSet;
}

vector<DictInfo> EsDictionaryInfo::GetAnsjMain() const
{
    return m_ansjMain;
}

void EsDictionaryInfo::SetAnsjMain(const vector<DictInfo>& _ansjMain)
{
    m_ansjMain = _ansjMain;
    m_ansjMainHasBeenSet = true;
}

bool EsDictionaryInfo::AnsjMainHasBeenSet() const
{
    return m_ansjMainHasBeenSet;
}

vector<DictInfo> EsDictionaryInfo::GetAnsjStop() const
{
    return m_ansjStop;
}

void EsDictionaryInfo::SetAnsjStop(const vector<DictInfo>& _ansjStop)
{
    m_ansjStop = _ansjStop;
    m_ansjStopHasBeenSet = true;
}

bool EsDictionaryInfo::AnsjStopHasBeenSet() const
{
    return m_ansjStopHasBeenSet;
}

vector<DictInfo> EsDictionaryInfo::GetAnsjAmbiguity() const
{
    return m_ansjAmbiguity;
}

void EsDictionaryInfo::SetAnsjAmbiguity(const vector<DictInfo>& _ansjAmbiguity)
{
    m_ansjAmbiguity = _ansjAmbiguity;
    m_ansjAmbiguityHasBeenSet = true;
}

bool EsDictionaryInfo::AnsjAmbiguityHasBeenSet() const
{
    return m_ansjAmbiguityHasBeenSet;
}

vector<DictInfo> EsDictionaryInfo::GetAnsjSynonyms() const
{
    return m_ansjSynonyms;
}

void EsDictionaryInfo::SetAnsjSynonyms(const vector<DictInfo>& _ansjSynonyms)
{
    m_ansjSynonyms = _ansjSynonyms;
    m_ansjSynonymsHasBeenSet = true;
}

bool EsDictionaryInfo::AnsjSynonymsHasBeenSet() const
{
    return m_ansjSynonymsHasBeenSet;
}

