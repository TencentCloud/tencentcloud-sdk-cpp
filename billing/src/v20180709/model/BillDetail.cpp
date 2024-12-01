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

#include <tencentcloud/billing/v20180709/model/BillDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

BillDetail::BillDetail() :
    m_businessCodeNameHasBeenSet(false),
    m_productCodeNameHasBeenSet(false),
    m_payModeNameHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_actionTypeNameHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_billIdHasBeenSet(false),
    m_payTimeHasBeenSet(false),
    m_feeBeginTimeHasBeenSet(false),
    m_feeEndTimeHasBeenSet(false),
    m_componentSetHasBeenSet(false),
    m_payerUinHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_operateUinHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_businessCodeHasBeenSet(false),
    m_productCodeHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_priceInfoHasBeenSet(false),
    m_associatedOrderHasBeenSet(false),
    m_formulaHasBeenSet(false),
    m_formulaUrlHasBeenSet(false),
    m_billDayHasBeenSet(false),
    m_billMonthHasBeenSet(false),
    m_idHasBeenSet(false),
    m_regionTypeHasBeenSet(false),
    m_regionTypeNameHasBeenSet(false),
    m_reserveDetailHasBeenSet(false),
    m_discountObjectHasBeenSet(false),
    m_discountTypeHasBeenSet(false),
    m_discountContentHasBeenSet(false)
{
}

