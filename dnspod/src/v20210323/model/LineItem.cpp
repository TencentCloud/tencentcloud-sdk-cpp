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

#include <tencentcloud/dnspod/v20210323/model/LineItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

LineItem::LineItem() :
    m_lineNameHasBeenSet(false),
    m_lineIdHasBeenSet(false),
    m_usefulHasBeenSet(false),
    m_gradeHasBeenSet(false),
    m_subGroupHasBeenSet(false),
    m_linesHasBeenSet(false)
{
}

CoreInternalOutcome LineItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LineName") && !value["LineName"].IsNull())
    {
        if (!value["LineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineItem.LineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lineName = string(value["LineName"].GetString());
        m_lineNameHasBeenSet = true;
    }

    if (value.HasMember("LineId") && !value["LineId"].IsNull())
    {
        if (!value["LineId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineItem.LineId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lineId = string(value["LineId"].GetString());
        m_lineIdHasBeenSet = true;
    }

    if (value.HasMember("Useful") && !value["Useful"].IsNull())
    {
        if (!value["Useful"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LineItem.Useful` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_useful = value["Useful"].GetBool();
        m_usefulHasBeenSet = true;
    }

    if (value.HasMember("Grade") && !value["Grade"].IsNull())
    {
        if (!value["Grade"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineItem.Grade` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_grade = string(value["Grade"].GetString());
        m_gradeHasBeenSet = true;
    }

    if (value.HasMember("SubGroup") && !value["SubGroup"].IsNull())
    {
        if (!value["SubGroup"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LineItem.SubGroup` is not array type"));

        const rapidjson::Value &tmpValue = value["SubGroup"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LineItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subGroup.push_back(item);
        }
        m_subGroupHasBeenSet = true;
    }

    if (value.HasMember("Lines") && !value["Lines"].IsNull())
    {
        if (!value["Lines"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LineItem.Lines` is not array type"));

        const rapidjson::Value &tmpValue = value["Lines"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_lines.push_back((*itr).GetString());
        }
        m_linesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LineItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_lineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lineName.c_str(), allocator).Move(), allocator);
    }

    if (m_lineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lineId.c_str(), allocator).Move(), allocator);
    }

    if (m_usefulHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Useful";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useful, allocator);
    }

    if (m_gradeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Grade";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_grade.c_str(), allocator).Move(), allocator);
    }

    if (m_subGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subGroup.begin(); itr != m_subGroup.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_linesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lines";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_lines.begin(); itr != m_lines.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string LineItem::GetLineName() const
{
    return m_lineName;
}

void LineItem::SetLineName(const string& _lineName)
{
    m_lineName = _lineName;
    m_lineNameHasBeenSet = true;
}

bool LineItem::LineNameHasBeenSet() const
{
    return m_lineNameHasBeenSet;
}

string LineItem::GetLineId() const
{
    return m_lineId;
}

void LineItem::SetLineId(const string& _lineId)
{
    m_lineId = _lineId;
    m_lineIdHasBeenSet = true;
}

bool LineItem::LineIdHasBeenSet() const
{
    return m_lineIdHasBeenSet;
}

bool LineItem::GetUseful() const
{
    return m_useful;
}

void LineItem::SetUseful(const bool& _useful)
{
    m_useful = _useful;
    m_usefulHasBeenSet = true;
}

bool LineItem::UsefulHasBeenSet() const
{
    return m_usefulHasBeenSet;
}

string LineItem::GetGrade() const
{
    return m_grade;
}

void LineItem::SetGrade(const string& _grade)
{
    m_grade = _grade;
    m_gradeHasBeenSet = true;
}

bool LineItem::GradeHasBeenSet() const
{
    return m_gradeHasBeenSet;
}

vector<LineItem> LineItem::GetSubGroup() const
{
    return m_subGroup;
}

void LineItem::SetSubGroup(const vector<LineItem>& _subGroup)
{
    m_subGroup = _subGroup;
    m_subGroupHasBeenSet = true;
}

bool LineItem::SubGroupHasBeenSet() const
{
    return m_subGroupHasBeenSet;
}

vector<string> LineItem::GetLines() const
{
    return m_lines;
}

void LineItem::SetLines(const vector<string>& _lines)
{
    m_lines = _lines;
    m_linesHasBeenSet = true;
}

bool LineItem::LinesHasBeenSet() const
{
    return m_linesHasBeenSet;
}

