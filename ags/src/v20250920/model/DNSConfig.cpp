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

#include <tencentcloud/ags/v20250920/model/DNSConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

DNSConfig::DNSConfig() :
    m_serversHasBeenSet(false),
    m_searchesHasBeenSet(false),
    m_optionsHasBeenSet(false)
{
}

CoreInternalOutcome DNSConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Servers") && !value["Servers"].IsNull())
    {
        if (!value["Servers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DNSConfig.Servers` is not array type"));

        const rapidjson::Value &tmpValue = value["Servers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_servers.push_back((*itr).GetString());
        }
        m_serversHasBeenSet = true;
    }

    if (value.HasMember("Searches") && !value["Searches"].IsNull())
    {
        if (!value["Searches"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DNSConfig.Searches` is not array type"));

        const rapidjson::Value &tmpValue = value["Searches"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_searches.push_back((*itr).GetString());
        }
        m_searchesHasBeenSet = true;
    }

    if (value.HasMember("Options") && !value["Options"].IsNull())
    {
        if (!value["Options"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DNSConfig.Options` is not array type"));

        const rapidjson::Value &tmpValue = value["Options"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_options.push_back((*itr).GetString());
        }
        m_optionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DNSConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Servers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_servers.begin(); itr != m_servers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_searchesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Searches";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_searches.begin(); itr != m_searches.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_optionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Options";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_options.begin(); itr != m_options.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> DNSConfig::GetServers() const
{
    return m_servers;
}

void DNSConfig::SetServers(const vector<string>& _servers)
{
    m_servers = _servers;
    m_serversHasBeenSet = true;
}

bool DNSConfig::ServersHasBeenSet() const
{
    return m_serversHasBeenSet;
}

vector<string> DNSConfig::GetSearches() const
{
    return m_searches;
}

void DNSConfig::SetSearches(const vector<string>& _searches)
{
    m_searches = _searches;
    m_searchesHasBeenSet = true;
}

bool DNSConfig::SearchesHasBeenSet() const
{
    return m_searchesHasBeenSet;
}

vector<string> DNSConfig::GetOptions() const
{
    return m_options;
}

void DNSConfig::SetOptions(const vector<string>& _options)
{
    m_options = _options;
    m_optionsHasBeenSet = true;
}

bool DNSConfig::OptionsHasBeenSet() const
{
    return m_optionsHasBeenSet;
}

