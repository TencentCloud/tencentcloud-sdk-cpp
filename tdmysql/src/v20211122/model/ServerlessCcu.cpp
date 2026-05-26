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

#include <tencentcloud/tdmysql/v20211122/model/ServerlessCcu.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

ServerlessCcu::ServerlessCcu() :
    m_minCcuHasBeenSet(false),
    m_maxCcuHasBeenSet(false)
{
}

CoreInternalOutcome ServerlessCcu::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MinCcu") && !value["MinCcu"].IsNull())
    {
        if (!value["MinCcu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessCcu.MinCcu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minCcu = value["MinCcu"].GetInt64();
        m_minCcuHasBeenSet = true;
    }

    if (value.HasMember("MaxCcu") && !value["MaxCcu"].IsNull())
    {
        if (!value["MaxCcu"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServerlessCcu.MaxCcu` is not array type"));

        const rapidjson::Value &tmpValue = value["MaxCcu"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_maxCcu.push_back((*itr).GetInt64());
        }
        m_maxCcuHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServerlessCcu::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_minCcuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinCcu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minCcu, allocator);
    }

    if (m_maxCcuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxCcu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_maxCcu.begin(); itr != m_maxCcu.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


int64_t ServerlessCcu::GetMinCcu() const
{
    return m_minCcu;
}

void ServerlessCcu::SetMinCcu(const int64_t& _minCcu)
{
    m_minCcu = _minCcu;
    m_minCcuHasBeenSet = true;
}

bool ServerlessCcu::MinCcuHasBeenSet() const
{
    return m_minCcuHasBeenSet;
}

vector<int64_t> ServerlessCcu::GetMaxCcu() const
{
    return m_maxCcu;
}

void ServerlessCcu::SetMaxCcu(const vector<int64_t>& _maxCcu)
{
    m_maxCcu = _maxCcu;
    m_maxCcuHasBeenSet = true;
}

bool ServerlessCcu::MaxCcuHasBeenSet() const
{
    return m_maxCcuHasBeenSet;
}

