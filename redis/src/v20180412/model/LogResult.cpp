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

#include <tencentcloud/redis/v20180412/model/LogResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

LogResult::LogResult() :
    m_dBIdHasBeenSet(false),
    m_commandLatencyHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_clientAddrHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_commandTypeHasBeenSet(false),
    m_cacheCodeHasBeenSet(false),
    m_commandDetailHasBeenSet(false),
    m_errMsgHasBeenSet(false)
{
}

CoreInternalOutcome LogResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DBId") && !value["DBId"].IsNull())
    {
        if (!value["DBId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.DBId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dBId = value["DBId"].GetInt64();
        m_dBIdHasBeenSet = true;
    }

    if (value.HasMember("CommandLatency") && !value["CommandLatency"].IsNull())
    {
        if (!value["CommandLatency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.CommandLatency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_commandLatency = value["CommandLatency"].GetInt64();
        m_commandLatencyHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.Timestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = string(value["Timestamp"].GetString());
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("ClientAddr") && !value["ClientAddr"].IsNull())
    {
        if (!value["ClientAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.ClientAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientAddr = string(value["ClientAddr"].GetString());
        m_clientAddrHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("CommandType") && !value["CommandType"].IsNull())
    {
        if (!value["CommandType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.CommandType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_commandType = string(value["CommandType"].GetString());
        m_commandTypeHasBeenSet = true;
    }

    if (value.HasMember("CacheCode") && !value["CacheCode"].IsNull())
    {
        if (!value["CacheCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.CacheCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cacheCode = string(value["CacheCode"].GetString());
        m_cacheCodeHasBeenSet = true;
    }

    if (value.HasMember("CommandDetail") && !value["CommandDetail"].IsNull())
    {
        if (!value["CommandDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.CommandDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_commandDetail = string(value["CommandDetail"].GetString());
        m_commandDetailHasBeenSet = true;
    }

    if (value.HasMember("ErrMsg") && !value["ErrMsg"].IsNull())
    {
        if (!value["ErrMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogResult.ErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMsg = string(value["ErrMsg"].GetString());
        m_errMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dBIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dBId, allocator);
    }

    if (m_commandLatencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommandLatency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_commandLatency, allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_clientAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_commandTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommandType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_commandType.c_str(), allocator).Move(), allocator);
    }

    if (m_cacheCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cacheCode.c_str(), allocator).Move(), allocator);
    }

    if (m_commandDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommandDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_commandDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_errMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errMsg.c_str(), allocator).Move(), allocator);
    }

}


int64_t LogResult::GetDBId() const
{
    return m_dBId;
}

void LogResult::SetDBId(const int64_t& _dBId)
{
    m_dBId = _dBId;
    m_dBIdHasBeenSet = true;
}

bool LogResult::DBIdHasBeenSet() const
{
    return m_dBIdHasBeenSet;
}

int64_t LogResult::GetCommandLatency() const
{
    return m_commandLatency;
}

void LogResult::SetCommandLatency(const int64_t& _commandLatency)
{
    m_commandLatency = _commandLatency;
    m_commandLatencyHasBeenSet = true;
}

bool LogResult::CommandLatencyHasBeenSet() const
{
    return m_commandLatencyHasBeenSet;
}

string LogResult::GetTimestamp() const
{
    return m_timestamp;
}

void LogResult::SetTimestamp(const string& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool LogResult::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string LogResult::GetClientAddr() const
{
    return m_clientAddr;
}

void LogResult::SetClientAddr(const string& _clientAddr)
{
    m_clientAddr = _clientAddr;
    m_clientAddrHasBeenSet = true;
}

bool LogResult::ClientAddrHasBeenSet() const
{
    return m_clientAddrHasBeenSet;
}

string LogResult::GetUserName() const
{
    return m_userName;
}

void LogResult::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool LogResult::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string LogResult::GetCommandType() const
{
    return m_commandType;
}

void LogResult::SetCommandType(const string& _commandType)
{
    m_commandType = _commandType;
    m_commandTypeHasBeenSet = true;
}

bool LogResult::CommandTypeHasBeenSet() const
{
    return m_commandTypeHasBeenSet;
}

string LogResult::GetCacheCode() const
{
    return m_cacheCode;
}

void LogResult::SetCacheCode(const string& _cacheCode)
{
    m_cacheCode = _cacheCode;
    m_cacheCodeHasBeenSet = true;
}

bool LogResult::CacheCodeHasBeenSet() const
{
    return m_cacheCodeHasBeenSet;
}

string LogResult::GetCommandDetail() const
{
    return m_commandDetail;
}

void LogResult::SetCommandDetail(const string& _commandDetail)
{
    m_commandDetail = _commandDetail;
    m_commandDetailHasBeenSet = true;
}

bool LogResult::CommandDetailHasBeenSet() const
{
    return m_commandDetailHasBeenSet;
}

string LogResult::GetErrMsg() const
{
    return m_errMsg;
}

void LogResult::SetErrMsg(const string& _errMsg)
{
    m_errMsg = _errMsg;
    m_errMsgHasBeenSet = true;
}

bool LogResult::ErrMsgHasBeenSet() const
{
    return m_errMsgHasBeenSet;
}

