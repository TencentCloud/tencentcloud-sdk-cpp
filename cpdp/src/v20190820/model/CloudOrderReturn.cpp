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

#include <tencentcloud/cpdp/v20190820/model/CloudOrderReturn.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CloudOrderReturn::CloudOrderReturn() :
    m_appIdHasBeenSet(false),
    m_outTradeNoHasBeenSet(false),
    m_subOrderListHasBeenSet(false),
    m_transactionIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_currencyTypeHasBeenSet(false),
    m_amtHasBeenSet(false),
    m_orderStateHasBeenSet(false),
    m_orderTimeHasBeenSet(false),
    m_payTimeHasBeenSet(false),
    m_callBackTimeHasBeenSet(false),
    m_channelExternalOrderIdHasBeenSet(false),
    m_channelOrderIdHasBeenSet(false),
    m_refundFlagHasBeenSet(false),
    m_cashAmtHasBeenSet(false),
    m_couponAmtHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_settleInfoHasBeenSet(false),
    m_attachmentInfoListHasBeenSet(false),
    m_channelExternalUserInfoListHasBeenSet(false),
    m_externalReturnPromptGroupListHasBeenSet(false),
    m_sceneInfoHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_paySceneHasBeenSet(false),
    m_paymentMethodHasBeenSet(false),
    m_totalPlatformIncomeHasBeenSet(false),
    m_totalMchIncomeHasBeenSet(false)
{
}

