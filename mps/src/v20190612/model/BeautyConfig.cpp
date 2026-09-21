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

#include <tencentcloud/mps/v20190612/model/BeautyConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

BeautyConfig::BeautyConfig() :
    m_beautyEffectItemsHasBeenSet(false),
    m_beautyFilterItemsHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome BeautyConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BeautyEffectItems") && !value["BeautyEffectItems"].IsNull())
    {
        if (!value["BeautyEffectItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BeautyConfig.BeautyEffectItems` is not array type"));

        const rapidjson::Value &tmpValue = value["BeautyEffectItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BeautyEffectItemConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_beautyEffectItems.push_back(item);
        }
        m_beautyEffectItemsHasBeenSet = true;
    }

    if (value.HasMember("BeautyFilterItems") && !value["BeautyFilterItems"].IsNull())
    {
        if (!value["BeautyFilterItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BeautyConfig.BeautyFilterItems` is not array type"));

        const rapidjson::Value &tmpValue = value["BeautyFilterItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BeautyFilterItemConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_beautyFilterItems.push_back(item);
        }
        m_beautyFilterItemsHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BeautyConfig.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BeautyConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_beautyEffectItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeautyEffectItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_beautyEffectItems.begin(); itr != m_beautyEffectItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_beautyFilterItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeautyFilterItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_beautyFilterItems.begin(); itr != m_beautyFilterItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

}


vector<BeautyEffectItemConfig> BeautyConfig::GetBeautyEffectItems() const
{
    return m_beautyEffectItems;
}

void BeautyConfig::SetBeautyEffectItems(const vector<BeautyEffectItemConfig>& _beautyEffectItems)
{
    m_beautyEffectItems = _beautyEffectItems;
    m_beautyEffectItemsHasBeenSet = true;
}

bool BeautyConfig::BeautyEffectItemsHasBeenSet() const
{
    return m_beautyEffectItemsHasBeenSet;
}

vector<BeautyFilterItemConfig> BeautyConfig::GetBeautyFilterItems() const
{
    return m_beautyFilterItems;
}

void BeautyConfig::SetBeautyFilterItems(const vector<BeautyFilterItemConfig>& _beautyFilterItems)
{
    m_beautyFilterItems = _beautyFilterItems;
    m_beautyFilterItemsHasBeenSet = true;
}

bool BeautyConfig::BeautyFilterItemsHasBeenSet() const
{
    return m_beautyFilterItemsHasBeenSet;
}

string BeautyConfig::GetType() const
{
    return m_type;
}

void BeautyConfig::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool BeautyConfig::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

