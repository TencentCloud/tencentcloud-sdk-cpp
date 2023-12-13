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

#include <tencentcloud/antiddos/v20200309/model/IpBlockData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

IpBlockData::IpBlockData() :
    m_statusHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_blockTimeHasBeenSet(false),
    m_unBlockTimeHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_protectFlagHasBeenSet(false)
{
}

CoreInternalOutcome IpBlockData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpBlockData.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpBlockData.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("BlockTime") && !value["BlockTime"].IsNull())
    {
        if (!value["BlockTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpBlockData.BlockTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockTime = string(value["BlockTime"].GetString());
        m_blockTimeHasBeenSet = true;
    }

    if (value.HasMember("UnBlockTime") && !value["UnBlockTime"].IsNull())
    {
        if (!value["UnBlockTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpBlockData.UnBlockTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unBlockTime = string(value["UnBlockTime"].GetString());
        m_unBlockTimeHasBeenSet = true;
    }

    if (value.HasMember("ActionType") && !value["ActionType"].IsNull())
    {
        if (!value["ActionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpBlockData.ActionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionType = string(value["ActionType"].GetString());
        m_actionTypeHasBeenSet = true;
    }

    if (value.HasMember("ProtectFlag") && !value["ProtectFlag"].IsNull())
    {
        if (!value["ProtectFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IpBlockData.ProtectFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectFlag = value["ProtectFlag"].GetUint64();
        m_protectFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IpBlockData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

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

    if (m_protectFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectFlag, allocator);
    }

}


string IpBlockData::GetStatus() const
{
    return m_status;
}

void IpBlockData::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool IpBlockData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string IpBlockData::GetIp() const
{
    return m_ip;
}

void IpBlockData::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool IpBlockData::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string IpBlockData::GetBlockTime() const
{
    return m_blockTime;
}

void IpBlockData::SetBlockTime(const string& _blockTime)
{
    m_blockTime = _blockTime;
    m_blockTimeHasBeenSet = true;
}

bool IpBlockData::BlockTimeHasBeenSet() const
{
    return m_blockTimeHasBeenSet;
}

string IpBlockData::GetUnBlockTime() const
{
    return m_unBlockTime;
}

void IpBlockData::SetUnBlockTime(const string& _unBlockTime)
{
    m_unBlockTime = _unBlockTime;
    m_unBlockTimeHasBeenSet = true;
}

bool IpBlockData::UnBlockTimeHasBeenSet() const
{
    return m_unBlockTimeHasBeenSet;
}

string IpBlockData::GetActionType() const
{
    return m_actionType;
}

void IpBlockData::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool IpBlockData::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

uint64_t IpBlockData::GetProtectFlag() const
{
    return m_protectFlag;
}

void IpBlockData::SetProtectFlag(const uint64_t& _protectFlag)
{
    m_protectFlag = _protectFlag;
    m_protectFlagHasBeenSet = true;
}

bool IpBlockData::ProtectFlagHasBeenSet() const
{
    return m_protectFlagHasBeenSet;
}

