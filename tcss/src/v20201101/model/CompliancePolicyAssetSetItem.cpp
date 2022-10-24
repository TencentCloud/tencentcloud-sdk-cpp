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

#include <tencentcloud/tcss/v20201101/model/CompliancePolicyAssetSetItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

CompliancePolicyAssetSetItem::CompliancePolicyAssetSetItem() :
    m_customerPolicyItemIdHasBeenSet(false),
    m_customerAssetItemIdSetHasBeenSet(false)
{
}

CoreInternalOutcome CompliancePolicyAssetSetItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CustomerPolicyItemId") && !value["CustomerPolicyItemId"].IsNull())
    {
        if (!value["CustomerPolicyItemId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePolicyAssetSetItem.CustomerPolicyItemId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_customerPolicyItemId = value["CustomerPolicyItemId"].GetUint64();
        m_customerPolicyItemIdHasBeenSet = true;
    }

    if (value.HasMember("CustomerAssetItemIdSet") && !value["CustomerAssetItemIdSet"].IsNull())
    {
        if (!value["CustomerAssetItemIdSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CompliancePolicyAssetSetItem.CustomerAssetItemIdSet` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomerAssetItemIdSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_customerAssetItemIdSet.push_back((*itr).GetUint64());
        }
        m_customerAssetItemIdSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CompliancePolicyAssetSetItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_customerPolicyItemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerPolicyItemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_customerPolicyItemId, allocator);
    }

    if (m_customerAssetItemIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerAssetItemIdSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_customerAssetItemIdSet.begin(); itr != m_customerAssetItemIdSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

}


uint64_t CompliancePolicyAssetSetItem::GetCustomerPolicyItemId() const
{
    return m_customerPolicyItemId;
}

void CompliancePolicyAssetSetItem::SetCustomerPolicyItemId(const uint64_t& _customerPolicyItemId)
{
    m_customerPolicyItemId = _customerPolicyItemId;
    m_customerPolicyItemIdHasBeenSet = true;
}

bool CompliancePolicyAssetSetItem::CustomerPolicyItemIdHasBeenSet() const
{
    return m_customerPolicyItemIdHasBeenSet;
}

vector<uint64_t> CompliancePolicyAssetSetItem::GetCustomerAssetItemIdSet() const
{
    return m_customerAssetItemIdSet;
}

void CompliancePolicyAssetSetItem::SetCustomerAssetItemIdSet(const vector<uint64_t>& _customerAssetItemIdSet)
{
    m_customerAssetItemIdSet = _customerAssetItemIdSet;
    m_customerAssetItemIdSetHasBeenSet = true;
}

bool CompliancePolicyAssetSetItem::CustomerAssetItemIdSetHasBeenSet() const
{
    return m_customerAssetItemIdSetHasBeenSet;
}

