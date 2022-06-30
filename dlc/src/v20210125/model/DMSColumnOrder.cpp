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

#include <tencentcloud/dlc/v20210125/model/DMSColumnOrder.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DMSColumnOrder::DMSColumnOrder() :
    m_colHasBeenSet(false),
    m_orderHasBeenSet(false)
{
}

CoreInternalOutcome DMSColumnOrder::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Col") && !value["Col"].IsNull())
    {
        if (!value["Col"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DMSColumnOrder.Col` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_col = string(value["Col"].GetString());
        m_colHasBeenSet = true;
    }

    if (value.HasMember("Order") && !value["Order"].IsNull())
    {
        if (!value["Order"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DMSColumnOrder.Order` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_order = value["Order"].GetInt64();
        m_orderHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DMSColumnOrder::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_colHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Col";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_col.c_str(), allocator).Move(), allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_order, allocator);
    }

}


string DMSColumnOrder::GetCol() const
{
    return m_col;
}

void DMSColumnOrder::SetCol(const string& _col)
{
    m_col = _col;
    m_colHasBeenSet = true;
}

bool DMSColumnOrder::ColHasBeenSet() const
{
    return m_colHasBeenSet;
}

int64_t DMSColumnOrder::GetOrder() const
{
    return m_order;
}

void DMSColumnOrder::SetOrder(const int64_t& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DMSColumnOrder::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

