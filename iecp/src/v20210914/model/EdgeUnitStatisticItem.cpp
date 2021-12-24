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

#include <tencentcloud/iecp/v20210914/model/EdgeUnitStatisticItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

EdgeUnitStatisticItem::EdgeUnitStatisticItem() :
    m_totalHasBeenSet(false),
    m_onlineHasBeenSet(false),
    m_abnormalHasBeenSet(false),
    m_offlineHasBeenSet(false),
    m_notActiveHasBeenSet(false)
{
}

CoreInternalOutcome EdgeUnitStatisticItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeUnitStatisticItem.Total` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetUint64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("Online") && !value["Online"].IsNull())
    {
        if (!value["Online"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeUnitStatisticItem.Online` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_online = value["Online"].GetUint64();
        m_onlineHasBeenSet = true;
    }

    if (value.HasMember("Abnormal") && !value["Abnormal"].IsNull())
    {
        if (!value["Abnormal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeUnitStatisticItem.Abnormal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_abnormal = value["Abnormal"].GetUint64();
        m_abnormalHasBeenSet = true;
    }

    if (value.HasMember("Offline") && !value["Offline"].IsNull())
    {
        if (!value["Offline"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeUnitStatisticItem.Offline` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_offline = value["Offline"].GetUint64();
        m_offlineHasBeenSet = true;
    }

    if (value.HasMember("NotActive") && !value["NotActive"].IsNull())
    {
        if (!value["NotActive"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeUnitStatisticItem.NotActive` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_notActive = value["NotActive"].GetUint64();
        m_notActiveHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EdgeUnitStatisticItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_onlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Online";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_online, allocator);
    }

    if (m_abnormalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Abnormal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_abnormal, allocator);
    }

    if (m_offlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offline, allocator);
    }

    if (m_notActiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotActive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notActive, allocator);
    }

}


uint64_t EdgeUnitStatisticItem::GetTotal() const
{
    return m_total;
}

void EdgeUnitStatisticItem::SetTotal(const uint64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool EdgeUnitStatisticItem::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

uint64_t EdgeUnitStatisticItem::GetOnline() const
{
    return m_online;
}

void EdgeUnitStatisticItem::SetOnline(const uint64_t& _online)
{
    m_online = _online;
    m_onlineHasBeenSet = true;
}

bool EdgeUnitStatisticItem::OnlineHasBeenSet() const
{
    return m_onlineHasBeenSet;
}

uint64_t EdgeUnitStatisticItem::GetAbnormal() const
{
    return m_abnormal;
}

void EdgeUnitStatisticItem::SetAbnormal(const uint64_t& _abnormal)
{
    m_abnormal = _abnormal;
    m_abnormalHasBeenSet = true;
}

bool EdgeUnitStatisticItem::AbnormalHasBeenSet() const
{
    return m_abnormalHasBeenSet;
}

uint64_t EdgeUnitStatisticItem::GetOffline() const
{
    return m_offline;
}

void EdgeUnitStatisticItem::SetOffline(const uint64_t& _offline)
{
    m_offline = _offline;
    m_offlineHasBeenSet = true;
}

bool EdgeUnitStatisticItem::OfflineHasBeenSet() const
{
    return m_offlineHasBeenSet;
}

uint64_t EdgeUnitStatisticItem::GetNotActive() const
{
    return m_notActive;
}

void EdgeUnitStatisticItem::SetNotActive(const uint64_t& _notActive)
{
    m_notActive = _notActive;
    m_notActiveHasBeenSet = true;
}

bool EdgeUnitStatisticItem::NotActiveHasBeenSet() const
{
    return m_notActiveHasBeenSet;
}

