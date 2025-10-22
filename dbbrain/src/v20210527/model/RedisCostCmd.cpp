/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/dbbrain/v20210527/model/RedisCostCmd.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

RedisCostCmd::RedisCostCmd() :
    m_cmdHasBeenSet(false),
    m_maxCostHasBeenSet(false)
{
}

CoreInternalOutcome RedisCostCmd::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Cmd") && !value["Cmd"].IsNull())
    {
        if (!value["Cmd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisCostCmd.Cmd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmd = string(value["Cmd"].GetString());
        m_cmdHasBeenSet = true;
    }

    if (value.HasMember("MaxCost") && !value["MaxCost"].IsNull())
    {
        if (!value["MaxCost"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RedisCostCmd.MaxCost` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxCost = value["MaxCost"].GetUint64();
        m_maxCostHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RedisCostCmd::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cmd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cmd.c_str(), allocator).Move(), allocator);
    }

    if (m_maxCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxCost, allocator);
    }

}


string RedisCostCmd::GetCmd() const
{
    return m_cmd;
}

void RedisCostCmd::SetCmd(const string& _cmd)
{
    m_cmd = _cmd;
    m_cmdHasBeenSet = true;
}

bool RedisCostCmd::CmdHasBeenSet() const
{
    return m_cmdHasBeenSet;
}

uint64_t RedisCostCmd::GetMaxCost() const
{
    return m_maxCost;
}

void RedisCostCmd::SetMaxCost(const uint64_t& _maxCost)
{
    m_maxCost = _maxCost;
    m_maxCostHasBeenSet = true;
}

bool RedisCostCmd::MaxCostHasBeenSet() const
{
    return m_maxCostHasBeenSet;
}

