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

#include <tencentcloud/cynosdb/v20190107/model/ProxyZone.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ProxyZone::ProxyZone() :
    m_proxyNodeZoneHasBeenSet(false),
    m_proxyNodeCountHasBeenSet(false)
{
}

CoreInternalOutcome ProxyZone::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProxyNodeZone") && !value["ProxyNodeZone"].IsNull())
    {
        if (!value["ProxyNodeZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyZone.ProxyNodeZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyNodeZone = string(value["ProxyNodeZone"].GetString());
        m_proxyNodeZoneHasBeenSet = true;
    }

    if (value.HasMember("ProxyNodeCount") && !value["ProxyNodeCount"].IsNull())
    {
        if (!value["ProxyNodeCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyZone.ProxyNodeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_proxyNodeCount = value["ProxyNodeCount"].GetInt64();
        m_proxyNodeCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProxyZone::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_proxyNodeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyNodeZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyNodeZone.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyNodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyNodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_proxyNodeCount, allocator);
    }

}


string ProxyZone::GetProxyNodeZone() const
{
    return m_proxyNodeZone;
}

void ProxyZone::SetProxyNodeZone(const string& _proxyNodeZone)
{
    m_proxyNodeZone = _proxyNodeZone;
    m_proxyNodeZoneHasBeenSet = true;
}

bool ProxyZone::ProxyNodeZoneHasBeenSet() const
{
    return m_proxyNodeZoneHasBeenSet;
}

int64_t ProxyZone::GetProxyNodeCount() const
{
    return m_proxyNodeCount;
}

void ProxyZone::SetProxyNodeCount(const int64_t& _proxyNodeCount)
{
    m_proxyNodeCount = _proxyNodeCount;
    m_proxyNodeCountHasBeenSet = true;
}

bool ProxyZone::ProxyNodeCountHasBeenSet() const
{
    return m_proxyNodeCountHasBeenSet;
}

