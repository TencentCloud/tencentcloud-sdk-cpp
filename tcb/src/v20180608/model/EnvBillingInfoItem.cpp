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

#include <tencentcloud/tcb/v20180608/model/EnvBillingInfoItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

EnvBillingInfoItem::EnvBillingInfoItem() :
    m_envIdHasBeenSet(false),
    m_packageIdHasBeenSet(false),
    m_isAutoRenewHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_isolatedTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_isAlwaysFreeHasBeenSet(false),
    m_paymentChannelHasBeenSet(false),
    m_orderInfoHasBeenSet(false),
    m_freeQuotaHasBeenSet(false),
    m_enableOverrunHasBeenSet(false),
    m_extPackageTypeHasBeenSet(false),
    m_envChargedHasBeenSet(false),
    m_envActivatedHasBeenSet(false)
{
}

CoreInternalOutcome EnvBillingInfoItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnvId") && !value["EnvId"].IsNull())
    {
        if (!value["EnvId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvBillingInfoItem.EnvId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envId = string(value["EnvId"].GetString());
        m_envIdHasBeenSet = true;
    }

    if (value.HasMember("PackageId") && !value["PackageId"].IsNull())
    {
        if (!value["PackageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvBillingInfoItem.PackageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageId = string(value["PackageId"].GetString());
        m_packageIdHasBeenSet = true;
    }

    if (value.HasMember("IsAutoRenew") && !value["IsAutoRenew"].IsNull())
    {
        if (!value["IsAutoRenew"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnvBillingInfoItem.IsAutoRenew` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAutoRenew = value["IsAutoRenew"].GetBool();
        m_isAutoRenewHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvBillingInfoItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvBillingInfoItem.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("IsolatedTime") && !value["IsolatedTime"].IsNull())
    {
        if (!value["IsolatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvBillingInfoItem.IsolatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolatedTime = string(value["IsolatedTime"].GetString());
        m_isolatedTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvBillingInfoItem.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvBillingInfoItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvBillingInfoItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("IsAlwaysFree") && !value["IsAlwaysFree"].IsNull())
    {
        if (!value["IsAlwaysFree"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnvBillingInfoItem.IsAlwaysFree` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAlwaysFree = value["IsAlwaysFree"].GetBool();
        m_isAlwaysFreeHasBeenSet = true;
    }

    if (value.HasMember("PaymentChannel") && !value["PaymentChannel"].IsNull())
    {
        if (!value["PaymentChannel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvBillingInfoItem.PaymentChannel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentChannel = string(value["PaymentChannel"].GetString());
        m_paymentChannelHasBeenSet = true;
    }

    if (value.HasMember("OrderInfo") && !value["OrderInfo"].IsNull())
    {
        if (!value["OrderInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EnvBillingInfoItem.OrderInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_orderInfo.Deserialize(value["OrderInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_orderInfoHasBeenSet = true;
    }

    if (value.HasMember("FreeQuota") && !value["FreeQuota"].IsNull())
    {
        if (!value["FreeQuota"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvBillingInfoItem.FreeQuota` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_freeQuota = string(value["FreeQuota"].GetString());
        m_freeQuotaHasBeenSet = true;
    }

    if (value.HasMember("EnableOverrun") && !value["EnableOverrun"].IsNull())
    {
        if (!value["EnableOverrun"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnvBillingInfoItem.EnableOverrun` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableOverrun = value["EnableOverrun"].GetBool();
        m_enableOverrunHasBeenSet = true;
    }

    if (value.HasMember("ExtPackageType") && !value["ExtPackageType"].IsNull())
    {
        if (!value["ExtPackageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvBillingInfoItem.ExtPackageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extPackageType = string(value["ExtPackageType"].GetString());
        m_extPackageTypeHasBeenSet = true;
    }

    if (value.HasMember("EnvCharged") && !value["EnvCharged"].IsNull())
    {
        if (!value["EnvCharged"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvBillingInfoItem.EnvCharged` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envCharged = string(value["EnvCharged"].GetString());
        m_envChargedHasBeenSet = true;
    }

    if (value.HasMember("EnvActivated") && !value["EnvActivated"].IsNull())
    {
        if (!value["EnvActivated"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvBillingInfoItem.EnvActivated` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envActivated = string(value["EnvActivated"].GetString());
        m_envActivatedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EnvBillingInfoItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_packageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageId.c_str(), allocator).Move(), allocator);
    }

    if (m_isAutoRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAutoRenew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAutoRenew, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_isolatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isolatedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isAlwaysFreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAlwaysFree";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAlwaysFree, allocator);
    }

    if (m_paymentChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentChannel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentChannel.c_str(), allocator).Move(), allocator);
    }

    if (m_orderInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_orderInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_freeQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreeQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_freeQuota.c_str(), allocator).Move(), allocator);
    }

    if (m_enableOverrunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableOverrun";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableOverrun, allocator);
    }

    if (m_extPackageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtPackageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extPackageType.c_str(), allocator).Move(), allocator);
    }

    if (m_envChargedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvCharged";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envCharged.c_str(), allocator).Move(), allocator);
    }

    if (m_envActivatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvActivated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envActivated.c_str(), allocator).Move(), allocator);
    }

}


string EnvBillingInfoItem::GetEnvId() const
{
    return m_envId;
}

void EnvBillingInfoItem::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool EnvBillingInfoItem::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string EnvBillingInfoItem::GetPackageId() const
{
    return m_packageId;
}

void EnvBillingInfoItem::SetPackageId(const string& _packageId)
{
    m_packageId = _packageId;
    m_packageIdHasBeenSet = true;
}

bool EnvBillingInfoItem::PackageIdHasBeenSet() const
{
    return m_packageIdHasBeenSet;
}

bool EnvBillingInfoItem::GetIsAutoRenew() const
{
    return m_isAutoRenew;
}

void EnvBillingInfoItem::SetIsAutoRenew(const bool& _isAutoRenew)
{
    m_isAutoRenew = _isAutoRenew;
    m_isAutoRenewHasBeenSet = true;
}

bool EnvBillingInfoItem::IsAutoRenewHasBeenSet() const
{
    return m_isAutoRenewHasBeenSet;
}

string EnvBillingInfoItem::GetStatus() const
{
    return m_status;
}

void EnvBillingInfoItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool EnvBillingInfoItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string EnvBillingInfoItem::GetPayMode() const
{
    return m_payMode;
}

void EnvBillingInfoItem::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool EnvBillingInfoItem::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string EnvBillingInfoItem::GetIsolatedTime() const
{
    return m_isolatedTime;
}

void EnvBillingInfoItem::SetIsolatedTime(const string& _isolatedTime)
{
    m_isolatedTime = _isolatedTime;
    m_isolatedTimeHasBeenSet = true;
}

bool EnvBillingInfoItem::IsolatedTimeHasBeenSet() const
{
    return m_isolatedTimeHasBeenSet;
}

string EnvBillingInfoItem::GetExpireTime() const
{
    return m_expireTime;
}

void EnvBillingInfoItem::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool EnvBillingInfoItem::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string EnvBillingInfoItem::GetCreateTime() const
{
    return m_createTime;
}

void EnvBillingInfoItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool EnvBillingInfoItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string EnvBillingInfoItem::GetUpdateTime() const
{
    return m_updateTime;
}

void EnvBillingInfoItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool EnvBillingInfoItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

bool EnvBillingInfoItem::GetIsAlwaysFree() const
{
    return m_isAlwaysFree;
}

void EnvBillingInfoItem::SetIsAlwaysFree(const bool& _isAlwaysFree)
{
    m_isAlwaysFree = _isAlwaysFree;
    m_isAlwaysFreeHasBeenSet = true;
}

bool EnvBillingInfoItem::IsAlwaysFreeHasBeenSet() const
{
    return m_isAlwaysFreeHasBeenSet;
}

string EnvBillingInfoItem::GetPaymentChannel() const
{
    return m_paymentChannel;
}

void EnvBillingInfoItem::SetPaymentChannel(const string& _paymentChannel)
{
    m_paymentChannel = _paymentChannel;
    m_paymentChannelHasBeenSet = true;
}

bool EnvBillingInfoItem::PaymentChannelHasBeenSet() const
{
    return m_paymentChannelHasBeenSet;
}

OrderInfo EnvBillingInfoItem::GetOrderInfo() const
{
    return m_orderInfo;
}

void EnvBillingInfoItem::SetOrderInfo(const OrderInfo& _orderInfo)
{
    m_orderInfo = _orderInfo;
    m_orderInfoHasBeenSet = true;
}

bool EnvBillingInfoItem::OrderInfoHasBeenSet() const
{
    return m_orderInfoHasBeenSet;
}

string EnvBillingInfoItem::GetFreeQuota() const
{
    return m_freeQuota;
}

void EnvBillingInfoItem::SetFreeQuota(const string& _freeQuota)
{
    m_freeQuota = _freeQuota;
    m_freeQuotaHasBeenSet = true;
}

bool EnvBillingInfoItem::FreeQuotaHasBeenSet() const
{
    return m_freeQuotaHasBeenSet;
}

bool EnvBillingInfoItem::GetEnableOverrun() const
{
    return m_enableOverrun;
}

void EnvBillingInfoItem::SetEnableOverrun(const bool& _enableOverrun)
{
    m_enableOverrun = _enableOverrun;
    m_enableOverrunHasBeenSet = true;
}

bool EnvBillingInfoItem::EnableOverrunHasBeenSet() const
{
    return m_enableOverrunHasBeenSet;
}

string EnvBillingInfoItem::GetExtPackageType() const
{
    return m_extPackageType;
}

void EnvBillingInfoItem::SetExtPackageType(const string& _extPackageType)
{
    m_extPackageType = _extPackageType;
    m_extPackageTypeHasBeenSet = true;
}

bool EnvBillingInfoItem::ExtPackageTypeHasBeenSet() const
{
    return m_extPackageTypeHasBeenSet;
}

string EnvBillingInfoItem::GetEnvCharged() const
{
    return m_envCharged;
}

void EnvBillingInfoItem::SetEnvCharged(const string& _envCharged)
{
    m_envCharged = _envCharged;
    m_envChargedHasBeenSet = true;
}

bool EnvBillingInfoItem::EnvChargedHasBeenSet() const
{
    return m_envChargedHasBeenSet;
}

string EnvBillingInfoItem::GetEnvActivated() const
{
    return m_envActivated;
}

void EnvBillingInfoItem::SetEnvActivated(const string& _envActivated)
{
    m_envActivated = _envActivated;
    m_envActivatedHasBeenSet = true;
}

bool EnvBillingInfoItem::EnvActivatedHasBeenSet() const
{
    return m_envActivatedHasBeenSet;
}

