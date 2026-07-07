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

#include <tencentcloud/clb/v20180317/model/ProviderItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ProviderItem::ProviderItem() :
    m_providerHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_protocolsHasBeenSet(false),
    m_englishDisplayNameHasBeenSet(false)
{
}

CoreInternalOutcome ProviderItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Provider") && !value["Provider"].IsNull())
    {
        if (!value["Provider"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderItem.Provider` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provider = string(value["Provider"].GetString());
        m_providerHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderItem.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("Protocols") && !value["Protocols"].IsNull())
    {
        if (!value["Protocols"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProviderItem.Protocols` is not array type"));

        const rapidjson::Value &tmpValue = value["Protocols"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_protocols.push_back((*itr).GetString());
        }
        m_protocolsHasBeenSet = true;
    }

    if (value.HasMember("EnglishDisplayName") && !value["EnglishDisplayName"].IsNull())
    {
        if (!value["EnglishDisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderItem.EnglishDisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_englishDisplayName = string(value["EnglishDisplayName"].GetString());
        m_englishDisplayNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProviderItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_providerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Provider";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_provider.c_str(), allocator).Move(), allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocols";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_protocols.begin(); itr != m_protocols.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_englishDisplayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnglishDisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_englishDisplayName.c_str(), allocator).Move(), allocator);
    }

}


string ProviderItem::GetProvider() const
{
    return m_provider;
}

void ProviderItem::SetProvider(const string& _provider)
{
    m_provider = _provider;
    m_providerHasBeenSet = true;
}

bool ProviderItem::ProviderHasBeenSet() const
{
    return m_providerHasBeenSet;
}

string ProviderItem::GetDisplayName() const
{
    return m_displayName;
}

void ProviderItem::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool ProviderItem::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

vector<string> ProviderItem::GetProtocols() const
{
    return m_protocols;
}

void ProviderItem::SetProtocols(const vector<string>& _protocols)
{
    m_protocols = _protocols;
    m_protocolsHasBeenSet = true;
}

bool ProviderItem::ProtocolsHasBeenSet() const
{
    return m_protocolsHasBeenSet;
}

string ProviderItem::GetEnglishDisplayName() const
{
    return m_englishDisplayName;
}

void ProviderItem::SetEnglishDisplayName(const string& _englishDisplayName)
{
    m_englishDisplayName = _englishDisplayName;
    m_englishDisplayNameHasBeenSet = true;
}

bool ProviderItem::EnglishDisplayNameHasBeenSet() const
{
    return m_englishDisplayNameHasBeenSet;
}

