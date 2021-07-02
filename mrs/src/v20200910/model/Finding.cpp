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

#include <tencentcloud/mrs/v20200910/model/Finding.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

Finding::Finding() :
    m_textHasBeenSet(false),
    m_tuberListHasBeenSet(false)
{
}

CoreInternalOutcome Finding::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Error("response `Finding.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("TuberList") && !value["TuberList"].IsNull())
    {
        if (!value["TuberList"].IsArray())
            return CoreInternalOutcome(Error("response `Finding.TuberList` is not array type"));

        const rapidjson::Value &tmpValue = value["TuberList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tuber item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tuberList.push_back(item);
        }
        m_tuberListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Finding::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_tuberListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TuberList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tuberList.begin(); itr != m_tuberList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Finding::GetText() const
{
    return m_text;
}

void Finding::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool Finding::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

vector<Tuber> Finding::GetTuberList() const
{
    return m_tuberList;
}

void Finding::SetTuberList(const vector<Tuber>& _tuberList)
{
    m_tuberList = _tuberList;
    m_tuberListHasBeenSet = true;
}

bool Finding::TuberListHasBeenSet() const
{
    return m_tuberListHasBeenSet;
}

