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

#include <tencentcloud/cfw/v20190904/model/SequenceData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

SequenceData::SequenceData() :
    m_idHasBeenSet(false),
    m_orderIndexHasBeenSet(false),
    m_newOrderIndexHasBeenSet(false)
{
}

CoreInternalOutcome SequenceData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SequenceData.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("OrderIndex") && !value["OrderIndex"].IsNull())
    {
        if (!value["OrderIndex"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SequenceData.OrderIndex` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_orderIndex = value["OrderIndex"].GetUint64();
        m_orderIndexHasBeenSet = true;
    }

    if (value.HasMember("NewOrderIndex") && !value["NewOrderIndex"].IsNull())
    {
        if (!value["NewOrderIndex"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SequenceData.NewOrderIndex` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_newOrderIndex = value["NewOrderIndex"].GetUint64();
        m_newOrderIndexHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SequenceData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

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


uint64_t SequenceData::GetId() const
{
    return m_id;
}

void SequenceData::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool SequenceData::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t SequenceData::GetOrderIndex() const
{
    return m_orderIndex;
}

void SequenceData::SetOrderIndex(const uint64_t& _orderIndex)
{
    m_orderIndex = _orderIndex;
    m_orderIndexHasBeenSet = true;
}

bool SequenceData::OrderIndexHasBeenSet() const
{
    return m_orderIndexHasBeenSet;
}

uint64_t SequenceData::GetNewOrderIndex() const
{
    return m_newOrderIndex;
}

void SequenceData::SetNewOrderIndex(const uint64_t& _newOrderIndex)
{
    m_newOrderIndex = _newOrderIndex;
    m_newOrderIndexHasBeenSet = true;
}

bool SequenceData::NewOrderIndexHasBeenSet() const
{
    return m_newOrderIndexHasBeenSet;
}

