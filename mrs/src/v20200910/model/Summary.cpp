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

#include <tencentcloud/mrs/v20200910/model/Summary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace rapidjson;
using namespace std;

Summary::Summary() :
    m_symptomHasBeenSet(false),
    m_textHasBeenSet(false)
{
}

CoreInternalOutcome Summary::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Symptom") && !value["Symptom"].IsNull())
    {
        if (!value["Symptom"].IsArray())
            return CoreInternalOutcome(Error("response `Summary.Symptom` is not array type"));

        const Value &tmpValue = value["Symptom"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SymptomInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_symptom.push_back(item);
        }
        m_symptomHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Error("response `Summary.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Summary::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_symptomHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Symptom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_symptom.begin(); itr != m_symptom.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_textHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_text.c_str(), allocator).Move(), allocator);
    }

}


vector<SymptomInfo> Summary::GetSymptom() const
{
    return m_symptom;
}

void Summary::SetSymptom(const vector<SymptomInfo>& _symptom)
{
    m_symptom = _symptom;
    m_symptomHasBeenSet = true;
}

bool Summary::SymptomHasBeenSet() const
{
    return m_symptomHasBeenSet;
}

string Summary::GetText() const
{
    return m_text;
}

void Summary::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool Summary::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

