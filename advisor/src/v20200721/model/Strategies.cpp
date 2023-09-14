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

#include <tencentcloud/advisor/v20200721/model/Strategies.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Advisor::V20200721::Model;
using namespace std;

Strategies::Strategies() :
    m_strategyIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descHasBeenSet(false),
    m_productHasBeenSet(false),
    m_productDescHasBeenSet(false),
    m_repairHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_conditionsHasBeenSet(false)
{
}

CoreInternalOutcome Strategies::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StrategyId") && !value["StrategyId"].IsNull())
    {
        if (!value["StrategyId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Strategies.StrategyId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_strategyId = value["StrategyId"].GetUint64();
        m_strategyIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Strategies.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Strategies.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("Product") && !value["Product"].IsNull())
    {
        if (!value["Product"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Strategies.Product` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_product = string(value["Product"].GetString());
        m_productHasBeenSet = true;
    }

    if (value.HasMember("ProductDesc") && !value["ProductDesc"].IsNull())
    {
        if (!value["ProductDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Strategies.ProductDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productDesc = string(value["ProductDesc"].GetString());
        m_productDescHasBeenSet = true;
    }

    if (value.HasMember("Repair") && !value["Repair"].IsNull())
    {
        if (!value["Repair"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Strategies.Repair` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repair = string(value["Repair"].GetString());
        m_repairHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Strategies.GroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = value["GroupId"].GetUint64();
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Strategies.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("Conditions") && !value["Conditions"].IsNull())
    {
        if (!value["Conditions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Strategies.Conditions` is not array type"));

        const rapidjson::Value &tmpValue = value["Conditions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Conditions item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_conditions.push_back(item);
        }
        m_conditionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Strategies::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_strategyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strategyId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_productDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_repairHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Repair";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repair.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupId, allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_conditionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Conditions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_conditions.begin(); itr != m_conditions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t Strategies::GetStrategyId() const
{
    return m_strategyId;
}

void Strategies::SetStrategyId(const uint64_t& _strategyId)
{
    m_strategyId = _strategyId;
    m_strategyIdHasBeenSet = true;
}

bool Strategies::StrategyIdHasBeenSet() const
{
    return m_strategyIdHasBeenSet;
}

string Strategies::GetName() const
{
    return m_name;
}

void Strategies::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Strategies::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Strategies::GetDesc() const
{
    return m_desc;
}

void Strategies::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool Strategies::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string Strategies::GetProduct() const
{
    return m_product;
}

void Strategies::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool Strategies::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

string Strategies::GetProductDesc() const
{
    return m_productDesc;
}

void Strategies::SetProductDesc(const string& _productDesc)
{
    m_productDesc = _productDesc;
    m_productDescHasBeenSet = true;
}

bool Strategies::ProductDescHasBeenSet() const
{
    return m_productDescHasBeenSet;
}

string Strategies::GetRepair() const
{
    return m_repair;
}

void Strategies::SetRepair(const string& _repair)
{
    m_repair = _repair;
    m_repairHasBeenSet = true;
}

bool Strategies::RepairHasBeenSet() const
{
    return m_repairHasBeenSet;
}

uint64_t Strategies::GetGroupId() const
{
    return m_groupId;
}

void Strategies::SetGroupId(const uint64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool Strategies::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string Strategies::GetGroupName() const
{
    return m_groupName;
}

void Strategies::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool Strategies::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

vector<Conditions> Strategies::GetConditions() const
{
    return m_conditions;
}

void Strategies::SetConditions(const vector<Conditions>& _conditions)
{
    m_conditions = _conditions;
    m_conditionsHasBeenSet = true;
}

bool Strategies::ConditionsHasBeenSet() const
{
    return m_conditionsHasBeenSet;
}

