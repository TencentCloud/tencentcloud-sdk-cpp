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

#include <tencentcloud/mrs/v20200910/model/ValueBlock.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

ValueBlock::ValueBlock() :
    m_gradeHasBeenSet(false),
    m_percentHasBeenSet(false),
    m_positiveHasBeenSet(false)
{
}

CoreInternalOutcome ValueBlock::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Grade") && !value["Grade"].IsNull())
    {
        if (!value["Grade"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ValueBlock.Grade` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_grade = string(value["Grade"].GetString());
        m_gradeHasBeenSet = true;
    }

    if (value.HasMember("Percent") && !value["Percent"].IsNull())
    {
        if (!value["Percent"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ValueBlock.Percent` is not array type"));

        const rapidjson::Value &tmpValue = value["Percent"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_percent.push_back((*itr).GetDouble());
        }
        m_percentHasBeenSet = true;
    }

    if (value.HasMember("Positive") && !value["Positive"].IsNull())
    {
        if (!value["Positive"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ValueBlock.Positive` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_positive = string(value["Positive"].GetString());
        m_positiveHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ValueBlock::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_gradeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Grade";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_grade.c_str(), allocator).Move(), allocator);
    }

    if (m_percentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_percent.begin(); itr != m_percent.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

    if (m_positiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Positive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_positive.c_str(), allocator).Move(), allocator);
    }

}


string ValueBlock::GetGrade() const
{
    return m_grade;
}

void ValueBlock::SetGrade(const string& _grade)
{
    m_grade = _grade;
    m_gradeHasBeenSet = true;
}

bool ValueBlock::GradeHasBeenSet() const
{
    return m_gradeHasBeenSet;
}

vector<double> ValueBlock::GetPercent() const
{
    return m_percent;
}

void ValueBlock::SetPercent(const vector<double>& _percent)
{
    m_percent = _percent;
    m_percentHasBeenSet = true;
}

bool ValueBlock::PercentHasBeenSet() const
{
    return m_percentHasBeenSet;
}

string ValueBlock::GetPositive() const
{
    return m_positive;
}

void ValueBlock::SetPositive(const string& _positive)
{
    m_positive = _positive;
    m_positiveHasBeenSet = true;
}

bool ValueBlock::PositiveHasBeenSet() const
{
    return m_positiveHasBeenSet;
}

