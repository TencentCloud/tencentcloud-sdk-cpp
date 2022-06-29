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

#include <tencentcloud/ivld/v20210903/model/CustomPersonFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

CustomPersonFilter::CustomPersonFilter() :
    m_nameHasBeenSet(false),
    m_categoryIdSetHasBeenSet(false),
    m_personIdSetHasBeenSet(false),
    m_l1CategorySetHasBeenSet(false)
{
}

CoreInternalOutcome CustomPersonFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomPersonFilter.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("CategoryIdSet") && !value["CategoryIdSet"].IsNull())
    {
        if (!value["CategoryIdSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomPersonFilter.CategoryIdSet` is not array type"));

        const rapidjson::Value &tmpValue = value["CategoryIdSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_categoryIdSet.push_back((*itr).GetString());
        }
        m_categoryIdSetHasBeenSet = true;
    }

    if (value.HasMember("PersonIdSet") && !value["PersonIdSet"].IsNull())
    {
        if (!value["PersonIdSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomPersonFilter.PersonIdSet` is not array type"));

        const rapidjson::Value &tmpValue = value["PersonIdSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_personIdSet.push_back((*itr).GetString());
        }
        m_personIdSetHasBeenSet = true;
    }

    if (value.HasMember("L1CategorySet") && !value["L1CategorySet"].IsNull())
    {
        if (!value["L1CategorySet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomPersonFilter.L1CategorySet` is not array type"));

        const rapidjson::Value &tmpValue = value["L1CategorySet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_l1CategorySet.push_back((*itr).GetString());
        }
        m_l1CategorySetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomPersonFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryIdSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_categoryIdSet.begin(); itr != m_categoryIdSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_personIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonIdSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_personIdSet.begin(); itr != m_personIdSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_l1CategorySetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "L1CategorySet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_l1CategorySet.begin(); itr != m_l1CategorySet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string CustomPersonFilter::GetName() const
{
    return m_name;
}

void CustomPersonFilter::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CustomPersonFilter::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> CustomPersonFilter::GetCategoryIdSet() const
{
    return m_categoryIdSet;
}

void CustomPersonFilter::SetCategoryIdSet(const vector<string>& _categoryIdSet)
{
    m_categoryIdSet = _categoryIdSet;
    m_categoryIdSetHasBeenSet = true;
}

bool CustomPersonFilter::CategoryIdSetHasBeenSet() const
{
    return m_categoryIdSetHasBeenSet;
}

vector<string> CustomPersonFilter::GetPersonIdSet() const
{
    return m_personIdSet;
}

void CustomPersonFilter::SetPersonIdSet(const vector<string>& _personIdSet)
{
    m_personIdSet = _personIdSet;
    m_personIdSetHasBeenSet = true;
}

bool CustomPersonFilter::PersonIdSetHasBeenSet() const
{
    return m_personIdSetHasBeenSet;
}

vector<string> CustomPersonFilter::GetL1CategorySet() const
{
    return m_l1CategorySet;
}

void CustomPersonFilter::SetL1CategorySet(const vector<string>& _l1CategorySet)
{
    m_l1CategorySet = _l1CategorySet;
    m_l1CategorySetHasBeenSet = true;
}

bool CustomPersonFilter::L1CategorySetHasBeenSet() const
{
    return m_l1CategorySetHasBeenSet;
}

