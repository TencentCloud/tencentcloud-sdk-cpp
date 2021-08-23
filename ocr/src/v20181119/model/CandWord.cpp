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

#include <tencentcloud/ocr/v20181119/model/CandWord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

CandWord::CandWord() :
    m_candWordsHasBeenSet(false)
{
}

CoreInternalOutcome CandWord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CandWords") && !value["CandWords"].IsNull())
    {
        if (!value["CandWords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CandWord.CandWords` is not array type"));

        const rapidjson::Value &tmpValue = value["CandWords"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Words item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_candWords.push_back(item);
        }
        m_candWordsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CandWord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_candWordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CandWords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_candWords.begin(); itr != m_candWords.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<Words> CandWord::GetCandWords() const
{
    return m_candWords;
}

void CandWord::SetCandWords(const vector<Words>& _candWords)
{
    m_candWords = _candWords;
    m_candWordsHasBeenSet = true;
}

bool CandWord::CandWordsHasBeenSet() const
{
    return m_candWordsHasBeenSet;
}

