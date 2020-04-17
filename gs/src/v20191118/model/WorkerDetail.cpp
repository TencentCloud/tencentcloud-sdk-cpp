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

#include <tencentcloud/gs/v20191118/model/WorkerDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gs::V20191118::Model;
using namespace rapidjson;
using namespace std;

WorkerDetail::WorkerDetail() :
    m_appIdHasBeenSet(false),
    m_setNoHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_serviceStateHasBeenSet(false)
{
}

CoreInternalOutcome WorkerDetail::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `WorkerDetail.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("SetNo") && !value["SetNo"].IsNull())
    {
        if (!value["SetNo"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `WorkerDetail.SetNo` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_setNo = value["SetNo"].GetUint64();
        m_setNoHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Error("response `WorkerDetail.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `WorkerDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Error("response `WorkerDetail.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Error("response `WorkerDetail.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("ServiceState") && !value["ServiceState"].IsNull())
    {
        if (!value["ServiceState"].IsString())
        {
            return CoreInternalOutcome(Error("response `WorkerDetail.ServiceState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceState = string(value["ServiceState"].GetString());
        m_serviceStateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkerDetail::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_setNoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SetNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_setNo, allocator);
    }

    if (m_regionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceStateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_serviceState.c_str(), allocator).Move(), allocator);
    }

}


uint64_t WorkerDetail::GetAppId() const
{
    return m_appId;
}

void WorkerDetail::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool WorkerDetail::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

uint64_t WorkerDetail::GetSetNo() const
{
    return m_setNo;
}

void WorkerDetail::SetSetNo(const uint64_t& _setNo)
{
    m_setNo = _setNo;
    m_setNoHasBeenSet = true;
}

bool WorkerDetail::SetNoHasBeenSet() const
{
    return m_setNoHasBeenSet;
}

string WorkerDetail::GetRegion() const
{
    return m_region;
}

void WorkerDetail::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool WorkerDetail::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string WorkerDetail::GetInstanceId() const
{
    return m_instanceId;
}

void WorkerDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool WorkerDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string WorkerDetail::GetInstanceType() const
{
    return m_instanceType;
}

void WorkerDetail::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool WorkerDetail::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string WorkerDetail::GetIp() const
{
    return m_ip;
}

void WorkerDetail::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool WorkerDetail::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string WorkerDetail::GetServiceState() const
{
    return m_serviceState;
}

void WorkerDetail::SetServiceState(const string& _serviceState)
{
    m_serviceState = _serviceState;
    m_serviceStateHasBeenSet = true;
}

bool WorkerDetail::ServiceStateHasBeenSet() const
{
    return m_serviceStateHasBeenSet;
}

