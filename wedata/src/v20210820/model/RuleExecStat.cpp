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

#include <tencentcloud/wedata/v20210820/model/RuleExecStat.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RuleExecStat::RuleExecStat() :
    m_totalCntHasBeenSet(false),
    m_lastTotalCntHasBeenSet(false),
    m_totalCntRatioHasBeenSet(false),
    m_lastTotalCntRatioHasBeenSet(false),
    m_triggerCntHasBeenSet(false),
    m_lastTriggerCntHasBeenSet(false),
    m_triggerCntRatioHasBeenSet(false),
    m_lastTriggerCntRatioHasBeenSet(false),
    m_alarmCntHasBeenSet(false),
    m_lastAlarmCntHasBeenSet(false),
    m_alarmCntRatioHasBeenSet(false),
    m_lastAlarmCntRatioHasBeenSet(false),
    m_pipelineCntHasBeenSet(false),
    m_lastPipelineCntHasBeenSet(false),
    m_pipelineCntRatioHasBeenSet(false),
    m_lastPipelineCntRatioHasBeenSet(false)
{
}

CoreInternalOutcome RuleExecStat::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCnt") && !value["TotalCnt"].IsNull())
    {
        if (!value["TotalCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecStat.TotalCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCnt = value["TotalCnt"].GetUint64();
        m_totalCntHasBeenSet = true;
    }

    if (value.HasMember("LastTotalCnt") && !value["LastTotalCnt"].IsNull())
    {
        if (!value["LastTotalCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecStat.LastTotalCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastTotalCnt = value["LastTotalCnt"].GetUint64();
        m_lastTotalCntHasBeenSet = true;
    }

    if (value.HasMember("TotalCntRatio") && !value["TotalCntRatio"].IsNull())
    {
        if (!value["TotalCntRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecStat.TotalCntRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalCntRatio = value["TotalCntRatio"].GetDouble();
        m_totalCntRatioHasBeenSet = true;
    }

    if (value.HasMember("LastTotalCntRatio") && !value["LastTotalCntRatio"].IsNull())
    {
        if (!value["LastTotalCntRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecStat.LastTotalCntRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lastTotalCntRatio = value["LastTotalCntRatio"].GetDouble();
        m_lastTotalCntRatioHasBeenSet = true;
    }

    if (value.HasMember("TriggerCnt") && !value["TriggerCnt"].IsNull())
    {
        if (!value["TriggerCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecStat.TriggerCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_triggerCnt = value["TriggerCnt"].GetUint64();
        m_triggerCntHasBeenSet = true;
    }

    if (value.HasMember("LastTriggerCnt") && !value["LastTriggerCnt"].IsNull())
    {
        if (!value["LastTriggerCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecStat.LastTriggerCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastTriggerCnt = value["LastTriggerCnt"].GetUint64();
        m_lastTriggerCntHasBeenSet = true;
    }

    if (value.HasMember("TriggerCntRatio") && !value["TriggerCntRatio"].IsNull())
    {
        if (!value["TriggerCntRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecStat.TriggerCntRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_triggerCntRatio = value["TriggerCntRatio"].GetDouble();
        m_triggerCntRatioHasBeenSet = true;
    }

    if (value.HasMember("LastTriggerCntRatio") && !value["LastTriggerCntRatio"].IsNull())
    {
        if (!value["LastTriggerCntRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecStat.LastTriggerCntRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lastTriggerCntRatio = value["LastTriggerCntRatio"].GetDouble();
        m_lastTriggerCntRatioHasBeenSet = true;
    }

    if (value.HasMember("AlarmCnt") && !value["AlarmCnt"].IsNull())
    {
        if (!value["AlarmCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecStat.AlarmCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmCnt = value["AlarmCnt"].GetUint64();
        m_alarmCntHasBeenSet = true;
    }

    if (value.HasMember("LastAlarmCnt") && !value["LastAlarmCnt"].IsNull())
    {
        if (!value["LastAlarmCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecStat.LastAlarmCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastAlarmCnt = value["LastAlarmCnt"].GetUint64();
        m_lastAlarmCntHasBeenSet = true;
    }

    if (value.HasMember("AlarmCntRatio") && !value["AlarmCntRatio"].IsNull())
    {
        if (!value["AlarmCntRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecStat.AlarmCntRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_alarmCntRatio = value["AlarmCntRatio"].GetDouble();
        m_alarmCntRatioHasBeenSet = true;
    }

    if (value.HasMember("LastAlarmCntRatio") && !value["LastAlarmCntRatio"].IsNull())
    {
        if (!value["LastAlarmCntRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecStat.LastAlarmCntRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lastAlarmCntRatio = value["LastAlarmCntRatio"].GetDouble();
        m_lastAlarmCntRatioHasBeenSet = true;
    }

    if (value.HasMember("PipelineCnt") && !value["PipelineCnt"].IsNull())
    {
        if (!value["PipelineCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecStat.PipelineCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pipelineCnt = value["PipelineCnt"].GetUint64();
        m_pipelineCntHasBeenSet = true;
    }

    if (value.HasMember("LastPipelineCnt") && !value["LastPipelineCnt"].IsNull())
    {
        if (!value["LastPipelineCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecStat.LastPipelineCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastPipelineCnt = value["LastPipelineCnt"].GetUint64();
        m_lastPipelineCntHasBeenSet = true;
    }

    if (value.HasMember("PipelineCntRatio") && !value["PipelineCntRatio"].IsNull())
    {
        if (!value["PipelineCntRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecStat.PipelineCntRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_pipelineCntRatio = value["PipelineCntRatio"].GetDouble();
        m_pipelineCntRatioHasBeenSet = true;
    }

    if (value.HasMember("LastPipelineCntRatio") && !value["LastPipelineCntRatio"].IsNull())
    {
        if (!value["LastPipelineCntRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecStat.LastPipelineCntRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lastPipelineCntRatio = value["LastPipelineCntRatio"].GetDouble();
        m_lastPipelineCntRatioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleExecStat::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCnt, allocator);
    }

    if (m_lastTotalCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastTotalCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastTotalCnt, allocator);
    }

    if (m_totalCntRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCntRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCntRatio, allocator);
    }

    if (m_lastTotalCntRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastTotalCntRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastTotalCntRatio, allocator);
    }

    if (m_triggerCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_triggerCnt, allocator);
    }

    if (m_lastTriggerCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastTriggerCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastTriggerCnt, allocator);
    }

    if (m_triggerCntRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerCntRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_triggerCntRatio, allocator);
    }

    if (m_lastTriggerCntRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastTriggerCntRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastTriggerCntRatio, allocator);
    }

    if (m_alarmCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmCnt, allocator);
    }

    if (m_lastAlarmCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastAlarmCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastAlarmCnt, allocator);
    }

    if (m_alarmCntRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmCntRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmCntRatio, allocator);
    }

    if (m_lastAlarmCntRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastAlarmCntRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastAlarmCntRatio, allocator);
    }

    if (m_pipelineCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PipelineCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pipelineCnt, allocator);
    }

    if (m_lastPipelineCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastPipelineCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastPipelineCnt, allocator);
    }

    if (m_pipelineCntRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PipelineCntRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pipelineCntRatio, allocator);
    }

    if (m_lastPipelineCntRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastPipelineCntRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastPipelineCntRatio, allocator);
    }

}


uint64_t RuleExecStat::GetTotalCnt() const
{
    return m_totalCnt;
}

void RuleExecStat::SetTotalCnt(const uint64_t& _totalCnt)
{
    m_totalCnt = _totalCnt;
    m_totalCntHasBeenSet = true;
}

bool RuleExecStat::TotalCntHasBeenSet() const
{
    return m_totalCntHasBeenSet;
}

uint64_t RuleExecStat::GetLastTotalCnt() const
{
    return m_lastTotalCnt;
}

void RuleExecStat::SetLastTotalCnt(const uint64_t& _lastTotalCnt)
{
    m_lastTotalCnt = _lastTotalCnt;
    m_lastTotalCntHasBeenSet = true;
}

bool RuleExecStat::LastTotalCntHasBeenSet() const
{
    return m_lastTotalCntHasBeenSet;
}

double RuleExecStat::GetTotalCntRatio() const
{
    return m_totalCntRatio;
}

void RuleExecStat::SetTotalCntRatio(const double& _totalCntRatio)
{
    m_totalCntRatio = _totalCntRatio;
    m_totalCntRatioHasBeenSet = true;
}

bool RuleExecStat::TotalCntRatioHasBeenSet() const
{
    return m_totalCntRatioHasBeenSet;
}

double RuleExecStat::GetLastTotalCntRatio() const
{
    return m_lastTotalCntRatio;
}

void RuleExecStat::SetLastTotalCntRatio(const double& _lastTotalCntRatio)
{
    m_lastTotalCntRatio = _lastTotalCntRatio;
    m_lastTotalCntRatioHasBeenSet = true;
}

bool RuleExecStat::LastTotalCntRatioHasBeenSet() const
{
    return m_lastTotalCntRatioHasBeenSet;
}

uint64_t RuleExecStat::GetTriggerCnt() const
{
    return m_triggerCnt;
}

void RuleExecStat::SetTriggerCnt(const uint64_t& _triggerCnt)
{
    m_triggerCnt = _triggerCnt;
    m_triggerCntHasBeenSet = true;
}

bool RuleExecStat::TriggerCntHasBeenSet() const
{
    return m_triggerCntHasBeenSet;
}

uint64_t RuleExecStat::GetLastTriggerCnt() const
{
    return m_lastTriggerCnt;
}

void RuleExecStat::SetLastTriggerCnt(const uint64_t& _lastTriggerCnt)
{
    m_lastTriggerCnt = _lastTriggerCnt;
    m_lastTriggerCntHasBeenSet = true;
}

bool RuleExecStat::LastTriggerCntHasBeenSet() const
{
    return m_lastTriggerCntHasBeenSet;
}

double RuleExecStat::GetTriggerCntRatio() const
{
    return m_triggerCntRatio;
}

void RuleExecStat::SetTriggerCntRatio(const double& _triggerCntRatio)
{
    m_triggerCntRatio = _triggerCntRatio;
    m_triggerCntRatioHasBeenSet = true;
}

bool RuleExecStat::TriggerCntRatioHasBeenSet() const
{
    return m_triggerCntRatioHasBeenSet;
}

double RuleExecStat::GetLastTriggerCntRatio() const
{
    return m_lastTriggerCntRatio;
}

void RuleExecStat::SetLastTriggerCntRatio(const double& _lastTriggerCntRatio)
{
    m_lastTriggerCntRatio = _lastTriggerCntRatio;
    m_lastTriggerCntRatioHasBeenSet = true;
}

bool RuleExecStat::LastTriggerCntRatioHasBeenSet() const
{
    return m_lastTriggerCntRatioHasBeenSet;
}

uint64_t RuleExecStat::GetAlarmCnt() const
{
    return m_alarmCnt;
}

void RuleExecStat::SetAlarmCnt(const uint64_t& _alarmCnt)
{
    m_alarmCnt = _alarmCnt;
    m_alarmCntHasBeenSet = true;
}

bool RuleExecStat::AlarmCntHasBeenSet() const
{
    return m_alarmCntHasBeenSet;
}

uint64_t RuleExecStat::GetLastAlarmCnt() const
{
    return m_lastAlarmCnt;
}

void RuleExecStat::SetLastAlarmCnt(const uint64_t& _lastAlarmCnt)
{
    m_lastAlarmCnt = _lastAlarmCnt;
    m_lastAlarmCntHasBeenSet = true;
}

bool RuleExecStat::LastAlarmCntHasBeenSet() const
{
    return m_lastAlarmCntHasBeenSet;
}

double RuleExecStat::GetAlarmCntRatio() const
{
    return m_alarmCntRatio;
}

void RuleExecStat::SetAlarmCntRatio(const double& _alarmCntRatio)
{
    m_alarmCntRatio = _alarmCntRatio;
    m_alarmCntRatioHasBeenSet = true;
}

bool RuleExecStat::AlarmCntRatioHasBeenSet() const
{
    return m_alarmCntRatioHasBeenSet;
}

double RuleExecStat::GetLastAlarmCntRatio() const
{
    return m_lastAlarmCntRatio;
}

void RuleExecStat::SetLastAlarmCntRatio(const double& _lastAlarmCntRatio)
{
    m_lastAlarmCntRatio = _lastAlarmCntRatio;
    m_lastAlarmCntRatioHasBeenSet = true;
}

bool RuleExecStat::LastAlarmCntRatioHasBeenSet() const
{
    return m_lastAlarmCntRatioHasBeenSet;
}

uint64_t RuleExecStat::GetPipelineCnt() const
{
    return m_pipelineCnt;
}

void RuleExecStat::SetPipelineCnt(const uint64_t& _pipelineCnt)
{
    m_pipelineCnt = _pipelineCnt;
    m_pipelineCntHasBeenSet = true;
}

bool RuleExecStat::PipelineCntHasBeenSet() const
{
    return m_pipelineCntHasBeenSet;
}

uint64_t RuleExecStat::GetLastPipelineCnt() const
{
    return m_lastPipelineCnt;
}

void RuleExecStat::SetLastPipelineCnt(const uint64_t& _lastPipelineCnt)
{
    m_lastPipelineCnt = _lastPipelineCnt;
    m_lastPipelineCntHasBeenSet = true;
}

bool RuleExecStat::LastPipelineCntHasBeenSet() const
{
    return m_lastPipelineCntHasBeenSet;
}

double RuleExecStat::GetPipelineCntRatio() const
{
    return m_pipelineCntRatio;
}

void RuleExecStat::SetPipelineCntRatio(const double& _pipelineCntRatio)
{
    m_pipelineCntRatio = _pipelineCntRatio;
    m_pipelineCntRatioHasBeenSet = true;
}

bool RuleExecStat::PipelineCntRatioHasBeenSet() const
{
    return m_pipelineCntRatioHasBeenSet;
}

double RuleExecStat::GetLastPipelineCntRatio() const
{
    return m_lastPipelineCntRatio;
}

void RuleExecStat::SetLastPipelineCntRatio(const double& _lastPipelineCntRatio)
{
    m_lastPipelineCntRatio = _lastPipelineCntRatio;
    m_lastPipelineCntRatioHasBeenSet = true;
}

bool RuleExecStat::LastPipelineCntRatioHasBeenSet() const
{
    return m_lastPipelineCntRatioHasBeenSet;
}

