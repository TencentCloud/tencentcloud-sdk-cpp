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

#include <tencentcloud/wedata/v20210820/model/InstanceLifeCycleOpsDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

InstanceLifeCycleOpsDto::InstanceLifeCycleOpsDto() :
    m_taskIdHasBeenSet(false),
    m_curRunDateHasBeenSet(false),
    m_lifeRoundHasBeenSet(false),
    m_runTypeHasBeenSet(false),
    m_triesHasBeenSet(false),
    m_instanceLifeDetailDtoListHasBeenSet(false),
    m_runnerStateHasBeenSet(false),
    m_errorDescHasBeenSet(false),
    m_errorCodeLevelHasBeenSet(false),
    m_instanceLogListOpsDtoHasBeenSet(false),
    m_instanceStateHasBeenSet(false)
{
}

CoreInternalOutcome InstanceLifeCycleOpsDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleOpsDto.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("CurRunDate") && !value["CurRunDate"].IsNull())
    {
        if (!value["CurRunDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleOpsDto.CurRunDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_curRunDate = string(value["CurRunDate"].GetString());
        m_curRunDateHasBeenSet = true;
    }

    if (value.HasMember("LifeRound") && !value["LifeRound"].IsNull())
    {
        if (!value["LifeRound"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleOpsDto.LifeRound` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lifeRound = value["LifeRound"].GetInt64();
        m_lifeRoundHasBeenSet = true;
    }

    if (value.HasMember("RunType") && !value["RunType"].IsNull())
    {
        if (!value["RunType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleOpsDto.RunType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runType = string(value["RunType"].GetString());
        m_runTypeHasBeenSet = true;
    }

    if (value.HasMember("Tries") && !value["Tries"].IsNull())
    {
        if (!value["Tries"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleOpsDto.Tries` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tries = value["Tries"].GetInt64();
        m_triesHasBeenSet = true;
    }

    if (value.HasMember("InstanceLifeDetailDtoList") && !value["InstanceLifeDetailDtoList"].IsNull())
    {
        if (!value["InstanceLifeDetailDtoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleOpsDto.InstanceLifeDetailDtoList` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceLifeDetailDtoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceLifeDetailDto item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceLifeDetailDtoList.push_back(item);
        }
        m_instanceLifeDetailDtoListHasBeenSet = true;
    }

    if (value.HasMember("RunnerState") && !value["RunnerState"].IsNull())
    {
        if (!value["RunnerState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleOpsDto.RunnerState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runnerState = string(value["RunnerState"].GetString());
        m_runnerStateHasBeenSet = true;
    }

    if (value.HasMember("ErrorDesc") && !value["ErrorDesc"].IsNull())
    {
        if (!value["ErrorDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleOpsDto.ErrorDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorDesc = string(value["ErrorDesc"].GetString());
        m_errorDescHasBeenSet = true;
    }

    if (value.HasMember("ErrorCodeLevel") && !value["ErrorCodeLevel"].IsNull())
    {
        if (!value["ErrorCodeLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleOpsDto.ErrorCodeLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCodeLevel = string(value["ErrorCodeLevel"].GetString());
        m_errorCodeLevelHasBeenSet = true;
    }

    if (value.HasMember("InstanceLogListOpsDto") && !value["InstanceLogListOpsDto"].IsNull())
    {
        if (!value["InstanceLogListOpsDto"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleOpsDto.InstanceLogListOpsDto` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceLogListOpsDto.Deserialize(value["InstanceLogListOpsDto"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceLogListOpsDtoHasBeenSet = true;
    }

    if (value.HasMember("InstanceState") && !value["InstanceState"].IsNull())
    {
        if (!value["InstanceState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleOpsDto.InstanceState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceState = string(value["InstanceState"].GetString());
        m_instanceStateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceLifeCycleOpsDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_curRunDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurRunDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_curRunDate.c_str(), allocator).Move(), allocator);
    }

    if (m_lifeRoundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeRound";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lifeRound, allocator);
    }

    if (m_runTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runType.c_str(), allocator).Move(), allocator);
    }

    if (m_triesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tries";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tries, allocator);
    }

    if (m_instanceLifeDetailDtoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceLifeDetailDtoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceLifeDetailDtoList.begin(); itr != m_instanceLifeDetailDtoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_runnerStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunnerState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runnerState.c_str(), allocator).Move(), allocator);
    }

    if (m_errorDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_errorCodeLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCodeLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorCodeLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceLogListOpsDtoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceLogListOpsDto";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceLogListOpsDto.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceState.c_str(), allocator).Move(), allocator);
    }

}


string InstanceLifeCycleOpsDto::GetTaskId() const
{
    return m_taskId;
}

void InstanceLifeCycleOpsDto::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool InstanceLifeCycleOpsDto::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string InstanceLifeCycleOpsDto::GetCurRunDate() const
{
    return m_curRunDate;
}

void InstanceLifeCycleOpsDto::SetCurRunDate(const string& _curRunDate)
{
    m_curRunDate = _curRunDate;
    m_curRunDateHasBeenSet = true;
}

bool InstanceLifeCycleOpsDto::CurRunDateHasBeenSet() const
{
    return m_curRunDateHasBeenSet;
}

int64_t InstanceLifeCycleOpsDto::GetLifeRound() const
{
    return m_lifeRound;
}

void InstanceLifeCycleOpsDto::SetLifeRound(const int64_t& _lifeRound)
{
    m_lifeRound = _lifeRound;
    m_lifeRoundHasBeenSet = true;
}

bool InstanceLifeCycleOpsDto::LifeRoundHasBeenSet() const
{
    return m_lifeRoundHasBeenSet;
}

string InstanceLifeCycleOpsDto::GetRunType() const
{
    return m_runType;
}

void InstanceLifeCycleOpsDto::SetRunType(const string& _runType)
{
    m_runType = _runType;
    m_runTypeHasBeenSet = true;
}

bool InstanceLifeCycleOpsDto::RunTypeHasBeenSet() const
{
    return m_runTypeHasBeenSet;
}

int64_t InstanceLifeCycleOpsDto::GetTries() const
{
    return m_tries;
}

void InstanceLifeCycleOpsDto::SetTries(const int64_t& _tries)
{
    m_tries = _tries;
    m_triesHasBeenSet = true;
}

bool InstanceLifeCycleOpsDto::TriesHasBeenSet() const
{
    return m_triesHasBeenSet;
}

vector<InstanceLifeDetailDto> InstanceLifeCycleOpsDto::GetInstanceLifeDetailDtoList() const
{
    return m_instanceLifeDetailDtoList;
}

void InstanceLifeCycleOpsDto::SetInstanceLifeDetailDtoList(const vector<InstanceLifeDetailDto>& _instanceLifeDetailDtoList)
{
    m_instanceLifeDetailDtoList = _instanceLifeDetailDtoList;
    m_instanceLifeDetailDtoListHasBeenSet = true;
}

bool InstanceLifeCycleOpsDto::InstanceLifeDetailDtoListHasBeenSet() const
{
    return m_instanceLifeDetailDtoListHasBeenSet;
}

string InstanceLifeCycleOpsDto::GetRunnerState() const
{
    return m_runnerState;
}

void InstanceLifeCycleOpsDto::SetRunnerState(const string& _runnerState)
{
    m_runnerState = _runnerState;
    m_runnerStateHasBeenSet = true;
}

bool InstanceLifeCycleOpsDto::RunnerStateHasBeenSet() const
{
    return m_runnerStateHasBeenSet;
}

string InstanceLifeCycleOpsDto::GetErrorDesc() const
{
    return m_errorDesc;
}

void InstanceLifeCycleOpsDto::SetErrorDesc(const string& _errorDesc)
{
    m_errorDesc = _errorDesc;
    m_errorDescHasBeenSet = true;
}

bool InstanceLifeCycleOpsDto::ErrorDescHasBeenSet() const
{
    return m_errorDescHasBeenSet;
}

string InstanceLifeCycleOpsDto::GetErrorCodeLevel() const
{
    return m_errorCodeLevel;
}

void InstanceLifeCycleOpsDto::SetErrorCodeLevel(const string& _errorCodeLevel)
{
    m_errorCodeLevel = _errorCodeLevel;
    m_errorCodeLevelHasBeenSet = true;
}

bool InstanceLifeCycleOpsDto::ErrorCodeLevelHasBeenSet() const
{
    return m_errorCodeLevelHasBeenSet;
}

InstanceLogInfo InstanceLifeCycleOpsDto::GetInstanceLogListOpsDto() const
{
    return m_instanceLogListOpsDto;
}

void InstanceLifeCycleOpsDto::SetInstanceLogListOpsDto(const InstanceLogInfo& _instanceLogListOpsDto)
{
    m_instanceLogListOpsDto = _instanceLogListOpsDto;
    m_instanceLogListOpsDtoHasBeenSet = true;
}

bool InstanceLifeCycleOpsDto::InstanceLogListOpsDtoHasBeenSet() const
{
    return m_instanceLogListOpsDtoHasBeenSet;
}

string InstanceLifeCycleOpsDto::GetInstanceState() const
{
    return m_instanceState;
}

void InstanceLifeCycleOpsDto::SetInstanceState(const string& _instanceState)
{
    m_instanceState = _instanceState;
    m_instanceStateHasBeenSet = true;
}

bool InstanceLifeCycleOpsDto::InstanceStateHasBeenSet() const
{
    return m_instanceStateHasBeenSet;
}

