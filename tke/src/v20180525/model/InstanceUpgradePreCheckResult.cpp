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

#include <tencentcloud/tke/v20180525/model/InstanceUpgradePreCheckResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

InstanceUpgradePreCheckResult::InstanceUpgradePreCheckResult() :
    m_checkPassHasBeenSet(false),
    m_itemsHasBeenSet(false),
    m_singlePodsHasBeenSet(false)
{
}

CoreInternalOutcome InstanceUpgradePreCheckResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CheckPass") && !value["CheckPass"].IsNull())
    {
        if (!value["CheckPass"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceUpgradePreCheckResult.CheckPass` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_checkPass = value["CheckPass"].GetBool();
        m_checkPassHasBeenSet = true;
    }

    if (value.HasMember("Items") && !value["Items"].IsNull())
    {
        if (!value["Items"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceUpgradePreCheckResult.Items` is not array type"));

        const rapidjson::Value &tmpValue = value["Items"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceUpgradePreCheckResultItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_items.push_back(item);
        }
        m_itemsHasBeenSet = true;
    }

    if (value.HasMember("SinglePods") && !value["SinglePods"].IsNull())
    {
        if (!value["SinglePods"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceUpgradePreCheckResult.SinglePods` is not array type"));

        const rapidjson::Value &tmpValue = value["SinglePods"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_singlePods.push_back((*itr).GetString());
        }
        m_singlePodsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceUpgradePreCheckResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_checkPassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckPass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkPass, allocator);
    }

    if (m_itemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Items";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_items.begin(); itr != m_items.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_singlePodsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SinglePods";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_singlePods.begin(); itr != m_singlePods.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


bool InstanceUpgradePreCheckResult::GetCheckPass() const
{
    return m_checkPass;
}

void InstanceUpgradePreCheckResult::SetCheckPass(const bool& _checkPass)
{
    m_checkPass = _checkPass;
    m_checkPassHasBeenSet = true;
}

bool InstanceUpgradePreCheckResult::CheckPassHasBeenSet() const
{
    return m_checkPassHasBeenSet;
}

vector<InstanceUpgradePreCheckResultItem> InstanceUpgradePreCheckResult::GetItems() const
{
    return m_items;
}

void InstanceUpgradePreCheckResult::SetItems(const vector<InstanceUpgradePreCheckResultItem>& _items)
{
    m_items = _items;
    m_itemsHasBeenSet = true;
}

bool InstanceUpgradePreCheckResult::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

vector<string> InstanceUpgradePreCheckResult::GetSinglePods() const
{
    return m_singlePods;
}

void InstanceUpgradePreCheckResult::SetSinglePods(const vector<string>& _singlePods)
{
    m_singlePods = _singlePods;
    m_singlePodsHasBeenSet = true;
}

bool InstanceUpgradePreCheckResult::SinglePodsHasBeenSet() const
{
    return m_singlePodsHasBeenSet;
}

