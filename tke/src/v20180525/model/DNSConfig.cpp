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

#include <tencentcloud/tke/v20180525/model/DNSConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

DNSConfig::DNSConfig() :
    m_nameserversHasBeenSet(false),
    m_optionsHasBeenSet(false),
    m_searchesHasBeenSet(false)
{
}

CoreInternalOutcome DNSConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Nameservers") && !value["Nameservers"].IsNull())
    {
        if (!value["Nameservers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DNSConfig.Nameservers` is not array type"));

        const rapidjson::Value &tmpValue = value["Nameservers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_nameservers.push_back((*itr).GetString());
        }
        m_nameserversHasBeenSet = true;
    }

    if (value.HasMember("Options") && !value["Options"].IsNull())
    {
        if (!value["Options"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DNSConfig.Options` is not array type"));

        const rapidjson::Value &tmpValue = value["Options"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DNSConfigOption item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_options.push_back(item);
        }
        m_optionsHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

void DNSConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameserversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nameservers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nameservers.begin(); itr != m_nameservers.end(); ++itr)
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

        int i=0;
        for (auto itr = m_options.begin(); itr != m_options.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
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

}


vector<string> DNSConfig::GetNameservers() const
{
    return m_nameservers;
}

void DNSConfig::SetNameservers(const vector<string>& _nameservers)
{
    m_nameservers = _nameservers;
    m_nameserversHasBeenSet = true;
}

bool DNSConfig::NameserversHasBeenSet() const
{
    return m_nameserversHasBeenSet;
}

vector<DNSConfigOption> DNSConfig::GetOptions() const
{
    return m_options;
}

void DNSConfig::SetOptions(const vector<DNSConfigOption>& _options)
{
    m_options = _options;
    m_optionsHasBeenSet = true;
}

bool DNSConfig::OptionsHasBeenSet() const
{
    return m_optionsHasBeenSet;
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

