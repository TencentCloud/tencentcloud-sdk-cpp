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

#include <tencentcloud/partners/v20180321/model/AgentDealElem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Partners::V20180321::Model;
using namespace std;

AgentDealElem::AgentDealElem() :
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
    m_productInfoHasBeenSet(false)
{
}

CoreInternalOutcome AgentDealElem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DealId") && !value["DealId"].IsNull())
    {
        if (!value["DealId"].IsString())
        {
            return CoreInternalOutcome(Error("response `AgentDealElem.DealId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dealId = string(value["DealId"].GetString());
        m_dealIdHasBeenSet = true;
    }

    if (value.HasMember("DealName") && !value["DealName"].IsNull())
    {
        if (!value["DealName"].IsString())
        {
            return CoreInternalOutcome(Error("response `AgentDealElem.DealName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dealName = string(value["DealName"].GetString());
        m_dealNameHasBeenSet = true;
    }

    if (value.HasMember("GoodsCategoryId") && !value["GoodsCategoryId"].IsNull())
    {
        if (!value["GoodsCategoryId"].IsString())
        {
            return CoreInternalOutcome(Error("response `AgentDealElem.GoodsCategoryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_goodsCategoryId = string(value["GoodsCategoryId"].GetString());
        m_goodsCategoryIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Error("response `AgentDealElem.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Error("response `AgentDealElem.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("GoodsNum") && !value["GoodsNum"].IsNull())
    {
        if (!value["GoodsNum"].IsString())
        {
            return CoreInternalOutcome(Error("response `AgentDealElem.GoodsNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_goodsNum = string(value["GoodsNum"].GetString());
        m_goodsNumHasBeenSet = true;
    }

    if (value.HasMember("GoodsPrice") && !value["GoodsPrice"].IsNull())
    {
        if (!value["GoodsPrice"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AgentDealElem.GoodsPrice` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `AgentDealElem.Creater` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creater = string(value["Creater"].GetString());
        m_createrHasBeenSet = true;
    }

    if (value.HasMember("CreatTime") && !value["CreatTime"].IsNull())
    {
        if (!value["CreatTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `AgentDealElem.CreatTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatTime = string(value["CreatTime"].GetString());
        m_creatTimeHasBeenSet = true;
    }

    if (value.HasMember("PayEndTime") && !value["PayEndTime"].IsNull())
    {
        if (!value["PayEndTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `AgentDealElem.PayEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payEndTime = string(value["PayEndTime"].GetString());
        m_payEndTimeHasBeenSet = true;
    }

    if (value.HasMember("BillId") && !value["BillId"].IsNull())
    {
        if (!value["BillId"].IsString())
        {
            return CoreInternalOutcome(Error("response `AgentDealElem.BillId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billId = string(value["BillId"].GetString());
        m_billIdHasBeenSet = true;
    }

    if (value.HasMember("Payer") && !value["Payer"].IsNull())
    {
        if (!value["Payer"].IsString())
        {
            return CoreInternalOutcome(Error("response `AgentDealElem.Payer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payer = string(value["Payer"].GetString());
        m_payerHasBeenSet = true;
    }

    if (value.HasMember("DealStatus") && !value["DealStatus"].IsNull())
    {
        if (!value["DealStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `AgentDealElem.DealStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dealStatus = string(value["DealStatus"].GetString());
        m_dealStatusHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `AgentDealElem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("GoodsName") && !value["GoodsName"].IsNull())
    {
        if (!value["GoodsName"].IsString())
        {
            return CoreInternalOutcome(Error("response `AgentDealElem.GoodsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_goodsName = string(value["GoodsName"].GetString());
        m_goodsNameHasBeenSet = true;
    }

    if (value.HasMember("ClientRemark") && !value["ClientRemark"].IsNull())
    {
        if (!value["ClientRemark"].IsString())
        {
            return CoreInternalOutcome(Error("response `AgentDealElem.ClientRemark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientRemark = string(value["ClientRemark"].GetString());
        m_clientRemarkHasBeenSet = true;
    }

    if (value.HasMember("ActionType") && !value["ActionType"].IsNull())
    {
        if (!value["ActionType"].IsString())
        {
            return CoreInternalOutcome(Error("response `AgentDealElem.ActionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionType = string(value["ActionType"].GetString());
        m_actionTypeHasBeenSet = true;
    }

    if (value.HasMember("VoucherDecline") && !value["VoucherDecline"].IsNull())
    {
        if (!value["VoucherDecline"].IsString())
        {
            return CoreInternalOutcome(Error("response `AgentDealElem.VoucherDecline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voucherDecline = string(value["VoucherDecline"].GetString());
        m_voucherDeclineHasBeenSet = true;
    }

    if (value.HasMember("BigDealId") && !value["BigDealId"].IsNull())
    {
        if (!value["BigDealId"].IsString())
        {
            return CoreInternalOutcome(Error("response `AgentDealElem.BigDealId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bigDealId = string(value["BigDealId"].GetString());
        m_bigDealIdHasBeenSet = true;
    }

    if (value.HasMember("ClientType") && !value["ClientType"].IsNull())
    {
        if (!value["ClientType"].IsString())
        {
            return CoreInternalOutcome(Error("response `AgentDealElem.ClientType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientType = string(value["ClientType"].GetString());
        m_clientTypeHasBeenSet = true;
    }

    if (value.HasMember("ProjectType") && !value["ProjectType"].IsNull())
    {
        if (!value["ProjectType"].IsString())
        {
            return CoreInternalOutcome(Error("response `AgentDealElem.ProjectType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectType = string(value["ProjectType"].GetString());
        m_projectTypeHasBeenSet = true;
    }

    if (value.HasMember("SalesUin") && !value["SalesUin"].IsNull())
    {
        if (!value["SalesUin"].IsString())
        {
            return CoreInternalOutcome(Error("response `AgentDealElem.SalesUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_salesUin = string(value["SalesUin"].GetString());
        m_salesUinHasBeenSet = true;
    }

    if (value.HasMember("PayerMode") && !value["PayerMode"].IsNull())
    {
        if (!value["PayerMode"].IsString())
        {
            return CoreInternalOutcome(Error("response `AgentDealElem.PayerMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payerMode = string(value["PayerMode"].GetString());
        m_payerModeHasBeenSet = true;
    }

    if (value.HasMember("ActivityId") && !value["ActivityId"].IsNull())
    {
        if (!value["ActivityId"].IsString())
        {
            return CoreInternalOutcome(Error("response `AgentDealElem.ActivityId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activityId = string(value["ActivityId"].GetString());
        m_activityIdHasBeenSet = true;
    }

    if (value.HasMember("OverdueTime") && !value["OverdueTime"].IsNull())
    {
        if (!value["OverdueTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `AgentDealElem.OverdueTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_overdueTime = string(value["OverdueTime"].GetString());
        m_overdueTimeHasBeenSet = true;
    }

    if (value.HasMember("ProductInfo") && !value["ProductInfo"].IsNull())
    {
        if (!value["ProductInfo"].IsArray())
            return CoreInternalOutcome(Error("response `AgentDealElem.ProductInfo` is not array type"));

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


    return CoreInternalOutcome(true);
}

void AgentDealElem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string AgentDealElem::GetDealId() const
{
    return m_dealId;
}

void AgentDealElem::SetDealId(const string& _dealId)
{
    m_dealId = _dealId;
    m_dealIdHasBeenSet = true;
}

bool AgentDealElem::DealIdHasBeenSet() const
{
    return m_dealIdHasBeenSet;
}

string AgentDealElem::GetDealName() const
{
    return m_dealName;
}

void AgentDealElem::SetDealName(const string& _dealName)
{
    m_dealName = _dealName;
    m_dealNameHasBeenSet = true;
}

bool AgentDealElem::DealNameHasBeenSet() const
{
    return m_dealNameHasBeenSet;
}

string AgentDealElem::GetGoodsCategoryId() const
{
    return m_goodsCategoryId;
}

void AgentDealElem::SetGoodsCategoryId(const string& _goodsCategoryId)
{
    m_goodsCategoryId = _goodsCategoryId;
    m_goodsCategoryIdHasBeenSet = true;
}

bool AgentDealElem::GoodsCategoryIdHasBeenSet() const
{
    return m_goodsCategoryIdHasBeenSet;
}

string AgentDealElem::GetOwnerUin() const
{
    return m_ownerUin;
}

void AgentDealElem::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool AgentDealElem::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string AgentDealElem::GetAppId() const
{
    return m_appId;
}

void AgentDealElem::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool AgentDealElem::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string AgentDealElem::GetGoodsNum() const
{
    return m_goodsNum;
}

void AgentDealElem::SetGoodsNum(const string& _goodsNum)
{
    m_goodsNum = _goodsNum;
    m_goodsNumHasBeenSet = true;
}

bool AgentDealElem::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}

DealGoodsPriceElem AgentDealElem::GetGoodsPrice() const
{
    return m_goodsPrice;
}

void AgentDealElem::SetGoodsPrice(const DealGoodsPriceElem& _goodsPrice)
{
    m_goodsPrice = _goodsPrice;
    m_goodsPriceHasBeenSet = true;
}

bool AgentDealElem::GoodsPriceHasBeenSet() const
{
    return m_goodsPriceHasBeenSet;
}

string AgentDealElem::GetCreater() const
{
    return m_creater;
}

void AgentDealElem::SetCreater(const string& _creater)
{
    m_creater = _creater;
    m_createrHasBeenSet = true;
}

bool AgentDealElem::CreaterHasBeenSet() const
{
    return m_createrHasBeenSet;
}

string AgentDealElem::GetCreatTime() const
{
    return m_creatTime;
}

void AgentDealElem::SetCreatTime(const string& _creatTime)
{
    m_creatTime = _creatTime;
    m_creatTimeHasBeenSet = true;
}

bool AgentDealElem::CreatTimeHasBeenSet() const
{
    return m_creatTimeHasBeenSet;
}

string AgentDealElem::GetPayEndTime() const
{
    return m_payEndTime;
}

void AgentDealElem::SetPayEndTime(const string& _payEndTime)
{
    m_payEndTime = _payEndTime;
    m_payEndTimeHasBeenSet = true;
}

bool AgentDealElem::PayEndTimeHasBeenSet() const
{
    return m_payEndTimeHasBeenSet;
}

string AgentDealElem::GetBillId() const
{
    return m_billId;
}

void AgentDealElem::SetBillId(const string& _billId)
{
    m_billId = _billId;
    m_billIdHasBeenSet = true;
}

bool AgentDealElem::BillIdHasBeenSet() const
{
    return m_billIdHasBeenSet;
}

string AgentDealElem::GetPayer() const
{
    return m_payer;
}

void AgentDealElem::SetPayer(const string& _payer)
{
    m_payer = _payer;
    m_payerHasBeenSet = true;
}

bool AgentDealElem::PayerHasBeenSet() const
{
    return m_payerHasBeenSet;
}

string AgentDealElem::GetDealStatus() const
{
    return m_dealStatus;
}

void AgentDealElem::SetDealStatus(const string& _dealStatus)
{
    m_dealStatus = _dealStatus;
    m_dealStatusHasBeenSet = true;
}

bool AgentDealElem::DealStatusHasBeenSet() const
{
    return m_dealStatusHasBeenSet;
}

string AgentDealElem::GetStatus() const
{
    return m_status;
}

void AgentDealElem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AgentDealElem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AgentDealElem::GetGoodsName() const
{
    return m_goodsName;
}

void AgentDealElem::SetGoodsName(const string& _goodsName)
{
    m_goodsName = _goodsName;
    m_goodsNameHasBeenSet = true;
}

bool AgentDealElem::GoodsNameHasBeenSet() const
{
    return m_goodsNameHasBeenSet;
}

string AgentDealElem::GetClientRemark() const
{
    return m_clientRemark;
}

void AgentDealElem::SetClientRemark(const string& _clientRemark)
{
    m_clientRemark = _clientRemark;
    m_clientRemarkHasBeenSet = true;
}

bool AgentDealElem::ClientRemarkHasBeenSet() const
{
    return m_clientRemarkHasBeenSet;
}

string AgentDealElem::GetActionType() const
{
    return m_actionType;
}

void AgentDealElem::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool AgentDealElem::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

string AgentDealElem::GetVoucherDecline() const
{
    return m_voucherDecline;
}

void AgentDealElem::SetVoucherDecline(const string& _voucherDecline)
{
    m_voucherDecline = _voucherDecline;
    m_voucherDeclineHasBeenSet = true;
}

bool AgentDealElem::VoucherDeclineHasBeenSet() const
{
    return m_voucherDeclineHasBeenSet;
}

string AgentDealElem::GetBigDealId() const
{
    return m_bigDealId;
}

void AgentDealElem::SetBigDealId(const string& _bigDealId)
{
    m_bigDealId = _bigDealId;
    m_bigDealIdHasBeenSet = true;
}

bool AgentDealElem::BigDealIdHasBeenSet() const
{
    return m_bigDealIdHasBeenSet;
}

string AgentDealElem::GetClientType() const
{
    return m_clientType;
}

void AgentDealElem::SetClientType(const string& _clientType)
{
    m_clientType = _clientType;
    m_clientTypeHasBeenSet = true;
}

bool AgentDealElem::ClientTypeHasBeenSet() const
{
    return m_clientTypeHasBeenSet;
}

string AgentDealElem::GetProjectType() const
{
    return m_projectType;
}

void AgentDealElem::SetProjectType(const string& _projectType)
{
    m_projectType = _projectType;
    m_projectTypeHasBeenSet = true;
}

bool AgentDealElem::ProjectTypeHasBeenSet() const
{
    return m_projectTypeHasBeenSet;
}

string AgentDealElem::GetSalesUin() const
{
    return m_salesUin;
}

void AgentDealElem::SetSalesUin(const string& _salesUin)
{
    m_salesUin = _salesUin;
    m_salesUinHasBeenSet = true;
}

bool AgentDealElem::SalesUinHasBeenSet() const
{
    return m_salesUinHasBeenSet;
}

string AgentDealElem::GetPayerMode() const
{
    return m_payerMode;
}

void AgentDealElem::SetPayerMode(const string& _payerMode)
{
    m_payerMode = _payerMode;
    m_payerModeHasBeenSet = true;
}

bool AgentDealElem::PayerModeHasBeenSet() const
{
    return m_payerModeHasBeenSet;
}

string AgentDealElem::GetActivityId() const
{
    return m_activityId;
}

void AgentDealElem::SetActivityId(const string& _activityId)
{
    m_activityId = _activityId;
    m_activityIdHasBeenSet = true;
}

bool AgentDealElem::ActivityIdHasBeenSet() const
{
    return m_activityIdHasBeenSet;
}

string AgentDealElem::GetOverdueTime() const
{
    return m_overdueTime;
}

void AgentDealElem::SetOverdueTime(const string& _overdueTime)
{
    m_overdueTime = _overdueTime;
    m_overdueTimeHasBeenSet = true;
}

bool AgentDealElem::OverdueTimeHasBeenSet() const
{
    return m_overdueTimeHasBeenSet;
}

vector<ProductInfoElem> AgentDealElem::GetProductInfo() const
{
    return m_productInfo;
}

void AgentDealElem::SetProductInfo(const vector<ProductInfoElem>& _productInfo)
{
    m_productInfo = _productInfo;
    m_productInfoHasBeenSet = true;
}

bool AgentDealElem::ProductInfoHasBeenSet() const
{
    return m_productInfoHasBeenSet;
}

