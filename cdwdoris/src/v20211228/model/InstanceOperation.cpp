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

#include <tencentcloud/cdwdoris/v20211228/model/InstanceOperation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

InstanceOperation::InstanceOperation() :
    m_nameHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_descHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_levelDescHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_resultDescHasBeenSet(false),
    m_operateUinHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_operationDetailHasBeenSet(false),
    m_computerGroupIdHasBeenSet(false)
{
}

CoreInternalOutcome InstanceOperation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOperation.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOperation.Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(value["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOperation.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOperation.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("LevelDesc") && !value["LevelDesc"].IsNull())
    {
        if (!value["LevelDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOperation.LevelDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_levelDesc = string(value["LevelDesc"].GetString());
        m_levelDescHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOperation.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOperation.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("ResultDesc") && !value["ResultDesc"].IsNull())
    {
        if (!value["ResultDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOperation.ResultDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultDesc = string(value["ResultDesc"].GetString());
        m_resultDescHasBeenSet = true;
    }

    if (value.HasMember("OperateUin") && !value["OperateUin"].IsNull())
    {
        if (!value["OperateUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOperation.OperateUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operateUin = string(value["OperateUin"].GetString());
        m_operateUinHasBeenSet = true;
    }

    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOperation.JobId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = value["JobId"].GetInt64();
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("OperationDetail") && !value["OperationDetail"].IsNull())
    {
        if (!value["OperationDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOperation.OperationDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationDetail = string(value["OperationDetail"].GetString());
        m_operationDetailHasBeenSet = true;
    }

    if (value.HasMember("ComputerGroupId") && !value["ComputerGroupId"].IsNull())
    {
        if (!value["ComputerGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOperation.ComputerGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_computerGroupId = string(value["ComputerGroupId"].GetString());
        m_computerGroupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceOperation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_levelDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_levelDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_resultDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_operateUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operateUin.c_str(), allocator).Move(), allocator);
    }

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobId, allocator);
    }

    if (m_operationDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operationDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_computerGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputerGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_computerGroupId.c_str(), allocator).Move(), allocator);
    }

}


string InstanceOperation::GetName() const
{
    return m_name;
}

void InstanceOperation::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool InstanceOperation::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string InstanceOperation::GetResult() const
{
    return m_result;
}

void InstanceOperation::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool InstanceOperation::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string InstanceOperation::GetDesc() const
{
    return m_desc;
}

void InstanceOperation::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool InstanceOperation::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string InstanceOperation::GetLevel() const
{
    return m_level;
}

void InstanceOperation::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool InstanceOperation::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string InstanceOperation::GetLevelDesc() const
{
    return m_levelDesc;
}

void InstanceOperation::SetLevelDesc(const string& _levelDesc)
{
    m_levelDesc = _levelDesc;
    m_levelDescHasBeenSet = true;
}

bool InstanceOperation::LevelDescHasBeenSet() const
{
    return m_levelDescHasBeenSet;
}

string InstanceOperation::GetStartTime() const
{
    return m_startTime;
}

void InstanceOperation::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool InstanceOperation::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string InstanceOperation::GetEndTime() const
{
    return m_endTime;
}

void InstanceOperation::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool InstanceOperation::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string InstanceOperation::GetResultDesc() const
{
    return m_resultDesc;
}

void InstanceOperation::SetResultDesc(const string& _resultDesc)
{
    m_resultDesc = _resultDesc;
    m_resultDescHasBeenSet = true;
}

bool InstanceOperation::ResultDescHasBeenSet() const
{
    return m_resultDescHasBeenSet;
}

string InstanceOperation::GetOperateUin() const
{
    return m_operateUin;
}

void InstanceOperation::SetOperateUin(const string& _operateUin)
{
    m_operateUin = _operateUin;
    m_operateUinHasBeenSet = true;
}

bool InstanceOperation::OperateUinHasBeenSet() const
{
    return m_operateUinHasBeenSet;
}

int64_t InstanceOperation::GetJobId() const
{
    return m_jobId;
}

void InstanceOperation::SetJobId(const int64_t& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool InstanceOperation::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string InstanceOperation::GetOperationDetail() const
{
    return m_operationDetail;
}

void InstanceOperation::SetOperationDetail(const string& _operationDetail)
{
    m_operationDetail = _operationDetail;
    m_operationDetailHasBeenSet = true;
}

bool InstanceOperation::OperationDetailHasBeenSet() const
{
    return m_operationDetailHasBeenSet;
}

string InstanceOperation::GetComputerGroupId() const
{
    return m_computerGroupId;
}

void InstanceOperation::SetComputerGroupId(const string& _computerGroupId)
{
    m_computerGroupId = _computerGroupId;
    m_computerGroupIdHasBeenSet = true;
}

bool InstanceOperation::ComputerGroupIdHasBeenSet() const
{
    return m_computerGroupIdHasBeenSet;
}

