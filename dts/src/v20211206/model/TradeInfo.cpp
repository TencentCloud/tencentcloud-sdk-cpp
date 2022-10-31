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

#include <tencentcloud/dts/v20211206/model/TradeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

TradeInfo::TradeInfo() :
    m_dealNameHasBeenSet(false),
    m_lastDealNameHasBeenSet(false),
    m_instanceClassHasBeenSet(false),
    m_tradeStatusHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_offlineTimeHasBeenSet(false),
    m_isolateTimeHasBeenSet(false),
    m_offlineReasonHasBeenSet(false),
    m_isolateReasonHasBeenSet(false),
    m_payTypeHasBeenSet(false),
    m_billingTypeHasBeenSet(false)
{
}

CoreInternalOutcome TradeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DealName") && !value["DealName"].IsNull())
    {
        if (!value["DealName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TradeInfo.DealName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dealName = string(value["DealName"].GetString());
        m_dealNameHasBeenSet = true;
    }

    if (value.HasMember("LastDealName") && !value["LastDealName"].IsNull())
    {
        if (!value["LastDealName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TradeInfo.LastDealName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastDealName = string(value["LastDealName"].GetString());
        m_lastDealNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceClass") && !value["InstanceClass"].IsNull())
    {
        if (!value["InstanceClass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TradeInfo.InstanceClass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceClass = string(value["InstanceClass"].GetString());
        m_instanceClassHasBeenSet = true;
    }

    if (value.HasMember("TradeStatus") && !value["TradeStatus"].IsNull())
    {
        if (!value["TradeStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TradeInfo.TradeStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeStatus = string(value["TradeStatus"].GetString());
        m_tradeStatusHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TradeInfo.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("OfflineTime") && !value["OfflineTime"].IsNull())
    {
        if (!value["OfflineTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TradeInfo.OfflineTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offlineTime = string(value["OfflineTime"].GetString());
        m_offlineTimeHasBeenSet = true;
    }

    if (value.HasMember("IsolateTime") && !value["IsolateTime"].IsNull())
    {
        if (!value["IsolateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TradeInfo.IsolateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolateTime = string(value["IsolateTime"].GetString());
        m_isolateTimeHasBeenSet = true;
    }

    if (value.HasMember("OfflineReason") && !value["OfflineReason"].IsNull())
    {
        if (!value["OfflineReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TradeInfo.OfflineReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offlineReason = string(value["OfflineReason"].GetString());
        m_offlineReasonHasBeenSet = true;
    }

    if (value.HasMember("IsolateReason") && !value["IsolateReason"].IsNull())
    {
        if (!value["IsolateReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TradeInfo.IsolateReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolateReason = string(value["IsolateReason"].GetString());
        m_isolateReasonHasBeenSet = true;
    }

    if (value.HasMember("PayType") && !value["PayType"].IsNull())
    {
        if (!value["PayType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TradeInfo.PayType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payType = string(value["PayType"].GetString());
        m_payTypeHasBeenSet = true;
    }

    if (value.HasMember("BillingType") && !value["BillingType"].IsNull())
    {
        if (!value["BillingType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TradeInfo.BillingType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingType = string(value["BillingType"].GetString());
        m_billingTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TradeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dealNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dealName.c_str(), allocator).Move(), allocator);
    }

    if (m_lastDealNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastDealName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastDealName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceClass.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tradeStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_offlineTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfflineTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_offlineTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isolateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isolateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_offlineReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfflineReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_offlineReason.c_str(), allocator).Move(), allocator);
    }

    if (m_isolateReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolateReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isolateReason.c_str(), allocator).Move(), allocator);
    }

    if (m_payTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payType.c_str(), allocator).Move(), allocator);
    }

    if (m_billingTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billingType.c_str(), allocator).Move(), allocator);
    }

}


string TradeInfo::GetDealName() const
{
    return m_dealName;
}

void TradeInfo::SetDealName(const string& _dealName)
{
    m_dealName = _dealName;
    m_dealNameHasBeenSet = true;
}

bool TradeInfo::DealNameHasBeenSet() const
{
    return m_dealNameHasBeenSet;
}

string TradeInfo::GetLastDealName() const
{
    return m_lastDealName;
}

void TradeInfo::SetLastDealName(const string& _lastDealName)
{
    m_lastDealName = _lastDealName;
    m_lastDealNameHasBeenSet = true;
}

bool TradeInfo::LastDealNameHasBeenSet() const
{
    return m_lastDealNameHasBeenSet;
}

string TradeInfo::GetInstanceClass() const
{
    return m_instanceClass;
}

void TradeInfo::SetInstanceClass(const string& _instanceClass)
{
    m_instanceClass = _instanceClass;
    m_instanceClassHasBeenSet = true;
}

bool TradeInfo::InstanceClassHasBeenSet() const
{
    return m_instanceClassHasBeenSet;
}

string TradeInfo::GetTradeStatus() const
{
    return m_tradeStatus;
}

void TradeInfo::SetTradeStatus(const string& _tradeStatus)
{
    m_tradeStatus = _tradeStatus;
    m_tradeStatusHasBeenSet = true;
}

bool TradeInfo::TradeStatusHasBeenSet() const
{
    return m_tradeStatusHasBeenSet;
}

string TradeInfo::GetExpireTime() const
{
    return m_expireTime;
}

void TradeInfo::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool TradeInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string TradeInfo::GetOfflineTime() const
{
    return m_offlineTime;
}

void TradeInfo::SetOfflineTime(const string& _offlineTime)
{
    m_offlineTime = _offlineTime;
    m_offlineTimeHasBeenSet = true;
}

bool TradeInfo::OfflineTimeHasBeenSet() const
{
    return m_offlineTimeHasBeenSet;
}

string TradeInfo::GetIsolateTime() const
{
    return m_isolateTime;
}

void TradeInfo::SetIsolateTime(const string& _isolateTime)
{
    m_isolateTime = _isolateTime;
    m_isolateTimeHasBeenSet = true;
}

bool TradeInfo::IsolateTimeHasBeenSet() const
{
    return m_isolateTimeHasBeenSet;
}

string TradeInfo::GetOfflineReason() const
{
    return m_offlineReason;
}

void TradeInfo::SetOfflineReason(const string& _offlineReason)
{
    m_offlineReason = _offlineReason;
    m_offlineReasonHasBeenSet = true;
}

bool TradeInfo::OfflineReasonHasBeenSet() const
{
    return m_offlineReasonHasBeenSet;
}

string TradeInfo::GetIsolateReason() const
{
    return m_isolateReason;
}

void TradeInfo::SetIsolateReason(const string& _isolateReason)
{
    m_isolateReason = _isolateReason;
    m_isolateReasonHasBeenSet = true;
}

bool TradeInfo::IsolateReasonHasBeenSet() const
{
    return m_isolateReasonHasBeenSet;
}

string TradeInfo::GetPayType() const
{
    return m_payType;
}

void TradeInfo::SetPayType(const string& _payType)
{
    m_payType = _payType;
    m_payTypeHasBeenSet = true;
}

bool TradeInfo::PayTypeHasBeenSet() const
{
    return m_payTypeHasBeenSet;
}

string TradeInfo::GetBillingType() const
{
    return m_billingType;
}

void TradeInfo::SetBillingType(const string& _billingType)
{
    m_billingType = _billingType;
    m_billingTypeHasBeenSet = true;
}

bool TradeInfo::BillingTypeHasBeenSet() const
{
    return m_billingTypeHasBeenSet;
}

