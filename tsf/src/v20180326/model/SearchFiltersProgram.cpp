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

#include <tencentcloud/tsf/v20180326/model/SearchFiltersProgram.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

SearchFiltersProgram::SearchFiltersProgram() :
    m_programIdHasBeenSet(false),
    m_programNameHasBeenSet(false)
{
}

CoreInternalOutcome SearchFiltersProgram::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProgramId") && !value["ProgramId"].IsNull())
    {
        if (!value["ProgramId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFiltersProgram.ProgramId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_programId = string(value["ProgramId"].GetString());
        m_programIdHasBeenSet = true;
    }

    if (value.HasMember("ProgramName") && !value["ProgramName"].IsNull())
    {
        if (!value["ProgramName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFiltersProgram.ProgramName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_programName = string(value["ProgramName"].GetString());
        m_programNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchFiltersProgram::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_programIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_programId.c_str(), allocator).Move(), allocator);
    }

    if (m_programNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_programName.c_str(), allocator).Move(), allocator);
    }

}


string SearchFiltersProgram::GetProgramId() const
{
    return m_programId;
}

void SearchFiltersProgram::SetProgramId(const string& _programId)
{
    m_programId = _programId;
    m_programIdHasBeenSet = true;
}

bool SearchFiltersProgram::ProgramIdHasBeenSet() const
{
    return m_programIdHasBeenSet;
}

string SearchFiltersProgram::GetProgramName() const
{
    return m_programName;
}

void SearchFiltersProgram::SetProgramName(const string& _programName)
{
    m_programName = _programName;
    m_programNameHasBeenSet = true;
}

bool SearchFiltersProgram::ProgramNameHasBeenSet() const
{
    return m_programNameHasBeenSet;
}

