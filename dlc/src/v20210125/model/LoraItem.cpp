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

#include <tencentcloud/dlc/v20210125/model/LoraItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

LoraItem::LoraItem() :
    m_modelVersionUidHasBeenSet(false),
    m_modelUidHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_adapterRankHasBeenSet(false)
{
}

CoreInternalOutcome LoraItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelVersionUid") && !value["ModelVersionUid"].IsNull())
    {
        if (!value["ModelVersionUid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoraItem.ModelVersionUid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelVersionUid = string(value["ModelVersionUid"].GetString());
        m_modelVersionUidHasBeenSet = true;
    }

    if (value.HasMember("ModelUid") && !value["ModelUid"].IsNull())
    {
        if (!value["ModelUid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoraItem.ModelUid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelUid = string(value["ModelUid"].GetString());
        m_modelUidHasBeenSet = true;
    }

    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoraItem.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoraItem.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoraItem.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("AdapterRank") && !value["AdapterRank"].IsNull())
    {
        if (!value["AdapterRank"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LoraItem.AdapterRank` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_adapterRank = value["AdapterRank"].GetInt64();
        m_adapterRankHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoraItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelVersionUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelVersionUid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelVersionUid.c_str(), allocator).Move(), allocator);
    }

    if (m_modelUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelUid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelUid.c_str(), allocator).Move(), allocator);
    }

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_adapterRankHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdapterRank";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_adapterRank, allocator);
    }

}


string LoraItem::GetModelVersionUid() const
{
    return m_modelVersionUid;
}

void LoraItem::SetModelVersionUid(const string& _modelVersionUid)
{
    m_modelVersionUid = _modelVersionUid;
    m_modelVersionUidHasBeenSet = true;
}

bool LoraItem::ModelVersionUidHasBeenSet() const
{
    return m_modelVersionUidHasBeenSet;
}

string LoraItem::GetModelUid() const
{
    return m_modelUid;
}

void LoraItem::SetModelUid(const string& _modelUid)
{
    m_modelUid = _modelUid;
    m_modelUidHasBeenSet = true;
}

bool LoraItem::ModelUidHasBeenSet() const
{
    return m_modelUidHasBeenSet;
}

string LoraItem::GetModelName() const
{
    return m_modelName;
}

void LoraItem::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool LoraItem::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string LoraItem::GetVersion() const
{
    return m_version;
}

void LoraItem::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool LoraItem::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string LoraItem::GetAlias() const
{
    return m_alias;
}

void LoraItem::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool LoraItem::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

int64_t LoraItem::GetAdapterRank() const
{
    return m_adapterRank;
}

void LoraItem::SetAdapterRank(const int64_t& _adapterRank)
{
    m_adapterRank = _adapterRank;
    m_adapterRankHasBeenSet = true;
}

bool LoraItem::AdapterRankHasBeenSet() const
{
    return m_adapterRankHasBeenSet;
}

