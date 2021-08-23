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

#include <tencentcloud/tkgdq/v20190411/model/TripleContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tkgdq::V20190411::Model;
using namespace std;

TripleContent::TripleContent() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_popularHasBeenSet(false)
{
}

CoreInternalOutcome TripleContent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TripleContent.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TripleContent.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Order") && !value["Order"].IsNull())
    {
        if (!value["Order"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TripleContent.Order` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_order = value["Order"].GetInt64();
        m_orderHasBeenSet = true;
    }

    if (value.HasMember("Popular") && !value["Popular"].IsNull())
    {
        if (!value["Popular"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TripleContent.Popular` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_popular = value["Popular"].GetInt64();
        m_popularHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TripleContent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_order, allocator);
    }

    if (m_popularHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Popular";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_popular, allocator);
    }

}


string TripleContent::GetId() const
{
    return m_id;
}

void TripleContent::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool TripleContent::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string TripleContent::GetName() const
{
    return m_name;
}

void TripleContent::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TripleContent::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t TripleContent::GetOrder() const
{
    return m_order;
}

void TripleContent::SetOrder(const int64_t& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool TripleContent::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

int64_t TripleContent::GetPopular() const
{
    return m_popular;
}

void TripleContent::SetPopular(const int64_t& _popular)
{
    m_popular = _popular;
    m_popularHasBeenSet = true;
}

bool TripleContent::PopularHasBeenSet() const
{
    return m_popularHasBeenSet;
}

