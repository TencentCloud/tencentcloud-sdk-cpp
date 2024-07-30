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

#include <tencentcloud/cdwdoris/v20211228/model/SpecExtra.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

SpecExtra::SpecExtra() :
    m_delShardsHasBeenSet(false),
    m_delHostsHasBeenSet(false)
{
}

CoreInternalOutcome SpecExtra::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DelShards") && !value["DelShards"].IsNull())
    {
        if (!value["DelShards"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecExtra.DelShards` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_delShards = string(value["DelShards"].GetString());
        m_delShardsHasBeenSet = true;
    }

    if (value.HasMember("DelHosts") && !value["DelHosts"].IsNull())
    {
        if (!value["DelHosts"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecExtra.DelHosts` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_delHosts = string(value["DelHosts"].GetString());
        m_delHostsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpecExtra::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_delShardsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelShards";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_delShards.c_str(), allocator).Move(), allocator);
    }

    if (m_delHostsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelHosts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_delHosts.c_str(), allocator).Move(), allocator);
    }

}


string SpecExtra::GetDelShards() const
{
    return m_delShards;
}

void SpecExtra::SetDelShards(const string& _delShards)
{
    m_delShards = _delShards;
    m_delShardsHasBeenSet = true;
}

bool SpecExtra::DelShardsHasBeenSet() const
{
    return m_delShardsHasBeenSet;
}

string SpecExtra::GetDelHosts() const
{
    return m_delHosts;
}

void SpecExtra::SetDelHosts(const string& _delHosts)
{
    m_delHosts = _delHosts;
    m_delHostsHasBeenSet = true;
}

bool SpecExtra::DelHostsHasBeenSet() const
{
    return m_delHostsHasBeenSet;
}

