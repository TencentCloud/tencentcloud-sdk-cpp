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

#include <tencentcloud/cfw/v20190904/model/RuleChangeItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

RuleChangeItem::RuleChangeItem() :
    m_orderIndexHasBeenSet(false),
    m_newOrderIndexHasBeenSet(false),
    m_ipVersionHasBeenSet(false)
{
}

CoreInternalOutcome RuleChangeItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrderIndex") && !value["OrderIndex"].IsNull())
    {
        if (!value["OrderIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleChangeItem.OrderIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_orderIndex = value["OrderIndex"].GetInt64();
        m_orderIndexHasBeenSet = true;
    }

    if (value.HasMember("NewOrderIndex") && !value["NewOrderIndex"].IsNull())
    {
        if (!value["NewOrderIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleChangeItem.NewOrderIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_newOrderIndex = value["NewOrderIndex"].GetInt64();
        m_newOrderIndexHasBeenSet = true;
    }

    if (value.HasMember("IpVersion") && !value["IpVersion"].IsNull())
    {
        if (!value["IpVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleChangeItem.IpVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ipVersion = value["IpVersion"].GetInt64();
        m_ipVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleChangeItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_ipVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipVersion, allocator);
    }

}


int64_t RuleChangeItem::GetOrderIndex() const
{
    return m_orderIndex;
}

void RuleChangeItem::SetOrderIndex(const int64_t& _orderIndex)
{
    m_orderIndex = _orderIndex;
    m_orderIndexHasBeenSet = true;
}

bool RuleChangeItem::OrderIndexHasBeenSet() const
{
    return m_orderIndexHasBeenSet;
}

int64_t RuleChangeItem::GetNewOrderIndex() const
{
    return m_newOrderIndex;
}

void RuleChangeItem::SetNewOrderIndex(const int64_t& _newOrderIndex)
{
    m_newOrderIndex = _newOrderIndex;
    m_newOrderIndexHasBeenSet = true;
}

bool RuleChangeItem::NewOrderIndexHasBeenSet() const
{
    return m_newOrderIndexHasBeenSet;
}

int64_t RuleChangeItem::GetIpVersion() const
{
    return m_ipVersion;
}

void RuleChangeItem::SetIpVersion(const int64_t& _ipVersion)
{
    m_ipVersion = _ipVersion;
    m_ipVersionHasBeenSet = true;
}

bool RuleChangeItem::IpVersionHasBeenSet() const
{
    return m_ipVersionHasBeenSet;
}

