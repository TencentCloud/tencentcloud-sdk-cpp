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

#include <tencentcloud/adp/v20260520/model/ModelProviderBasic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ModelProviderBasic::ModelProviderBasic() :
    m_aliasHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_providerTypeHasBeenSet(false)
{
}

CoreInternalOutcome ModelProviderBasic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelProviderBasic.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelProviderBasic.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ProviderType") && !value["ProviderType"].IsNull())
    {
        if (!value["ProviderType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelProviderBasic.ProviderType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_providerType = value["ProviderType"].GetInt64();
        m_providerTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelProviderBasic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_providerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProviderType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_providerType, allocator);
    }

}


string ModelProviderBasic::GetAlias() const
{
    return m_alias;
}

void ModelProviderBasic::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool ModelProviderBasic::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string ModelProviderBasic::GetName() const
{
    return m_name;
}

void ModelProviderBasic::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModelProviderBasic::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t ModelProviderBasic::GetProviderType() const
{
    return m_providerType;
}

void ModelProviderBasic::SetProviderType(const int64_t& _providerType)
{
    m_providerType = _providerType;
    m_providerTypeHasBeenSet = true;
}

bool ModelProviderBasic::ProviderTypeHasBeenSet() const
{
    return m_providerTypeHasBeenSet;
}

