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

#include <tencentcloud/mrs/v20200910/model/Symptom.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

Symptom::Symptom() :
    m_descHasBeenSet(false),
    m_partHasBeenSet(false),
    m_gradeHasBeenSet(false),
    m_attrListHasBeenSet(false)
{
}

CoreInternalOutcome Symptom::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Symptom.Desc` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_desc.Deserialize(value["Desc"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_descHasBeenSet = true;
    }

    if (value.HasMember("Part") && !value["Part"].IsNull())
    {
        if (!value["Part"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Symptom.Part` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_part.Deserialize(value["Part"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_partHasBeenSet = true;
    }

    if (value.HasMember("Grade") && !value["Grade"].IsNull())
    {
        if (!value["Grade"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Symptom.Grade` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_grade.Deserialize(value["Grade"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_gradeHasBeenSet = true;
    }

    if (value.HasMember("AttrList") && !value["AttrList"].IsNull())
    {
        if (!value["AttrList"].IsArray())
            return CoreInternalOutcome(Error("response `Symptom.AttrList` is not array type"));

        const rapidjson::Value &tmpValue = value["AttrList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Attribute item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_attrList.push_back(item);
        }
        m_attrListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Symptom::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_desc.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_partHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Part";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_part.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_gradeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Grade";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_grade.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_attrListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttrList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_attrList.begin(); itr != m_attrList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


Attribute Symptom::GetDesc() const
{
    return m_desc;
}

void Symptom::SetDesc(const Attribute& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool Symptom::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

Attribute Symptom::GetPart() const
{
    return m_part;
}

void Symptom::SetPart(const Attribute& _part)
{
    m_part = _part;
    m_partHasBeenSet = true;
}

bool Symptom::PartHasBeenSet() const
{
    return m_partHasBeenSet;
}

Attribute Symptom::GetGrade() const
{
    return m_grade;
}

void Symptom::SetGrade(const Attribute& _grade)
{
    m_grade = _grade;
    m_gradeHasBeenSet = true;
}

bool Symptom::GradeHasBeenSet() const
{
    return m_gradeHasBeenSet;
}

vector<Attribute> Symptom::GetAttrList() const
{
    return m_attrList;
}

void Symptom::SetAttrList(const vector<Attribute>& _attrList)
{
    m_attrList = _attrList;
    m_attrListHasBeenSet = true;
}

bool Symptom::AttrListHasBeenSet() const
{
    return m_attrListHasBeenSet;
}

