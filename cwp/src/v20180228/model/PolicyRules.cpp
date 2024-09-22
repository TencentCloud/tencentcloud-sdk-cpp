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

#include <tencentcloud/cwp/v20180228/model/PolicyRules.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

PolicyRules::PolicyRules() :
    m_processHasBeenSet(false),
    m_pProcessHasBeenSet(false),
    m_aProcessHasBeenSet(false)
{
}

CoreInternalOutcome PolicyRules::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Process") && !value["Process"].IsNull())
    {
        if (!value["Process"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRules.Process` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_process.Deserialize(value["Process"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_processHasBeenSet = true;
    }

    if (value.HasMember("PProcess") && !value["PProcess"].IsNull())
    {
        if (!value["PProcess"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRules.PProcess` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pProcess.Deserialize(value["PProcess"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pProcessHasBeenSet = true;
    }

    if (value.HasMember("AProcess") && !value["AProcess"].IsNull())
    {
        if (!value["AProcess"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRules.AProcess` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aProcess.Deserialize(value["AProcess"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aProcessHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PolicyRules::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_processHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Process";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_process.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pProcessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PProcess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pProcess.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aProcessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AProcess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aProcess.ToJsonObject(value[key.c_str()], allocator);
    }

}


CommandLine PolicyRules::GetProcess() const
{
    return m_process;
}

void PolicyRules::SetProcess(const CommandLine& _process)
{
    m_process = _process;
    m_processHasBeenSet = true;
}

bool PolicyRules::ProcessHasBeenSet() const
{
    return m_processHasBeenSet;
}

CommandLine PolicyRules::GetPProcess() const
{
    return m_pProcess;
}

void PolicyRules::SetPProcess(const CommandLine& _pProcess)
{
    m_pProcess = _pProcess;
    m_pProcessHasBeenSet = true;
}

bool PolicyRules::PProcessHasBeenSet() const
{
    return m_pProcessHasBeenSet;
}

CommandLine PolicyRules::GetAProcess() const
{
    return m_aProcess;
}

void PolicyRules::SetAProcess(const CommandLine& _aProcess)
{
    m_aProcess = _aProcess;
    m_aProcessHasBeenSet = true;
}

bool PolicyRules::AProcessHasBeenSet() const
{
    return m_aProcessHasBeenSet;
}

