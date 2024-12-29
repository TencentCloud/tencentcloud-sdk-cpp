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

#include <tencentcloud/oceanus/v20190422/model/SubEks.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

SubEks::SubEks() :
    m_serialIdHasBeenSet(false),
    m_cuNumHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_runningCuHasBeenSet(false),
    m_totalCpuHasBeenSet(false),
    m_totalMemHasBeenSet(false),
    m_runningCpuHasBeenSet(false),
    m_runningMemHasBeenSet(false)
{
}

CoreInternalOutcome SubEks::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SerialId") && !value["SerialId"].IsNull())
    {
        if (!value["SerialId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubEks.SerialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serialId = string(value["SerialId"].GetString());
        m_serialIdHasBeenSet = true;
    }

    if (value.HasMember("CuNum") && !value["CuNum"].IsNull())
    {
        if (!value["CuNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubEks.CuNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cuNum = value["CuNum"].GetInt64();
        m_cuNumHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubEks.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubEks.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("RunningCu") && !value["RunningCu"].IsNull())
    {
        if (!value["RunningCu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SubEks.RunningCu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_runningCu = value["RunningCu"].GetDouble();
        m_runningCuHasBeenSet = true;
    }

    if (value.HasMember("TotalCpu") && !value["TotalCpu"].IsNull())
    {
        if (!value["TotalCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SubEks.TotalCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalCpu = value["TotalCpu"].GetDouble();
        m_totalCpuHasBeenSet = true;
    }

    if (value.HasMember("TotalMem") && !value["TotalMem"].IsNull())
    {
        if (!value["TotalMem"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SubEks.TotalMem` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalMem = value["TotalMem"].GetDouble();
        m_totalMemHasBeenSet = true;
    }

    if (value.HasMember("RunningCpu") && !value["RunningCpu"].IsNull())
    {
        if (!value["RunningCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SubEks.RunningCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_runningCpu = value["RunningCpu"].GetDouble();
        m_runningCpuHasBeenSet = true;
    }

    if (value.HasMember("RunningMem") && !value["RunningMem"].IsNull())
    {
        if (!value["RunningMem"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SubEks.RunningMem` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_runningMem = value["RunningMem"].GetDouble();
        m_runningMemHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubEks::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serialId.c_str(), allocator).Move(), allocator);
    }

    if (m_cuNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CuNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cuNum, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_statusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_runningCuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningCu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningCu, allocator);
    }

    if (m_totalCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCpu, allocator);
    }

    if (m_totalMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalMem, allocator);
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

}


string SubEks::GetSerialId() const
{
    return m_serialId;
}

void SubEks::SetSerialId(const string& _serialId)
{
    m_serialId = _serialId;
    m_serialIdHasBeenSet = true;
}

bool SubEks::SerialIdHasBeenSet() const
{
    return m_serialIdHasBeenSet;
}

int64_t SubEks::GetCuNum() const
{
    return m_cuNum;
}

void SubEks::SetCuNum(const int64_t& _cuNum)
{
    m_cuNum = _cuNum;
    m_cuNumHasBeenSet = true;
}

bool SubEks::CuNumHasBeenSet() const
{
    return m_cuNumHasBeenSet;
}

int64_t SubEks::GetStatus() const
{
    return m_status;
}

void SubEks::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SubEks::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SubEks::GetStatusDesc() const
{
    return m_statusDesc;
}

void SubEks::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool SubEks::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

double SubEks::GetRunningCu() const
{
    return m_runningCu;
}

void SubEks::SetRunningCu(const double& _runningCu)
{
    m_runningCu = _runningCu;
    m_runningCuHasBeenSet = true;
}

bool SubEks::RunningCuHasBeenSet() const
{
    return m_runningCuHasBeenSet;
}

double SubEks::GetTotalCpu() const
{
    return m_totalCpu;
}

void SubEks::SetTotalCpu(const double& _totalCpu)
{
    m_totalCpu = _totalCpu;
    m_totalCpuHasBeenSet = true;
}

bool SubEks::TotalCpuHasBeenSet() const
{
    return m_totalCpuHasBeenSet;
}

double SubEks::GetTotalMem() const
{
    return m_totalMem;
}

void SubEks::SetTotalMem(const double& _totalMem)
{
    m_totalMem = _totalMem;
    m_totalMemHasBeenSet = true;
}

bool SubEks::TotalMemHasBeenSet() const
{
    return m_totalMemHasBeenSet;
}

double SubEks::GetRunningCpu() const
{
    return m_runningCpu;
}

void SubEks::SetRunningCpu(const double& _runningCpu)
{
    m_runningCpu = _runningCpu;
    m_runningCpuHasBeenSet = true;
}

bool SubEks::RunningCpuHasBeenSet() const
{
    return m_runningCpuHasBeenSet;
}

double SubEks::GetRunningMem() const
{
    return m_runningMem;
}

void SubEks::SetRunningMem(const double& _runningMem)
{
    m_runningMem = _runningMem;
    m_runningMemHasBeenSet = true;
}

bool SubEks::RunningMemHasBeenSet() const
{
    return m_runningMemHasBeenSet;
}

