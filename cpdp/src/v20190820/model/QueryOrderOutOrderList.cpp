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

#include <tencentcloud/cpdp/v20190820/model/QueryOrderOutOrderList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryOrderOutOrderList::QueryOrderOutOrderList() :
    m_midasAppIdHasBeenSet(false),
    m_amtHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_cashAmtHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_payTimeHasBeenSet(false),
    m_couponAmtHasBeenSet(false),
    m_orderTimeHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_sceneInfoHasBeenSet(false),
    m_orderStateHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_refundFlagHasBeenSet(false),
    m_outTradeNoHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_callBackTimeHasBeenSet(false),
    m_currencyTypeHasBeenSet(false),
    m_acctSubAppIdHasBeenSet(false),
    m_transactionIdHasBeenSet(false),
    m_channelOrderIdHasBeenSet(false),
    m_subOrderListHasBeenSet(false),
    m_channelExternalOrderIdHasBeenSet(false),
    m_settleCheckHasBeenSet(false),
    m_channelExternalUserInfoListHasBeenSet(false),
    m_attachmentInfoListHasBeenSet(false)
{
}

CoreInternalOutcome QueryOrderOutOrderList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MidasAppId") && !value["MidasAppId"].IsNull())
    {
        if (!value["MidasAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderOutOrderList.MidasAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_midasAppId = string(value["MidasAppId"].GetString());
        m_midasAppIdHasBeenSet = true;
    }

    if (value.HasMember("Amt") && !value["Amt"].IsNull())
    {
        if (!value["Amt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderOutOrderList.Amt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_amt = value["Amt"].GetInt64();
        m_amtHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderOutOrderList.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("CashAmt") && !value["CashAmt"].IsNull())
    {
        if (!value["CashAmt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderOutOrderList.CashAmt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cashAmt = string(value["CashAmt"].GetString());
        m_cashAmtHasBeenSet = true;
    }

    if (value.HasMember("Metadata") && !value["Metadata"].IsNull())
    {
        if (!value["Metadata"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderOutOrderList.Metadata` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metadata = string(value["Metadata"].GetString());
        m_metadataHasBeenSet = true;
    }

    if (value.HasMember("PayTime") && !value["PayTime"].IsNull())
    {
        if (!value["PayTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderOutOrderList.PayTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payTime = string(value["PayTime"].GetString());
        m_payTimeHasBeenSet = true;
    }

    if (value.HasMember("CouponAmt") && !value["CouponAmt"].IsNull())
    {
        if (!value["CouponAmt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderOutOrderList.CouponAmt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_couponAmt = string(value["CouponAmt"].GetString());
        m_couponAmtHasBeenSet = true;
    }

    if (value.HasMember("OrderTime") && !value["OrderTime"].IsNull())
    {
        if (!value["OrderTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderOutOrderList.OrderTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderTime = string(value["OrderTime"].GetString());
        m_orderTimeHasBeenSet = true;
    }

    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderOutOrderList.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("SceneInfo") && !value["SceneInfo"].IsNull())
    {
        if (!value["SceneInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderOutOrderList.SceneInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sceneInfo = string(value["SceneInfo"].GetString());
        m_sceneInfoHasBeenSet = true;
    }

    if (value.HasMember("OrderState") && !value["OrderState"].IsNull())
    {
        if (!value["OrderState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderOutOrderList.OrderState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderState = string(value["OrderState"].GetString());
        m_orderStateHasBeenSet = true;
    }

    if (value.HasMember("Channel") && !value["Channel"].IsNull())
    {
        if (!value["Channel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderOutOrderList.Channel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channel = string(value["Channel"].GetString());
        m_channelHasBeenSet = true;
    }

    if (value.HasMember("RefundFlag") && !value["RefundFlag"].IsNull())
    {
        if (!value["RefundFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderOutOrderList.RefundFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_refundFlag = string(value["RefundFlag"].GetString());
        m_refundFlagHasBeenSet = true;
    }

    if (value.HasMember("OutTradeNo") && !value["OutTradeNo"].IsNull())
    {
        if (!value["OutTradeNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderOutOrderList.OutTradeNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outTradeNo = string(value["OutTradeNo"].GetString());
        m_outTradeNoHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderOutOrderList.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("CallBackTime") && !value["CallBackTime"].IsNull())
    {
        if (!value["CallBackTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderOutOrderList.CallBackTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callBackTime = string(value["CallBackTime"].GetString());
        m_callBackTimeHasBeenSet = true;
    }

    if (value.HasMember("CurrencyType") && !value["CurrencyType"].IsNull())
    {
        if (!value["CurrencyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderOutOrderList.CurrencyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currencyType = string(value["CurrencyType"].GetString());
        m_currencyTypeHasBeenSet = true;
    }

    if (value.HasMember("AcctSubAppId") && !value["AcctSubAppId"].IsNull())
    {
        if (!value["AcctSubAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderOutOrderList.AcctSubAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_acctSubAppId = string(value["AcctSubAppId"].GetString());
        m_acctSubAppIdHasBeenSet = true;
    }

    if (value.HasMember("TransactionId") && !value["TransactionId"].IsNull())
    {
        if (!value["TransactionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderOutOrderList.TransactionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transactionId = string(value["TransactionId"].GetString());
        m_transactionIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelOrderId") && !value["ChannelOrderId"].IsNull())
    {
        if (!value["ChannelOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderOutOrderList.ChannelOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelOrderId = string(value["ChannelOrderId"].GetString());
        m_channelOrderIdHasBeenSet = true;
    }

    if (value.HasMember("SubOrderList") && !value["SubOrderList"].IsNull())
    {
        if (!value["SubOrderList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QueryOrderOutOrderList.SubOrderList` is not array type"));

        const rapidjson::Value &tmpValue = value["SubOrderList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QueryOrderOutSubOrderList item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subOrderList.push_back(item);
        }
        m_subOrderListHasBeenSet = true;
    }

    if (value.HasMember("ChannelExternalOrderId") && !value["ChannelExternalOrderId"].IsNull())
    {
        if (!value["ChannelExternalOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderOutOrderList.ChannelExternalOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelExternalOrderId = string(value["ChannelExternalOrderId"].GetString());
        m_channelExternalOrderIdHasBeenSet = true;
    }

    if (value.HasMember("SettleCheck") && !value["SettleCheck"].IsNull())
    {
        if (!value["SettleCheck"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderOutOrderList.SettleCheck` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_settleCheck = value["SettleCheck"].GetInt64();
        m_settleCheckHasBeenSet = true;
    }

    if (value.HasMember("ChannelExternalUserInfoList") && !value["ChannelExternalUserInfoList"].IsNull())
    {
        if (!value["ChannelExternalUserInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QueryOrderOutOrderList.ChannelExternalUserInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["ChannelExternalUserInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OldChannelExternalUserInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_channelExternalUserInfoList.push_back(item);
        }
        m_channelExternalUserInfoListHasBeenSet = true;
    }

    if (value.HasMember("AttachmentInfoList") && !value["AttachmentInfoList"].IsNull())
    {
        if (!value["AttachmentInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QueryOrderOutOrderList.AttachmentInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["AttachmentInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OldAttachmentInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_attachmentInfoList.push_back(item);
        }
        m_attachmentInfoListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryOrderOutOrderList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_midasAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_midasAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_amtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Amt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_amt, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_cashAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CashAmt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cashAmt.c_str(), allocator).Move(), allocator);
    }

    if (m_metadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadata";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metadata.c_str(), allocator).Move(), allocator);
    }

    if (m_payTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payTime.c_str(), allocator).Move(), allocator);
    }

    if (m_couponAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CouponAmt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_couponAmt.c_str(), allocator).Move(), allocator);
    }

    if (m_orderTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderTime.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sceneInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_orderStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderState.c_str(), allocator).Move(), allocator);
    }

    if (m_channelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channel.c_str(), allocator).Move(), allocator);
    }

    if (m_refundFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_refundFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_outTradeNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutTradeNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outTradeNo.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_callBackTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallBackTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callBackTime.c_str(), allocator).Move(), allocator);
    }

    if (m_currencyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrencyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currencyType.c_str(), allocator).Move(), allocator);
    }

    if (m_acctSubAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AcctSubAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_acctSubAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_transactionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transactionId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelOrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_subOrderListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubOrderList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subOrderList.begin(); itr != m_subOrderList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_channelExternalOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelExternalOrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelExternalOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_settleCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SettleCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_settleCheck, allocator);
    }

    if (m_channelExternalUserInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelExternalUserInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_channelExternalUserInfoList.begin(); itr != m_channelExternalUserInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_attachmentInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachmentInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_attachmentInfoList.begin(); itr != m_attachmentInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string QueryOrderOutOrderList::GetMidasAppId() const
{
    return m_midasAppId;
}

void QueryOrderOutOrderList::SetMidasAppId(const string& _midasAppId)
{
    m_midasAppId = _midasAppId;
    m_midasAppIdHasBeenSet = true;
}

bool QueryOrderOutOrderList::MidasAppIdHasBeenSet() const
{
    return m_midasAppIdHasBeenSet;
}

int64_t QueryOrderOutOrderList::GetAmt() const
{
    return m_amt;
}

void QueryOrderOutOrderList::SetAmt(const int64_t& _amt)
{
    m_amt = _amt;
    m_amtHasBeenSet = true;
}

bool QueryOrderOutOrderList::AmtHasBeenSet() const
{
    return m_amtHasBeenSet;
}

string QueryOrderOutOrderList::GetUserId() const
{
    return m_userId;
}

void QueryOrderOutOrderList::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool QueryOrderOutOrderList::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string QueryOrderOutOrderList::GetCashAmt() const
{
    return m_cashAmt;
}

void QueryOrderOutOrderList::SetCashAmt(const string& _cashAmt)
{
    m_cashAmt = _cashAmt;
    m_cashAmtHasBeenSet = true;
}

bool QueryOrderOutOrderList::CashAmtHasBeenSet() const
{
    return m_cashAmtHasBeenSet;
}

string QueryOrderOutOrderList::GetMetadata() const
{
    return m_metadata;
}

void QueryOrderOutOrderList::SetMetadata(const string& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool QueryOrderOutOrderList::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}

string QueryOrderOutOrderList::GetPayTime() const
{
    return m_payTime;
}

void QueryOrderOutOrderList::SetPayTime(const string& _payTime)
{
    m_payTime = _payTime;
    m_payTimeHasBeenSet = true;
}

bool QueryOrderOutOrderList::PayTimeHasBeenSet() const
{
    return m_payTimeHasBeenSet;
}

string QueryOrderOutOrderList::GetCouponAmt() const
{
    return m_couponAmt;
}

void QueryOrderOutOrderList::SetCouponAmt(const string& _couponAmt)
{
    m_couponAmt = _couponAmt;
    m_couponAmtHasBeenSet = true;
}

bool QueryOrderOutOrderList::CouponAmtHasBeenSet() const
{
    return m_couponAmtHasBeenSet;
}

string QueryOrderOutOrderList::GetOrderTime() const
{
    return m_orderTime;
}

void QueryOrderOutOrderList::SetOrderTime(const string& _orderTime)
{
    m_orderTime = _orderTime;
    m_orderTimeHasBeenSet = true;
}

bool QueryOrderOutOrderList::OrderTimeHasBeenSet() const
{
    return m_orderTimeHasBeenSet;
}

string QueryOrderOutOrderList::GetProductId() const
{
    return m_productId;
}

void QueryOrderOutOrderList::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool QueryOrderOutOrderList::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string QueryOrderOutOrderList::GetSceneInfo() const
{
    return m_sceneInfo;
}

void QueryOrderOutOrderList::SetSceneInfo(const string& _sceneInfo)
{
    m_sceneInfo = _sceneInfo;
    m_sceneInfoHasBeenSet = true;
}

bool QueryOrderOutOrderList::SceneInfoHasBeenSet() const
{
    return m_sceneInfoHasBeenSet;
}

string QueryOrderOutOrderList::GetOrderState() const
{
    return m_orderState;
}

void QueryOrderOutOrderList::SetOrderState(const string& _orderState)
{
    m_orderState = _orderState;
    m_orderStateHasBeenSet = true;
}

bool QueryOrderOutOrderList::OrderStateHasBeenSet() const
{
    return m_orderStateHasBeenSet;
}

string QueryOrderOutOrderList::GetChannel() const
{
    return m_channel;
}

void QueryOrderOutOrderList::SetChannel(const string& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool QueryOrderOutOrderList::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

string QueryOrderOutOrderList::GetRefundFlag() const
{
    return m_refundFlag;
}

void QueryOrderOutOrderList::SetRefundFlag(const string& _refundFlag)
{
    m_refundFlag = _refundFlag;
    m_refundFlagHasBeenSet = true;
}

bool QueryOrderOutOrderList::RefundFlagHasBeenSet() const
{
    return m_refundFlagHasBeenSet;
}

string QueryOrderOutOrderList::GetOutTradeNo() const
{
    return m_outTradeNo;
}

void QueryOrderOutOrderList::SetOutTradeNo(const string& _outTradeNo)
{
    m_outTradeNo = _outTradeNo;
    m_outTradeNoHasBeenSet = true;
}

bool QueryOrderOutOrderList::OutTradeNoHasBeenSet() const
{
    return m_outTradeNoHasBeenSet;
}

string QueryOrderOutOrderList::GetProductName() const
{
    return m_productName;
}

void QueryOrderOutOrderList::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool QueryOrderOutOrderList::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string QueryOrderOutOrderList::GetCallBackTime() const
{
    return m_callBackTime;
}

void QueryOrderOutOrderList::SetCallBackTime(const string& _callBackTime)
{
    m_callBackTime = _callBackTime;
    m_callBackTimeHasBeenSet = true;
}

bool QueryOrderOutOrderList::CallBackTimeHasBeenSet() const
{
    return m_callBackTimeHasBeenSet;
}

string QueryOrderOutOrderList::GetCurrencyType() const
{
    return m_currencyType;
}

void QueryOrderOutOrderList::SetCurrencyType(const string& _currencyType)
{
    m_currencyType = _currencyType;
    m_currencyTypeHasBeenSet = true;
}

bool QueryOrderOutOrderList::CurrencyTypeHasBeenSet() const
{
    return m_currencyTypeHasBeenSet;
}

string QueryOrderOutOrderList::GetAcctSubAppId() const
{
    return m_acctSubAppId;
}

void QueryOrderOutOrderList::SetAcctSubAppId(const string& _acctSubAppId)
{
    m_acctSubAppId = _acctSubAppId;
    m_acctSubAppIdHasBeenSet = true;
}

bool QueryOrderOutOrderList::AcctSubAppIdHasBeenSet() const
{
    return m_acctSubAppIdHasBeenSet;
}

string QueryOrderOutOrderList::GetTransactionId() const
{
    return m_transactionId;
}

void QueryOrderOutOrderList::SetTransactionId(const string& _transactionId)
{
    m_transactionId = _transactionId;
    m_transactionIdHasBeenSet = true;
}

bool QueryOrderOutOrderList::TransactionIdHasBeenSet() const
{
    return m_transactionIdHasBeenSet;
}

string QueryOrderOutOrderList::GetChannelOrderId() const
{
    return m_channelOrderId;
}

void QueryOrderOutOrderList::SetChannelOrderId(const string& _channelOrderId)
{
    m_channelOrderId = _channelOrderId;
    m_channelOrderIdHasBeenSet = true;
}

bool QueryOrderOutOrderList::ChannelOrderIdHasBeenSet() const
{
    return m_channelOrderIdHasBeenSet;
}

vector<QueryOrderOutSubOrderList> QueryOrderOutOrderList::GetSubOrderList() const
{
    return m_subOrderList;
}

void QueryOrderOutOrderList::SetSubOrderList(const vector<QueryOrderOutSubOrderList>& _subOrderList)
{
    m_subOrderList = _subOrderList;
    m_subOrderListHasBeenSet = true;
}

bool QueryOrderOutOrderList::SubOrderListHasBeenSet() const
{
    return m_subOrderListHasBeenSet;
}

string QueryOrderOutOrderList::GetChannelExternalOrderId() const
{
    return m_channelExternalOrderId;
}

void QueryOrderOutOrderList::SetChannelExternalOrderId(const string& _channelExternalOrderId)
{
    m_channelExternalOrderId = _channelExternalOrderId;
    m_channelExternalOrderIdHasBeenSet = true;
}

bool QueryOrderOutOrderList::ChannelExternalOrderIdHasBeenSet() const
{
    return m_channelExternalOrderIdHasBeenSet;
}

int64_t QueryOrderOutOrderList::GetSettleCheck() const
{
    return m_settleCheck;
}

void QueryOrderOutOrderList::SetSettleCheck(const int64_t& _settleCheck)
{
    m_settleCheck = _settleCheck;
    m_settleCheckHasBeenSet = true;
}

bool QueryOrderOutOrderList::SettleCheckHasBeenSet() const
{
    return m_settleCheckHasBeenSet;
}

vector<OldChannelExternalUserInfo> QueryOrderOutOrderList::GetChannelExternalUserInfoList() const
{
    return m_channelExternalUserInfoList;
}

void QueryOrderOutOrderList::SetChannelExternalUserInfoList(const vector<OldChannelExternalUserInfo>& _channelExternalUserInfoList)
{
    m_channelExternalUserInfoList = _channelExternalUserInfoList;
    m_channelExternalUserInfoListHasBeenSet = true;
}

bool QueryOrderOutOrderList::ChannelExternalUserInfoListHasBeenSet() const
{
    return m_channelExternalUserInfoListHasBeenSet;
}

vector<OldAttachmentInfo> QueryOrderOutOrderList::GetAttachmentInfoList() const
{
    return m_attachmentInfoList;
}

void QueryOrderOutOrderList::SetAttachmentInfoList(const vector<OldAttachmentInfo>& _attachmentInfoList)
{
    m_attachmentInfoList = _attachmentInfoList;
    m_attachmentInfoListHasBeenSet = true;
}

bool QueryOrderOutOrderList::AttachmentInfoListHasBeenSet() const
{
    return m_attachmentInfoListHasBeenSet;
}

