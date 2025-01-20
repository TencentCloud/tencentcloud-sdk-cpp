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

#include <tencentcloud/vpc/v20170312/model/GatewayFlowMonitorDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

GatewayFlowMonitorDetail::GatewayFlowMonitorDetail() :
    m_privateIpAddressHasBeenSet(false),
    m_inPkgHasBeenSet(false),
    m_outPkgHasBeenSet(false),
    m_inTrafficHasBeenSet(false),
    m_outTrafficHasBeenSet(false),
    m_concurrentConnectionCountHasBeenSet(false),
    m_newConnectionRateHasBeenSet(false)
{
}

CoreInternalOutcome GatewayFlowMonitorDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PrivateIpAddress") && !value["PrivateIpAddress"].IsNull())
    {
        if (!value["PrivateIpAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayFlowMonitorDetail.PrivateIpAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIpAddress = string(value["PrivateIpAddress"].GetString());
        m_privateIpAddressHasBeenSet = true;
    }

    if (value.HasMember("InPkg") && !value["InPkg"].IsNull())
    {
        if (!value["InPkg"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayFlowMonitorDetail.InPkg` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_inPkg = value["InPkg"].GetUint64();
        m_inPkgHasBeenSet = true;
    }

    if (value.HasMember("OutPkg") && !value["OutPkg"].IsNull())
    {
        if (!value["OutPkg"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayFlowMonitorDetail.OutPkg` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_outPkg = value["OutPkg"].GetUint64();
        m_outPkgHasBeenSet = true;
    }

    if (value.HasMember("InTraffic") && !value["InTraffic"].IsNull())
    {
        if (!value["InTraffic"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayFlowMonitorDetail.InTraffic` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_inTraffic = value["InTraffic"].GetUint64();
        m_inTrafficHasBeenSet = true;
    }

    if (value.HasMember("OutTraffic") && !value["OutTraffic"].IsNull())
    {
        if (!value["OutTraffic"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayFlowMonitorDetail.OutTraffic` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_outTraffic = value["OutTraffic"].GetUint64();
        m_outTrafficHasBeenSet = true;
    }

    if (value.HasMember("ConcurrentConnectionCount") && !value["ConcurrentConnectionCount"].IsNull())
    {
        if (!value["ConcurrentConnectionCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayFlowMonitorDetail.ConcurrentConnectionCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_concurrentConnectionCount = value["ConcurrentConnectionCount"].GetUint64();
        m_concurrentConnectionCountHasBeenSet = true;
    }

    if (value.HasMember("NewConnectionRate") && !value["NewConnectionRate"].IsNull())
    {
        if (!value["NewConnectionRate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayFlowMonitorDetail.NewConnectionRate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_newConnectionRate = value["NewConnectionRate"].GetUint64();
        m_newConnectionRateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GatewayFlowMonitorDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_privateIpAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIpAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIpAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_inPkgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InPkg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inPkg, allocator);
    }

    if (m_outPkgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutPkg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outPkg, allocator);
    }

    if (m_inTrafficHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InTraffic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inTraffic, allocator);
    }

    if (m_outTrafficHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutTraffic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outTraffic, allocator);
    }

    if (m_concurrentConnectionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConcurrentConnectionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_concurrentConnectionCount, allocator);
    }

    if (m_newConnectionRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewConnectionRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_newConnectionRate, allocator);
    }

}


string GatewayFlowMonitorDetail::GetPrivateIpAddress() const
{
    return m_privateIpAddress;
}

void GatewayFlowMonitorDetail::SetPrivateIpAddress(const string& _privateIpAddress)
{
    m_privateIpAddress = _privateIpAddress;
    m_privateIpAddressHasBeenSet = true;
}

bool GatewayFlowMonitorDetail::PrivateIpAddressHasBeenSet() const
{
    return m_privateIpAddressHasBeenSet;
}

uint64_t GatewayFlowMonitorDetail::GetInPkg() const
{
    return m_inPkg;
}

void GatewayFlowMonitorDetail::SetInPkg(const uint64_t& _inPkg)
{
    m_inPkg = _inPkg;
    m_inPkgHasBeenSet = true;
}

bool GatewayFlowMonitorDetail::InPkgHasBeenSet() const
{
    return m_inPkgHasBeenSet;
}

uint64_t GatewayFlowMonitorDetail::GetOutPkg() const
{
    return m_outPkg;
}

void GatewayFlowMonitorDetail::SetOutPkg(const uint64_t& _outPkg)
{
    m_outPkg = _outPkg;
    m_outPkgHasBeenSet = true;
}

bool GatewayFlowMonitorDetail::OutPkgHasBeenSet() const
{
    return m_outPkgHasBeenSet;
}

uint64_t GatewayFlowMonitorDetail::GetInTraffic() const
{
    return m_inTraffic;
}

void GatewayFlowMonitorDetail::SetInTraffic(const uint64_t& _inTraffic)
{
    m_inTraffic = _inTraffic;
    m_inTrafficHasBeenSet = true;
}

bool GatewayFlowMonitorDetail::InTrafficHasBeenSet() const
{
    return m_inTrafficHasBeenSet;
}

uint64_t GatewayFlowMonitorDetail::GetOutTraffic() const
{
    return m_outTraffic;
}

void GatewayFlowMonitorDetail::SetOutTraffic(const uint64_t& _outTraffic)
{
    m_outTraffic = _outTraffic;
    m_outTrafficHasBeenSet = true;
}

bool GatewayFlowMonitorDetail::OutTrafficHasBeenSet() const
{
    return m_outTrafficHasBeenSet;
}

uint64_t GatewayFlowMonitorDetail::GetConcurrentConnectionCount() const
{
    return m_concurrentConnectionCount;
}

void GatewayFlowMonitorDetail::SetConcurrentConnectionCount(const uint64_t& _concurrentConnectionCount)
{
    m_concurrentConnectionCount = _concurrentConnectionCount;
    m_concurrentConnectionCountHasBeenSet = true;
}

bool GatewayFlowMonitorDetail::ConcurrentConnectionCountHasBeenSet() const
{
    return m_concurrentConnectionCountHasBeenSet;
}

uint64_t GatewayFlowMonitorDetail::GetNewConnectionRate() const
{
    return m_newConnectionRate;
}

void GatewayFlowMonitorDetail::SetNewConnectionRate(const uint64_t& _newConnectionRate)
{
    m_newConnectionRate = _newConnectionRate;
    m_newConnectionRateHasBeenSet = true;
}

bool GatewayFlowMonitorDetail::NewConnectionRateHasBeenSet() const
{
    return m_newConnectionRateHasBeenSet;
}

