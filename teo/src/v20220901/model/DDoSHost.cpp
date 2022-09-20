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

#include <tencentcloud/teo/v20220901/model/DDoSHost.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

DDoSHost::DDoSHost() :
    m_hostHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_accelerateTypeHasBeenSet(false),
    m_securityTypeHasBeenSet(false)
{
}

CoreInternalOutcome DDoSHost::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSHost.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSHost.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AccelerateType") && !value["AccelerateType"].IsNull())
    {
        if (!value["AccelerateType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSHost.AccelerateType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accelerateType = string(value["AccelerateType"].GetString());
        m_accelerateTypeHasBeenSet = true;
    }

    if (value.HasMember("SecurityType") && !value["SecurityType"].IsNull())
    {
        if (!value["SecurityType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSHost.SecurityType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityType = string(value["SecurityType"].GetString());
        m_securityTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DDoSHost::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_accelerateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccelerateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accelerateType.c_str(), allocator).Move(), allocator);
    }

    if (m_securityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_securityType.c_str(), allocator).Move(), allocator);
    }

}


string DDoSHost::GetHost() const
{
    return m_host;
}

void DDoSHost::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool DDoSHost::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string DDoSHost::GetStatus() const
{
    return m_status;
}

void DDoSHost::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DDoSHost::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DDoSHost::GetAccelerateType() const
{
    return m_accelerateType;
}

void DDoSHost::SetAccelerateType(const string& _accelerateType)
{
    m_accelerateType = _accelerateType;
    m_accelerateTypeHasBeenSet = true;
}

bool DDoSHost::AccelerateTypeHasBeenSet() const
{
    return m_accelerateTypeHasBeenSet;
}

string DDoSHost::GetSecurityType() const
{
    return m_securityType;
}

void DDoSHost::SetSecurityType(const string& _securityType)
{
    m_securityType = _securityType;
    m_securityTypeHasBeenSet = true;
}

bool DDoSHost::SecurityTypeHasBeenSet() const
{
    return m_securityTypeHasBeenSet;
}

