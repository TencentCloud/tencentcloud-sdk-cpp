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

#include <tencentcloud/mrs/v20200910/model/SymptomInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

SymptomInfo::SymptomInfo() :
    m_gradeHasBeenSet(false),
    m_partHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_symptomHasBeenSet(false),
    m_attrsHasBeenSet(false),
    m_srcHasBeenSet(false),
    m_coordsHasBeenSet(false)
{
}

CoreInternalOutcome SymptomInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Grade") && !value["Grade"].IsNull())
    {
        if (!value["Grade"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SymptomInfo.Grade` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_grade.Deserialize(value["Grade"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_gradeHasBeenSet = true;
    }

    if (value.HasMember("Part") && !value["Part"].IsNull())
    {
        if (!value["Part"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SymptomInfo.Part` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_part.Deserialize(value["Part"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_partHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SymptomInfo.Index` is not array type"));

        const rapidjson::Value &tmpValue = value["Index"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_index.push_back((*itr).GetInt64());
        }
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("Symptom") && !value["Symptom"].IsNull())
    {
        if (!value["Symptom"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SymptomInfo.Symptom` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_symptom.Deserialize(value["Symptom"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_symptomHasBeenSet = true;
    }

    if (value.HasMember("Attrs") && !value["Attrs"].IsNull())
    {
        if (!value["Attrs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SymptomInfo.Attrs` is not array type"));

        const rapidjson::Value &tmpValue = value["Attrs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BlockInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_attrs.push_back(item);
        }
        m_attrsHasBeenSet = true;
    }

    if (value.HasMember("Src") && !value["Src"].IsNull())
    {
        if (!value["Src"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SymptomInfo.Src` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_src = string(value["Src"].GetString());
        m_srcHasBeenSet = true;
    }

    if (value.HasMember("Coords") && !value["Coords"].IsNull())
    {
        if (!value["Coords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SymptomInfo.Coords` is not array type"));

        const rapidjson::Value &tmpValue = value["Coords"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Coord item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_coords.push_back(item);
        }
        m_coordsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SymptomInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_gradeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Grade";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_grade.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_partHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Part";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_part.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_index.begin(); itr != m_index.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_symptomHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Symptom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_symptom.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_attrsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attrs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_attrs.begin(); itr != m_attrs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_srcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Src";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_src.c_str(), allocator).Move(), allocator);
    }

    if (m_coordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Coords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_coords.begin(); itr != m_coords.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


BlockInfo SymptomInfo::GetGrade() const
{
    return m_grade;
}

void SymptomInfo::SetGrade(const BlockInfo& _grade)
{
    m_grade = _grade;
    m_gradeHasBeenSet = true;
}

bool SymptomInfo::GradeHasBeenSet() const
{
    return m_gradeHasBeenSet;
}

Part SymptomInfo::GetPart() const
{
    return m_part;
}

void SymptomInfo::SetPart(const Part& _part)
{
    m_part = _part;
    m_partHasBeenSet = true;
}

bool SymptomInfo::PartHasBeenSet() const
{
    return m_partHasBeenSet;
}

vector<int64_t> SymptomInfo::GetIndex() const
{
    return m_index;
}

void SymptomInfo::SetIndex(const vector<int64_t>& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool SymptomInfo::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

BlockInfo SymptomInfo::GetSymptom() const
{
    return m_symptom;
}

void SymptomInfo::SetSymptom(const BlockInfo& _symptom)
{
    m_symptom = _symptom;
    m_symptomHasBeenSet = true;
}

bool SymptomInfo::SymptomHasBeenSet() const
{
    return m_symptomHasBeenSet;
}

vector<BlockInfo> SymptomInfo::GetAttrs() const
{
    return m_attrs;
}

void SymptomInfo::SetAttrs(const vector<BlockInfo>& _attrs)
{
    m_attrs = _attrs;
    m_attrsHasBeenSet = true;
}

bool SymptomInfo::AttrsHasBeenSet() const
{
    return m_attrsHasBeenSet;
}

string SymptomInfo::GetSrc() const
{
    return m_src;
}

void SymptomInfo::SetSrc(const string& _src)
{
    m_src = _src;
    m_srcHasBeenSet = true;
}

bool SymptomInfo::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

vector<Coord> SymptomInfo::GetCoords() const
{
    return m_coords;
}

void SymptomInfo::SetCoords(const vector<Coord>& _coords)
{
    m_coords = _coords;
    m_coordsHasBeenSet = true;
}

bool SymptomInfo::CoordsHasBeenSet() const
{
    return m_coordsHasBeenSet;
}

