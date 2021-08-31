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

#include <tencentcloud/cwp/v20180228/model/ProtectMachine.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ProtectMachine::ProtectMachine() :
    m_hostNameHasBeenSet(false),
    m_hostIpHasBeenSet(false),
    m_safeguardDirNumHasBeenSet(false)
{
}

CoreInternalOutcome ProtectMachine::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectMachine.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("HostIp") && !value["HostIp"].IsNull())
    {
        if (!value["HostIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectMachine.HostIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIp = string(value["HostIp"].GetString());
        m_hostIpHasBeenSet = true;
    }

    if (value.HasMember("SafeguardDirNum") && !value["SafeguardDirNum"].IsNull())
    {
        if (!value["SafeguardDirNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectMachine.SafeguardDirNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_safeguardDirNum = value["SafeguardDirNum"].GetUint64();
        m_safeguardDirNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProtectMachine::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIp.c_str(), allocator).Move(), allocator);
    }

    if (m_safeguardDirNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SafeguardDirNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_safeguardDirNum, allocator);
    }

}


string ProtectMachine::GetHostName() const
{
    return m_hostName;
}

void ProtectMachine::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool ProtectMachine::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string ProtectMachine::GetHostIp() const
{
    return m_hostIp;
}

void ProtectMachine::SetHostIp(const string& _hostIp)
{
    m_hostIp = _hostIp;
    m_hostIpHasBeenSet = true;
}

bool ProtectMachine::HostIpHasBeenSet() const
{
    return m_hostIpHasBeenSet;
}

uint64_t ProtectMachine::GetSafeguardDirNum() const
{
    return m_safeguardDirNum;
}

void ProtectMachine::SetSafeguardDirNum(const uint64_t& _safeguardDirNum)
{
    m_safeguardDirNum = _safeguardDirNum;
    m_safeguardDirNumHasBeenSet = true;
}

bool ProtectMachine::SafeguardDirNumHasBeenSet() const
{
    return m_safeguardDirNumHasBeenSet;
}

