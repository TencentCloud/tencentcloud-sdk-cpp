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

#include <tencentcloud/clb/v20180317/model/FallBackItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

FallBackItem::FallBackItem() :
    m_defaultFallBackModelsHasBeenSet(false)
{
}

CoreInternalOutcome FallBackItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DefaultFallBackModels") && !value["DefaultFallBackModels"].IsNull())
    {
        if (!value["DefaultFallBackModels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FallBackItem.DefaultFallBackModels` is not array type"));

        const rapidjson::Value &tmpValue = value["DefaultFallBackModels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_defaultFallBackModels.push_back((*itr).GetString());
        }
        m_defaultFallBackModelsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FallBackItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_defaultFallBackModelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultFallBackModels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_defaultFallBackModels.begin(); itr != m_defaultFallBackModels.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> FallBackItem::GetDefaultFallBackModels() const
{
    return m_defaultFallBackModels;
}

void FallBackItem::SetDefaultFallBackModels(const vector<string>& _defaultFallBackModels)
{
    m_defaultFallBackModels = _defaultFallBackModels;
    m_defaultFallBackModelsHasBeenSet = true;
}

bool FallBackItem::DefaultFallBackModelsHasBeenSet() const
{
    return m_defaultFallBackModelsHasBeenSet;
}

