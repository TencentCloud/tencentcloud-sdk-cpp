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

#include <tencentcloud/dbdc/v20201029/model/CreateDBCustomDisasterRecoverGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbdc::V20201029::Model;
using namespace std;

CreateDBCustomDisasterRecoverGroupRequest::CreateDBCustomDisasterRecoverGroupRequest() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_strategyHasBeenSet(false),
    m_affinityHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

string CreateDBCustomDisasterRecoverGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Strategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_strategy.c_str(), allocator).Move(), allocator);
    }

    if (m_affinityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Affinity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_affinity, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDBCustomDisasterRecoverGroupRequest::GetName() const
{
    return m_name;
}

void CreateDBCustomDisasterRecoverGroupRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateDBCustomDisasterRecoverGroupRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateDBCustomDisasterRecoverGroupRequest::GetType() const
{
    return m_type;
}

void CreateDBCustomDisasterRecoverGroupRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateDBCustomDisasterRecoverGroupRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateDBCustomDisasterRecoverGroupRequest::GetStrategy() const
{
    return m_strategy;
}

void CreateDBCustomDisasterRecoverGroupRequest::SetStrategy(const string& _strategy)
{
    m_strategy = _strategy;
    m_strategyHasBeenSet = true;
}

bool CreateDBCustomDisasterRecoverGroupRequest::StrategyHasBeenSet() const
{
    return m_strategyHasBeenSet;
}

int64_t CreateDBCustomDisasterRecoverGroupRequest::GetAffinity() const
{
    return m_affinity;
}

void CreateDBCustomDisasterRecoverGroupRequest::SetAffinity(const int64_t& _affinity)
{
    m_affinity = _affinity;
    m_affinityHasBeenSet = true;
}

bool CreateDBCustomDisasterRecoverGroupRequest::AffinityHasBeenSet() const
{
    return m_affinityHasBeenSet;
}

vector<Tag> CreateDBCustomDisasterRecoverGroupRequest::GetTags() const
{
    return m_tags;
}

void CreateDBCustomDisasterRecoverGroupRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateDBCustomDisasterRecoverGroupRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateDBCustomDisasterRecoverGroupRequest::GetClientToken() const
{
    return m_clientToken;
}

void CreateDBCustomDisasterRecoverGroupRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool CreateDBCustomDisasterRecoverGroupRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}


