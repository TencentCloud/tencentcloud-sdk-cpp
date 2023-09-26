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

#include <tencentcloud/teo/v20220901/model/NsVerification.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

NsVerification::NsVerification() :
    m_nameServersHasBeenSet(false)
{
}

CoreInternalOutcome NsVerification::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NameServers") && !value["NameServers"].IsNull())
    {
        if (!value["NameServers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NsVerification.NameServers` is not array type"));

        const rapidjson::Value &tmpValue = value["NameServers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_nameServers.push_back((*itr).GetString());
        }
        m_nameServersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NsVerification::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameServersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameServers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nameServers.begin(); itr != m_nameServers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> NsVerification::GetNameServers() const
{
    return m_nameServers;
}

void NsVerification::SetNameServers(const vector<string>& _nameServers)
{
    m_nameServers = _nameServers;
    m_nameServersHasBeenSet = true;
}

bool NsVerification::NameServersHasBeenSet() const
{
    return m_nameServersHasBeenSet;
}