CoreInternalOutcome CloudOrderReturn::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudOrderReturn.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("OutTradeNo") && !value["OutTradeNo"].IsNull())
    {
        if (!value["OutTradeNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudOrderReturn.OutTradeNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outTradeNo = string(value["OutTradeNo"].GetString());
        m_outTradeNoHasBeenSet = true;
    }

    if (value.HasMember("SubOrderList") && !value["SubOrderList"].IsNull())
    {
        if (!value["SubOrderList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudOrderReturn.SubOrderList` is not array type"));

        const rapidjson::Value &tmpValue = value["SubOrderList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CloudSubOrderReturn item;
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

    if (value.HasMember("TransactionId") && !value["TransactionId"].IsNull())
    {
        if (!value["TransactionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudOrderReturn.TransactionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transactionId = string(value["TransactionId"].GetString());
        m_transactionIdHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudOrderReturn.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("Channel") && !value["Channel"].IsNull())
    {
        if (!value["Channel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudOrderReturn.Channel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channel = string(value["Channel"].GetString());
        m_channelHasBeenSet = true;
    }

    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudOrderReturn.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("Metadata") && !value["Metadata"].IsNull())
    {
        if (!value["Metadata"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudOrderReturn.Metadata` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metadata = string(value["Metadata"].GetString());
        m_metadataHasBeenSet = true;
    }

    if (value.HasMember("CurrencyType") && !value["CurrencyType"].IsNull())
    {
        if (!value["CurrencyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudOrderReturn.CurrencyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currencyType = string(value["CurrencyType"].GetString());
        m_currencyTypeHasBeenSet = true;
    }

    if (value.HasMember("Amt") && !value["Amt"].IsNull())
    {
        if (!value["Amt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudOrderReturn.Amt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_amt = value["Amt"].GetInt64();
        m_amtHasBeenSet = true;
    }

    if (value.HasMember("OrderState") && !value["OrderState"].IsNull())
    {
        if (!value["OrderState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudOrderReturn.OrderState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderState = string(value["OrderState"].GetString());
        m_orderStateHasBeenSet = true;
    }

    if (value.HasMember("OrderTime") && !value["OrderTime"].IsNull())
    {
        if (!value["OrderTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudOrderReturn.OrderTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderTime = string(value["OrderTime"].GetString());
        m_orderTimeHasBeenSet = true;
    }

    if (value.HasMember("PayTime") && !value["PayTime"].IsNull())
    {
        if (!value["PayTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudOrderReturn.PayTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payTime = string(value["PayTime"].GetString());
        m_payTimeHasBeenSet = true;
    }

    if (value.HasMember("CallBackTime") && !value["CallBackTime"].IsNull())
    {
        if (!value["CallBackTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudOrderReturn.CallBackTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callBackTime = string(value["CallBackTime"].GetString());
        m_callBackTimeHasBeenSet = true;
    }

    if (value.HasMember("ChannelExternalOrderId") && !value["ChannelExternalOrderId"].IsNull())
    {
        if (!value["ChannelExternalOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudOrderReturn.ChannelExternalOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelExternalOrderId = string(value["ChannelExternalOrderId"].GetString());
        m_channelExternalOrderIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelOrderId") && !value["ChannelOrderId"].IsNull())
    {
        if (!value["ChannelOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudOrderReturn.ChannelOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelOrderId = string(value["ChannelOrderId"].GetString());
        m_channelOrderIdHasBeenSet = true;
    }

    if (value.HasMember("RefundFlag") && !value["RefundFlag"].IsNull())
    {
        if (!value["RefundFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudOrderReturn.RefundFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_refundFlag = string(value["RefundFlag"].GetString());
        m_refundFlagHasBeenSet = true;
    }

    if (value.HasMember("CashAmt") && !value["CashAmt"].IsNull())
    {
        if (!value["CashAmt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudOrderReturn.CashAmt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cashAmt = string(value["CashAmt"].GetString());
        m_cashAmtHasBeenSet = true;
    }

    if (value.HasMember("CouponAmt") && !value["CouponAmt"].IsNull())
    {
        if (!value["CouponAmt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudOrderReturn.CouponAmt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_couponAmt = string(value["CouponAmt"].GetString());
        m_couponAmtHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudOrderReturn.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("SettleInfo") && !value["SettleInfo"].IsNull())
    {
        if (!value["SettleInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudOrderReturn.SettleInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_settleInfo.Deserialize(value["SettleInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_settleInfoHasBeenSet = true;
    }

    if (value.HasMember("AttachmentInfoList") && !value["AttachmentInfoList"].IsNull())
    {
        if (!value["AttachmentInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudOrderReturn.AttachmentInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["AttachmentInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CloudAttachmentInfo item;
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

    if (value.HasMember("ChannelExternalUserInfoList") && !value["ChannelExternalUserInfoList"].IsNull())
    {
        if (!value["ChannelExternalUserInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudOrderReturn.ChannelExternalUserInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["ChannelExternalUserInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CloudChannelExternalUserInfo item;
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

    if (value.HasMember("ExternalReturnPromptGroupList") && !value["ExternalReturnPromptGroupList"].IsNull())
    {
        if (!value["ExternalReturnPromptGroupList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudOrderReturn.ExternalReturnPromptGroupList` is not array type"));

        const rapidjson::Value &tmpValue = value["ExternalReturnPromptGroupList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CloudExternalPromptGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_externalReturnPromptGroupList.push_back(item);
        }
        m_externalReturnPromptGroupListHasBeenSet = true;
    }

    if (value.HasMember("SceneInfo") && !value["SceneInfo"].IsNull())
    {
        if (!value["SceneInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudOrderReturn.SceneInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sceneInfo = string(value["SceneInfo"].GetString());
        m_sceneInfoHasBeenSet = true;
    }

    if (value.HasMember("SubAppId") && !value["SubAppId"].IsNull())
    {
        if (!value["SubAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudOrderReturn.SubAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAppId = string(value["SubAppId"].GetString());
        m_subAppIdHasBeenSet = true;
    }

    if (value.HasMember("PayScene") && !value["PayScene"].IsNull())
    {
        if (!value["PayScene"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudOrderReturn.PayScene` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payScene = string(value["PayScene"].GetString());
        m_paySceneHasBeenSet = true;
    }

    if (value.HasMember("PaymentMethod") && !value["PaymentMethod"].IsNull())
    {
        if (!value["PaymentMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudOrderReturn.PaymentMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentMethod = string(value["PaymentMethod"].GetString());
        m_paymentMethodHasBeenSet = true;
    }

    if (value.HasMember("TotalPlatformIncome") && !value["TotalPlatformIncome"].IsNull())
    {
        if (!value["TotalPlatformIncome"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudOrderReturn.TotalPlatformIncome` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalPlatformIncome = value["TotalPlatformIncome"].GetInt64();
        m_totalPlatformIncomeHasBeenSet = true;
    }

    if (value.HasMember("TotalMchIncome") && !value["TotalMchIncome"].IsNull())
    {
        if (!value["TotalMchIncome"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudOrderReturn.TotalMchIncome` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalMchIncome = value["TotalMchIncome"].GetInt64();
        m_totalMchIncomeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudOrderReturn::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_outTradeNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutTradeNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outTradeNo.c_str(), allocator).Move(), allocator);
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

    if (m_transactionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transactionId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channel.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_metadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadata";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metadata.c_str(), allocator).Move(), allocator);
    }

    if (m_currencyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrencyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currencyType.c_str(), allocator).Move(), allocator);
    }

    if (m_amtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Amt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_amt, allocator);
    }

    if (m_orderStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderState.c_str(), allocator).Move(), allocator);
    }

    if (m_orderTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderTime.c_str(), allocator).Move(), allocator);
    }

    if (m_payTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payTime.c_str(), allocator).Move(), allocator);
    }

    if (m_callBackTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallBackTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callBackTime.c_str(), allocator).Move(), allocator);
    }

    if (m_channelExternalOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelExternalOrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelExternalOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelOrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_refundFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_refundFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_cashAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CashAmt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cashAmt.c_str(), allocator).Move(), allocator);
    }

    if (m_couponAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CouponAmt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_couponAmt.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_settleInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SettleInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_settleInfo.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_externalReturnPromptGroupListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalReturnPromptGroupList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_externalReturnPromptGroupList.begin(); itr != m_externalReturnPromptGroupList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sceneInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sceneInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_paySceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayScene";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payScene.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_totalPlatformIncomeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalPlatformIncome";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalPlatformIncome, allocator);
    }

    if (m_totalMchIncomeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalMchIncome";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalMchIncome, allocator);
    }

}


string CloudOrderReturn::GetAppId() const
{
    return m_appId;
}

void CloudOrderReturn::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool CloudOrderReturn::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string CloudOrderReturn::GetOutTradeNo() const
{
    return m_outTradeNo;
}

void CloudOrderReturn::SetOutTradeNo(const string& _outTradeNo)
{
    m_outTradeNo = _outTradeNo;
    m_outTradeNoHasBeenSet = true;
}

bool CloudOrderReturn::OutTradeNoHasBeenSet() const
{
    return m_outTradeNoHasBeenSet;
}

vector<CloudSubOrderReturn> CloudOrderReturn::GetSubOrderList() const
{
    return m_subOrderList;
}

void CloudOrderReturn::SetSubOrderList(const vector<CloudSubOrderReturn>& _subOrderList)
{
    m_subOrderList = _subOrderList;
    m_subOrderListHasBeenSet = true;
}

bool CloudOrderReturn::SubOrderListHasBeenSet() const
{
    return m_subOrderListHasBeenSet;
}

string CloudOrderReturn::GetTransactionId() const
{
    return m_transactionId;
}

void CloudOrderReturn::SetTransactionId(const string& _transactionId)
{
    m_transactionId = _transactionId;
    m_transactionIdHasBeenSet = true;
}

bool CloudOrderReturn::TransactionIdHasBeenSet() const
{
    return m_transactionIdHasBeenSet;
}

string CloudOrderReturn::GetUserId() const
{
    return m_userId;
}

void CloudOrderReturn::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool CloudOrderReturn::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string CloudOrderReturn::GetChannel() const
{
    return m_channel;
}

void CloudOrderReturn::SetChannel(const string& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool CloudOrderReturn::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

string CloudOrderReturn::GetProductId() const
{
    return m_productId;
}

void CloudOrderReturn::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool CloudOrderReturn::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string CloudOrderReturn::GetMetadata() const
{
    return m_metadata;
}

void CloudOrderReturn::SetMetadata(const string& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool CloudOrderReturn::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}

string CloudOrderReturn::GetCurrencyType() const
{
    return m_currencyType;
}

void CloudOrderReturn::SetCurrencyType(const string& _currencyType)
{
    m_currencyType = _currencyType;
    m_currencyTypeHasBeenSet = true;
}

bool CloudOrderReturn::CurrencyTypeHasBeenSet() const
{
    return m_currencyTypeHasBeenSet;
}

int64_t CloudOrderReturn::GetAmt() const
{
    return m_amt;
}

void CloudOrderReturn::SetAmt(const int64_t& _amt)
{
    m_amt = _amt;
    m_amtHasBeenSet = true;
}

bool CloudOrderReturn::AmtHasBeenSet() const
{
    return m_amtHasBeenSet;
}

string CloudOrderReturn::GetOrderState() const
{
    return m_orderState;
}

void CloudOrderReturn::SetOrderState(const string& _orderState)
{
    m_orderState = _orderState;
    m_orderStateHasBeenSet = true;
}

bool CloudOrderReturn::OrderStateHasBeenSet() const
{
    return m_orderStateHasBeenSet;
}

string CloudOrderReturn::GetOrderTime() const
{
    return m_orderTime;
}

void CloudOrderReturn::SetOrderTime(const string& _orderTime)
{
    m_orderTime = _orderTime;
    m_orderTimeHasBeenSet = true;
}

bool CloudOrderReturn::OrderTimeHasBeenSet() const
{
    return m_orderTimeHasBeenSet;
}

string CloudOrderReturn::GetPayTime() const
{
    return m_payTime;
}

void CloudOrderReturn::SetPayTime(const string& _payTime)
{
    m_payTime = _payTime;
    m_payTimeHasBeenSet = true;
}

bool CloudOrderReturn::PayTimeHasBeenSet() const
{
    return m_payTimeHasBeenSet;
}

string CloudOrderReturn::GetCallBackTime() const
{
    return m_callBackTime;
}

void CloudOrderReturn::SetCallBackTime(const string& _callBackTime)
{
    m_callBackTime = _callBackTime;
    m_callBackTimeHasBeenSet = true;
}

bool CloudOrderReturn::CallBackTimeHasBeenSet() const
{
    return m_callBackTimeHasBeenSet;
}

string CloudOrderReturn::GetChannelExternalOrderId() const
{
    return m_channelExternalOrderId;
}

void CloudOrderReturn::SetChannelExternalOrderId(const string& _channelExternalOrderId)
{
    m_channelExternalOrderId = _channelExternalOrderId;
    m_channelExternalOrderIdHasBeenSet = true;
}

bool CloudOrderReturn::ChannelExternalOrderIdHasBeenSet() const
{
    return m_channelExternalOrderIdHasBeenSet;
}

string CloudOrderReturn::GetChannelOrderId() const
{
    return m_channelOrderId;
}

void CloudOrderReturn::SetChannelOrderId(const string& _channelOrderId)
{
    m_channelOrderId = _channelOrderId;
    m_channelOrderIdHasBeenSet = true;
}

bool CloudOrderReturn::ChannelOrderIdHasBeenSet() const
{
    return m_channelOrderIdHasBeenSet;
}

string CloudOrderReturn::GetRefundFlag() const
{
    return m_refundFlag;
}

void CloudOrderReturn::SetRefundFlag(const string& _refundFlag)
{
    m_refundFlag = _refundFlag;
    m_refundFlagHasBeenSet = true;
}

bool CloudOrderReturn::RefundFlagHasBeenSet() const
{
    return m_refundFlagHasBeenSet;
}

string CloudOrderReturn::GetCashAmt() const
{
    return m_cashAmt;
}

void CloudOrderReturn::SetCashAmt(const string& _cashAmt)
{
    m_cashAmt = _cashAmt;
    m_cashAmtHasBeenSet = true;
}

bool CloudOrderReturn::CashAmtHasBeenSet() const
{
    return m_cashAmtHasBeenSet;
}

string CloudOrderReturn::GetCouponAmt() const
{
    return m_couponAmt;
}

void CloudOrderReturn::SetCouponAmt(const string& _couponAmt)
{
    m_couponAmt = _couponAmt;
    m_couponAmtHasBeenSet = true;
}

bool CloudOrderReturn::CouponAmtHasBeenSet() const
{
    return m_couponAmtHasBeenSet;
}

string CloudOrderReturn::GetProductName() const
{
    return m_productName;
}

void CloudOrderReturn::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool CloudOrderReturn::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

CloudSettleInfo CloudOrderReturn::GetSettleInfo() const
{
    return m_settleInfo;
}

void CloudOrderReturn::SetSettleInfo(const CloudSettleInfo& _settleInfo)
{
    m_settleInfo = _settleInfo;
    m_settleInfoHasBeenSet = true;
}

bool CloudOrderReturn::SettleInfoHasBeenSet() const
{
    return m_settleInfoHasBeenSet;
}

vector<CloudAttachmentInfo> CloudOrderReturn::GetAttachmentInfoList() const
{
    return m_attachmentInfoList;
}

void CloudOrderReturn::SetAttachmentInfoList(const vector<CloudAttachmentInfo>& _attachmentInfoList)
{
    m_attachmentInfoList = _attachmentInfoList;
    m_attachmentInfoListHasBeenSet = true;
}

bool CloudOrderReturn::AttachmentInfoListHasBeenSet() const
{
    return m_attachmentInfoListHasBeenSet;
}

vector<CloudChannelExternalUserInfo> CloudOrderReturn::GetChannelExternalUserInfoList() const
{
    return m_channelExternalUserInfoList;
}

void CloudOrderReturn::SetChannelExternalUserInfoList(const vector<CloudChannelExternalUserInfo>& _channelExternalUserInfoList)
{
    m_channelExternalUserInfoList = _channelExternalUserInfoList;
    m_channelExternalUserInfoListHasBeenSet = true;
}

bool CloudOrderReturn::ChannelExternalUserInfoListHasBeenSet() const
{
    return m_channelExternalUserInfoListHasBeenSet;
}

vector<CloudExternalPromptGroup> CloudOrderReturn::GetExternalReturnPromptGroupList() const
{
    return m_externalReturnPromptGroupList;
}

void CloudOrderReturn::SetExternalReturnPromptGroupList(const vector<CloudExternalPromptGroup>& _externalReturnPromptGroupList)
{
    m_externalReturnPromptGroupList = _externalReturnPromptGroupList;
    m_externalReturnPromptGroupListHasBeenSet = true;
}

bool CloudOrderReturn::ExternalReturnPromptGroupListHasBeenSet() const
{
    return m_externalReturnPromptGroupListHasBeenSet;
}

string CloudOrderReturn::GetSceneInfo() const
{
    return m_sceneInfo;
}

void CloudOrderReturn::SetSceneInfo(const string& _sceneInfo)
{
    m_sceneInfo = _sceneInfo;
    m_sceneInfoHasBeenSet = true;
}

bool CloudOrderReturn::SceneInfoHasBeenSet() const
{
    return m_sceneInfoHasBeenSet;
}

string CloudOrderReturn::GetSubAppId() const
{
    return m_subAppId;
}

void CloudOrderReturn::SetSubAppId(const string& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool CloudOrderReturn::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string CloudOrderReturn::GetPayScene() const
{
    return m_payScene;
}

void CloudOrderReturn::SetPayScene(const string& _payScene)
{
    m_payScene = _payScene;
    m_paySceneHasBeenSet = true;
}

bool CloudOrderReturn::PaySceneHasBeenSet() const
{
    return m_paySceneHasBeenSet;
}

string CloudOrderReturn::GetPaymentMethod() const
{
    return m_paymentMethod;
}

void CloudOrderReturn::SetPaymentMethod(const string& _paymentMethod)
{
    m_paymentMethod = _paymentMethod;
    m_paymentMethodHasBeenSet = true;
}

bool CloudOrderReturn::PaymentMethodHasBeenSet() const
{
    return m_paymentMethodHasBeenSet;
}

int64_t CloudOrderReturn::GetTotalPlatformIncome() const
{
    return m_totalPlatformIncome;
}

void CloudOrderReturn::SetTotalPlatformIncome(const int64_t& _totalPlatformIncome)
{
    m_totalPlatformIncome = _totalPlatformIncome;
    m_totalPlatformIncomeHasBeenSet = true;
}

bool CloudOrderReturn::TotalPlatformIncomeHasBeenSet() const
{
    return m_totalPlatformIncomeHasBeenSet;
}

int64_t CloudOrderReturn::GetTotalMchIncome() const
{
    return m_totalMchIncome;
}

void CloudOrderReturn::SetTotalMchIncome(const int64_t& _totalMchIncome)
{
    m_totalMchIncome = _totalMchIncome;
    m_totalMchIncomeHasBeenSet = true;
}

bool CloudOrderReturn::TotalMchIncomeHasBeenSet() const
{
    return m_totalMchIncomeHasBeenSet;
}

