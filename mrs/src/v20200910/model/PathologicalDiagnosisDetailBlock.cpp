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

#include <tencentcloud/mrs/v20200910/model/PathologicalDiagnosisDetailBlock.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

PathologicalDiagnosisDetailBlock::PathologicalDiagnosisDetailBlock() :
    m_partHasBeenSet(false),
    m_histologicalTypeHasBeenSet(false),
    m_histologicalGradeHasBeenSet(false)
{
}

CoreInternalOutcome PathologicalDiagnosisDetailBlock::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Part") && !value["Part"].IsNull())
    {
        if (!value["Part"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PathologicalDiagnosisDetailBlock.Part` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_part = string(value["Part"].GetString());
        m_partHasBeenSet = true;
    }

    if (value.HasMember("HistologicalType") && !value["HistologicalType"].IsNull())
    {
        if (!value["HistologicalType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PathologicalDiagnosisDetailBlock.HistologicalType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_histologicalType = string(value["HistologicalType"].GetString());
        m_histologicalTypeHasBeenSet = true;
    }

    if (value.HasMember("HistologicalGrade") && !value["HistologicalGrade"].IsNull())
    {
        if (!value["HistologicalGrade"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PathologicalDiagnosisDetailBlock.HistologicalGrade` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_histologicalGrade = string(value["HistologicalGrade"].GetString());
        m_histologicalGradeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PathologicalDiagnosisDetailBlock::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_partHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Part";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_part.c_str(), allocator).Move(), allocator);
    }

    if (m_histologicalTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HistologicalType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_histologicalType.c_str(), allocator).Move(), allocator);
    }

    if (m_histologicalGradeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HistologicalGrade";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_histologicalGrade.c_str(), allocator).Move(), allocator);
    }

}


string PathologicalDiagnosisDetailBlock::GetPart() const
{
    return m_part;
}

void PathologicalDiagnosisDetailBlock::SetPart(const string& _part)
{
    m_part = _part;
    m_partHasBeenSet = true;
}

bool PathologicalDiagnosisDetailBlock::PartHasBeenSet() const
{
    return m_partHasBeenSet;
}

string PathologicalDiagnosisDetailBlock::GetHistologicalType() const
{
    return m_histologicalType;
}

void PathologicalDiagnosisDetailBlock::SetHistologicalType(const string& _histologicalType)
{
    m_histologicalType = _histologicalType;
    m_histologicalTypeHasBeenSet = true;
}

bool PathologicalDiagnosisDetailBlock::HistologicalTypeHasBeenSet() const
{
    return m_histologicalTypeHasBeenSet;
}

string PathologicalDiagnosisDetailBlock::GetHistologicalGrade() const
{
    return m_histologicalGrade;
}

void PathologicalDiagnosisDetailBlock::SetHistologicalGrade(const string& _histologicalGrade)
{
    m_histologicalGrade = _histologicalGrade;
    m_histologicalGradeHasBeenSet = true;
}

bool PathologicalDiagnosisDetailBlock::HistologicalGradeHasBeenSet() const
{
    return m_histologicalGradeHasBeenSet;
}

