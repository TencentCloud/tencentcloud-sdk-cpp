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

#include <tencentcloud/cfw/v20190904/model/TLogInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

TLogInfo::TLogInfo() :
    m_banNumHasBeenSet(false),
    m_bruteForceNumHasBeenSet(false),
    m_handleNumHasBeenSet(false),
    m_networkNumHasBeenSet(false),
    m_outNumHasBeenSet(false),
    m_vulNumHasBeenSet(false)
{
}

CoreInternalOutcome TLogInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BanNum") && !value["BanNum"].IsNull())
    {
        if (!value["BanNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TLogInfo.BanNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_banNum = value["BanNum"].GetInt64();
        m_banNumHasBeenSet = true;
    }

    if (value.HasMember("BruteForceNum") && !value["BruteForceNum"].IsNull())
    {
        if (!value["BruteForceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TLogInfo.BruteForceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bruteForceNum = value["BruteForceNum"].GetInt64();
        m_bruteForceNumHasBeenSet = true;
    }

    if (value.HasMember("HandleNum") && !value["HandleNum"].IsNull())
    {
        if (!value["HandleNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TLogInfo.HandleNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_handleNum = value["HandleNum"].GetInt64();
        m_handleNumHasBeenSet = true;
    }

    if (value.HasMember("NetworkNum") && !value["NetworkNum"].IsNull())
    {
        if (!value["NetworkNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TLogInfo.NetworkNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_networkNum = value["NetworkNum"].GetInt64();
        m_networkNumHasBeenSet = true;
    }

    if (value.HasMember("OutNum") && !value["OutNum"].IsNull())
    {
        if (!value["OutNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TLogInfo.OutNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outNum = value["OutNum"].GetInt64();
        m_outNumHasBeenSet = true;
    }

    if (value.HasMember("VulNum") && !value["VulNum"].IsNull())
    {
        if (!value["VulNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TLogInfo.VulNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vulNum = value["VulNum"].GetInt64();
        m_vulNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TLogInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_banNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BanNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_banNum, allocator);
    }

    if (m_bruteForceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BruteForceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bruteForceNum, allocator);
    }

    if (m_handleNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandleNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_handleNum, allocator);
    }

    if (m_networkNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_networkNum, allocator);
    }

    if (m_outNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outNum, allocator);
    }

    if (m_vulNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulNum, allocator);
    }

}


int64_t TLogInfo::GetBanNum() const
{
    return m_banNum;
}

void TLogInfo::SetBanNum(const int64_t& _banNum)
{
    m_banNum = _banNum;
    m_banNumHasBeenSet = true;
}

bool TLogInfo::BanNumHasBeenSet() const
{
    return m_banNumHasBeenSet;
}

int64_t TLogInfo::GetBruteForceNum() const
{
    return m_bruteForceNum;
}

void TLogInfo::SetBruteForceNum(const int64_t& _bruteForceNum)
{
    m_bruteForceNum = _bruteForceNum;
    m_bruteForceNumHasBeenSet = true;
}

bool TLogInfo::BruteForceNumHasBeenSet() const
{
    return m_bruteForceNumHasBeenSet;
}

int64_t TLogInfo::GetHandleNum() const
{
    return m_handleNum;
}

void TLogInfo::SetHandleNum(const int64_t& _handleNum)
{
    m_handleNum = _handleNum;
    m_handleNumHasBeenSet = true;
}

bool TLogInfo::HandleNumHasBeenSet() const
{
    return m_handleNumHasBeenSet;
}

int64_t TLogInfo::GetNetworkNum() const
{
    return m_networkNum;
}

void TLogInfo::SetNetworkNum(const int64_t& _networkNum)
{
    m_networkNum = _networkNum;
    m_networkNumHasBeenSet = true;
}

bool TLogInfo::NetworkNumHasBeenSet() const
{
    return m_networkNumHasBeenSet;
}

int64_t TLogInfo::GetOutNum() const
{
    return m_outNum;
}

void TLogInfo::SetOutNum(const int64_t& _outNum)
{
    m_outNum = _outNum;
    m_outNumHasBeenSet = true;
}

bool TLogInfo::OutNumHasBeenSet() const
{
    return m_outNumHasBeenSet;
}

int64_t TLogInfo::GetVulNum() const
{
    return m_vulNum;
}

void TLogInfo::SetVulNum(const int64_t& _vulNum)
{
    m_vulNum = _vulNum;
    m_vulNumHasBeenSet = true;
}

bool TLogInfo::VulNumHasBeenSet() const
{
    return m_vulNumHasBeenSet;
}

