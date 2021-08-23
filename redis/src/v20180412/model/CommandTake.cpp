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

#include <tencentcloud/redis/v20180412/model/CommandTake.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

CommandTake::CommandTake() :
    m_cmdHasBeenSet(false),
    m_tookHasBeenSet(false)
{
}

CoreInternalOutcome CommandTake::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Cmd") && !value["Cmd"].IsNull())
    {
        if (!value["Cmd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommandTake.Cmd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmd = string(value["Cmd"].GetString());
        m_cmdHasBeenSet = true;
    }

    if (value.HasMember("Took") && !value["Took"].IsNull())
    {
        if (!value["Took"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CommandTake.Took` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_took = value["Took"].GetInt64();
        m_tookHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CommandTake::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cmd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cmd.c_str(), allocator).Move(), allocator);
    }

    if (m_tookHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Took";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_took, allocator);
    }

}


string CommandTake::GetCmd() const
{
    return m_cmd;
}

void CommandTake::SetCmd(const string& _cmd)
{
    m_cmd = _cmd;
    m_cmdHasBeenSet = true;
}

bool CommandTake::CmdHasBeenSet() const
{
    return m_cmdHasBeenSet;
}

int64_t CommandTake::GetTook() const
{
    return m_took;
}

void CommandTake::SetTook(const int64_t& _took)
{
    m_took = _took;
    m_tookHasBeenSet = true;
}

bool CommandTake::TookHasBeenSet() const
{
    return m_tookHasBeenSet;
}

