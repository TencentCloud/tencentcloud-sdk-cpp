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

#include <tencentcloud/billing/v20180709/model/BudgetConditionsForm.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

BudgetConditionsForm::BudgetConditionsForm() :
    m_businessHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_productCodesHasBeenSet(false),
    m_componentCodesHasBeenSet(false),
    m_zoneIdsHasBeenSet(false),
    m_regionIdsHasBeenSet(false),
    m_projectIdsHasBeenSet(false),
    m_actionTypesHasBeenSet(false),
    m_consumptionTypesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_payerUinsHasBeenSet(false),
    m_ownerUinsHasBeenSet(false),
    m_treeNodeUniqKeysHasBeenSet(false)
{
}

CoreInternalOutcome BudgetConditionsForm::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Business") && !value["Business"].IsNull())
    {
        if (!value["Business"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BudgetConditionsForm.Business` is not array type"));

        const rapidjson::Value &tmpValue = value["Business"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_business.push_back((*itr).GetString());
        }
        m_businessHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BudgetConditionsForm.PayMode` is not array type"));

        const rapidjson::Value &tmpValue = value["PayMode"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_payMode.push_back((*itr).GetString());
        }
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("ProductCodes") && !value["ProductCodes"].IsNull())
    {
        if (!value["ProductCodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BudgetConditionsForm.ProductCodes` is not array type"));

        const rapidjson::Value &tmpValue = value["ProductCodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_productCodes.push_back((*itr).GetString());
        }
        m_productCodesHasBeenSet = true;
    }

    if (value.HasMember("ComponentCodes") && !value["ComponentCodes"].IsNull())
    {
        if (!value["ComponentCodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BudgetConditionsForm.ComponentCodes` is not array type"));

        const rapidjson::Value &tmpValue = value["ComponentCodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_componentCodes.push_back((*itr).GetString());
        }
        m_componentCodesHasBeenSet = true;
    }

    if (value.HasMember("ZoneIds") && !value["ZoneIds"].IsNull())
    {
        if (!value["ZoneIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BudgetConditionsForm.ZoneIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ZoneIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_zoneIds.push_back((*itr).GetString());
        }
        m_zoneIdsHasBeenSet = true;
    }

    if (value.HasMember("RegionIds") && !value["RegionIds"].IsNull())
    {
        if (!value["RegionIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BudgetConditionsForm.RegionIds` is not array type"));

        const rapidjson::Value &tmpValue = value["RegionIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_regionIds.push_back((*itr).GetString());
        }
        m_regionIdsHasBeenSet = true;
    }

    if (value.HasMember("ProjectIds") && !value["ProjectIds"].IsNull())
    {
        if (!value["ProjectIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BudgetConditionsForm.ProjectIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ProjectIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_projectIds.push_back((*itr).GetString());
        }
        m_projectIdsHasBeenSet = true;
    }

    if (value.HasMember("ActionTypes") && !value["ActionTypes"].IsNull())
    {
        if (!value["ActionTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BudgetConditionsForm.ActionTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["ActionTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_actionTypes.push_back((*itr).GetString());
        }
        m_actionTypesHasBeenSet = true;
    }

    if (value.HasMember("ConsumptionTypes") && !value["ConsumptionTypes"].IsNull())
    {
        if (!value["ConsumptionTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BudgetConditionsForm.ConsumptionTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["ConsumptionTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_consumptionTypes.push_back((*itr).GetString());
        }
        m_consumptionTypesHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BudgetConditionsForm.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagsForm item;
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

    if (value.HasMember("PayerUins") && !value["PayerUins"].IsNull())
    {
        if (!value["PayerUins"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BudgetConditionsForm.PayerUins` is not array type"));

        const rapidjson::Value &tmpValue = value["PayerUins"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_payerUins.push_back((*itr).GetString());
        }
        m_payerUinsHasBeenSet = true;
    }

    if (value.HasMember("OwnerUins") && !value["OwnerUins"].IsNull())
    {
        if (!value["OwnerUins"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BudgetConditionsForm.OwnerUins` is not array type"));

        const rapidjson::Value &tmpValue = value["OwnerUins"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ownerUins.push_back((*itr).GetString());
        }
        m_ownerUinsHasBeenSet = true;
    }

    if (value.HasMember("TreeNodeUniqKeys") && !value["TreeNodeUniqKeys"].IsNull())
    {
        if (!value["TreeNodeUniqKeys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BudgetConditionsForm.TreeNodeUniqKeys` is not array type"));

        const rapidjson::Value &tmpValue = value["TreeNodeUniqKeys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_treeNodeUniqKeys.push_back((*itr).GetString());
        }
        m_treeNodeUniqKeysHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BudgetConditionsForm::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_businessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_business.begin(); itr != m_business.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_payMode.begin(); itr != m_payMode.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_productCodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_productCodes.begin(); itr != m_productCodes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_componentCodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentCodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_componentCodes.begin(); itr != m_componentCodes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_zoneIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_zoneIds.begin(); itr != m_zoneIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_regionIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_regionIds.begin(); itr != m_regionIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_projectIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_projectIds.begin(); itr != m_projectIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_actionTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_actionTypes.begin(); itr != m_actionTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_consumptionTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumptionTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_consumptionTypes.begin(); itr != m_consumptionTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_payerUinsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerUins";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_payerUins.begin(); itr != m_payerUins.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ownerUinsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUins";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ownerUins.begin(); itr != m_ownerUins.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_treeNodeUniqKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TreeNodeUniqKeys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_treeNodeUniqKeys.begin(); itr != m_treeNodeUniqKeys.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> BudgetConditionsForm::GetBusiness() const
{
    return m_business;
}

void BudgetConditionsForm::SetBusiness(const vector<string>& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool BudgetConditionsForm::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

vector<string> BudgetConditionsForm::GetPayMode() const
{
    return m_payMode;
}

void BudgetConditionsForm::SetPayMode(const vector<string>& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool BudgetConditionsForm::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

vector<string> BudgetConditionsForm::GetProductCodes() const
{
    return m_productCodes;
}

void BudgetConditionsForm::SetProductCodes(const vector<string>& _productCodes)
{
    m_productCodes = _productCodes;
    m_productCodesHasBeenSet = true;
}

bool BudgetConditionsForm::ProductCodesHasBeenSet() const
{
    return m_productCodesHasBeenSet;
}

vector<string> BudgetConditionsForm::GetComponentCodes() const
{
    return m_componentCodes;
}

void BudgetConditionsForm::SetComponentCodes(const vector<string>& _componentCodes)
{
    m_componentCodes = _componentCodes;
    m_componentCodesHasBeenSet = true;
}

bool BudgetConditionsForm::ComponentCodesHasBeenSet() const
{
    return m_componentCodesHasBeenSet;
}

vector<string> BudgetConditionsForm::GetZoneIds() const
{
    return m_zoneIds;
}

void BudgetConditionsForm::SetZoneIds(const vector<string>& _zoneIds)
{
    m_zoneIds = _zoneIds;
    m_zoneIdsHasBeenSet = true;
}

bool BudgetConditionsForm::ZoneIdsHasBeenSet() const
{
    return m_zoneIdsHasBeenSet;
}

vector<string> BudgetConditionsForm::GetRegionIds() const
{
    return m_regionIds;
}

void BudgetConditionsForm::SetRegionIds(const vector<string>& _regionIds)
{
    m_regionIds = _regionIds;
    m_regionIdsHasBeenSet = true;
}

bool BudgetConditionsForm::RegionIdsHasBeenSet() const
{
    return m_regionIdsHasBeenSet;
}

vector<string> BudgetConditionsForm::GetProjectIds() const
{
    return m_projectIds;
}

void BudgetConditionsForm::SetProjectIds(const vector<string>& _projectIds)
{
    m_projectIds = _projectIds;
    m_projectIdsHasBeenSet = true;
}

bool BudgetConditionsForm::ProjectIdsHasBeenSet() const
{
    return m_projectIdsHasBeenSet;
}

vector<string> BudgetConditionsForm::GetActionTypes() const
{
    return m_actionTypes;
}

void BudgetConditionsForm::SetActionTypes(const vector<string>& _actionTypes)
{
    m_actionTypes = _actionTypes;
    m_actionTypesHasBeenSet = true;
}

bool BudgetConditionsForm::ActionTypesHasBeenSet() const
{
    return m_actionTypesHasBeenSet;
}

vector<string> BudgetConditionsForm::GetConsumptionTypes() const
{
    return m_consumptionTypes;
}

void BudgetConditionsForm::SetConsumptionTypes(const vector<string>& _consumptionTypes)
{
    m_consumptionTypes = _consumptionTypes;
    m_consumptionTypesHasBeenSet = true;
}

bool BudgetConditionsForm::ConsumptionTypesHasBeenSet() const
{
    return m_consumptionTypesHasBeenSet;
}

vector<TagsForm> BudgetConditionsForm::GetTags() const
{
    return m_tags;
}

void BudgetConditionsForm::SetTags(const vector<TagsForm>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool BudgetConditionsForm::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<string> BudgetConditionsForm::GetPayerUins() const
{
    return m_payerUins;
}

void BudgetConditionsForm::SetPayerUins(const vector<string>& _payerUins)
{
    m_payerUins = _payerUins;
    m_payerUinsHasBeenSet = true;
}

bool BudgetConditionsForm::PayerUinsHasBeenSet() const
{
    return m_payerUinsHasBeenSet;
}

vector<string> BudgetConditionsForm::GetOwnerUins() const
{
    return m_ownerUins;
}

void BudgetConditionsForm::SetOwnerUins(const vector<string>& _ownerUins)
{
    m_ownerUins = _ownerUins;
    m_ownerUinsHasBeenSet = true;
}

bool BudgetConditionsForm::OwnerUinsHasBeenSet() const
{
    return m_ownerUinsHasBeenSet;
}

vector<string> BudgetConditionsForm::GetTreeNodeUniqKeys() const
{
    return m_treeNodeUniqKeys;
}

void BudgetConditionsForm::SetTreeNodeUniqKeys(const vector<string>& _treeNodeUniqKeys)
{
    m_treeNodeUniqKeys = _treeNodeUniqKeys;
    m_treeNodeUniqKeysHasBeenSet = true;
}

bool BudgetConditionsForm::TreeNodeUniqKeysHasBeenSet() const
{
    return m_treeNodeUniqKeysHasBeenSet;
}

