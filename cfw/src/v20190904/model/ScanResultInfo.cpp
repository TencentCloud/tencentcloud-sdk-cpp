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

#include <tencentcloud/cfw/v20190904/model/ScanResultInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

ScanResultInfo::ScanResultInfo() :
    m_banStatusHasBeenSet(false),
    m_iPNumHasBeenSet(false),
    m_iPStatusHasBeenSet(false),
    m_idpStatusHasBeenSet(false),
    m_leakNumHasBeenSet(false),
    m_portNumHasBeenSet(false)
{
}

CoreInternalOutcome ScanResultInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BanStatus") && !value["BanStatus"].IsNull())
    {
        if (!value["BanStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ScanResultInfo.BanStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_banStatus = value["BanStatus"].GetBool();
        m_banStatusHasBeenSet = true;
    }

    if (value.HasMember("IPNum") && !value["IPNum"].IsNull())
    {
        if (!value["IPNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanResultInfo.IPNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iPNum = value["IPNum"].GetUint64();
        m_iPNumHasBeenSet = true;
    }

    if (value.HasMember("IPStatus") && !value["IPStatus"].IsNull())
    {
        if (!value["IPStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ScanResultInfo.IPStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_iPStatus = value["IPStatus"].GetBool();
        m_iPStatusHasBeenSet = true;
    }

    if (value.HasMember("IdpStatus") && !value["IdpStatus"].IsNull())
    {
        if (!value["IdpStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ScanResultInfo.IdpStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_idpStatus = value["IdpStatus"].GetBool();
        m_idpStatusHasBeenSet = true;
    }

    if (value.HasMember("LeakNum") && !value["LeakNum"].IsNull())
    {
        if (!value["LeakNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanResultInfo.LeakNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_leakNum = value["LeakNum"].GetUint64();
        m_leakNumHasBeenSet = true;
    }

    if (value.HasMember("PortNum") && !value["PortNum"].IsNull())
    {
        if (!value["PortNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanResultInfo.PortNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_portNum = value["PortNum"].GetUint64();
        m_portNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScanResultInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_banStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BanStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_banStatus, allocator);
    }

    if (m_iPNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iPNum, allocator);
    }

    if (m_iPStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iPStatus, allocator);
    }

    if (m_idpStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdpStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_idpStatus, allocator);
    }

    if (m_leakNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeakNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leakNum, allocator);
    }

    if (m_portNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_portNum, allocator);
    }

}


bool ScanResultInfo::GetBanStatus() const
{
    return m_banStatus;
}

void ScanResultInfo::SetBanStatus(const bool& _banStatus)
{
    m_banStatus = _banStatus;
    m_banStatusHasBeenSet = true;
}

bool ScanResultInfo::BanStatusHasBeenSet() const
{
    return m_banStatusHasBeenSet;
}

uint64_t ScanResultInfo::GetIPNum() const
{
    return m_iPNum;
}

void ScanResultInfo::SetIPNum(const uint64_t& _iPNum)
{
    m_iPNum = _iPNum;
    m_iPNumHasBeenSet = true;
}

bool ScanResultInfo::IPNumHasBeenSet() const
{
    return m_iPNumHasBeenSet;
}

bool ScanResultInfo::GetIPStatus() const
{
    return m_iPStatus;
}

void ScanResultInfo::SetIPStatus(const bool& _iPStatus)
{
    m_iPStatus = _iPStatus;
    m_iPStatusHasBeenSet = true;
}

bool ScanResultInfo::IPStatusHasBeenSet() const
{
    return m_iPStatusHasBeenSet;
}

bool ScanResultInfo::GetIdpStatus() const
{
    return m_idpStatus;
}

void ScanResultInfo::SetIdpStatus(const bool& _idpStatus)
{
    m_idpStatus = _idpStatus;
    m_idpStatusHasBeenSet = true;
}

bool ScanResultInfo::IdpStatusHasBeenSet() const
{
    return m_idpStatusHasBeenSet;
}

uint64_t ScanResultInfo::GetLeakNum() const
{
    return m_leakNum;
}

void ScanResultInfo::SetLeakNum(const uint64_t& _leakNum)
{
    m_leakNum = _leakNum;
    m_leakNumHasBeenSet = true;
}

bool ScanResultInfo::LeakNumHasBeenSet() const
{
    return m_leakNumHasBeenSet;
}

uint64_t ScanResultInfo::GetPortNum() const
{
    return m_portNum;
}

void ScanResultInfo::SetPortNum(const uint64_t& _portNum)
{
    m_portNum = _portNum;
    m_portNumHasBeenSet = true;
}

bool ScanResultInfo::PortNumHasBeenSet() const
{
    return m_portNumHasBeenSet;
}

