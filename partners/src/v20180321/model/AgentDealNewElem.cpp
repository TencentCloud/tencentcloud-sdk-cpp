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

#include <tencentcloud/partners/v20180321/model/AgentDealNewElem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Partners::V20180321::Model;
using namespace std;

AgentDealNewElem::AgentDealNewElem() :
    m_dealIdHasBeenSet(false),
    m_dealNameHasBeenSet(false),
    m_goodsCategoryIdHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_goodsNumHasBeenSet(false),
    m_goodsPriceHasBeenSet(false),
    m_createrHasBeenSet(false),
    m_creatTimeHasBeenSet(false),
    m_payEndTimeHasBeenSet(false),
    m_billIdHasBeenSet(false),
    m_payerHasBeenSet(false),
    m_dealStatusHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_goodsNameHasBeenSet(false),
    m_clientRemarkHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_voucherDeclineHasBeenSet(false),
    m_bigDealIdHasBeenSet(false),
    m_clientTypeHasBeenSet(false),
    m_projectTypeHasBeenSet(false),
    m_salesUinHasBeenSet(false),
    m_payerModeHasBeenSet(false),
    m_activityIdHasBeenSet(false),
    m_overdueTimeHasBeenSet(false),
    m_productInfoHasBeenSet(false),
    m_paymentMethodHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_resourceIdsHasBeenSet(false),
    m_refundMapHasBeenSet(false),
    m_subGoodsNameHasBeenSet(false)
{
}

