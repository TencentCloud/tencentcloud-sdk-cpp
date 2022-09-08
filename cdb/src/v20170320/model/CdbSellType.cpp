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

#include <tencentcloud/cdb/v20170320/model/CdbSellType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

CdbSellType::CdbSellType() :
    m_typeNameHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_configIdsHasBeenSet(false)
{
}

CoreInternalOutcome CdbSellType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TypeName") && !value["TypeName"].IsNull())
    {
        if (!value["TypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CdbSellType.TypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeName = string(value["TypeName"].GetString());
        m_typeNameHasBeenSet = true;
    }

    if (value.HasMember("EngineVersion") && !value["EngineVersion"].IsNull())
    {
        if (!value["EngineVersion"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CdbSellType.EngineVersion` is not array type"));

        const rapidjson::Value &tmpValue = value["EngineVersion"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_engineVersion.push_back((*itr).GetString());
        }
        m_engineVersionHasBeenSet = true;
    }

    if (value.HasMember("ConfigIds") && !value["ConfigIds"].IsNull())
    {
        if (!value["ConfigIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CdbSellType.ConfigIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ConfigIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_configIds.push_back((*itr).GetInt64());
        }
        m_configIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CdbSellType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_configIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_configIds.begin(); itr != m_configIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


string CdbSellType::GetTypeName() const
{
    return m_typeName;
}

void CdbSellType::SetTypeName(const string& _typeName)
{
    m_typeName = _typeName;
    m_typeNameHasBeenSet = true;
}

bool CdbSellType::TypeNameHasBeenSet() const
{
    return m_typeNameHasBeenSet;
}

vector<string> CdbSellType::GetEngineVersion() const
{
    return m_engineVersion;
}

void CdbSellType::SetEngineVersion(const vector<string>& _engineVersion)
{
    m_engineVersion = _engineVersion;
    m_engineVersionHasBeenSet = true;
}

bool CdbSellType::EngineVersionHasBeenSet() const
{
    return m_engineVersionHasBeenSet;
}

vector<int64_t> CdbSellType::GetConfigIds() const
{
    return m_configIds;
}

void CdbSellType::SetConfigIds(const vector<int64_t>& _configIds)
{
    m_configIds = _configIds;
    m_configIdsHasBeenSet = true;
}

bool CdbSellType::ConfigIdsHasBeenSet() const
{
    return m_configIdsHasBeenSet;
}

