/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/csip/v20221121/model/UserItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

UserItem::UserItem() :
    m_appIDHasBeenSet(false),
    m_accountTypeHasBeenSet(false),
    m_payTypeHasBeenSet(false),
    m_totalQuotaHasBeenSet(false),
    m_costQuotaHasBeenSet(false),
    m_providersHasBeenSet(false),
    m_quotaFlushTypeHasBeenSet(false),
    m_quotaFlushTimeHasBeenSet(false),
    m_quotaSourceHasBeenSet(false),
    m_shareFromAppIDHasBeenSet(false),
    m_shareFromUserHasBeenSet(false)
{
}

CoreInternalOutcome UserItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UserItem.AppID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetUint64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("AccountType") && !value["AccountType"].IsNull())
    {
        if (!value["AccountType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UserItem.AccountType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_accountType = value["AccountType"].GetUint64();
        m_accountTypeHasBeenSet = true;
    }

    if (value.HasMember("PayType") && !value["PayType"].IsNull())
    {
        if (!value["PayType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UserItem.PayType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_payType = value["PayType"].GetUint64();
        m_payTypeHasBeenSet = true;
    }

    if (value.HasMember("TotalQuota") && !value["TotalQuota"].IsNull())
    {
        if (!value["TotalQuota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UserItem.TotalQuota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalQuota = value["TotalQuota"].GetUint64();
        m_totalQuotaHasBeenSet = true;
    }

    if (value.HasMember("CostQuota") && !value["CostQuota"].IsNull())
    {
        if (!value["CostQuota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UserItem.CostQuota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_costQuota = value["CostQuota"].GetUint64();
        m_costQuotaHasBeenSet = true;
    }

    if (value.HasMember("Providers") && !value["Providers"].IsNull())
    {
        if (!value["Providers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserItem.Providers` is not array type"));

        const rapidjson::Value &tmpValue = value["Providers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_providers.push_back((*itr).GetString());
        }
        m_providersHasBeenSet = true;
    }

    if (value.HasMember("QuotaFlushType") && !value["QuotaFlushType"].IsNull())
    {
        if (!value["QuotaFlushType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserItem.QuotaFlushType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaFlushType = string(value["QuotaFlushType"].GetString());
        m_quotaFlushTypeHasBeenSet = true;
    }

    if (value.HasMember("QuotaFlushTime") && !value["QuotaFlushTime"].IsNull())
    {
        if (!value["QuotaFlushTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserItem.QuotaFlushTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaFlushTime = string(value["QuotaFlushTime"].GetString());
        m_quotaFlushTimeHasBeenSet = true;
    }

    if (value.HasMember("QuotaSource") && !value["QuotaSource"].IsNull())
    {
        if (!value["QuotaSource"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UserItem.QuotaSource` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_quotaSource = value["QuotaSource"].GetUint64();
        m_quotaSourceHasBeenSet = true;
    }

    if (value.HasMember("ShareFromAppID") && !value["ShareFromAppID"].IsNull())
    {
        if (!value["ShareFromAppID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UserItem.ShareFromAppID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_shareFromAppID = value["ShareFromAppID"].GetUint64();
        m_shareFromAppIDHasBeenSet = true;
    }

    if (value.HasMember("ShareFromUser") && !value["ShareFromUser"].IsNull())
    {
        if (!value["ShareFromUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserItem.ShareFromUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shareFromUser = string(value["ShareFromUser"].GetString());
        m_shareFromUserHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

    if (m_accountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountType, allocator);
    }

    if (m_payTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payType, allocator);
    }

    if (m_totalQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalQuota, allocator);
    }

    if (m_costQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_costQuota, allocator);
    }

    if (m_providersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Providers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_providers.begin(); itr != m_providers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_quotaFlushTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaFlushType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quotaFlushType.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaFlushTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaFlushTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quotaFlushTime.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quotaSource, allocator);
    }

    if (m_shareFromAppIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareFromAppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shareFromAppID, allocator);
    }

    if (m_shareFromUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareFromUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shareFromUser.c_str(), allocator).Move(), allocator);
    }

}


uint64_t UserItem::GetAppID() const
{
    return m_appID;
}

void UserItem::SetAppID(const uint64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool UserItem::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

uint64_t UserItem::GetAccountType() const
{
    return m_accountType;
}

void UserItem::SetAccountType(const uint64_t& _accountType)
{
    m_accountType = _accountType;
    m_accountTypeHasBeenSet = true;
}

bool UserItem::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}

uint64_t UserItem::GetPayType() const
{
    return m_payType;
}

void UserItem::SetPayType(const uint64_t& _payType)
{
    m_payType = _payType;
    m_payTypeHasBeenSet = true;
}

bool UserItem::PayTypeHasBeenSet() const
{
    return m_payTypeHasBeenSet;
}

uint64_t UserItem::GetTotalQuota() const
{
    return m_totalQuota;
}

void UserItem::SetTotalQuota(const uint64_t& _totalQuota)
{
    m_totalQuota = _totalQuota;
    m_totalQuotaHasBeenSet = true;
}

bool UserItem::TotalQuotaHasBeenSet() const
{
    return m_totalQuotaHasBeenSet;
}

uint64_t UserItem::GetCostQuota() const
{
    return m_costQuota;
}

void UserItem::SetCostQuota(const uint64_t& _costQuota)
{
    m_costQuota = _costQuota;
    m_costQuotaHasBeenSet = true;
}

bool UserItem::CostQuotaHasBeenSet() const
{
    return m_costQuotaHasBeenSet;
}

vector<string> UserItem::GetProviders() const
{
    return m_providers;
}

void UserItem::SetProviders(const vector<string>& _providers)
{
    m_providers = _providers;
    m_providersHasBeenSet = true;
}

bool UserItem::ProvidersHasBeenSet() const
{
    return m_providersHasBeenSet;
}

string UserItem::GetQuotaFlushType() const
{
    return m_quotaFlushType;
}

void UserItem::SetQuotaFlushType(const string& _quotaFlushType)
{
    m_quotaFlushType = _quotaFlushType;
    m_quotaFlushTypeHasBeenSet = true;
}

bool UserItem::QuotaFlushTypeHasBeenSet() const
{
    return m_quotaFlushTypeHasBeenSet;
}

string UserItem::GetQuotaFlushTime() const
{
    return m_quotaFlushTime;
}

void UserItem::SetQuotaFlushTime(const string& _quotaFlushTime)
{
    m_quotaFlushTime = _quotaFlushTime;
    m_quotaFlushTimeHasBeenSet = true;
}

bool UserItem::QuotaFlushTimeHasBeenSet() const
{
    return m_quotaFlushTimeHasBeenSet;
}

uint64_t UserItem::GetQuotaSource() const
{
    return m_quotaSource;
}

void UserItem::SetQuotaSource(const uint64_t& _quotaSource)
{
    m_quotaSource = _quotaSource;
    m_quotaSourceHasBeenSet = true;
}

bool UserItem::QuotaSourceHasBeenSet() const
{
    return m_quotaSourceHasBeenSet;
}

uint64_t UserItem::GetShareFromAppID() const
{
    return m_shareFromAppID;
}

void UserItem::SetShareFromAppID(const uint64_t& _shareFromAppID)
{
    m_shareFromAppID = _shareFromAppID;
    m_shareFromAppIDHasBeenSet = true;
}

bool UserItem::ShareFromAppIDHasBeenSet() const
{
    return m_shareFromAppIDHasBeenSet;
}

string UserItem::GetShareFromUser() const
{
    return m_shareFromUser;
}

void UserItem::SetShareFromUser(const string& _shareFromUser)
{
    m_shareFromUser = _shareFromUser;
    m_shareFromUserHasBeenSet = true;
}

bool UserItem::ShareFromUserHasBeenSet() const
{
    return m_shareFromUserHasBeenSet;
}