CoreInternalOutcome AgentDealNewElem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DealId") && !value["DealId"].IsNull())
    {
        if (!value["DealId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDealNewElem.DealId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dealId = string(value["DealId"].GetString());
        m_dealIdHasBeenSet = true;
    }

    if (value.HasMember("DealName") && !value["DealName"].IsNull())
    {
        if (!value["DealName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDealNewElem.DealName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dealName = string(value["DealName"].GetString());
        m_dealNameHasBeenSet = true;
    }

    if (value.HasMember("GoodsCategoryId") && !value["GoodsCategoryId"].IsNull())
    {
        if (!value["GoodsCategoryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDealNewElem.GoodsCategoryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_goodsCategoryId = string(value["GoodsCategoryId"].GetString());
        m_goodsCategoryIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDealNewElem.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDealNewElem.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("GoodsNum") && !value["GoodsNum"].IsNull())
    {
        if (!value["GoodsNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDealNewElem.GoodsNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_goodsNum = string(value["GoodsNum"].GetString());
        m_goodsNumHasBeenSet = true;
    }

    if (value.HasMember("GoodsPrice") && !value["GoodsPrice"].IsNull())
    {
        if (!value["GoodsPrice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDealNewElem.GoodsPrice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_goodsPrice.Deserialize(value["GoodsPrice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_goodsPriceHasBeenSet = true;
    }

    if (value.HasMember("Creater") && !value["Creater"].IsNull())
    {
        if (!value["Creater"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDealNewElem.Creater` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creater = string(value["Creater"].GetString());
        m_createrHasBeenSet = true;
    }

    if (value.HasMember("CreatTime") && !value["CreatTime"].IsNull())
    {
        if (!value["CreatTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDealNewElem.CreatTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatTime = string(value["CreatTime"].GetString());
        m_creatTimeHasBeenSet = true;
    }

    if (value.HasMember("PayEndTime") && !value["PayEndTime"].IsNull())
    {
        if (!value["PayEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDealNewElem.PayEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payEndTime = string(value["PayEndTime"].GetString());
        m_payEndTimeHasBeenSet = true;
    }

    if (value.HasMember("BillId") && !value["BillId"].IsNull())
    {
        if (!value["BillId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDealNewElem.BillId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billId = string(value["BillId"].GetString());
        m_billIdHasBeenSet = true;
    }

    if (value.HasMember("Payer") && !value["Payer"].IsNull())
    {
        if (!value["Payer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDealNewElem.Payer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payer = string(value["Payer"].GetString());
        m_payerHasBeenSet = true;
    }

    if (value.HasMember("DealStatus") && !value["DealStatus"].IsNull())
    {
        if (!value["DealStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDealNewElem.DealStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dealStatus = string(value["DealStatus"].GetString());
        m_dealStatusHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDealNewElem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("GoodsName") && !value["GoodsName"].IsNull())
    {
        if (!value["GoodsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDealNewElem.GoodsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_goodsName = string(value["GoodsName"].GetString());
        m_goodsNameHasBeenSet = true;
    }

    if (value.HasMember("ClientRemark") && !value["ClientRemark"].IsNull())
    {
        if (!value["ClientRemark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDealNewElem.ClientRemark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientRemark = string(value["ClientRemark"].GetString());
        m_clientRemarkHasBeenSet = true;
    }

    if (value.HasMember("ActionType") && !value["ActionType"].IsNull())
    {
        if (!value["ActionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDealNewElem.ActionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionType = string(value["ActionType"].GetString());
        m_actionTypeHasBeenSet = true;
    }

    if (value.HasMember("VoucherDecline") && !value["VoucherDecline"].IsNull())
    {
        if (!value["VoucherDecline"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDealNewElem.VoucherDecline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voucherDecline = string(value["VoucherDecline"].GetString());
        m_voucherDeclineHasBeenSet = true;
    }

    if (value.HasMember("BigDealId") && !value["BigDealId"].IsNull())
    {
        if (!value["BigDealId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDealNewElem.BigDealId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bigDealId = string(value["BigDealId"].GetString());
        m_bigDealIdHasBeenSet = true;
    }

    if (value.HasMember("ClientType") && !value["ClientType"].IsNull())
    {
        if (!value["ClientType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDealNewElem.ClientType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientType = string(value["ClientType"].GetString());
        m_clientTypeHasBeenSet = true;
    }

    if (value.HasMember("ProjectType") && !value["ProjectType"].IsNull())
    {
        if (!value["ProjectType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDealNewElem.ProjectType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectType = string(value["ProjectType"].GetString());
        m_projectTypeHasBeenSet = true;
    }

    if (value.HasMember("SalesUin") && !value["SalesUin"].IsNull())
    {
        if (!value["SalesUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDealNewElem.SalesUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_salesUin = string(value["SalesUin"].GetString());
        m_salesUinHasBeenSet = true;
    }

    if (value.HasMember("PayerMode") && !value["PayerMode"].IsNull())
    {
        if (!value["PayerMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDealNewElem.PayerMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payerMode = string(value["PayerMode"].GetString());
        m_payerModeHasBeenSet = true;
    }

    if (value.HasMember("ActivityId") && !value["ActivityId"].IsNull())
    {
        if (!value["ActivityId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDealNewElem.ActivityId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activityId = string(value["ActivityId"].GetString());
        m_activityIdHasBeenSet = true;
    }

    if (value.HasMember("OverdueTime") && !value["OverdueTime"].IsNull())
    {
        if (!value["OverdueTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDealNewElem.OverdueTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_overdueTime = string(value["OverdueTime"].GetString());
        m_overdueTimeHasBeenSet = true;
    }

    if (value.HasMember("ProductInfo") && !value["ProductInfo"].IsNull())
    {
        if (!value["ProductInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentDealNewElem.ProductInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["ProductInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProductInfoElem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_productInfo.push_back(item);
        }
        m_productInfoHasBeenSet = true;
    }

    if (value.HasMember("PaymentMethod") && !value["PaymentMethod"].IsNull())
    {
        if (!value["PaymentMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDealNewElem.PaymentMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentMethod = string(value["PaymentMethod"].GetString());
        m_paymentMethodHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDealNewElem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ResourceIds") && !value["ResourceIds"].IsNull())
    {
        if (!value["ResourceIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentDealNewElem.ResourceIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_resourceIds.push_back((*itr).GetString());
        }
        m_resourceIdsHasBeenSet = true;
    }

    if (value.HasMember("RefundMap") && !value["RefundMap"].IsNull())
    {
        if (!value["RefundMap"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentDealNewElem.RefundMap` is not array type"));

        const rapidjson::Value &tmpValue = value["RefundMap"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RefundMap item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_refundMap.push_back(item);
        }
        m_refundMapHasBeenSet = true;
    }

    if (value.HasMember("SubGoodsName") && !value["SubGoodsName"].IsNull())
    {
        if (!value["SubGoodsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDealNewElem.SubGoodsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subGoodsName = string(value["SubGoodsName"].GetString());
        m_subGoodsNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentDealNewElem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dealIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dealId.c_str(), allocator).Move(), allocator);
    }

    if (m_dealNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dealName.c_str(), allocator).Move(), allocator);
    }

    if (m_goodsCategoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsCategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_goodsCategoryId.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_goodsNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_goodsNum.c_str(), allocator).Move(), allocator);
    }

    if (m_goodsPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_goodsPrice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creater";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creater.c_str(), allocator).Move(), allocator);
    }

    if (m_creatTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatTime.c_str(), allocator).Move(), allocator);
    }

    if (m_payEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_billIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billId.c_str(), allocator).Move(), allocator);
    }

    if (m_payerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Payer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payer.c_str(), allocator).Move(), allocator);
    }

    if (m_dealStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dealStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_goodsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_goodsName.c_str(), allocator).Move(), allocator);
    }

    if (m_clientRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientRemark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientRemark.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionType.c_str(), allocator).Move(), allocator);
    }

    if (m_voucherDeclineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoucherDecline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voucherDecline.c_str(), allocator).Move(), allocator);
    }

    if (m_bigDealIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BigDealId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bigDealId.c_str(), allocator).Move(), allocator);
    }

    if (m_clientTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientType.c_str(), allocator).Move(), allocator);
    }

    if (m_projectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectType.c_str(), allocator).Move(), allocator);
    }

    if (m_salesUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SalesUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_salesUin.c_str(), allocator).Move(), allocator);
    }

    if (m_payerModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payerMode.c_str(), allocator).Move(), allocator);
    }

    if (m_activityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivityId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activityId.c_str(), allocator).Move(), allocator);
    }

    if (m_overdueTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OverdueTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_overdueTime.c_str(), allocator).Move(), allocator);
    }

    if (m_productInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_productInfo.begin(); itr != m_productInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_paymentMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceIds.begin(); itr != m_resourceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_refundMapHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundMap";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_refundMap.begin(); itr != m_refundMap.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_subGoodsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubGoodsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subGoodsName.c_str(), allocator).Move(), allocator);
    }

}


