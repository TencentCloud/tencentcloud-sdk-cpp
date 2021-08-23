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

#include <tencentcloud/privatedns/v20201028/model/FlowUsage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace std;

FlowUsage::FlowUsage() :
    m_flowTypeHasBeenSet(false),
    m_totalQuantityHasBeenSet(false),
    m_availableQuantityHasBeenSet(false)
{
}

CoreInternalOutcome FlowUsage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FlowType") && !value["FlowType"].IsNull())
    {
        if (!value["FlowType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowUsage.FlowType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowType = string(value["FlowType"].GetString());
        m_flowTypeHasBeenSet = true;
    }

    if (value.HasMember("TotalQuantity") && !value["TotalQuantity"].IsNull())
    {
        if (!value["TotalQuantity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowUsage.TotalQuantity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalQuantity = value["TotalQuantity"].GetInt64();
        m_totalQuantityHasBeenSet = true;
    }

    if (value.HasMember("AvailableQuantity") && !value["AvailableQuantity"].IsNull())
    {
        if (!value["AvailableQuantity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowUsage.AvailableQuantity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_availableQuantity = value["AvailableQuantity"].GetInt64();
        m_availableQuantityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowUsage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flowTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowType.c_str(), allocator).Move(), allocator);
    }

    if (m_totalQuantityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalQuantity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalQuantity, allocator);
    }

    if (m_availableQuantityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableQuantity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_availableQuantity, allocator);
    }

}


string FlowUsage::GetFlowType() const
{
    return m_flowType;
}

void FlowUsage::SetFlowType(const string& _flowType)
{
    m_flowType = _flowType;
    m_flowTypeHasBeenSet = true;
}

bool FlowUsage::FlowTypeHasBeenSet() const
{
    return m_flowTypeHasBeenSet;
}

int64_t FlowUsage::GetTotalQuantity() const
{
    return m_totalQuantity;
}

void FlowUsage::SetTotalQuantity(const int64_t& _totalQuantity)
{
    m_totalQuantity = _totalQuantity;
    m_totalQuantityHasBeenSet = true;
}

bool FlowUsage::TotalQuantityHasBeenSet() const
{
    return m_totalQuantityHasBeenSet;
}

int64_t FlowUsage::GetAvailableQuantity() const
{
    return m_availableQuantity;
}

void FlowUsage::SetAvailableQuantity(const int64_t& _availableQuantity)
{
    m_availableQuantity = _availableQuantity;
    m_availableQuantityHasBeenSet = true;
}

bool FlowUsage::AvailableQuantityHasBeenSet() const
{
    return m_availableQuantityHasBeenSet;
}

