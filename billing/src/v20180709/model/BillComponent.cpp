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

#include <tencentcloud/billing/v20180709/model/BillComponent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

BillComponent::BillComponent() :
    m_componentCodeHasBeenSet(false),
    m_componentCodeNameHasBeenSet(false)
{
}

CoreInternalOutcome BillComponent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ComponentCode") && !value["ComponentCode"].IsNull())
    {
        if (!value["ComponentCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillComponent.ComponentCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentCode = string(value["ComponentCode"].GetString());
        m_componentCodeHasBeenSet = true;
    }

    if (value.HasMember("ComponentCodeName") && !value["ComponentCodeName"].IsNull())
    {
        if (!value["ComponentCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillComponent.ComponentCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentCodeName = string(value["ComponentCodeName"].GetString());
        m_componentCodeNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BillComponent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_componentCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentCode.c_str(), allocator).Move(), allocator);
    }

    if (m_componentCodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentCodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentCodeName.c_str(), allocator).Move(), allocator);
    }

}


string BillComponent::GetComponentCode() const
{
    return m_componentCode;
}

void BillComponent::SetComponentCode(const string& _componentCode)
{
    m_componentCode = _componentCode;
    m_componentCodeHasBeenSet = true;
}

bool BillComponent::ComponentCodeHasBeenSet() const
{
    return m_componentCodeHasBeenSet;
}

string BillComponent::GetComponentCodeName() const
{
    return m_componentCodeName;
}

void BillComponent::SetComponentCodeName(const string& _componentCodeName)
{
    m_componentCodeName = _componentCodeName;
    m_componentCodeNameHasBeenSet = true;
}

bool BillComponent::ComponentCodeNameHasBeenSet() const
{
    return m_componentCodeNameHasBeenSet;
}

