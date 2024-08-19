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

#include <tencentcloud/cdwdoris/v20211228/model/CoolDownBackend.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

CoolDownBackend::CoolDownBackend() :
    m_hostHasBeenSet(false),
    m_dataUsedCapacityHasBeenSet(false),
    m_totalCapacityHasBeenSet(false),
    m_remoteUsedCapacityHasBeenSet(false)
{
}

CoreInternalOutcome CoolDownBackend::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CoolDownBackend.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("DataUsedCapacity") && !value["DataUsedCapacity"].IsNull())
    {
        if (!value["DataUsedCapacity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CoolDownBackend.DataUsedCapacity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataUsedCapacity = string(value["DataUsedCapacity"].GetString());
        m_dataUsedCapacityHasBeenSet = true;
    }

    if (value.HasMember("TotalCapacity") && !value["TotalCapacity"].IsNull())
    {
        if (!value["TotalCapacity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CoolDownBackend.TotalCapacity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCapacity = string(value["TotalCapacity"].GetString());
        m_totalCapacityHasBeenSet = true;
    }

    if (value.HasMember("RemoteUsedCapacity") && !value["RemoteUsedCapacity"].IsNull())
    {
        if (!value["RemoteUsedCapacity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CoolDownBackend.RemoteUsedCapacity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remoteUsedCapacity = string(value["RemoteUsedCapacity"].GetString());
        m_remoteUsedCapacityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CoolDownBackend::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_dataUsedCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataUsedCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataUsedCapacity.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalCapacity.c_str(), allocator).Move(), allocator);
    }

    if (m_remoteUsedCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteUsedCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remoteUsedCapacity.c_str(), allocator).Move(), allocator);
    }

}


string CoolDownBackend::GetHost() const
{
    return m_host;
}

void CoolDownBackend::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool CoolDownBackend::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string CoolDownBackend::GetDataUsedCapacity() const
{
    return m_dataUsedCapacity;
}

void CoolDownBackend::SetDataUsedCapacity(const string& _dataUsedCapacity)
{
    m_dataUsedCapacity = _dataUsedCapacity;
    m_dataUsedCapacityHasBeenSet = true;
}

bool CoolDownBackend::DataUsedCapacityHasBeenSet() const
{
    return m_dataUsedCapacityHasBeenSet;
}

string CoolDownBackend::GetTotalCapacity() const
{
    return m_totalCapacity;
}

void CoolDownBackend::SetTotalCapacity(const string& _totalCapacity)
{
    m_totalCapacity = _totalCapacity;
    m_totalCapacityHasBeenSet = true;
}

bool CoolDownBackend::TotalCapacityHasBeenSet() const
{
    return m_totalCapacityHasBeenSet;
}

string CoolDownBackend::GetRemoteUsedCapacity() const
{
    return m_remoteUsedCapacity;
}

void CoolDownBackend::SetRemoteUsedCapacity(const string& _remoteUsedCapacity)
{
    m_remoteUsedCapacity = _remoteUsedCapacity;
    m_remoteUsedCapacityHasBeenSet = true;
}

bool CoolDownBackend::RemoteUsedCapacityHasBeenSet() const
{
    return m_remoteUsedCapacityHasBeenSet;
}

