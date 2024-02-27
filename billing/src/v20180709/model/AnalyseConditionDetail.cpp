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

#include <tencentcloud/billing/v20180709/model/AnalyseConditionDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

AnalyseConditionDetail::AnalyseConditionDetail() :
    m_businessHasBeenSet(false),
    m_projectHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_amountHasBeenSet(false)
{
}

CoreInternalOutcome AnalyseConditionDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Business") && !value["Business"].IsNull())
    {
        if (!value["Business"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AnalyseConditionDetail.Business` is not array type"));

        const rapidjson::Value &tmpValue = value["Business"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AnalyseBusinessDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_business.push_back(item);
        }
        m_businessHasBeenSet = true;
    }

    if (value.HasMember("Project") && !value["Project"].IsNull())
    {
        if (!value["Project"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AnalyseConditionDetail.Project` is not array type"));

        const rapidjson::Value &tmpValue = value["Project"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AnalyseProjectDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_project.push_back(item);
        }
        m_projectHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AnalyseConditionDetail.Region` is not array type"));

        const rapidjson::Value &tmpValue = value["Region"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AnalyseRegionDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_region.push_back(item);
        }
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AnalyseConditionDetail.PayMode` is not array type"));

        const rapidjson::Value &tmpValue = value["PayMode"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AnalysePayModeDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_payMode.push_back(item);
        }
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("ActionType") && !value["ActionType"].IsNull())
    {
        if (!value["ActionType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AnalyseConditionDetail.ActionType` is not array type"));

        const rapidjson::Value &tmpValue = value["ActionType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AnalyseActionTypeDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_actionType.push_back(item);
        }
        m_actionTypeHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AnalyseConditionDetail.Zone` is not array type"));

        const rapidjson::Value &tmpValue = value["Zone"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AnalyseZoneDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_zone.push_back(item);
        }
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AnalyseConditionDetail.OwnerUin` is not array type"));

        const rapidjson::Value &tmpValue = value["OwnerUin"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AnalyseOwnerUinDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ownerUin.push_back(item);
        }
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("Amount") && !value["Amount"].IsNull())
    {
        if (!value["Amount"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AnalyseConditionDetail.Amount` is not array type"));

        const rapidjson::Value &tmpValue = value["Amount"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AnalyseAmountDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_amount.push_back(item);
        }
        m_amountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AnalyseConditionDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_businessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_business.begin(); itr != m_business.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_projectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Project";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_project.begin(); itr != m_project.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_region.begin(); itr != m_region.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_payMode.begin(); itr != m_payMode.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_actionType.begin(); itr != m_actionType.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_zone.begin(); itr != m_zone.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ownerUin.begin(); itr != m_ownerUin.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_amountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Amount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_amount.begin(); itr != m_amount.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<AnalyseBusinessDetail> AnalyseConditionDetail::GetBusiness() const
{
    return m_business;
}

void AnalyseConditionDetail::SetBusiness(const vector<AnalyseBusinessDetail>& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool AnalyseConditionDetail::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

vector<AnalyseProjectDetail> AnalyseConditionDetail::GetProject() const
{
    return m_project;
}

void AnalyseConditionDetail::SetProject(const vector<AnalyseProjectDetail>& _project)
{
    m_project = _project;
    m_projectHasBeenSet = true;
}

bool AnalyseConditionDetail::ProjectHasBeenSet() const
{
    return m_projectHasBeenSet;
}

vector<AnalyseRegionDetail> AnalyseConditionDetail::GetRegion() const
{
    return m_region;
}

void AnalyseConditionDetail::SetRegion(const vector<AnalyseRegionDetail>& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool AnalyseConditionDetail::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

vector<AnalysePayModeDetail> AnalyseConditionDetail::GetPayMode() const
{
    return m_payMode;
}

void AnalyseConditionDetail::SetPayMode(const vector<AnalysePayModeDetail>& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool AnalyseConditionDetail::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

vector<AnalyseActionTypeDetail> AnalyseConditionDetail::GetActionType() const
{
    return m_actionType;
}

void AnalyseConditionDetail::SetActionType(const vector<AnalyseActionTypeDetail>& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool AnalyseConditionDetail::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

vector<AnalyseZoneDetail> AnalyseConditionDetail::GetZone() const
{
    return m_zone;
}

void AnalyseConditionDetail::SetZone(const vector<AnalyseZoneDetail>& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool AnalyseConditionDetail::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

vector<AnalyseOwnerUinDetail> AnalyseConditionDetail::GetOwnerUin() const
{
    return m_ownerUin;
}

void AnalyseConditionDetail::SetOwnerUin(const vector<AnalyseOwnerUinDetail>& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool AnalyseConditionDetail::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

vector<AnalyseAmountDetail> AnalyseConditionDetail::GetAmount() const
{
    return m_amount;
}

void AnalyseConditionDetail::SetAmount(const vector<AnalyseAmountDetail>& _amount)
{
    m_amount = _amount;
    m_amountHasBeenSet = true;
}

bool AnalyseConditionDetail::AmountHasBeenSet() const
{
    return m_amountHasBeenSet;
}

