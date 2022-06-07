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

#include <tencentcloud/tione/v20211111/model/StartCmdInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

StartCmdInfo::StartCmdInfo() :
    m_startCmdHasBeenSet(false),
    m_psStartCmdHasBeenSet(false),
    m_workerStartCmdHasBeenSet(false)
{
}

CoreInternalOutcome StartCmdInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartCmd") && !value["StartCmd"].IsNull())
    {
        if (!value["StartCmd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StartCmdInfo.StartCmd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startCmd = string(value["StartCmd"].GetString());
        m_startCmdHasBeenSet = true;
    }

    if (value.HasMember("PsStartCmd") && !value["PsStartCmd"].IsNull())
    {
        if (!value["PsStartCmd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StartCmdInfo.PsStartCmd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_psStartCmd = string(value["PsStartCmd"].GetString());
        m_psStartCmdHasBeenSet = true;
    }

    if (value.HasMember("WorkerStartCmd") && !value["WorkerStartCmd"].IsNull())
    {
        if (!value["WorkerStartCmd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StartCmdInfo.WorkerStartCmd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workerStartCmd = string(value["WorkerStartCmd"].GetString());
        m_workerStartCmdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StartCmdInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startCmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartCmd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startCmd.c_str(), allocator).Move(), allocator);
    }

    if (m_psStartCmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PsStartCmd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_psStartCmd.c_str(), allocator).Move(), allocator);
    }

    if (m_workerStartCmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkerStartCmd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workerStartCmd.c_str(), allocator).Move(), allocator);
    }

}


string StartCmdInfo::GetStartCmd() const
{
    return m_startCmd;
}

void StartCmdInfo::SetStartCmd(const string& _startCmd)
{
    m_startCmd = _startCmd;
    m_startCmdHasBeenSet = true;
}

bool StartCmdInfo::StartCmdHasBeenSet() const
{
    return m_startCmdHasBeenSet;
}

string StartCmdInfo::GetPsStartCmd() const
{
    return m_psStartCmd;
}

void StartCmdInfo::SetPsStartCmd(const string& _psStartCmd)
{
    m_psStartCmd = _psStartCmd;
    m_psStartCmdHasBeenSet = true;
}

bool StartCmdInfo::PsStartCmdHasBeenSet() const
{
    return m_psStartCmdHasBeenSet;
}

string StartCmdInfo::GetWorkerStartCmd() const
{
    return m_workerStartCmd;
}

void StartCmdInfo::SetWorkerStartCmd(const string& _workerStartCmd)
{
    m_workerStartCmd = _workerStartCmd;
    m_workerStartCmdHasBeenSet = true;
}

bool StartCmdInfo::WorkerStartCmdHasBeenSet() const
{
    return m_workerStartCmdHasBeenSet;
}