string AgentDealNewElem::GetDealId() const
{
    return m_dealId;
}

void AgentDealNewElem::SetDealId(const string& _dealId)
{
    m_dealId = _dealId;
    m_dealIdHasBeenSet = true;
}

bool AgentDealNewElem::DealIdHasBeenSet() const
{
    return m_dealIdHasBeenSet;
}

string AgentDealNewElem::GetDealName() const
{
    return m_dealName;
}

void AgentDealNewElem::SetDealName(const string& _dealName)
{
    m_dealName = _dealName;
    m_dealNameHasBeenSet = true;
}

bool AgentDealNewElem::DealNameHasBeenSet() const
{
    return m_dealNameHasBeenSet;
}

string AgentDealNewElem::GetGoodsCategoryId() const
{
    return m_goodsCategoryId;
}

void AgentDealNewElem::SetGoodsCategoryId(const string& _goodsCategoryId)
{
    m_goodsCategoryId = _goodsCategoryId;
    m_goodsCategoryIdHasBeenSet = true;
}

bool AgentDealNewElem::GoodsCategoryIdHasBeenSet() const
{
    return m_goodsCategoryIdHasBeenSet;
}

string AgentDealNewElem::GetOwnerUin() const
{
    return m_ownerUin;
}

void AgentDealNewElem::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool AgentDealNewElem::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string AgentDealNewElem::GetAppId() const
{
    return m_appId;
}

void AgentDealNewElem::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool AgentDealNewElem::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string AgentDealNewElem::GetGoodsNum() const
{
    return m_goodsNum;
}

void AgentDealNewElem::SetGoodsNum(const string& _goodsNum)
{
    m_goodsNum = _goodsNum;
    m_goodsNumHasBeenSet = true;
}

bool AgentDealNewElem::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}

DealGoodsPriceNewElem AgentDealNewElem::GetGoodsPrice() const
{
    return m_goodsPrice;
}

void AgentDealNewElem::SetGoodsPrice(const DealGoodsPriceNewElem& _goodsPrice)
{
    m_goodsPrice = _goodsPrice;
    m_goodsPriceHasBeenSet = true;
}

bool AgentDealNewElem::GoodsPriceHasBeenSet() const
{
    return m_goodsPriceHasBeenSet;
}

