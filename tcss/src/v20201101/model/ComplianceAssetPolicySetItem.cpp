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

#include <tencentcloud/tcss/v20201101/model/ComplianceAssetPolicySetItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ComplianceAssetPolicySetItem::ComplianceAssetPolicySetItem() :
    m_customerAssetItemIdHasBeenSet(false),
    m_customerPolicyItemIdSetHasBeenSet(false)
{
}

CoreInternalOutcome ComplianceAssetPolicySetItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CustomerAssetItemId") && !value["CustomerAssetItemId"].IsNull())
    {
        if (!value["CustomerAssetItemId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetPolicySetItem.CustomerAssetItemId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_customerAssetItemId = value["CustomerAssetItemId"].GetUint64();
        m_customerAssetItemIdHasBeenSet = true;
    }

    if (value.HasMember("CustomerPolicyItemIdSet") && !value["CustomerPolicyItemIdSet"].IsNull())
    {
        if (!value["CustomerPolicyItemIdSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetPolicySetItem.CustomerPolicyItemIdSet` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomerPolicyItemIdSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_customerPolicyItemIdSet.push_back((*itr).GetUint64());
        }
        m_customerPolicyItemIdSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComplianceAssetPolicySetItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_customerAssetItemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerAssetItemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_customerAssetItemId, allocator);
    }

    if (m_customerPolicyItemIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerPolicyItemIdSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_customerPolicyItemIdSet.begin(); itr != m_customerPolicyItemIdSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

}


uint64_t ComplianceAssetPolicySetItem::GetCustomerAssetItemId() const
{
    return m_customerAssetItemId;
}

void ComplianceAssetPolicySetItem::SetCustomerAssetItemId(const uint64_t& _customerAssetItemId)
{
    m_customerAssetItemId = _customerAssetItemId;
    m_customerAssetItemIdHasBeenSet = true;
}

bool ComplianceAssetPolicySetItem::CustomerAssetItemIdHasBeenSet() const
{
    return m_customerAssetItemIdHasBeenSet;
}

vector<uint64_t> ComplianceAssetPolicySetItem::GetCustomerPolicyItemIdSet() const
{
    return m_customerPolicyItemIdSet;
}

void ComplianceAssetPolicySetItem::SetCustomerPolicyItemIdSet(const vector<uint64_t>& _customerPolicyItemIdSet)
{
    m_customerPolicyItemIdSet = _customerPolicyItemIdSet;
    m_customerPolicyItemIdSetHasBeenSet = true;
}

bool ComplianceAssetPolicySetItem::CustomerPolicyItemIdSetHasBeenSet() const
{
    return m_customerPolicyItemIdSetHasBeenSet;
}

