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

#include <tencentcloud/mps/v20190612/model/ProgramAlertCounts.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ProgramAlertCounts::ProgramAlertCounts() :
    m_programIdHasBeenSet(false),
    m_programNameHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_countHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
}

CoreInternalOutcome ProgramAlertCounts::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProgramId") && !value["ProgramId"].IsNull())
    {
        if (!value["ProgramId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProgramAlertCounts.ProgramId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_programId = string(value["ProgramId"].GetString());
        m_programIdHasBeenSet = true;
    }

    if (value.HasMember("ProgramName") && !value["ProgramName"].IsNull())
    {
        if (!value["ProgramName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProgramAlertCounts.ProgramName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_programName = string(value["ProgramName"].GetString());
        m_programNameHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProgramAlertCounts.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProgramAlertCounts.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("LastModifiedTime") && !value["LastModifiedTime"].IsNull())
    {
        if (!value["LastModifiedTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProgramAlertCounts.LastModifiedTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifiedTime = value["LastModifiedTime"].GetUint64();
        m_lastModifiedTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProgramAlertCounts::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_lastModifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastModifiedTime, allocator);
    }

}


string ProgramAlertCounts::GetProgramId() const
{
    return m_programId;
}

void ProgramAlertCounts::SetProgramId(const string& _programId)
{
    m_programId = _programId;
    m_programIdHasBeenSet = true;
}

bool ProgramAlertCounts::ProgramIdHasBeenSet() const
{
    return m_programIdHasBeenSet;
}

string ProgramAlertCounts::GetProgramName() const
{
    return m_programName;
}

void ProgramAlertCounts::SetProgramName(const string& _programName)
{
    m_programName = _programName;
    m_programNameHasBeenSet = true;
}

bool ProgramAlertCounts::ProgramNameHasBeenSet() const
{
    return m_programNameHasBeenSet;
}

string ProgramAlertCounts::GetCategory() const
{
    return m_category;
}

void ProgramAlertCounts::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool ProgramAlertCounts::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

uint64_t ProgramAlertCounts::GetCount() const
{
    return m_count;
}

void ProgramAlertCounts::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool ProgramAlertCounts::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

uint64_t ProgramAlertCounts::GetLastModifiedTime() const
{
    return m_lastModifiedTime;
}

void ProgramAlertCounts::SetLastModifiedTime(const uint64_t& _lastModifiedTime)
{
    m_lastModifiedTime = _lastModifiedTime;
    m_lastModifiedTimeHasBeenSet = true;
}

bool ProgramAlertCounts::LastModifiedTimeHasBeenSet() const
{
    return m_lastModifiedTimeHasBeenSet;
}

