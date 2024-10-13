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

#include <tencentcloud/cynosdb/v20190107/model/ProxyVersionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ProxyVersionInfo::ProxyVersionInfo() :
    m_proxyVersionHasBeenSet(false),
    m_proxyVersionTypeHasBeenSet(false)
{
}

CoreInternalOutcome ProxyVersionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProxyVersion") && !value["ProxyVersion"].IsNull())
    {
        if (!value["ProxyVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyVersionInfo.ProxyVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyVersion = string(value["ProxyVersion"].GetString());
        m_proxyVersionHasBeenSet = true;
    }

    if (value.HasMember("ProxyVersionType") && !value["ProxyVersionType"].IsNull())
    {
        if (!value["ProxyVersionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyVersionInfo.ProxyVersionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyVersionType = string(value["ProxyVersionType"].GetString());
        m_proxyVersionTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProxyVersionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_proxyVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyVersionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyVersionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyVersionType.c_str(), allocator).Move(), allocator);
    }

}


string ProxyVersionInfo::GetProxyVersion() const
{
    return m_proxyVersion;
}

void ProxyVersionInfo::SetProxyVersion(const string& _proxyVersion)
{
    m_proxyVersion = _proxyVersion;
    m_proxyVersionHasBeenSet = true;
}

bool ProxyVersionInfo::ProxyVersionHasBeenSet() const
{
    return m_proxyVersionHasBeenSet;
}

string ProxyVersionInfo::GetProxyVersionType() const
{
    return m_proxyVersionType;
}

void ProxyVersionInfo::SetProxyVersionType(const string& _proxyVersionType)
{
    m_proxyVersionType = _proxyVersionType;
    m_proxyVersionTypeHasBeenSet = true;
}

bool ProxyVersionInfo::ProxyVersionTypeHasBeenSet() const
{
    return m_proxyVersionTypeHasBeenSet;
}

