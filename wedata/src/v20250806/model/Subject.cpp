/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/wedata/v20250806/model/Subject.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

Subject::Subject() :
    m_subjectTypeHasBeenSet(false),
    m_subjectValuesHasBeenSet(false)
{
}

CoreInternalOutcome Subject::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubjectType") && !value["SubjectType"].IsNull())
    {
        if (!value["SubjectType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Subject.SubjectType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subjectType = string(value["SubjectType"].GetString());
        m_subjectTypeHasBeenSet = true;
    }

    if (value.HasMember("SubjectValues") && !value["SubjectValues"].IsNull())
    {
        if (!value["SubjectValues"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Subject.SubjectValues` is not array type"));

        const rapidjson::Value &tmpValue = value["SubjectValues"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subjectValues.push_back((*itr).GetString());
        }
        m_subjectValuesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Subject::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subjectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubjectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subjectType.c_str(), allocator).Move(), allocator);
    }

    if (m_subjectValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubjectValues";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subjectValues.begin(); itr != m_subjectValues.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string Subject::GetSubjectType() const
{
    return m_subjectType;
}

void Subject::SetSubjectType(const string& _subjectType)
{
    m_subjectType = _subjectType;
    m_subjectTypeHasBeenSet = true;
}

bool Subject::SubjectTypeHasBeenSet() const
{
    return m_subjectTypeHasBeenSet;
}

vector<string> Subject::GetSubjectValues() const
{
    return m_subjectValues;
}

void Subject::SetSubjectValues(const vector<string>& _subjectValues)
{
    m_subjectValues = _subjectValues;
    m_subjectValuesHasBeenSet = true;
}

bool Subject::SubjectValuesHasBeenSet() const
{
    return m_subjectValuesHasBeenSet;
}

