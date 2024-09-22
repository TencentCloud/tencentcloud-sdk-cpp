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

#include <tencentcloud/cwp/v20180228/model/CommandLine.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

CommandLine::CommandLine() :
    m_exeHasBeenSet(false),
    m_cmdlineHasBeenSet(false)
{
}

CoreInternalOutcome CommandLine::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Exe") && !value["Exe"].IsNull())
    {
        if (!value["Exe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommandLine.Exe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exe = string(value["Exe"].GetString());
        m_exeHasBeenSet = true;
    }

    if (value.HasMember("Cmdline") && !value["Cmdline"].IsNull())
    {
        if (!value["Cmdline"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommandLine.Cmdline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmdline = string(value["Cmdline"].GetString());
        m_cmdlineHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CommandLine::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_exeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exe.c_str(), allocator).Move(), allocator);
    }

    if (m_cmdlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cmdline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cmdline.c_str(), allocator).Move(), allocator);
    }

}


string CommandLine::GetExe() const
{
    return m_exe;
}

void CommandLine::SetExe(const string& _exe)
{
    m_exe = _exe;
    m_exeHasBeenSet = true;
}

bool CommandLine::ExeHasBeenSet() const
{
    return m_exeHasBeenSet;
}

string CommandLine::GetCmdline() const
{
    return m_cmdline;
}

void CommandLine::SetCmdline(const string& _cmdline)
{
    m_cmdline = _cmdline;
    m_cmdlineHasBeenSet = true;
}

bool CommandLine::CmdlineHasBeenSet() const
{
    return m_cmdlineHasBeenSet;
}

