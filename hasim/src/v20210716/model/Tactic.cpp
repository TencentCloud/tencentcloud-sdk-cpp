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

#include <tencentcloud/hasim/v20210716/model/Tactic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hasim::V20210716::Model;
using namespace std;

Tactic::Tactic() :
    m_iDHasBeenSet(false),
    m_createdAtHasBeenSet(false),
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
    m_nameHasBeenSet(false),
    m_isPriorityTeleHasBeenSet(false),
    m_priorityTeleHasBeenSet(false),
    m_isBottomTeleHasBeenSet(false),
    m_bottomTeleHasBeenSet(false),
    m_isBestSignalHasBeenSet(false)
{
}

CoreInternalOutcome Tactic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Tactic.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Tactic.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("IsAuto") && !value["IsAuto"].IsNull())
    {
        if (!value["IsAuto"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Tactic.IsAuto` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isAuto = value["IsAuto"].GetInt64();
        m_isAutoHasBeenSet = true;
    }

    if (value.HasMember("PingInterval") && !value["PingInterval"].IsNull())
    {
        if (!value["PingInterval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Tactic.PingInterval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pingInterval = value["PingInterval"].GetInt64();
        m_pingIntervalHasBeenSet = true;
    }

    if (value.HasMember("IsWeak") && !value["IsWeak"].IsNull())
    {
        if (!value["IsWeak"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Tactic.IsWeak` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isWeak = value["IsWeak"].GetInt64();
        m_isWeakHasBeenSet = true;
    }

    if (value.HasMember("WeakThreshold") && !value["WeakThreshold"].IsNull())
    {
        if (!value["WeakThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Tactic.WeakThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_weakThreshold = value["WeakThreshold"].GetInt64();
        m_weakThresholdHasBeenSet = true;
    }

    if (value.HasMember("IsDelay") && !value["IsDelay"].IsNull())
    {
        if (!value["IsDelay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Tactic.IsDelay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDelay = value["IsDelay"].GetInt64();
        m_isDelayHasBeenSet = true;
    }

    if (value.HasMember("DelayThreshold") && !value["DelayThreshold"].IsNull())
    {
        if (!value["DelayThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Tactic.DelayThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_delayThreshold = value["DelayThreshold"].GetInt64();
        m_delayThresholdHasBeenSet = true;
    }

    if (value.HasMember("IsFake") && !value["IsFake"].IsNull())
    {
        if (!value["IsFake"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Tactic.IsFake` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isFake = value["IsFake"].GetInt64();
        m_isFakeHasBeenSet = true;
    }

    if (value.HasMember("FakeIP") && !value["FakeIP"].IsNull())
    {
        if (!value["FakeIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Tactic.FakeIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fakeIP = string(value["FakeIP"].GetString());
        m_fakeIPHasBeenSet = true;
    }

    if (value.HasMember("FakeInterval") && !value["FakeInterval"].IsNull())
    {
        if (!value["FakeInterval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Tactic.FakeInterval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fakeInterval = value["FakeInterval"].GetInt64();
        m_fakeIntervalHasBeenSet = true;
    }

    if (value.HasMember("IsNet") && !value["IsNet"].IsNull())
    {
        if (!value["IsNet"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Tactic.IsNet` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isNet = value["IsNet"].GetInt64();
        m_isNetHasBeenSet = true;
    }

    if (value.HasMember("Network") && !value["Network"].IsNull())
    {
        if (!value["Network"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Tactic.Network` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_network = value["Network"].GetInt64();
        m_networkHasBeenSet = true;
    }

    if (value.HasMember("IsMove") && !value["IsMove"].IsNull())
    {
        if (!value["IsMove"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Tactic.IsMove` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isMove = value["IsMove"].GetInt64();
        m_isMoveHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Tactic.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("IsPriorityTele") && !value["IsPriorityTele"].IsNull())
    {
        if (!value["IsPriorityTele"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Tactic.IsPriorityTele` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isPriorityTele = value["IsPriorityTele"].GetInt64();
        m_isPriorityTeleHasBeenSet = true;
    }

    if (value.HasMember("PriorityTele") && !value["PriorityTele"].IsNull())
    {
        if (!value["PriorityTele"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Tactic.PriorityTele` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priorityTele = value["PriorityTele"].GetInt64();
        m_priorityTeleHasBeenSet = true;
    }

    if (value.HasMember("IsBottomTele") && !value["IsBottomTele"].IsNull())
    {
        if (!value["IsBottomTele"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Tactic.IsBottomTele` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isBottomTele = value["IsBottomTele"].GetInt64();
        m_isBottomTeleHasBeenSet = true;
    }

    if (value.HasMember("BottomTele") && !value["BottomTele"].IsNull())
    {
        if (!value["BottomTele"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Tactic.BottomTele` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bottomTele = value["BottomTele"].GetInt64();
        m_bottomTeleHasBeenSet = true;
    }

    if (value.HasMember("IsBestSignal") && !value["IsBestSignal"].IsNull())
    {
        if (!value["IsBestSignal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Tactic.IsBestSignal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isBestSignal = value["IsBestSignal"].GetInt64();
        m_isBestSignalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Tactic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_isAutoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAuto";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAuto, allocator);
    }

    if (m_pingIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PingInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pingInterval, allocator);
    }

    if (m_isWeakHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsWeak";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isWeak, allocator);
    }

    if (m_weakThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeakThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weakThreshold, allocator);
    }

    if (m_isDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDelay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDelay, allocator);
    }

    if (m_delayThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_delayThreshold, allocator);
    }

    if (m_isFakeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFake";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isFake, allocator);
    }

    if (m_fakeIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FakeIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fakeIP.c_str(), allocator).Move(), allocator);
    }

    if (m_fakeIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FakeInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fakeInterval, allocator);
    }

    if (m_isNetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNet, allocator);
    }

    if (m_networkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Network";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_network, allocator);
    }

    if (m_isMoveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsMove";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isMove, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_isPriorityTeleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPriorityTele";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPriorityTele, allocator);
    }

    if (m_priorityTeleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PriorityTele";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priorityTele, allocator);
    }

    if (m_isBottomTeleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsBottomTele";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isBottomTele, allocator);
    }

    if (m_bottomTeleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BottomTele";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bottomTele, allocator);
    }

    if (m_isBestSignalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsBestSignal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isBestSignal, allocator);
    }

}


int64_t Tactic::GetID() const
{
    return m_iD;
}

void Tactic::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool Tactic::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string Tactic::GetCreatedAt() const
{
    return m_createdAt;
}

void Tactic::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool Tactic::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

int64_t Tactic::GetIsAuto() const
{
    return m_isAuto;
}

void Tactic::SetIsAuto(const int64_t& _isAuto)
{
    m_isAuto = _isAuto;
    m_isAutoHasBeenSet = true;
}

bool Tactic::IsAutoHasBeenSet() const
{
    return m_isAutoHasBeenSet;
}

int64_t Tactic::GetPingInterval() const
{
    return m_pingInterval;
}

void Tactic::SetPingInterval(const int64_t& _pingInterval)
{
    m_pingInterval = _pingInterval;
    m_pingIntervalHasBeenSet = true;
}

bool Tactic::PingIntervalHasBeenSet() const
{
    return m_pingIntervalHasBeenSet;
}

int64_t Tactic::GetIsWeak() const
{
    return m_isWeak;
}

void Tactic::SetIsWeak(const int64_t& _isWeak)
{
    m_isWeak = _isWeak;
    m_isWeakHasBeenSet = true;
}

bool Tactic::IsWeakHasBeenSet() const
{
    return m_isWeakHasBeenSet;
}

int64_t Tactic::GetWeakThreshold() const
{
    return m_weakThreshold;
}

void Tactic::SetWeakThreshold(const int64_t& _weakThreshold)
{
    m_weakThreshold = _weakThreshold;
    m_weakThresholdHasBeenSet = true;
}

bool Tactic::WeakThresholdHasBeenSet() const
{
    return m_weakThresholdHasBeenSet;
}

int64_t Tactic::GetIsDelay() const
{
    return m_isDelay;
}

void Tactic::SetIsDelay(const int64_t& _isDelay)
{
    m_isDelay = _isDelay;
    m_isDelayHasBeenSet = true;
}

bool Tactic::IsDelayHasBeenSet() const
{
    return m_isDelayHasBeenSet;
}

int64_t Tactic::GetDelayThreshold() const
{
    return m_delayThreshold;
}

void Tactic::SetDelayThreshold(const int64_t& _delayThreshold)
{
    m_delayThreshold = _delayThreshold;
    m_delayThresholdHasBeenSet = true;
}

bool Tactic::DelayThresholdHasBeenSet() const
{
    return m_delayThresholdHasBeenSet;
}

int64_t Tactic::GetIsFake() const
{
    return m_isFake;
}

void Tactic::SetIsFake(const int64_t& _isFake)
{
    m_isFake = _isFake;
    m_isFakeHasBeenSet = true;
}

bool Tactic::IsFakeHasBeenSet() const
{
    return m_isFakeHasBeenSet;
}

string Tactic::GetFakeIP() const
{
    return m_fakeIP;
}

void Tactic::SetFakeIP(const string& _fakeIP)
{
    m_fakeIP = _fakeIP;
    m_fakeIPHasBeenSet = true;
}

bool Tactic::FakeIPHasBeenSet() const
{
    return m_fakeIPHasBeenSet;
}

int64_t Tactic::GetFakeInterval() const
{
    return m_fakeInterval;
}

void Tactic::SetFakeInterval(const int64_t& _fakeInterval)
{
    m_fakeInterval = _fakeInterval;
    m_fakeIntervalHasBeenSet = true;
}

bool Tactic::FakeIntervalHasBeenSet() const
{
    return m_fakeIntervalHasBeenSet;
}

int64_t Tactic::GetIsNet() const
{
    return m_isNet;
}

void Tactic::SetIsNet(const int64_t& _isNet)
{
    m_isNet = _isNet;
    m_isNetHasBeenSet = true;
}

bool Tactic::IsNetHasBeenSet() const
{
    return m_isNetHasBeenSet;
}

int64_t Tactic::GetNetwork() const
{
    return m_network;
}

void Tactic::SetNetwork(const int64_t& _network)
{
    m_network = _network;
    m_networkHasBeenSet = true;
}

bool Tactic::NetworkHasBeenSet() const
{
    return m_networkHasBeenSet;
}

int64_t Tactic::GetIsMove() const
{
    return m_isMove;
}

void Tactic::SetIsMove(const int64_t& _isMove)
{
    m_isMove = _isMove;
    m_isMoveHasBeenSet = true;
}

bool Tactic::IsMoveHasBeenSet() const
{
    return m_isMoveHasBeenSet;
}

string Tactic::GetName() const
{
    return m_name;
}

void Tactic::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Tactic::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t Tactic::GetIsPriorityTele() const
{
    return m_isPriorityTele;
}

void Tactic::SetIsPriorityTele(const int64_t& _isPriorityTele)
{
    m_isPriorityTele = _isPriorityTele;
    m_isPriorityTeleHasBeenSet = true;
}

bool Tactic::IsPriorityTeleHasBeenSet() const
{
    return m_isPriorityTeleHasBeenSet;
}

int64_t Tactic::GetPriorityTele() const
{
    return m_priorityTele;
}

void Tactic::SetPriorityTele(const int64_t& _priorityTele)
{
    m_priorityTele = _priorityTele;
    m_priorityTeleHasBeenSet = true;
}

bool Tactic::PriorityTeleHasBeenSet() const
{
    return m_priorityTeleHasBeenSet;
}

int64_t Tactic::GetIsBottomTele() const
{
    return m_isBottomTele;
}

void Tactic::SetIsBottomTele(const int64_t& _isBottomTele)
{
    m_isBottomTele = _isBottomTele;
    m_isBottomTeleHasBeenSet = true;
}

bool Tactic::IsBottomTeleHasBeenSet() const
{
    return m_isBottomTeleHasBeenSet;
}

int64_t Tactic::GetBottomTele() const
{
    return m_bottomTele;
}

void Tactic::SetBottomTele(const int64_t& _bottomTele)
{
    m_bottomTele = _bottomTele;
    m_bottomTeleHasBeenSet = true;
}

bool Tactic::BottomTeleHasBeenSet() const
{
    return m_bottomTeleHasBeenSet;
}

int64_t Tactic::GetIsBestSignal() const
{
    return m_isBestSignal;
}

void Tactic::SetIsBestSignal(const int64_t& _isBestSignal)
{
    m_isBestSignal = _isBestSignal;
    m_isBestSignalHasBeenSet = true;
}

bool Tactic::IsBestSignalHasBeenSet() const
{
    return m_isBestSignalHasBeenSet;
}

