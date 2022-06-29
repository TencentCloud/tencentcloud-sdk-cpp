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

#include <tencentcloud/tsf/v20180326/model/Program.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

Program::Program() :
    m_programIdHasBeenSet(false),
    m_programNameHasBeenSet(false),
    m_programDescHasBeenSet(false),
    m_deleteFlagHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_programItemListHasBeenSet(false)
{
}

CoreInternalOutcome Program::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProgramId") && !value["ProgramId"].IsNull())
    {
        if (!value["ProgramId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Program.ProgramId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_programId = string(value["ProgramId"].GetString());
        m_programIdHasBeenSet = true;
    }

    if (value.HasMember("ProgramName") && !value["ProgramName"].IsNull())
    {
        if (!value["ProgramName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Program.ProgramName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_programName = string(value["ProgramName"].GetString());
        m_programNameHasBeenSet = true;
    }

    if (value.HasMember("ProgramDesc") && !value["ProgramDesc"].IsNull())
    {
        if (!value["ProgramDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Program.ProgramDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_programDesc = string(value["ProgramDesc"].GetString());
        m_programDescHasBeenSet = true;
    }

    if (value.HasMember("DeleteFlag") && !value["DeleteFlag"].IsNull())
    {
        if (!value["DeleteFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Program.DeleteFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deleteFlag = value["DeleteFlag"].GetBool();
        m_deleteFlagHasBeenSet = true;
    }

    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Program.CreationTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = value["CreationTime"].GetInt64();
        m_creationTimeHasBeenSet = true;
    }

    if (value.HasMember("LastUpdateTime") && !value["LastUpdateTime"].IsNull())
    {
        if (!value["LastUpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Program.LastUpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdateTime = value["LastUpdateTime"].GetInt64();
        m_lastUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("ProgramItemList") && !value["ProgramItemList"].IsNull())
    {
        if (!value["ProgramItemList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Program.ProgramItemList` is not array type"));

        const rapidjson::Value &tmpValue = value["ProgramItemList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProgramItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_programItemList.push_back(item);
        }
        m_programItemListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Program::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_programDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_programDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleteFlag, allocator);
    }

    if (m_creationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_creationTime, allocator);
    }

    if (m_lastUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastUpdateTime, allocator);
    }

    if (m_programItemListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramItemList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_programItemList.begin(); itr != m_programItemList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Program::GetProgramId() const
{
    return m_programId;
}

void Program::SetProgramId(const string& _programId)
{
    m_programId = _programId;
    m_programIdHasBeenSet = true;
}

bool Program::ProgramIdHasBeenSet() const
{
    return m_programIdHasBeenSet;
}

string Program::GetProgramName() const
{
    return m_programName;
}

void Program::SetProgramName(const string& _programName)
{
    m_programName = _programName;
    m_programNameHasBeenSet = true;
}

bool Program::ProgramNameHasBeenSet() const
{
    return m_programNameHasBeenSet;
}

string Program::GetProgramDesc() const
{
    return m_programDesc;
}

void Program::SetProgramDesc(const string& _programDesc)
{
    m_programDesc = _programDesc;
    m_programDescHasBeenSet = true;
}

bool Program::ProgramDescHasBeenSet() const
{
    return m_programDescHasBeenSet;
}

bool Program::GetDeleteFlag() const
{
    return m_deleteFlag;
}

void Program::SetDeleteFlag(const bool& _deleteFlag)
{
    m_deleteFlag = _deleteFlag;
    m_deleteFlagHasBeenSet = true;
}

bool Program::DeleteFlagHasBeenSet() const
{
    return m_deleteFlagHasBeenSet;
}

int64_t Program::GetCreationTime() const
{
    return m_creationTime;
}

void Program::SetCreationTime(const int64_t& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool Program::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

int64_t Program::GetLastUpdateTime() const
{
    return m_lastUpdateTime;
}

void Program::SetLastUpdateTime(const int64_t& _lastUpdateTime)
{
    m_lastUpdateTime = _lastUpdateTime;
    m_lastUpdateTimeHasBeenSet = true;
}

bool Program::LastUpdateTimeHasBeenSet() const
{
    return m_lastUpdateTimeHasBeenSet;
}

vector<ProgramItem> Program::GetProgramItemList() const
{
    return m_programItemList;
}

void Program::SetProgramItemList(const vector<ProgramItem>& _programItemList)
{
    m_programItemList = _programItemList;
    m_programItemListHasBeenSet = true;
}

bool Program::ProgramItemListHasBeenSet() const
{
    return m_programItemListHasBeenSet;
}

