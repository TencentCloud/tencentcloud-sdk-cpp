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

#include <tencentcloud/lighthouse/v20200324/model/ModifyBundle.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace rapidjson;
using namespace std;

ModifyBundle::ModifyBundle() :
    m_modifyPriceHasBeenSet(false),
    m_modifyBundleStateHasBeenSet(false),
    m_bundleHasBeenSet(false)
{
}

CoreInternalOutcome ModifyBundle::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ModifyPrice") && !value["ModifyPrice"].IsNull())
    {
        if (!value["ModifyPrice"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ModifyBundle.ModifyPrice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modifyPrice.Deserialize(value["ModifyPrice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modifyPriceHasBeenSet = true;
    }

    if (value.HasMember("ModifyBundleState") && !value["ModifyBundleState"].IsNull())
    {
        if (!value["ModifyBundleState"].IsString())
        {
            return CoreInternalOutcome(Error("response `ModifyBundle.ModifyBundleState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyBundleState = string(value["ModifyBundleState"].GetString());
        m_modifyBundleStateHasBeenSet = true;
    }

    if (value.HasMember("Bundle") && !value["Bundle"].IsNull())
    {
        if (!value["Bundle"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ModifyBundle.Bundle` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bundle.Deserialize(value["Bundle"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bundleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifyBundle::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_modifyPriceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ModifyPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_modifyPrice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_modifyBundleStateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ModifyBundleState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_modifyBundleState.c_str(), allocator).Move(), allocator);
    }

    if (m_bundleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Bundle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_bundle.ToJsonObject(value[key.c_str()], allocator);
    }

}


Price ModifyBundle::GetModifyPrice() const
{
    return m_modifyPrice;
}

void ModifyBundle::SetModifyPrice(const Price& _modifyPrice)
{
    m_modifyPrice = _modifyPrice;
    m_modifyPriceHasBeenSet = true;
}

bool ModifyBundle::ModifyPriceHasBeenSet() const
{
    return m_modifyPriceHasBeenSet;
}

string ModifyBundle::GetModifyBundleState() const
{
    return m_modifyBundleState;
}

void ModifyBundle::SetModifyBundleState(const string& _modifyBundleState)
{
    m_modifyBundleState = _modifyBundleState;
    m_modifyBundleStateHasBeenSet = true;
}

bool ModifyBundle::ModifyBundleStateHasBeenSet() const
{
    return m_modifyBundleStateHasBeenSet;
}

Bundle ModifyBundle::GetBundle() const
{
    return m_bundle;
}

void ModifyBundle::SetBundle(const Bundle& _bundle)
{
    m_bundle = _bundle;
    m_bundleHasBeenSet = true;
}

bool ModifyBundle::BundleHasBeenSet() const
{
    return m_bundleHasBeenSet;
}

