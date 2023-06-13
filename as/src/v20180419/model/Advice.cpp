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

#include <tencentcloud/as/v20180419/model/Advice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::As::V20180419::Model;
using namespace std;

Advice::Advice() :
    m_problemHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_solutionHasBeenSet(false),
    m_levelHasBeenSet(false)
{
}

CoreInternalOutcome Advice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Problem") && !value["Problem"].IsNull())
    {
        if (!value["Problem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Advice.Problem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_problem = string(value["Problem"].GetString());
        m_problemHasBeenSet = true;
    }

    if (value.HasMember("Detail") && !value["Detail"].IsNull())
    {
        if (!value["Detail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Advice.Detail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detail = string(value["Detail"].GetString());
        m_detailHasBeenSet = true;
    }

    if (value.HasMember("Solution") && !value["Solution"].IsNull())
    {
        if (!value["Solution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Advice.Solution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_solution = string(value["Solution"].GetString());
        m_solutionHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Advice.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Advice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_problemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Problem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_problem.c_str(), allocator).Move(), allocator);
    }

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detail.c_str(), allocator).Move(), allocator);
    }

    if (m_solutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Solution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_solution.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

}


string Advice::GetProblem() const
{
    return m_problem;
}

void Advice::SetProblem(const string& _problem)
{
    m_problem = _problem;
    m_problemHasBeenSet = true;
}

bool Advice::ProblemHasBeenSet() const
{
    return m_problemHasBeenSet;
}

string Advice::GetDetail() const
{
    return m_detail;
}

void Advice::SetDetail(const string& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool Advice::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

string Advice::GetSolution() const
{
    return m_solution;
}

void Advice::SetSolution(const string& _solution)
{
    m_solution = _solution;
    m_solutionHasBeenSet = true;
}

bool Advice::SolutionHasBeenSet() const
{
    return m_solutionHasBeenSet;
}

string Advice::GetLevel() const
{
    return m_level;
}

void Advice::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool Advice::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

