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

#include <tencentcloud/csip/v20221121/model/DspmIpCount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmIpCount::DspmIpCount() :
    m_ipCountHasBeenSet(false),
    m_unmarkedPublicIpCountHasBeenSet(false),
    m_privateIpCountHasBeenSet(false)
{
}

CoreInternalOutcome DspmIpCount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IpCount") && !value["IpCount"].IsNull())
    {
        if (!value["IpCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIpCount.IpCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ipCount = value["IpCount"].GetInt64();
        m_ipCountHasBeenSet = true;
    }

    if (value.HasMember("UnmarkedPublicIpCount") && !value["UnmarkedPublicIpCount"].IsNull())
    {
        if (!value["UnmarkedPublicIpCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIpCount.UnmarkedPublicIpCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unmarkedPublicIpCount = value["UnmarkedPublicIpCount"].GetInt64();
        m_unmarkedPublicIpCountHasBeenSet = true;
    }

    if (value.HasMember("PrivateIpCount") && !value["PrivateIpCount"].IsNull())
    {
        if (!value["PrivateIpCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIpCount.PrivateIpCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_privateIpCount = value["PrivateIpCount"].GetInt64();
        m_privateIpCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmIpCount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ipCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipCount, allocator);
    }

    if (m_unmarkedPublicIpCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnmarkedPublicIpCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unmarkedPublicIpCount, allocator);
    }

    if (m_privateIpCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIpCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_privateIpCount, allocator);
    }

}


int64_t DspmIpCount::GetIpCount() const
{
    return m_ipCount;
}

void DspmIpCount::SetIpCount(const int64_t& _ipCount)
{
    m_ipCount = _ipCount;
    m_ipCountHasBeenSet = true;
}

bool DspmIpCount::IpCountHasBeenSet() const
{
    return m_ipCountHasBeenSet;
}

int64_t DspmIpCount::GetUnmarkedPublicIpCount() const
{
    return m_unmarkedPublicIpCount;
}

void DspmIpCount::SetUnmarkedPublicIpCount(const int64_t& _unmarkedPublicIpCount)
{
    m_unmarkedPublicIpCount = _unmarkedPublicIpCount;
    m_unmarkedPublicIpCountHasBeenSet = true;
}

bool DspmIpCount::UnmarkedPublicIpCountHasBeenSet() const
{
    return m_unmarkedPublicIpCountHasBeenSet;
}

int64_t DspmIpCount::GetPrivateIpCount() const
{
    return m_privateIpCount;
}

void DspmIpCount::SetPrivateIpCount(const int64_t& _privateIpCount)
{
    m_privateIpCount = _privateIpCount;
    m_privateIpCountHasBeenSet = true;
}

bool DspmIpCount::PrivateIpCountHasBeenSet() const
{
    return m_privateIpCountHasBeenSet;
}

