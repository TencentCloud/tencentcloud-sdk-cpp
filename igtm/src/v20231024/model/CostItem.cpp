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

#include <tencentcloud/igtm/v20231024/model/CostItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Igtm::V20231024::Model;
using namespace std;

CostItem::CostItem() :
    m_costNameHasBeenSet(false),
    m_costValueHasBeenSet(false)
{
}

CoreInternalOutcome CostItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CostName") && !value["CostName"].IsNull())
    {
        if (!value["CostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CostItem.CostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_costName = string(value["CostName"].GetString());
        m_costNameHasBeenSet = true;
    }

    if (value.HasMember("CostValue") && !value["CostValue"].IsNull())
    {
        if (!value["CostValue"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CostItem.CostValue` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_costValue = value["CostValue"].GetUint64();
        m_costValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CostItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_costNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_costName.c_str(), allocator).Move(), allocator);
    }

    if (m_costValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_costValue, allocator);
    }

}


string CostItem::GetCostName() const
{
    return m_costName;
}

void CostItem::SetCostName(const string& _costName)
{
    m_costName = _costName;
    m_costNameHasBeenSet = true;
}

bool CostItem::CostNameHasBeenSet() const
{
    return m_costNameHasBeenSet;
}

uint64_t CostItem::GetCostValue() const
{
    return m_costValue;
}

void CostItem::SetCostValue(const uint64_t& _costValue)
{
    m_costValue = _costValue;
    m_costValueHasBeenSet = true;
}

bool CostItem::CostValueHasBeenSet() const
{
    return m_costValueHasBeenSet;
}