string AgentDealNewElem::GetCreater() const
{
    return m_creater;
}

void AgentDealNewElem::SetCreater(const string& _creater)
{
    m_creater = _creater;
    m_createrHasBeenSet = true;
}

bool AgentDealNewElem::CreaterHasBeenSet() const
{
    return m_createrHasBeenSet;
}

string AgentDealNewElem::GetCreatTime() const
{
    return m_creatTime;
}

void AgentDealNewElem::SetCreatTime(const string& _creatTime)
{
    m_creatTime = _creatTime;
    m_creatTimeHasBeenSet = true;
}

bool AgentDealNewElem::CreatTimeHasBeenSet() const
{
    return m_creatTimeHasBeenSet;
}

string AgentDealNewElem::GetPayEndTime() const
{
    return m_payEndTime;
}

void AgentDealNewElem::SetPayEndTime(const string& _payEndTime)
{
    m_payEndTime = _payEndTime;
    m_payEndTimeHasBeenSet = true;
}

bool AgentDealNewElem::PayEndTimeHasBeenSet() const
{
    return m_payEndTimeHasBeenSet;
}

string AgentDealNewElem::GetBillId() const
{
    return m_billId;
}

void AgentDealNewElem::SetBillId(const string& _billId)
{
    m_billId = _billId;
    m_billIdHasBeenSet = true;
}

bool AgentDealNewElem::BillIdHasBeenSet() const
{
    return m_billIdHasBeenSet;
}

string AgentDealNewElem::GetPayer() const
{
    return m_payer;
}

void AgentDealNewElem::SetPayer(const string& _payer)
{
    m_payer = _payer;
    m_payerHasBeenSet = true;
}

bool AgentDealNewElem::PayerHasBeenSet() const
{
    return m_payerHasBeenSet;
}

string AgentDealNewElem::GetDealStatus() const
{
    return m_dealStatus;
}

void AgentDealNewElem::SetDealStatus(const string& _dealStatus)
{
    m_dealStatus = _dealStatus;
    m_dealStatusHasBeenSet = true;
}

bool AgentDealNewElem::DealStatusHasBeenSet() const
{
    return m_dealStatusHasBeenSet;
}

string AgentDealNewElem::GetStatus() const
{
    return m_status;
}

void AgentDealNewElem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AgentDealNewElem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AgentDealNewElem::GetGoodsName() const
{
    return m_goodsName;
}

void AgentDealNewElem::SetGoodsName(const string& _goodsName)
{
    m_goodsName = _goodsName;
    m_goodsNameHasBeenSet = true;
}

bool AgentDealNewElem::GoodsNameHasBeenSet() const
{
    return m_goodsNameHasBeenSet;
}

string AgentDealNewElem::GetClientRemark() const
{
    return m_clientRemark;
}

void AgentDealNewElem::SetClientRemark(const string& _clientRemark)
{
    m_clientRemark = _clientRemark;
    m_clientRemarkHasBeenSet = true;
}

bool AgentDealNewElem::ClientRemarkHasBeenSet() const
{
    return m_clientRemarkHasBeenSet;
}

string AgentDealNewElem::GetActionType() const
{
    return m_actionType;
}

void AgentDealNewElem::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool AgentDealNewElem::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

string AgentDealNewElem::GetVoucherDecline() const
{
    return m_voucherDecline;
}

void AgentDealNewElem::SetVoucherDecline(const string& _voucherDecline)
{
    m_voucherDecline = _voucherDecline;
    m_voucherDeclineHasBeenSet = true;
}

bool AgentDealNewElem::VoucherDeclineHasBeenSet() const
{
    return m_voucherDeclineHasBeenSet;
}

string AgentDealNewElem::GetBigDealId() const
{
    return m_bigDealId;
}

void AgentDealNewElem::SetBigDealId(const string& _bigDealId)
{
    m_bigDealId = _bigDealId;
    m_bigDealIdHasBeenSet = true;
}

bool AgentDealNewElem::BigDealIdHasBeenSet() const
{
    return m_bigDealIdHasBeenSet;
}

string AgentDealNewElem::GetClientType() const
{
    return m_clientType;
}

void AgentDealNewElem::SetClientType(const string& _clientType)
{
    m_clientType = _clientType;
    m_clientTypeHasBeenSet = true;
}

