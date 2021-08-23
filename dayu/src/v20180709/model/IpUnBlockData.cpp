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

#include <tencentcloud/dayu/v20180709/model/IpUnBlockData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

IpUnBlockData::IpUnBlockData() :
    m_ipHasBeenSet(false),
    m_blockTimeHasBeenSet(false),
    m_unBlockTimeHasBeenSet(false),
    m_actionTypeHasBeenSet(false)
{
}

CoreInternalOutcome IpUnBlockData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpUnBlockData.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("BlockTime") && !value["BlockTime"].IsNull())
    {
        if (!value["BlockTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpUnBlockData.BlockTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockTime = string(value["BlockTime"].GetString());
        m_blockTimeHasBeenSet = true;
    }

    if (value.HasMember("UnBlockTime") && !value["UnBlockTime"].IsNull())
    {
        if (!value["UnBlockTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpUnBlockData.UnBlockTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unBlockTime = string(value["UnBlockTime"].GetString());
        m_unBlockTimeHasBeenSet = true;
    }

    if (value.HasMember("ActionType") && !value["ActionType"].IsNull())
    {
        if (!value["ActionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpUnBlockData.ActionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionType = string(value["ActionType"].GetString());
        m_actionTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IpUnBlockData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_blockTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockTime.c_str(), allocator).Move(), allocator);
    }

    if (m_unBlockTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnBlockTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unBlockTime.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionType.c_str(), allocator).Move(), allocator);
    }

}


string IpUnBlockData::GetIp() const
{
    return m_ip;
}

void IpUnBlockData::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool IpUnBlockData::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string IpUnBlockData::GetBlockTime() const
{
    return m_blockTime;
}

void IpUnBlockData::SetBlockTime(const string& _blockTime)
{
    m_blockTime = _blockTime;
    m_blockTimeHasBeenSet = true;
}

bool IpUnBlockData::BlockTimeHasBeenSet() const
{
    return m_blockTimeHasBeenSet;
}

string IpUnBlockData::GetUnBlockTime() const
{
    return m_unBlockTime;
}

void IpUnBlockData::SetUnBlockTime(const string& _unBlockTime)
{
    m_unBlockTime = _unBlockTime;
    m_unBlockTimeHasBeenSet = true;
}

bool IpUnBlockData::UnBlockTimeHasBeenSet() const
{
    return m_unBlockTimeHasBeenSet;
}

string IpUnBlockData::GetActionType() const
{
    return m_actionType;
}

void IpUnBlockData::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool IpUnBlockData::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

