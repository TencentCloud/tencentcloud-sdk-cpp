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

#include <tencentcloud/redis/v20180412/model/SourceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

SourceInfo::SourceInfo() :
    m_ipHasBeenSet(false),
    m_connHasBeenSet(false),
    m_cmdHasBeenSet(false)
{
}

CoreInternalOutcome SourceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceInfo.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Conn") && !value["Conn"].IsNull())
    {
        if (!value["Conn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SourceInfo.Conn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_conn = value["Conn"].GetInt64();
        m_connHasBeenSet = true;
    }

    if (value.HasMember("Cmd") && !value["Cmd"].IsNull())
    {
        if (!value["Cmd"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SourceInfo.Cmd` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cmd = value["Cmd"].GetInt64();
        m_cmdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SourceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_connHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Conn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_conn, allocator);
    }

    if (m_cmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cmd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cmd, allocator);
    }

}


string SourceInfo::GetIp() const
{
    return m_ip;
}

void SourceInfo::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool SourceInfo::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

int64_t SourceInfo::GetConn() const
{
    return m_conn;
}

void SourceInfo::SetConn(const int64_t& _conn)
{
    m_conn = _conn;
    m_connHasBeenSet = true;
}

bool SourceInfo::ConnHasBeenSet() const
{
    return m_connHasBeenSet;
}

int64_t SourceInfo::GetCmd() const
{
    return m_cmd;
}

void SourceInfo::SetCmd(const int64_t& _cmd)
{
    m_cmd = _cmd;
    m_cmdHasBeenSet = true;
}

bool SourceInfo::CmdHasBeenSet() const
{
    return m_cmdHasBeenSet;
}

