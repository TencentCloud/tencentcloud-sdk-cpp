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

#include <tencentcloud/hasim/v20210716/model/CreateTacticRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Hasim::V20210716::Model;
using namespace std;

CreateTacticRequest::CreateTacticRequest() :
    m_nameHasBeenSet(false),
    m_isAutoHasBeenSet(false),
    m_pingIntervalHasBeenSet(false),
    m_isWeakHasBeenSet(false),
    m_weakThresholdHasBeenSet(false),
    m_isDelayHasBeenSet(false),
    m_delayThresholdHasBeenSet(false),
    m_isFakeHasBeenSet(false),
    m_fakeIPHasBeenSet(false),
    m_fakeIntervalHasBeenSet(false),
    m_isNetHasBeenSet(false),
    m_networkHasBeenSet(false),
    m_isMoveHasBeenSet(false),
    m_isPriorityTeleHasBeenSet(false),
    m_priorityTeleHasBeenSet(false),
    m_isBottomTeleHasBeenSet(false),
    m_bottomTeleHasBeenSet(false),
    m_isBestSignalHasBeenSet(false)
{
}

string CreateTacticRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_isAutoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAuto";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isAuto, allocator);
    }

    if (m_pingIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PingInterval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pingInterval, allocator);
    }

    if (m_isWeakHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsWeak";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isWeak, allocator);
    }

    if (m_weakThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeakThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_weakThreshold, allocator);
    }

    if (m_isDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDelay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isDelay, allocator);
    }

    if (m_delayThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_delayThreshold, allocator);
    }

    if (m_isFakeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFake";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isFake, allocator);
    }

    if (m_fakeIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FakeIP";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fakeIP.c_str(), allocator).Move(), allocator);
    }

    if (m_fakeIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FakeInterval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fakeInterval, allocator);
    }

    if (m_isNetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isNet, allocator);
    }

    if (m_networkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Network";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_network, allocator);
    }

    if (m_isMoveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsMove";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isMove, allocator);
    }

    if (m_isPriorityTeleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPriorityTele";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isPriorityTele, allocator);
    }

    if (m_priorityTeleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PriorityTele";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_priorityTele, allocator);
    }

    if (m_isBottomTeleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsBottomTele";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isBottomTele, allocator);
    }

    if (m_bottomTeleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BottomTele";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bottomTele, allocator);
    }

    if (m_isBestSignalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsBestSignal";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isBestSignal, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTacticRequest::GetName() const
{
    return m_name;
}

void CreateTacticRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateTacticRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t CreateTacticRequest::GetIsAuto() const
{
    return m_isAuto;
}

void CreateTacticRequest::SetIsAuto(const int64_t& _isAuto)
{
    m_isAuto = _isAuto;
    m_isAutoHasBeenSet = true;
}

bool CreateTacticRequest::IsAutoHasBeenSet() const
{
    return m_isAutoHasBeenSet;
}

int64_t CreateTacticRequest::GetPingInterval() const
{
    return m_pingInterval;
}

void CreateTacticRequest::SetPingInterval(const int64_t& _pingInterval)
{
    m_pingInterval = _pingInterval;
    m_pingIntervalHasBeenSet = true;
}

bool CreateTacticRequest::PingIntervalHasBeenSet() const
{
    return m_pingIntervalHasBeenSet;
}

int64_t CreateTacticRequest::GetIsWeak() const
{
    return m_isWeak;
}

void CreateTacticRequest::SetIsWeak(const int64_t& _isWeak)
{
    m_isWeak = _isWeak;
    m_isWeakHasBeenSet = true;
}

bool CreateTacticRequest::IsWeakHasBeenSet() const
{
    return m_isWeakHasBeenSet;
}

int64_t CreateTacticRequest::GetWeakThreshold() const
{
    return m_weakThreshold;
}

void CreateTacticRequest::SetWeakThreshold(const int64_t& _weakThreshold)
{
    m_weakThreshold = _weakThreshold;
    m_weakThresholdHasBeenSet = true;
}

bool CreateTacticRequest::WeakThresholdHasBeenSet() const
{
    return m_weakThresholdHasBeenSet;
}

int64_t CreateTacticRequest::GetIsDelay() const
{
    return m_isDelay;
}

void CreateTacticRequest::SetIsDelay(const int64_t& _isDelay)
{
    m_isDelay = _isDelay;
    m_isDelayHasBeenSet = true;
}

bool CreateTacticRequest::IsDelayHasBeenSet() const
{
    return m_isDelayHasBeenSet;
}

int64_t CreateTacticRequest::GetDelayThreshold() const
{
    return m_delayThreshold;
}

void CreateTacticRequest::SetDelayThreshold(const int64_t& _delayThreshold)
{
    m_delayThreshold = _delayThreshold;
    m_delayThresholdHasBeenSet = true;
}

bool CreateTacticRequest::DelayThresholdHasBeenSet() const
{
    return m_delayThresholdHasBeenSet;
}

int64_t CreateTacticRequest::GetIsFake() const
{
    return m_isFake;
}

void CreateTacticRequest::SetIsFake(const int64_t& _isFake)
{
    m_isFake = _isFake;
    m_isFakeHasBeenSet = true;
}

bool CreateTacticRequest::IsFakeHasBeenSet() const
{
    return m_isFakeHasBeenSet;
}

string CreateTacticRequest::GetFakeIP() const
{
    return m_fakeIP;
}

void CreateTacticRequest::SetFakeIP(const string& _fakeIP)
{
    m_fakeIP = _fakeIP;
    m_fakeIPHasBeenSet = true;
}

bool CreateTacticRequest::FakeIPHasBeenSet() const
{
    return m_fakeIPHasBeenSet;
}

int64_t CreateTacticRequest::GetFakeInterval() const
{
    return m_fakeInterval;
}

void CreateTacticRequest::SetFakeInterval(const int64_t& _fakeInterval)
{
    m_fakeInterval = _fakeInterval;
    m_fakeIntervalHasBeenSet = true;
}

bool CreateTacticRequest::FakeIntervalHasBeenSet() const
{
    return m_fakeIntervalHasBeenSet;
}

int64_t CreateTacticRequest::GetIsNet() const
{
    return m_isNet;
}

void CreateTacticRequest::SetIsNet(const int64_t& _isNet)
{
    m_isNet = _isNet;
    m_isNetHasBeenSet = true;
}

bool CreateTacticRequest::IsNetHasBeenSet() const
{
    return m_isNetHasBeenSet;
}

int64_t CreateTacticRequest::GetNetwork() const
{
    return m_network;
}

void CreateTacticRequest::SetNetwork(const int64_t& _network)
{
    m_network = _network;
    m_networkHasBeenSet = true;
}

bool CreateTacticRequest::NetworkHasBeenSet() const
{
    return m_networkHasBeenSet;
}

int64_t CreateTacticRequest::GetIsMove() const
{
    return m_isMove;
}

void CreateTacticRequest::SetIsMove(const int64_t& _isMove)
{
    m_isMove = _isMove;
    m_isMoveHasBeenSet = true;
}

bool CreateTacticRequest::IsMoveHasBeenSet() const
{
    return m_isMoveHasBeenSet;
}

int64_t CreateTacticRequest::GetIsPriorityTele() const
{
    return m_isPriorityTele;
}

void CreateTacticRequest::SetIsPriorityTele(const int64_t& _isPriorityTele)
{
    m_isPriorityTele = _isPriorityTele;
    m_isPriorityTeleHasBeenSet = true;
}

bool CreateTacticRequest::IsPriorityTeleHasBeenSet() const
{
    return m_isPriorityTeleHasBeenSet;
}

int64_t CreateTacticRequest::GetPriorityTele() const
{
    return m_priorityTele;
}

void CreateTacticRequest::SetPriorityTele(const int64_t& _priorityTele)
{
    m_priorityTele = _priorityTele;
    m_priorityTeleHasBeenSet = true;
}

bool CreateTacticRequest::PriorityTeleHasBeenSet() const
{
    return m_priorityTeleHasBeenSet;
}

int64_t CreateTacticRequest::GetIsBottomTele() const
{
    return m_isBottomTele;
}

void CreateTacticRequest::SetIsBottomTele(const int64_t& _isBottomTele)
{
    m_isBottomTele = _isBottomTele;
    m_isBottomTeleHasBeenSet = true;
}

bool CreateTacticRequest::IsBottomTeleHasBeenSet() const
{
    return m_isBottomTeleHasBeenSet;
}

int64_t CreateTacticRequest::GetBottomTele() const
{
    return m_bottomTele;
}

void CreateTacticRequest::SetBottomTele(const int64_t& _bottomTele)
{
    m_bottomTele = _bottomTele;
    m_bottomTeleHasBeenSet = true;
}

bool CreateTacticRequest::BottomTeleHasBeenSet() const
{
    return m_bottomTeleHasBeenSet;
}

int64_t CreateTacticRequest::GetIsBestSignal() const
{
    return m_isBestSignal;
}

void CreateTacticRequest::SetIsBestSignal(const int64_t& _isBestSignal)
{
    m_isBestSignal = _isBestSignal;
    m_isBestSignalHasBeenSet = true;
}

bool CreateTacticRequest::IsBestSignalHasBeenSet() const
{
    return m_isBestSignalHasBeenSet;
}