CoreInternalOutcome BillDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BusinessCodeName") && !value["BusinessCodeName"].IsNull())
    {
        if (!value["BusinessCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetail.BusinessCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessCodeName = string(value["BusinessCodeName"].GetString());
        m_businessCodeNameHasBeenSet = true;
    }

    if (value.HasMember("ProductCodeName") && !value["ProductCodeName"].IsNull())
    {
        if (!value["ProductCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetail.ProductCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productCodeName = string(value["ProductCodeName"].GetString());
        m_productCodeNameHasBeenSet = true;
    }

    if (value.HasMember("PayModeName") && !value["PayModeName"].IsNull())
    {
        if (!value["PayModeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetail.PayModeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payModeName = string(value["PayModeName"].GetString());
        m_payModeNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetail.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetail.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetail.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetail.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetail.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("ActionTypeName") && !value["ActionTypeName"].IsNull())
    {
        if (!value["ActionTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetail.ActionTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionTypeName = string(value["ActionTypeName"].GetString());
        m_actionTypeNameHasBeenSet = true;
    }

    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetail.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("BillId") && !value["BillId"].IsNull())
    {
        if (!value["BillId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetail.BillId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billId = string(value["BillId"].GetString());
        m_billIdHasBeenSet = true;
    }

    if (value.HasMember("PayTime") && !value["PayTime"].IsNull())
    {
        if (!value["PayTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetail.PayTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payTime = string(value["PayTime"].GetString());
        m_payTimeHasBeenSet = true;
    }

    if (value.HasMember("FeeBeginTime") && !value["FeeBeginTime"].IsNull())
    {
        if (!value["FeeBeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetail.FeeBeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_feeBeginTime = string(value["FeeBeginTime"].GetString());
        m_feeBeginTimeHasBeenSet = true;
    }

    if (value.HasMember("FeeEndTime") && !value["FeeEndTime"].IsNull())
    {
        if (!value["FeeEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetail.FeeEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_feeEndTime = string(value["FeeEndTime"].GetString());
        m_feeEndTimeHasBeenSet = true;
    }

    if (value.HasMember("ComponentSet") && !value["ComponentSet"].IsNull())
    {
        if (!value["ComponentSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BillDetail.ComponentSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ComponentSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BillDetailComponent item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_componentSet.push_back(item);
        }
        m_componentSetHasBeenSet = true;
    }

    if (value.HasMember("PayerUin") && !value["PayerUin"].IsNull())
    {
        if (!value["PayerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetail.PayerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payerUin = string(value["PayerUin"].GetString());
        m_payerUinHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetail.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("OperateUin") && !value["OperateUin"].IsNull())
    {
        if (!value["OperateUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetail.OperateUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operateUin = string(value["OperateUin"].GetString());
        m_operateUinHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BillDetail.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BillTagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("BusinessCode") && !value["BusinessCode"].IsNull())
    {
        if (!value["BusinessCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetail.BusinessCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessCode = string(value["BusinessCode"].GetString());
        m_businessCodeHasBeenSet = true;
    }

    if (value.HasMember("ProductCode") && !value["ProductCode"].IsNull())
    {
        if (!value["ProductCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetail.ProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productCode = string(value["ProductCode"].GetString());
        m_productCodeHasBeenSet = true;
    }

    if (value.HasMember("ActionType") && !value["ActionType"].IsNull())
    {
        if (!value["ActionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetail.ActionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionType = string(value["ActionType"].GetString());
        m_actionTypeHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetail.RegionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = string(value["RegionId"].GetString());
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetail.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("PriceInfo") && !value["PriceInfo"].IsNull())
    {
        if (!value["PriceInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BillDetail.PriceInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["PriceInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_priceInfo.push_back((*itr).GetString());
        }
        m_priceInfoHasBeenSet = true;
    }

    if (value.HasMember("AssociatedOrder") && !value["AssociatedOrder"].IsNull())
    {
        if (!value["AssociatedOrder"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetail.AssociatedOrder` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_associatedOrder.Deserialize(value["AssociatedOrder"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_associatedOrderHasBeenSet = true;
    }

    if (value.HasMember("Formula") && !value["Formula"].IsNull())
    {
        if (!value["Formula"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetail.Formula` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_formula = string(value["Formula"].GetString());
        m_formulaHasBeenSet = true;
    }

    if (value.HasMember("FormulaUrl") && !value["FormulaUrl"].IsNull())
    {
        if (!value["FormulaUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetail.FormulaUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_formulaUrl = string(value["FormulaUrl"].GetString());
        m_formulaUrlHasBeenSet = true;
    }

    if (value.HasMember("BillDay") && !value["BillDay"].IsNull())
    {
        if (!value["BillDay"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetail.BillDay` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billDay = string(value["BillDay"].GetString());
        m_billDayHasBeenSet = true;
    }

    if (value.HasMember("BillMonth") && !value["BillMonth"].IsNull())
    {
        if (!value["BillMonth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetail.BillMonth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billMonth = string(value["BillMonth"].GetString());
        m_billMonthHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetail.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("RegionType") && !value["RegionType"].IsNull())
    {
        if (!value["RegionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetail.RegionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionType = string(value["RegionType"].GetString());
        m_regionTypeHasBeenSet = true;
    }

    if (value.HasMember("RegionTypeName") && !value["RegionTypeName"].IsNull())
    {
        if (!value["RegionTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetail.RegionTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionTypeName = string(value["RegionTypeName"].GetString());
        m_regionTypeNameHasBeenSet = true;
    }

    if (value.HasMember("ReserveDetail") && !value["ReserveDetail"].IsNull())
    {
        if (!value["ReserveDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetail.ReserveDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reserveDetail = string(value["ReserveDetail"].GetString());
        m_reserveDetailHasBeenSet = true;
    }

    if (value.HasMember("DiscountObject") && !value["DiscountObject"].IsNull())
    {
        if (!value["DiscountObject"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetail.DiscountObject` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_discountObject = string(value["DiscountObject"].GetString());
        m_discountObjectHasBeenSet = true;
    }

    if (value.HasMember("DiscountType") && !value["DiscountType"].IsNull())
    {
        if (!value["DiscountType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetail.DiscountType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_discountType = string(value["DiscountType"].GetString());
        m_discountTypeHasBeenSet = true;
    }

    if (value.HasMember("DiscountContent") && !value["DiscountContent"].IsNull())
    {
        if (!value["DiscountContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetail.DiscountContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_discountContent = string(value["DiscountContent"].GetString());
        m_discountContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BillDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_businessCodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessCodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessCodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_productCodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productCodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayModeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payModeName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_billIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billId.c_str(), allocator).Move(), allocator);
    }

    if (m_payTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payTime.c_str(), allocator).Move(), allocator);
    }

    if (m_feeBeginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeeBeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_feeBeginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_feeEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeeEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_feeEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_componentSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_componentSet.begin(); itr != m_componentSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_payerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_operateUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operateUin.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_businessCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessCode.c_str(), allocator).Move(), allocator);
    }

    if (m_productCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productCode.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionType.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_priceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PriceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_priceInfo.begin(); itr != m_priceInfo.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_associatedOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssociatedOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_associatedOrder.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_formulaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Formula";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_formula.c_str(), allocator).Move(), allocator);
    }

    if (m_formulaUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FormulaUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_formulaUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_billDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billDay.c_str(), allocator).Move(), allocator);
    }

    if (m_billMonthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillMonth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billMonth.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_regionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionType.c_str(), allocator).Move(), allocator);
    }

    if (m_regionTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_reserveDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReserveDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reserveDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_discountObjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountObject";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_discountObject.c_str(), allocator).Move(), allocator);
    }

    if (m_discountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_discountType.c_str(), allocator).Move(), allocator);
    }

    if (m_discountContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_discountContent.c_str(), allocator).Move(), allocator);
    }

}


string BillDetail::GetBusinessCodeName() const
{
    return m_businessCodeName;
}

void BillDetail::SetBusinessCodeName(const string& _businessCodeName)
{
    m_businessCodeName = _businessCodeName;
    m_businessCodeNameHasBeenSet = true;
}

bool BillDetail::BusinessCodeNameHasBeenSet() const
{
    return m_businessCodeNameHasBeenSet;
}

string BillDetail::GetProductCodeName() const
{
    return m_productCodeName;
}

void BillDetail::SetProductCodeName(const string& _productCodeName)
{
    m_productCodeName = _productCodeName;
    m_productCodeNameHasBeenSet = true;
}

bool BillDetail::ProductCodeNameHasBeenSet() const
{
    return m_productCodeNameHasBeenSet;
}

string BillDetail::GetPayModeName() const
{
    return m_payModeName;
}

void BillDetail::SetPayModeName(const string& _payModeName)
{
    m_payModeName = _payModeName;
    m_payModeNameHasBeenSet = true;
}

bool BillDetail::PayModeNameHasBeenSet() const
{
    return m_payModeNameHasBeenSet;
}

string BillDetail::GetProjectName() const
{
    return m_projectName;
}

void BillDetail::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool BillDetail::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string BillDetail::GetRegionName() const
{
    return m_regionName;
}

void BillDetail::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool BillDetail::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

string BillDetail::GetZoneName() const
{
    return m_zoneName;
}

void BillDetail::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool BillDetail::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

string BillDetail::GetResourceId() const
{
    return m_resourceId;
}

void BillDetail::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool BillDetail::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string BillDetail::GetResourceName() const
{
    return m_resourceName;
}

void BillDetail::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool BillDetail::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

string BillDetail::GetActionTypeName() const
{
    return m_actionTypeName;
}

void BillDetail::SetActionTypeName(const string& _actionTypeName)
{
    m_actionTypeName = _actionTypeName;
    m_actionTypeNameHasBeenSet = true;
}

bool BillDetail::ActionTypeNameHasBeenSet() const
{
    return m_actionTypeNameHasBeenSet;
}

string BillDetail::GetOrderId() const
{
    return m_orderId;
}

void BillDetail::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool BillDetail::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string BillDetail::GetBillId() const
{
    return m_billId;
}

void BillDetail::SetBillId(const string& _billId)
{
    m_billId = _billId;
    m_billIdHasBeenSet = true;
}

bool BillDetail::BillIdHasBeenSet() const
{
    return m_billIdHasBeenSet;
}

string BillDetail::GetPayTime() const
{
    return m_payTime;
}

void BillDetail::SetPayTime(const string& _payTime)
{
    m_payTime = _payTime;
    m_payTimeHasBeenSet = true;
}

bool BillDetail::PayTimeHasBeenSet() const
{
    return m_payTimeHasBeenSet;
}

string BillDetail::GetFeeBeginTime() const
{
    return m_feeBeginTime;
}

void BillDetail::SetFeeBeginTime(const string& _feeBeginTime)
{
    m_feeBeginTime = _feeBeginTime;
    m_feeBeginTimeHasBeenSet = true;
}

bool BillDetail::FeeBeginTimeHasBeenSet() const
{
    return m_feeBeginTimeHasBeenSet;
}

string BillDetail::GetFeeEndTime() const
{
    return m_feeEndTime;
}

void BillDetail::SetFeeEndTime(const string& _feeEndTime)
{
    m_feeEndTime = _feeEndTime;
    m_feeEndTimeHasBeenSet = true;
}

bool BillDetail::FeeEndTimeHasBeenSet() const
{
    return m_feeEndTimeHasBeenSet;
}

vector<BillDetailComponent> BillDetail::GetComponentSet() const
{
    return m_componentSet;
}

void BillDetail::SetComponentSet(const vector<BillDetailComponent>& _componentSet)
{
    m_componentSet = _componentSet;
    m_componentSetHasBeenSet = true;
}

bool BillDetail::ComponentSetHasBeenSet() const
{
    return m_componentSetHasBeenSet;
}

string BillDetail::GetPayerUin() const
{
    return m_payerUin;
}

void BillDetail::SetPayerUin(const string& _payerUin)
{
    m_payerUin = _payerUin;
    m_payerUinHasBeenSet = true;
}

bool BillDetail::PayerUinHasBeenSet() const
{
    return m_payerUinHasBeenSet;
}

string BillDetail::GetOwnerUin() const
{
    return m_ownerUin;
}

void BillDetail::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool BillDetail::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string BillDetail::GetOperateUin() const
{
    return m_operateUin;
}

void BillDetail::SetOperateUin(const string& _operateUin)
{
    m_operateUin = _operateUin;
    m_operateUinHasBeenSet = true;
}

bool BillDetail::OperateUinHasBeenSet() const
{
    return m_operateUinHasBeenSet;
}

vector<BillTagInfo> BillDetail::GetTags() const
{
    return m_tags;
}

void BillDetail::SetTags(const vector<BillTagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool BillDetail::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string BillDetail::GetBusinessCode() const
{
    return m_businessCode;
}

void BillDetail::SetBusinessCode(const string& _businessCode)
{
    m_businessCode = _businessCode;
    m_businessCodeHasBeenSet = true;
}

bool BillDetail::BusinessCodeHasBeenSet() const
{
    return m_businessCodeHasBeenSet;
}

string BillDetail::GetProductCode() const
{
    return m_productCode;
}

void BillDetail::SetProductCode(const string& _productCode)
{
    m_productCode = _productCode;
    m_productCodeHasBeenSet = true;
}

bool BillDetail::ProductCodeHasBeenSet() const
{
    return m_productCodeHasBeenSet;
}

string BillDetail::GetActionType() const
{
    return m_actionType;
}

void BillDetail::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool BillDetail::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

string BillDetail::GetRegionId() const
{
    return m_regionId;
}

void BillDetail::SetRegionId(const string& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool BillDetail::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

int64_t BillDetail::GetProjectId() const
{
    return m_projectId;
}

void BillDetail::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool BillDetail::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<string> BillDetail::GetPriceInfo() const
{
    return m_priceInfo;
}

void BillDetail::SetPriceInfo(const vector<string>& _priceInfo)
{
    m_priceInfo = _priceInfo;
    m_priceInfoHasBeenSet = true;
}

bool BillDetail::PriceInfoHasBeenSet() const
{
    return m_priceInfoHasBeenSet;
}

BillDetailAssociatedOrder BillDetail::GetAssociatedOrder() const
{
    return m_associatedOrder;
}

void BillDetail::SetAssociatedOrder(const BillDetailAssociatedOrder& _associatedOrder)
{
    m_associatedOrder = _associatedOrder;
    m_associatedOrderHasBeenSet = true;
}

bool BillDetail::AssociatedOrderHasBeenSet() const
{
    return m_associatedOrderHasBeenSet;
}

string BillDetail::GetFormula() const
{
    return m_formula;
}

void BillDetail::SetFormula(const string& _formula)
{
    m_formula = _formula;
    m_formulaHasBeenSet = true;
}

bool BillDetail::FormulaHasBeenSet() const
{
    return m_formulaHasBeenSet;
}

string BillDetail::GetFormulaUrl() const
{
    return m_formulaUrl;
}

void BillDetail::SetFormulaUrl(const string& _formulaUrl)
{
    m_formulaUrl = _formulaUrl;
    m_formulaUrlHasBeenSet = true;
}

bool BillDetail::FormulaUrlHasBeenSet() const
{
    return m_formulaUrlHasBeenSet;
}

string BillDetail::GetBillDay() const
{
    return m_billDay;
}

void BillDetail::SetBillDay(const string& _billDay)
{
    m_billDay = _billDay;
    m_billDayHasBeenSet = true;
}

bool BillDetail::BillDayHasBeenSet() const
{
    return m_billDayHasBeenSet;
}

string BillDetail::GetBillMonth() const
{
    return m_billMonth;
}

void BillDetail::SetBillMonth(const string& _billMonth)
{
    m_billMonth = _billMonth;
    m_billMonthHasBeenSet = true;
}

bool BillDetail::BillMonthHasBeenSet() const
{
    return m_billMonthHasBeenSet;
}

string BillDetail::GetId() const
{
    return m_id;
}

void BillDetail::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool BillDetail::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string BillDetail::GetRegionType() const
{
    return m_regionType;
}

void BillDetail::SetRegionType(const string& _regionType)
{
    m_regionType = _regionType;
    m_regionTypeHasBeenSet = true;
}

bool BillDetail::RegionTypeHasBeenSet() const
{
    return m_regionTypeHasBeenSet;
}

string BillDetail::GetRegionTypeName() const
{
    return m_regionTypeName;
}

void BillDetail::SetRegionTypeName(const string& _regionTypeName)
{
    m_regionTypeName = _regionTypeName;
    m_regionTypeNameHasBeenSet = true;
}

bool BillDetail::RegionTypeNameHasBeenSet() const
{
    return m_regionTypeNameHasBeenSet;
}

string BillDetail::GetReserveDetail() const
{
    return m_reserveDetail;
}

void BillDetail::SetReserveDetail(const string& _reserveDetail)
{
    m_reserveDetail = _reserveDetail;
    m_reserveDetailHasBeenSet = true;
}

bool BillDetail::ReserveDetailHasBeenSet() const
{
    return m_reserveDetailHasBeenSet;
}

string BillDetail::GetDiscountObject() const
{
    return m_discountObject;
}

void BillDetail::SetDiscountObject(const string& _discountObject)
{
    m_discountObject = _discountObject;
    m_discountObjectHasBeenSet = true;
}

bool BillDetail::DiscountObjectHasBeenSet() const
{
    return m_discountObjectHasBeenSet;
}

string BillDetail::GetDiscountType() const
{
    return m_discountType;
}

void BillDetail::SetDiscountType(const string& _discountType)
{
    m_discountType = _discountType;
    m_discountTypeHasBeenSet = true;
}

bool BillDetail::DiscountTypeHasBeenSet() const
{
    return m_discountTypeHasBeenSet;
}

string BillDetail::GetDiscountContent() const
{
    return m_discountContent;
}

void BillDetail::SetDiscountContent(const string& _discountContent)
{
    m_discountContent = _discountContent;
    m_discountContentHasBeenSet = true;
}

bool BillDetail::DiscountContentHasBeenSet() const
{
    return m_discountContentHasBeenSet;
}

