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

#include <tencentcloud/adp/v20260520/model/KBSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

KBSpec::KBSpec() :
    m_descriptionHasBeenSet(false),
    m_esConfigHasBeenSet(false),
    m_modelConfigHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ownerIdHasBeenSet(false)
{
}

CoreInternalOutcome KBSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KBSpec.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("EsConfig") && !value["EsConfig"].IsNull())
    {
        if (!value["EsConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KBSpec.EsConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_esConfig.Deserialize(value["EsConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_esConfigHasBeenSet = true;
    }

    if (value.HasMember("ModelConfig") && !value["ModelConfig"].IsNull())
    {
        if (!value["ModelConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KBSpec.ModelConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modelConfig.Deserialize(value["ModelConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modelConfigHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KBSpec.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("OwnerId") && !value["OwnerId"].IsNull())
    {
        if (!value["OwnerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KBSpec.OwnerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerId = string(value["OwnerId"].GetString());
        m_ownerIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KBSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_esConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_esConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_modelConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modelConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerId.c_str(), allocator).Move(), allocator);
    }

}


string KBSpec::GetDescription() const
{
    return m_description;
}

void KBSpec::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool KBSpec::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

ESConfig KBSpec::GetEsConfig() const
{
    return m_esConfig;
}

void KBSpec::SetEsConfig(const ESConfig& _esConfig)
{
    m_esConfig = _esConfig;
    m_esConfigHasBeenSet = true;
}

bool KBSpec::EsConfigHasBeenSet() const
{
    return m_esConfigHasBeenSet;
}

KBModelConfig KBSpec::GetModelConfig() const
{
    return m_modelConfig;
}

void KBSpec::SetModelConfig(const KBModelConfig& _modelConfig)
{
    m_modelConfig = _modelConfig;
    m_modelConfigHasBeenSet = true;
}

bool KBSpec::ModelConfigHasBeenSet() const
{
    return m_modelConfigHasBeenSet;
}

string KBSpec::GetName() const
{
    return m_name;
}

void KBSpec::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool KBSpec::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string KBSpec::GetOwnerId() const
{
    return m_ownerId;
}

void KBSpec::SetOwnerId(const string& _ownerId)
{
    m_ownerId = _ownerId;
    m_ownerIdHasBeenSet = true;
}

bool KBSpec::OwnerIdHasBeenSet() const
{
    return m_ownerIdHasBeenSet;
}

