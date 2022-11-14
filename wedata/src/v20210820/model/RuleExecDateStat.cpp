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

#include <tencentcloud/wedata/v20210820/model/RuleExecDateStat.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RuleExecDateStat::RuleExecDateStat() :
    m_statDateHasBeenSet(false),
    m_alarmCntHasBeenSet(false),
    m_pipelineCntHasBeenSet(false)
{
}

CoreInternalOutcome RuleExecDateStat::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StatDate") && !value["StatDate"].IsNull())
    {
        if (!value["StatDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecDateStat.StatDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statDate = string(value["StatDate"].GetString());
        m_statDateHasBeenSet = true;
    }

    if (value.HasMember("AlarmCnt") && !value["AlarmCnt"].IsNull())
    {
        if (!value["AlarmCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecDateStat.AlarmCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmCnt = value["AlarmCnt"].GetUint64();
        m_alarmCntHasBeenSet = true;
    }

    if (value.HasMember("PipelineCnt") && !value["PipelineCnt"].IsNull())
    {
        if (!value["PipelineCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecDateStat.PipelineCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pipelineCnt = value["PipelineCnt"].GetUint64();
        m_pipelineCntHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleExecDateStat::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statDate.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmCnt, allocator);
    }

    if (m_pipelineCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PipelineCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pipelineCnt, allocator);
    }

}


string RuleExecDateStat::GetStatDate() const
{
    return m_statDate;
}

void RuleExecDateStat::SetStatDate(const string& _statDate)
{
    m_statDate = _statDate;
    m_statDateHasBeenSet = true;
}

bool RuleExecDateStat::StatDateHasBeenSet() const
{
    return m_statDateHasBeenSet;
}

uint64_t RuleExecDateStat::GetAlarmCnt() const
{
    return m_alarmCnt;
}

void RuleExecDateStat::SetAlarmCnt(const uint64_t& _alarmCnt)
{
    m_alarmCnt = _alarmCnt;
    m_alarmCntHasBeenSet = true;
}

bool RuleExecDateStat::AlarmCntHasBeenSet() const
{
    return m_alarmCntHasBeenSet;
}

uint64_t RuleExecDateStat::GetPipelineCnt() const
{
    return m_pipelineCnt;
}

void RuleExecDateStat::SetPipelineCnt(const uint64_t& _pipelineCnt)
{
    m_pipelineCnt = _pipelineCnt;
    m_pipelineCntHasBeenSet = true;
}

bool RuleExecDateStat::PipelineCntHasBeenSet() const
{
    return m_pipelineCntHasBeenSet;
}

