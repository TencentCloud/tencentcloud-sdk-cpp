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

#include <tencentcloud/tcaplusdb/v20190823/model/ProxyMachineInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

ProxyMachineInfo::ProxyMachineInfo() :
    m_proxyUidHasBeenSet(false),
    m_machineTypeHasBeenSet(false),
    m_availableCountHasBeenSet(false)
{
}

CoreInternalOutcome ProxyMachineInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProxyUid") && !value["ProxyUid"].IsNull())
    {
        if (!value["ProxyUid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyMachineInfo.ProxyUid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyUid = string(value["ProxyUid"].GetString());
        m_proxyUidHasBeenSet = true;
    }

    if (value.HasMember("MachineType") && !value["MachineType"].IsNull())
    {
        if (!value["MachineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyMachineInfo.MachineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineType = string(value["MachineType"].GetString());
        m_machineTypeHasBeenSet = true;
    }

    if (value.HasMember("AvailableCount") && !value["AvailableCount"].IsNull())
    {
        if (!value["AvailableCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyMachineInfo.AvailableCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_availableCount = value["AvailableCount"].GetInt64();
        m_availableCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProxyMachineInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_proxyUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyUid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyUid.c_str(), allocator).Move(), allocator);
    }

    if (m_machineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineType.c_str(), allocator).Move(), allocator);
    }

    if (m_availableCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_availableCount, allocator);
    }

}


string ProxyMachineInfo::GetProxyUid() const
{
    return m_proxyUid;
}

void ProxyMachineInfo::SetProxyUid(const string& _proxyUid)
{
    m_proxyUid = _proxyUid;
    m_proxyUidHasBeenSet = true;
}

bool ProxyMachineInfo::ProxyUidHasBeenSet() const
{
    return m_proxyUidHasBeenSet;
}

string ProxyMachineInfo::GetMachineType() const
{
    return m_machineType;
}

void ProxyMachineInfo::SetMachineType(const string& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool ProxyMachineInfo::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

int64_t ProxyMachineInfo::GetAvailableCount() const
{
    return m_availableCount;
}

void ProxyMachineInfo::SetAvailableCount(const int64_t& _availableCount)
{
    m_availableCount = _availableCount;
    m_availableCountHasBeenSet = true;
}

bool ProxyMachineInfo::AvailableCountHasBeenSet() const
{
    return m_availableCountHasBeenSet;
}

