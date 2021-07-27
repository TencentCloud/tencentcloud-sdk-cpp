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

#include <tencentcloud/market/v20191010/model/WeChatOrderInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Market::V20191010::Model;
using namespace std;

WeChatOrderInfo::WeChatOrderInfo() :
    m_orderIdHasBeenSet(false),
    m_orderStatusHasBeenSet(false),
    m_orderTypeHasBeenSet(false),
    m_suiteIdHasBeenSet(false),
    m_editionIdHasBeenSet(false),
    m_editionNameHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_orderTimeHasBeenSet(false),
    m_paidTimeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_useBeginTimeHasBeenSet(false),
    m_useEndTimeHasBeenSet(false),
    m_dealsHasBeenSet(false)
{
}

CoreInternalOutcome WeChatOrderInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Error("response `WeChatOrderInfo.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("OrderStatus") && !value["OrderStatus"].IsNull())
    {
        if (!value["OrderStatus"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `WeChatOrderInfo.OrderStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_orderStatus = value["OrderStatus"].GetInt64();
        m_orderStatusHasBeenSet = true;
    }

    if (value.HasMember("OrderType") && !value["OrderType"].IsNull())
    {
        if (!value["OrderType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `WeChatOrderInfo.OrderType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_orderType = value["OrderType"].GetInt64();
        m_orderTypeHasBeenSet = true;
    }

    if (value.HasMember("SuiteId") && !value["SuiteId"].IsNull())
    {
        if (!value["SuiteId"].IsString())
        {
            return CoreInternalOutcome(Error("response `WeChatOrderInfo.SuiteId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suiteId = string(value["SuiteId"].GetString());
        m_suiteIdHasBeenSet = true;
    }

    if (value.HasMember("EditionId") && !value["EditionId"].IsNull())
    {
        if (!value["EditionId"].IsString())
        {
            return CoreInternalOutcome(Error("response `WeChatOrderInfo.EditionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_editionId = string(value["EditionId"].GetString());
        m_editionIdHasBeenSet = true;
    }

    if (value.HasMember("EditionName") && !value["EditionName"].IsNull())
    {
        if (!value["EditionName"].IsString())
        {
            return CoreInternalOutcome(Error("response `WeChatOrderInfo.EditionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_editionName = string(value["EditionName"].GetString());
        m_editionNameHasBeenSet = true;
    }

    if (value.HasMember("Price") && !value["Price"].IsNull())
    {
        if (!value["Price"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `WeChatOrderInfo.Price` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_price = value["Price"].GetInt64();
        m_priceHasBeenSet = true;
    }

    if (value.HasMember("OrderTime") && !value["OrderTime"].IsNull())
    {
        if (!value["OrderTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `WeChatOrderInfo.OrderTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_orderTime = value["OrderTime"].GetInt64();
        m_orderTimeHasBeenSet = true;
    }

    if (value.HasMember("PaidTime") && !value["PaidTime"].IsNull())
    {
        if (!value["PaidTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `WeChatOrderInfo.PaidTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_paidTime = value["PaidTime"].GetInt64();
        m_paidTimeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Error("response `WeChatOrderInfo.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("UseBeginTime") && !value["UseBeginTime"].IsNull())
    {
        if (!value["UseBeginTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `WeChatOrderInfo.UseBeginTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_useBeginTime = value["UseBeginTime"].GetInt64();
        m_useBeginTimeHasBeenSet = true;
    }

    if (value.HasMember("UseEndTime") && !value["UseEndTime"].IsNull())
    {
        if (!value["UseEndTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `WeChatOrderInfo.UseEndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_useEndTime = value["UseEndTime"].GetInt64();
        m_useEndTimeHasBeenSet = true;
    }

    if (value.HasMember("Deals") && !value["Deals"].IsNull())
    {
        if (!value["Deals"].IsObject())
        {
            return CoreInternalOutcome(Error("response `WeChatOrderInfo.Deals` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_deals.Deserialize(value["Deals"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dealsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WeChatOrderInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_orderStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orderStatus, allocator);
    }

    if (m_orderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orderType, allocator);
    }

    if (m_suiteIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuiteId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suiteId.c_str(), allocator).Move(), allocator);
    }

    if (m_editionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EditionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_editionId.c_str(), allocator).Move(), allocator);
    }

    if (m_editionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EditionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_editionName.c_str(), allocator).Move(), allocator);
    }

    if (m_priceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Price";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_price, allocator);
    }

    if (m_orderTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orderTime, allocator);
    }

    if (m_paidTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaidTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_paidTime, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_useBeginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseBeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useBeginTime, allocator);
    }

    if (m_useEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useEndTime, allocator);
    }

    if (m_dealsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deals";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deals.ToJsonObject(value[key.c_str()], allocator);
    }

}


string WeChatOrderInfo::GetOrderId() const
{
    return m_orderId;
}

void WeChatOrderInfo::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool WeChatOrderInfo::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

int64_t WeChatOrderInfo::GetOrderStatus() const
{
    return m_orderStatus;
}

void WeChatOrderInfo::SetOrderStatus(const int64_t& _orderStatus)
{
    m_orderStatus = _orderStatus;
    m_orderStatusHasBeenSet = true;
}

bool WeChatOrderInfo::OrderStatusHasBeenSet() const
{
    return m_orderStatusHasBeenSet;
}

int64_t WeChatOrderInfo::GetOrderType() const
{
    return m_orderType;
}

void WeChatOrderInfo::SetOrderType(const int64_t& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool WeChatOrderInfo::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

string WeChatOrderInfo::GetSuiteId() const
{
    return m_suiteId;
}

void WeChatOrderInfo::SetSuiteId(const string& _suiteId)
{
    m_suiteId = _suiteId;
    m_suiteIdHasBeenSet = true;
}

bool WeChatOrderInfo::SuiteIdHasBeenSet() const
{
    return m_suiteIdHasBeenSet;
}

string WeChatOrderInfo::GetEditionId() const
{
    return m_editionId;
}

void WeChatOrderInfo::SetEditionId(const string& _editionId)
{
    m_editionId = _editionId;
    m_editionIdHasBeenSet = true;
}

bool WeChatOrderInfo::EditionIdHasBeenSet() const
{
    return m_editionIdHasBeenSet;
}

string WeChatOrderInfo::GetEditionName() const
{
    return m_editionName;
}

void WeChatOrderInfo::SetEditionName(const string& _editionName)
{
    m_editionName = _editionName;
    m_editionNameHasBeenSet = true;
}

bool WeChatOrderInfo::EditionNameHasBeenSet() const
{
    return m_editionNameHasBeenSet;
}

int64_t WeChatOrderInfo::GetPrice() const
{
    return m_price;
}

void WeChatOrderInfo::SetPrice(const int64_t& _price)
{
    m_price = _price;
    m_priceHasBeenSet = true;
}

bool WeChatOrderInfo::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

int64_t WeChatOrderInfo::GetOrderTime() const
{
    return m_orderTime;
}

void WeChatOrderInfo::SetOrderTime(const int64_t& _orderTime)
{
    m_orderTime = _orderTime;
    m_orderTimeHasBeenSet = true;
}

bool WeChatOrderInfo::OrderTimeHasBeenSet() const
{
    return m_orderTimeHasBeenSet;
}

int64_t WeChatOrderInfo::GetPaidTime() const
{
    return m_paidTime;
}

void WeChatOrderInfo::SetPaidTime(const int64_t& _paidTime)
{
    m_paidTime = _paidTime;
    m_paidTimeHasBeenSet = true;
}

bool WeChatOrderInfo::PaidTimeHasBeenSet() const
{
    return m_paidTimeHasBeenSet;
}

string WeChatOrderInfo::GetRemark() const
{
    return m_remark;
}

void WeChatOrderInfo::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool WeChatOrderInfo::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t WeChatOrderInfo::GetUseBeginTime() const
{
    return m_useBeginTime;
}

void WeChatOrderInfo::SetUseBeginTime(const int64_t& _useBeginTime)
{
    m_useBeginTime = _useBeginTime;
    m_useBeginTimeHasBeenSet = true;
}

bool WeChatOrderInfo::UseBeginTimeHasBeenSet() const
{
    return m_useBeginTimeHasBeenSet;
}

int64_t WeChatOrderInfo::GetUseEndTime() const
{
    return m_useEndTime;
}

void WeChatOrderInfo::SetUseEndTime(const int64_t& _useEndTime)
{
    m_useEndTime = _useEndTime;
    m_useEndTimeHasBeenSet = true;
}

bool WeChatOrderInfo::UseEndTimeHasBeenSet() const
{
    return m_useEndTimeHasBeenSet;
}

OfflineProductDeal WeChatOrderInfo::GetDeals() const
{
    return m_deals;
}

void WeChatOrderInfo::SetDeals(const OfflineProductDeal& _deals)
{
    m_deals = _deals;
    m_dealsHasBeenSet = true;
}

bool WeChatOrderInfo::DealsHasBeenSet() const
{
    return m_dealsHasBeenSet;
}

