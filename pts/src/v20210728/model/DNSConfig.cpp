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

#include <tencentcloud/pts/v20210728/model/DNSConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

DNSConfig::DNSConfig() :
    m_nameserversHasBeenSet(false)
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

