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

#include <tencentcloud/mrs/v20200910/model/Conclusion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

Conclusion::Conclusion() :
    m_textHasBeenSet(false),
    m_symptomListHasBeenSet(false)
{
}

CoreInternalOutcome Conclusion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Error("response `Conclusion.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("SymptomList") && !value["SymptomList"].IsNull())
    {
        if (!value["SymptomList"].IsArray())
            return CoreInternalOutcome(Error("response `Conclusion.SymptomList` is not array type"));

        const rapidjson::Value &tmpValue = value["SymptomList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Symptom item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_symptomList.push_back(item);
        }
        m_symptomListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Conclusion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_symptomListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SymptomList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_symptomList.begin(); itr != m_symptomList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Conclusion::GetText() const
{
    return m_text;
}

void Conclusion::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool Conclusion::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

vector<Symptom> Conclusion::GetSymptomList() const
{
    return m_symptomList;
}

void Conclusion::SetSymptomList(const vector<Symptom>& _symptomList)
{
    m_symptomList = _symptomList;
    m_symptomListHasBeenSet = true;
}

bool Conclusion::SymptomListHasBeenSet() const
{
    return m_symptomListHasBeenSet;
}

