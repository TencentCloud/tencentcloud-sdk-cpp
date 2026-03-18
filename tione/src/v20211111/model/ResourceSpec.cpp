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

#include <tencentcloud/tione/v20211111/model/ResourceSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

ResourceSpec::ResourceSpec() :
    m_specAliasHasBeenSet(false),
    m_specIdHasBeenSet(false),
    m_specNameHasBeenSet(false)
{
}

CoreInternalOutcome ResourceSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SpecAlias") && !value["SpecAlias"].IsNull())
    {
        if (!value["SpecAlias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSpec.SpecAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specAlias = string(value["SpecAlias"].GetString());
        m_specAliasHasBeenSet = true;
    }

    if (value.HasMember("SpecId") && !value["SpecId"].IsNull())
    {
        if (!value["SpecId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSpec.SpecId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specId = string(value["SpecId"].GetString());
        m_specIdHasBeenSet = true;
    }

    if (value.HasMember("SpecName") && !value["SpecName"].IsNull())
    {
        if (!value["SpecName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSpec.SpecName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specName = string(value["SpecName"].GetString());
        m_specNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_specAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_specIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specId.c_str(), allocator).Move(), allocator);
    }

    if (m_specNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specName.c_str(), allocator).Move(), allocator);
    }

}


string ResourceSpec::GetSpecAlias() const
{
    return m_specAlias;
}

void ResourceSpec::SetSpecAlias(const string& _specAlias)
{
    m_specAlias = _specAlias;
    m_specAliasHasBeenSet = true;
}

bool ResourceSpec::SpecAliasHasBeenSet() const
{
    return m_specAliasHasBeenSet;
}

string ResourceSpec::GetSpecId() const
{
    return m_specId;
}

void ResourceSpec::SetSpecId(const string& _specId)
{
    m_specId = _specId;
    m_specIdHasBeenSet = true;
}

bool ResourceSpec::SpecIdHasBeenSet() const
{
    return m_specIdHasBeenSet;
}

string ResourceSpec::GetSpecName() const
{
    return m_specName;
}

void ResourceSpec::SetSpecName(const string& _specName)
{
    m_specName = _specName;
    m_specNameHasBeenSet = true;
}

bool ResourceSpec::SpecNameHasBeenSet() const
{
    return m_specNameHasBeenSet;
}

