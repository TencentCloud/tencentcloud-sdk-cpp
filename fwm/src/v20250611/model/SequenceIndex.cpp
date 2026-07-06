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

#include <tencentcloud/fwm/v20250611/model/SequenceIndex.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Fwm::V20250611::Model;
using namespace std;

SequenceIndex::SequenceIndex() :
    m_orderIndexHasBeenSet(false),
    m_newOrderIndexHasBeenSet(false)
{
}

CoreInternalOutcome SequenceIndex::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrderIndex") && !value["OrderIndex"].IsNull())
    {
        if (!value["OrderIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SequenceIndex.OrderIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_orderIndex = value["OrderIndex"].GetInt64();
        m_orderIndexHasBeenSet = true;
    }

    if (value.HasMember("NewOrderIndex") && !value["NewOrderIndex"].IsNull())
    {
        if (!value["NewOrderIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SequenceIndex.NewOrderIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_newOrderIndex = value["NewOrderIndex"].GetInt64();
        m_newOrderIndexHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SequenceIndex::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_orderIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orderIndex, allocator);
    }

    if (m_newOrderIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewOrderIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_newOrderIndex, allocator);
    }

}


int64_t SequenceIndex::GetOrderIndex() const
{
    return m_orderIndex;
}

void SequenceIndex::SetOrderIndex(const int64_t& _orderIndex)
{
    m_orderIndex = _orderIndex;
    m_orderIndexHasBeenSet = true;
}

bool SequenceIndex::OrderIndexHasBeenSet() const
{
    return m_orderIndexHasBeenSet;
}

int64_t SequenceIndex::GetNewOrderIndex() const
{
    return m_newOrderIndex;
}

void SequenceIndex::SetNewOrderIndex(const int64_t& _newOrderIndex)
{
    m_newOrderIndex = _newOrderIndex;
    m_newOrderIndexHasBeenSet = true;
}

bool SequenceIndex::NewOrderIndexHasBeenSet() const
{
    return m_newOrderIndexHasBeenSet;
}

