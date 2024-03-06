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

#include <tencentcloud/cls/v20201016/model/CollectInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

CollectInfo::CollectInfo() :
    m_typeHasBeenSet(false),
    m_collectConfigsHasBeenSet(false)
{
}

CoreInternalOutcome CollectInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CollectInfo.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("CollectConfigs") && !value["CollectConfigs"].IsNull())
    {
        if (!value["CollectConfigs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CollectInfo.CollectConfigs` is not array type"));

        const rapidjson::Value &tmpValue = value["CollectConfigs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CollectConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_collectConfigs.push_back(item);
        }
        m_collectConfigsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CollectInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_collectConfigsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectConfigs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_collectConfigs.begin(); itr != m_collectConfigs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t CollectInfo::GetType() const
{
    return m_type;
}

void CollectInfo::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CollectInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<CollectConfig> CollectInfo::GetCollectConfigs() const
{
    return m_collectConfigs;
}

void CollectInfo::SetCollectConfigs(const vector<CollectConfig>& _collectConfigs)
{
    m_collectConfigs = _collectConfigs;
    m_collectConfigsHasBeenSet = true;
}

bool CollectInfo::CollectConfigsHasBeenSet() const
{
    return m_collectConfigsHasBeenSet;
}

