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

#include <tencentcloud/asr/v20190614/model/UpdateAsrVocabRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Asr::V20190614::Model;
using namespace std;

UpdateAsrVocabRequest::UpdateAsrVocabRequest() :
    m_vocabIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_wordWeightsHasBeenSet(false),
    m_wordWeightStrHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string UpdateAsrVocabRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vocabIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VocabId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vocabId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_wordWeightsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WordWeights";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_wordWeights.begin(); itr != m_wordWeights.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_wordWeightStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WordWeightStr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_wordWeightStr.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateAsrVocabRequest::GetVocabId() const
{
    return m_vocabId;
}

void UpdateAsrVocabRequest::SetVocabId(const string& _vocabId)
{
    m_vocabId = _vocabId;
    m_vocabIdHasBeenSet = true;
}

bool UpdateAsrVocabRequest::VocabIdHasBeenSet() const
{
    return m_vocabIdHasBeenSet;
}

string UpdateAsrVocabRequest::GetName() const
{
    return m_name;
}

void UpdateAsrVocabRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpdateAsrVocabRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<HotWord> UpdateAsrVocabRequest::GetWordWeights() const
{
    return m_wordWeights;
}

void UpdateAsrVocabRequest::SetWordWeights(const vector<HotWord>& _wordWeights)
{
    m_wordWeights = _wordWeights;
    m_wordWeightsHasBeenSet = true;
}

bool UpdateAsrVocabRequest::WordWeightsHasBeenSet() const
{
    return m_wordWeightsHasBeenSet;
}

string UpdateAsrVocabRequest::GetWordWeightStr() const
{
    return m_wordWeightStr;
}

void UpdateAsrVocabRequest::SetWordWeightStr(const string& _wordWeightStr)
{
    m_wordWeightStr = _wordWeightStr;
    m_wordWeightStrHasBeenSet = true;
}

bool UpdateAsrVocabRequest::WordWeightStrHasBeenSet() const
{
    return m_wordWeightStrHasBeenSet;
}

string UpdateAsrVocabRequest::GetDescription() const
{
    return m_description;
}

void UpdateAsrVocabRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UpdateAsrVocabRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


