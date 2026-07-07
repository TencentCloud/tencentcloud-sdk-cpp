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

#include <tencentcloud/clb/v20180317/model/TierItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

TierItem::TierItem() :
    m_modelsHasBeenSet(false),
    m_tierNameHasBeenSet(false)
{
}

CoreInternalOutcome TierItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Models") && !value["Models"].IsNull())
    {
        if (!value["Models"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TierItem.Models` is not array type"));

        const rapidjson::Value &tmpValue = value["Models"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_models.push_back((*itr).GetString());
        }
        m_modelsHasBeenSet = true;
    }

    if (value.HasMember("TierName") && !value["TierName"].IsNull())
    {
        if (!value["TierName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TierItem.TierName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tierName = string(value["TierName"].GetString());
        m_tierNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TierItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Models";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_models.begin(); itr != m_models.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tierNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TierName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tierName.c_str(), allocator).Move(), allocator);
    }

}


vector<string> TierItem::GetModels() const
{
    return m_models;
}

void TierItem::SetModels(const vector<string>& _models)
{
    m_models = _models;
    m_modelsHasBeenSet = true;
}

bool TierItem::ModelsHasBeenSet() const
{
    return m_modelsHasBeenSet;
}

string TierItem::GetTierName() const
{
    return m_tierName;
}

void TierItem::SetTierName(const string& _tierName)
{
    m_tierName = _tierName;
    m_tierNameHasBeenSet = true;
}

bool TierItem::TierNameHasBeenSet() const
{
    return m_tierNameHasBeenSet;
}