bool AgentDealNewElem::ClientTypeHasBeenSet() const
{
    return m_clientTypeHasBeenSet;
}

string AgentDealNewElem::GetProjectType() const
{
    return m_projectType;
}

void AgentDealNewElem::SetProjectType(const string& _projectType)
{
    m_projectType = _projectType;
    m_projectTypeHasBeenSet = true;
}

bool AgentDealNewElem::ProjectTypeHasBeenSet() const
{
    return m_projectTypeHasBeenSet;
}

string AgentDealNewElem::GetSalesUin() const
{
    return m_salesUin;
}

void AgentDealNewElem::SetSalesUin(const string& _salesUin)
{
    m_salesUin = _salesUin;
    m_salesUinHasBeenSet = true;
}

bool AgentDealNewElem::SalesUinHasBeenSet() const
{
    return m_salesUinHasBeenSet;
}

string AgentDealNewElem::GetPayerMode() const
{
    return m_payerMode;
}

void AgentDealNewElem::SetPayerMode(const string& _payerMode)
{
    m_payerMode = _payerMode;
    m_payerModeHasBeenSet = true;
}

bool AgentDealNewElem::PayerModeHasBeenSet() const
{
    return m_payerModeHasBeenSet;
}

string AgentDealNewElem::GetActivityId() const
{
    return m_activityId;
}

void AgentDealNewElem::SetActivityId(const string& _activityId)
{
    m_activityId = _activityId;
    m_activityIdHasBeenSet = true;
}

bool AgentDealNewElem::ActivityIdHasBeenSet() const
{
    return m_activityIdHasBeenSet;
}

string AgentDealNewElem::GetOverdueTime() const
{
    return m_overdueTime;
}

void AgentDealNewElem::SetOverdueTime(const string& _overdueTime)
{
    m_overdueTime = _overdueTime;
    m_overdueTimeHasBeenSet = true;
}

bool AgentDealNewElem::OverdueTimeHasBeenSet() const
{
    return m_overdueTimeHasBeenSet;
}

vector<ProductInfoElem> AgentDealNewElem::GetProductInfo() const
{
    return m_productInfo;
}

void AgentDealNewElem::SetProductInfo(const vector<ProductInfoElem>& _productInfo)
{
    m_productInfo = _productInfo;
    m_productInfoHasBeenSet = true;
}

bool AgentDealNewElem::ProductInfoHasBeenSet() const
{
    return m_productInfoHasBeenSet;
}

string AgentDealNewElem::GetPaymentMethod() const
{
    return m_paymentMethod;
}

void AgentDealNewElem::SetPaymentMethod(const string& _paymentMethod)
{
    m_paymentMethod = _paymentMethod;
    m_paymentMethodHasBeenSet = true;
}

bool AgentDealNewElem::PaymentMethodHasBeenSet() const
{
    return m_paymentMethodHasBeenSet;
}

string AgentDealNewElem::GetUpdateTime() const
{
    return m_updateTime;
}

void AgentDealNewElem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AgentDealNewElem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

vector<string> AgentDealNewElem::GetResourceIds() const
{
    return m_resourceIds;
}

void AgentDealNewElem::SetResourceIds(const vector<string>& _resourceIds)
{
    m_resourceIds = _resourceIds;
    m_resourceIdsHasBeenSet = true;
}

bool AgentDealNewElem::ResourceIdsHasBeenSet() const
{
    return m_resourceIdsHasBeenSet;
}

vector<RefundMap> AgentDealNewElem::GetRefundMap() const
{
    return m_refundMap;
}

void AgentDealNewElem::SetRefundMap(const vector<RefundMap>& _refundMap)
{
    m_refundMap = _refundMap;
    m_refundMapHasBeenSet = true;
}

bool AgentDealNewElem::RefundMapHasBeenSet() const
{
    return m_refundMapHasBeenSet;
}

string AgentDealNewElem::GetSubGoodsName() const
{
    return m_subGoodsName;
}

void AgentDealNewElem::SetSubGoodsName(const string& _subGoodsName)
{
    m_subGoodsName = _subGoodsName;
    m_subGoodsNameHasBeenSet = true;
}

bool AgentDealNewElem::SubGoodsNameHasBeenSet() const
{
    return m_subGoodsNameHasBeenSet;
}

