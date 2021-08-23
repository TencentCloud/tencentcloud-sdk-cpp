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

#include <tencentcloud/dnspod/v20210323/model/DomainCountInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

DomainCountInfo::DomainCountInfo() :
    m_domainTotalHasBeenSet(false),
    m_allTotalHasBeenSet(false),
    m_mineTotalHasBeenSet(false),
    m_shareTotalHasBeenSet(false),
    m_vipTotalHasBeenSet(false),
    m_pauseTotalHasBeenSet(false),
    m_errorTotalHasBeenSet(false),
    m_lockTotalHasBeenSet(false),
    m_spamTotalHasBeenSet(false),
    m_vipExpireHasBeenSet(false),
    m_shareOutTotalHasBeenSet(false),
    m_groupTotalHasBeenSet(false)
{
}

CoreInternalOutcome DomainCountInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DomainTotal") && !value["DomainTotal"].IsNull())
    {
        if (!value["DomainTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainCountInfo.DomainTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_domainTotal = value["DomainTotal"].GetUint64();
        m_domainTotalHasBeenSet = true;
    }

    if (value.HasMember("AllTotal") && !value["AllTotal"].IsNull())
    {
        if (!value["AllTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainCountInfo.AllTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_allTotal = value["AllTotal"].GetUint64();
        m_allTotalHasBeenSet = true;
    }

    if (value.HasMember("MineTotal") && !value["MineTotal"].IsNull())
    {
        if (!value["MineTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainCountInfo.MineTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mineTotal = value["MineTotal"].GetUint64();
        m_mineTotalHasBeenSet = true;
    }

    if (value.HasMember("ShareTotal") && !value["ShareTotal"].IsNull())
    {
        if (!value["ShareTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainCountInfo.ShareTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_shareTotal = value["ShareTotal"].GetUint64();
        m_shareTotalHasBeenSet = true;
    }

    if (value.HasMember("VipTotal") && !value["VipTotal"].IsNull())
    {
        if (!value["VipTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainCountInfo.VipTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vipTotal = value["VipTotal"].GetUint64();
        m_vipTotalHasBeenSet = true;
    }

    if (value.HasMember("PauseTotal") && !value["PauseTotal"].IsNull())
    {
        if (!value["PauseTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainCountInfo.PauseTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pauseTotal = value["PauseTotal"].GetUint64();
        m_pauseTotalHasBeenSet = true;
    }

    if (value.HasMember("ErrorTotal") && !value["ErrorTotal"].IsNull())
    {
        if (!value["ErrorTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainCountInfo.ErrorTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_errorTotal = value["ErrorTotal"].GetUint64();
        m_errorTotalHasBeenSet = true;
    }

    if (value.HasMember("LockTotal") && !value["LockTotal"].IsNull())
    {
        if (!value["LockTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainCountInfo.LockTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lockTotal = value["LockTotal"].GetUint64();
        m_lockTotalHasBeenSet = true;
    }

    if (value.HasMember("SpamTotal") && !value["SpamTotal"].IsNull())
    {
        if (!value["SpamTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainCountInfo.SpamTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_spamTotal = value["SpamTotal"].GetUint64();
        m_spamTotalHasBeenSet = true;
    }

    if (value.HasMember("VipExpire") && !value["VipExpire"].IsNull())
    {
        if (!value["VipExpire"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainCountInfo.VipExpire` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vipExpire = value["VipExpire"].GetUint64();
        m_vipExpireHasBeenSet = true;
    }

    if (value.HasMember("ShareOutTotal") && !value["ShareOutTotal"].IsNull())
    {
        if (!value["ShareOutTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainCountInfo.ShareOutTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_shareOutTotal = value["ShareOutTotal"].GetUint64();
        m_shareOutTotalHasBeenSet = true;
    }

    if (value.HasMember("GroupTotal") && !value["GroupTotal"].IsNull())
    {
        if (!value["GroupTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainCountInfo.GroupTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_groupTotal = value["GroupTotal"].GetUint64();
        m_groupTotalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DomainCountInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_domainTotal, allocator);
    }

    if (m_allTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allTotal, allocator);
    }

    if (m_mineTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MineTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mineTotal, allocator);
    }

    if (m_shareTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shareTotal, allocator);
    }

    if (m_vipTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VipTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vipTotal, allocator);
    }

    if (m_pauseTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PauseTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pauseTotal, allocator);
    }

    if (m_errorTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errorTotal, allocator);
    }

    if (m_lockTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lockTotal, allocator);
    }

    if (m_spamTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpamTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_spamTotal, allocator);
    }

    if (m_vipExpireHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VipExpire";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vipExpire, allocator);
    }

    if (m_shareOutTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareOutTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shareOutTotal, allocator);
    }

    if (m_groupTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupTotal, allocator);
    }

}


uint64_t DomainCountInfo::GetDomainTotal() const
{
    return m_domainTotal;
}

void DomainCountInfo::SetDomainTotal(const uint64_t& _domainTotal)
{
    m_domainTotal = _domainTotal;
    m_domainTotalHasBeenSet = true;
}

bool DomainCountInfo::DomainTotalHasBeenSet() const
{
    return m_domainTotalHasBeenSet;
}

uint64_t DomainCountInfo::GetAllTotal() const
{
    return m_allTotal;
}

void DomainCountInfo::SetAllTotal(const uint64_t& _allTotal)
{
    m_allTotal = _allTotal;
    m_allTotalHasBeenSet = true;
}

bool DomainCountInfo::AllTotalHasBeenSet() const
{
    return m_allTotalHasBeenSet;
}

uint64_t DomainCountInfo::GetMineTotal() const
{
    return m_mineTotal;
}

void DomainCountInfo::SetMineTotal(const uint64_t& _mineTotal)
{
    m_mineTotal = _mineTotal;
    m_mineTotalHasBeenSet = true;
}

bool DomainCountInfo::MineTotalHasBeenSet() const
{
    return m_mineTotalHasBeenSet;
}

uint64_t DomainCountInfo::GetShareTotal() const
{
    return m_shareTotal;
}

void DomainCountInfo::SetShareTotal(const uint64_t& _shareTotal)
{
    m_shareTotal = _shareTotal;
    m_shareTotalHasBeenSet = true;
}

bool DomainCountInfo::ShareTotalHasBeenSet() const
{
    return m_shareTotalHasBeenSet;
}

uint64_t DomainCountInfo::GetVipTotal() const
{
    return m_vipTotal;
}

void DomainCountInfo::SetVipTotal(const uint64_t& _vipTotal)
{
    m_vipTotal = _vipTotal;
    m_vipTotalHasBeenSet = true;
}

bool DomainCountInfo::VipTotalHasBeenSet() const
{
    return m_vipTotalHasBeenSet;
}

uint64_t DomainCountInfo::GetPauseTotal() const
{
    return m_pauseTotal;
}

void DomainCountInfo::SetPauseTotal(const uint64_t& _pauseTotal)
{
    m_pauseTotal = _pauseTotal;
    m_pauseTotalHasBeenSet = true;
}

bool DomainCountInfo::PauseTotalHasBeenSet() const
{
    return m_pauseTotalHasBeenSet;
}

uint64_t DomainCountInfo::GetErrorTotal() const
{
    return m_errorTotal;
}

void DomainCountInfo::SetErrorTotal(const uint64_t& _errorTotal)
{
    m_errorTotal = _errorTotal;
    m_errorTotalHasBeenSet = true;
}

bool DomainCountInfo::ErrorTotalHasBeenSet() const
{
    return m_errorTotalHasBeenSet;
}

uint64_t DomainCountInfo::GetLockTotal() const
{
    return m_lockTotal;
}

void DomainCountInfo::SetLockTotal(const uint64_t& _lockTotal)
{
    m_lockTotal = _lockTotal;
    m_lockTotalHasBeenSet = true;
}

bool DomainCountInfo::LockTotalHasBeenSet() const
{
    return m_lockTotalHasBeenSet;
}

uint64_t DomainCountInfo::GetSpamTotal() const
{
    return m_spamTotal;
}

void DomainCountInfo::SetSpamTotal(const uint64_t& _spamTotal)
{
    m_spamTotal = _spamTotal;
    m_spamTotalHasBeenSet = true;
}

bool DomainCountInfo::SpamTotalHasBeenSet() const
{
    return m_spamTotalHasBeenSet;
}

uint64_t DomainCountInfo::GetVipExpire() const
{
    return m_vipExpire;
}

void DomainCountInfo::SetVipExpire(const uint64_t& _vipExpire)
{
    m_vipExpire = _vipExpire;
    m_vipExpireHasBeenSet = true;
}

bool DomainCountInfo::VipExpireHasBeenSet() const
{
    return m_vipExpireHasBeenSet;
}

uint64_t DomainCountInfo::GetShareOutTotal() const
{
    return m_shareOutTotal;
}

void DomainCountInfo::SetShareOutTotal(const uint64_t& _shareOutTotal)
{
    m_shareOutTotal = _shareOutTotal;
    m_shareOutTotalHasBeenSet = true;
}

bool DomainCountInfo::ShareOutTotalHasBeenSet() const
{
    return m_shareOutTotalHasBeenSet;
}

uint64_t DomainCountInfo::GetGroupTotal() const
{
    return m_groupTotal;
}

void DomainCountInfo::SetGroupTotal(const uint64_t& _groupTotal)
{
    m_groupTotal = _groupTotal;
    m_groupTotalHasBeenSet = true;
}

bool DomainCountInfo::GroupTotalHasBeenSet() const
{
    return m_groupTotalHasBeenSet;
}

