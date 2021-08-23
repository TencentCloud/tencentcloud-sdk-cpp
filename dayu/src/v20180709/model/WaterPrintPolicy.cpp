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

#include <tencentcloud/dayu/v20180709/model/WaterPrintPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

WaterPrintPolicy::WaterPrintPolicy() :
    m_tcpPortListHasBeenSet(false),
    m_udpPortListHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_removeSwitchHasBeenSet(false),
    m_openStatusHasBeenSet(false)
{
}

CoreInternalOutcome WaterPrintPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TcpPortList") && !value["TcpPortList"].IsNull())
    {
        if (!value["TcpPortList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WaterPrintPolicy.TcpPortList` is not array type"));

        const rapidjson::Value &tmpValue = value["TcpPortList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tcpPortList.push_back((*itr).GetString());
        }
        m_tcpPortListHasBeenSet = true;
    }

    if (value.HasMember("UdpPortList") && !value["UdpPortList"].IsNull())
    {
        if (!value["UdpPortList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WaterPrintPolicy.UdpPortList` is not array type"));

        const rapidjson::Value &tmpValue = value["UdpPortList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_udpPortList.push_back((*itr).GetString());
        }
        m_udpPortListHasBeenSet = true;
    }

    if (value.HasMember("Offset") && !value["Offset"].IsNull())
    {
        if (!value["Offset"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WaterPrintPolicy.Offset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_offset = value["Offset"].GetUint64();
        m_offsetHasBeenSet = true;
    }

    if (value.HasMember("RemoveSwitch") && !value["RemoveSwitch"].IsNull())
    {
        if (!value["RemoveSwitch"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WaterPrintPolicy.RemoveSwitch` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_removeSwitch = value["RemoveSwitch"].GetUint64();
        m_removeSwitchHasBeenSet = true;
    }

    if (value.HasMember("OpenStatus") && !value["OpenStatus"].IsNull())
    {
        if (!value["OpenStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WaterPrintPolicy.OpenStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_openStatus = value["OpenStatus"].GetUint64();
        m_openStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WaterPrintPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tcpPortListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TcpPortList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tcpPortList.begin(); itr != m_tcpPortList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_udpPortListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UdpPortList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_udpPortList.begin(); itr != m_udpPortList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offset, allocator);
    }

    if (m_removeSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoveSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_removeSwitch, allocator);
    }

    if (m_openStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_openStatus, allocator);
    }

}


vector<string> WaterPrintPolicy::GetTcpPortList() const
{
    return m_tcpPortList;
}

void WaterPrintPolicy::SetTcpPortList(const vector<string>& _tcpPortList)
{
    m_tcpPortList = _tcpPortList;
    m_tcpPortListHasBeenSet = true;
}

bool WaterPrintPolicy::TcpPortListHasBeenSet() const
{
    return m_tcpPortListHasBeenSet;
}

vector<string> WaterPrintPolicy::GetUdpPortList() const
{
    return m_udpPortList;
}

void WaterPrintPolicy::SetUdpPortList(const vector<string>& _udpPortList)
{
    m_udpPortList = _udpPortList;
    m_udpPortListHasBeenSet = true;
}

bool WaterPrintPolicy::UdpPortListHasBeenSet() const
{
    return m_udpPortListHasBeenSet;
}

uint64_t WaterPrintPolicy::GetOffset() const
{
    return m_offset;
}

void WaterPrintPolicy::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool WaterPrintPolicy::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t WaterPrintPolicy::GetRemoveSwitch() const
{
    return m_removeSwitch;
}

void WaterPrintPolicy::SetRemoveSwitch(const uint64_t& _removeSwitch)
{
    m_removeSwitch = _removeSwitch;
    m_removeSwitchHasBeenSet = true;
}

bool WaterPrintPolicy::RemoveSwitchHasBeenSet() const
{
    return m_removeSwitchHasBeenSet;
}

uint64_t WaterPrintPolicy::GetOpenStatus() const
{
    return m_openStatus;
}

void WaterPrintPolicy::SetOpenStatus(const uint64_t& _openStatus)
{
    m_openStatus = _openStatus;
    m_openStatusHasBeenSet = true;
}

bool WaterPrintPolicy::OpenStatusHasBeenSet() const
{
    return m_openStatusHasBeenSet;
}

