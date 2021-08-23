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

#include <tencentcloud/cdb/v20170320/model/SellType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

SellType::SellType() :
    m_typeNameHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_configsHasBeenSet(false)
{
}

CoreInternalOutcome SellType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TypeName") && !value["TypeName"].IsNull())
    {
        if (!value["TypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SellType.TypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeName = string(value["TypeName"].GetString());
        m_typeNameHasBeenSet = true;
    }

    if (value.HasMember("EngineVersion") && !value["EngineVersion"].IsNull())
    {
        if (!value["EngineVersion"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SellType.EngineVersion` is not array type"));

        const rapidjson::Value &tmpValue = value["EngineVersion"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_engineVersion.push_back((*itr).GetString());
        }
        m_engineVersionHasBeenSet = true;
    }

    if (value.HasMember("Configs") && !value["Configs"].IsNull())
    {
        if (!value["Configs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SellType.Configs` is not array type"));

        const rapidjson::Value &tmpValue = value["Configs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SellConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_configs.push_back(item);
        }
        m_configsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SellType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_typeName.c_str(), allocator).Move(), allocator);
    }

    if (m_engineVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_engineVersion.begin(); itr != m_engineVersion.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_configsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Configs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_configs.begin(); itr != m_configs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SellType::GetTypeName() const
{
    return m_typeName;
}

void SellType::SetTypeName(const string& _typeName)
{
    m_typeName = _typeName;
    m_typeNameHasBeenSet = true;
}

bool SellType::TypeNameHasBeenSet() const
{
    return m_typeNameHasBeenSet;
}

vector<string> SellType::GetEngineVersion() const
{
    return m_engineVersion;
}

void SellType::SetEngineVersion(const vector<string>& _engineVersion)
{
    m_engineVersion = _engineVersion;
    m_engineVersionHasBeenSet = true;
}

bool SellType::EngineVersionHasBeenSet() const
{
    return m_engineVersionHasBeenSet;
}

vector<SellConfig> SellType::GetConfigs() const
{
    return m_configs;
}

void SellType::SetConfigs(const vector<SellConfig>& _configs)
{
    m_configs = _configs;
    m_configsHasBeenSet = true;
}

bool SellType::ConfigsHasBeenSet() const
{
    return m_configsHasBeenSet;
}

