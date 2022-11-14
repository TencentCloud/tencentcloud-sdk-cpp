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

#include <tencentcloud/wedata/v20210820/model/RuleExecLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RuleExecLog::RuleExecLog() :
    m_finishedHasBeenSet(false),
    m_logHasBeenSet(false)
{
}

CoreInternalOutcome RuleExecLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Finished") && !value["Finished"].IsNull())
    {
        if (!value["Finished"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecLog.Finished` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_finished = value["Finished"].GetBool();
        m_finishedHasBeenSet = true;
    }

    if (value.HasMember("Log") && !value["Log"].IsNull())
    {
        if (!value["Log"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecLog.Log` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_log = string(value["Log"].GetString());
        m_logHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleExecLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_finishedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Finished";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_finished, allocator);
    }

    if (m_logHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Log";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_log.c_str(), allocator).Move(), allocator);
    }

}


bool RuleExecLog::GetFinished() const
{
    return m_finished;
}

void RuleExecLog::SetFinished(const bool& _finished)
{
    m_finished = _finished;
    m_finishedHasBeenSet = true;
}

bool RuleExecLog::FinishedHasBeenSet() const
{
    return m_finishedHasBeenSet;
}

string RuleExecLog::GetLog() const
{
    return m_log;
}

void RuleExecLog::SetLog(const string& _log)
{
    m_log = _log;
    m_logHasBeenSet = true;
}

bool RuleExecLog::LogHasBeenSet() const
{
    return m_logHasBeenSet;
}

