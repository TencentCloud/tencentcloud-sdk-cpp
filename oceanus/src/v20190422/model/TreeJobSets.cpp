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

#include <tencentcloud/oceanus/v20190422/model/TreeJobSets.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

TreeJobSets::TreeJobSets() :
    m_jobIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_jobTypeHasBeenSet(false),
    m_runningCuHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_scalingTypeHasBeenSet(false),
    m_runningCpuHasBeenSet(false),
    m_runningMemHasBeenSet(false),
    m_decodeSqlCodeHasBeenSet(false)
{
}

CoreInternalOutcome TreeJobSets::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreeJobSets.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreeJobSets.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("JobType") && !value["JobType"].IsNull())
    {
        if (!value["JobType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TreeJobSets.JobType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobType = value["JobType"].GetInt64();
        m_jobTypeHasBeenSet = true;
    }

    if (value.HasMember("RunningCu") && !value["RunningCu"].IsNull())
    {
        if (!value["RunningCu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TreeJobSets.RunningCu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_runningCu = value["RunningCu"].GetDouble();
        m_runningCuHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TreeJobSets.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ScalingType") && !value["ScalingType"].IsNull())
    {
        if (!value["ScalingType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TreeJobSets.ScalingType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scalingType = value["ScalingType"].GetInt64();
        m_scalingTypeHasBeenSet = true;
    }

    if (value.HasMember("RunningCpu") && !value["RunningCpu"].IsNull())
    {
        if (!value["RunningCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TreeJobSets.RunningCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_runningCpu = value["RunningCpu"].GetDouble();
        m_runningCpuHasBeenSet = true;
    }

    if (value.HasMember("RunningMem") && !value["RunningMem"].IsNull())
    {
        if (!value["RunningMem"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TreeJobSets.RunningMem` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_runningMem = value["RunningMem"].GetDouble();
        m_runningMemHasBeenSet = true;
    }

    if (value.HasMember("DecodeSqlCode") && !value["DecodeSqlCode"].IsNull())
    {
        if (!value["DecodeSqlCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreeJobSets.DecodeSqlCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_decodeSqlCode = string(value["DecodeSqlCode"].GetString());
        m_decodeSqlCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TreeJobSets::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_jobTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobType, allocator);
    }

    if (m_runningCuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningCu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningCu, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_scalingTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScalingType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scalingType, allocator);
    }

    if (m_runningCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningCpu, allocator);
    }

    if (m_runningMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningMem, allocator);
    }

    if (m_decodeSqlCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DecodeSqlCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_decodeSqlCode.c_str(), allocator).Move(), allocator);
    }

}


string TreeJobSets::GetJobId() const
{
    return m_jobId;
}

void TreeJobSets::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool TreeJobSets::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string TreeJobSets::GetName() const
{
    return m_name;
}

void TreeJobSets::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TreeJobSets::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t TreeJobSets::GetJobType() const
{
    return m_jobType;
}

void TreeJobSets::SetJobType(const int64_t& _jobType)
{
    m_jobType = _jobType;
    m_jobTypeHasBeenSet = true;
}

bool TreeJobSets::JobTypeHasBeenSet() const
{
    return m_jobTypeHasBeenSet;
}

double TreeJobSets::GetRunningCu() const
{
    return m_runningCu;
}

void TreeJobSets::SetRunningCu(const double& _runningCu)
{
    m_runningCu = _runningCu;
    m_runningCuHasBeenSet = true;
}

bool TreeJobSets::RunningCuHasBeenSet() const
{
    return m_runningCuHasBeenSet;
}

int64_t TreeJobSets::GetStatus() const
{
    return m_status;
}

void TreeJobSets::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TreeJobSets::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t TreeJobSets::GetScalingType() const
{
    return m_scalingType;
}

void TreeJobSets::SetScalingType(const int64_t& _scalingType)
{
    m_scalingType = _scalingType;
    m_scalingTypeHasBeenSet = true;
}

bool TreeJobSets::ScalingTypeHasBeenSet() const
{
    return m_scalingTypeHasBeenSet;
}

double TreeJobSets::GetRunningCpu() const
{
    return m_runningCpu;
}

void TreeJobSets::SetRunningCpu(const double& _runningCpu)
{
    m_runningCpu = _runningCpu;
    m_runningCpuHasBeenSet = true;
}

bool TreeJobSets::RunningCpuHasBeenSet() const
{
    return m_runningCpuHasBeenSet;
}

double TreeJobSets::GetRunningMem() const
{
    return m_runningMem;
}

void TreeJobSets::SetRunningMem(const double& _runningMem)
{
    m_runningMem = _runningMem;
    m_runningMemHasBeenSet = true;
}

bool TreeJobSets::RunningMemHasBeenSet() const
{
    return m_runningMemHasBeenSet;
}

string TreeJobSets::GetDecodeSqlCode() const
{
    return m_decodeSqlCode;
}

void TreeJobSets::SetDecodeSqlCode(const string& _decodeSqlCode)
{
    m_decodeSqlCode = _decodeSqlCode;
    m_decodeSqlCodeHasBeenSet = true;
}

bool TreeJobSets::DecodeSqlCodeHasBeenSet() const
{
    return m_decodeSqlCodeHasBeenSet;
}

