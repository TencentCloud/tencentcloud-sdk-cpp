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

#include <tencentcloud/antiddos/v20200309/model/ProxyTypeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

ProxyTypeInfo::ProxyTypeInfo() :
    m_proxyPortsHasBeenSet(false),
    m_proxyTypeHasBeenSet(false)
{
}

CoreInternalOutcome ProxyTypeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProxyPorts") && !value["ProxyPorts"].IsNull())
    {
        if (!value["ProxyPorts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProxyTypeInfo.ProxyPorts` is not array type"));

        const rapidjson::Value &tmpValue = value["ProxyPorts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_proxyPorts.push_back((*itr).GetInt64());
        }
        m_proxyPortsHasBeenSet = true;
    }

    if (value.HasMember("ProxyType") && !value["ProxyType"].IsNull())
    {
        if (!value["ProxyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyTypeInfo.ProxyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyType = string(value["ProxyType"].GetString());
        m_proxyTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProxyTypeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_proxyPortsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyPorts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_proxyPorts.begin(); itr != m_proxyPorts.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_proxyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyType.c_str(), allocator).Move(), allocator);
    }

}


vector<int64_t> ProxyTypeInfo::GetProxyPorts() const
{
    return m_proxyPorts;
}

void ProxyTypeInfo::SetProxyPorts(const vector<int64_t>& _proxyPorts)
{
    m_proxyPorts = _proxyPorts;
    m_proxyPortsHasBeenSet = true;
}

bool ProxyTypeInfo::ProxyPortsHasBeenSet() const
{
    return m_proxyPortsHasBeenSet;
}

string ProxyTypeInfo::GetProxyType() const
{
    return m_proxyType;
}

void ProxyTypeInfo::SetProxyType(const string& _proxyType)
{
    m_proxyType = _proxyType;
    m_proxyTypeHasBeenSet = true;
}

bool ProxyTypeInfo::ProxyTypeHasBeenSet() const
{
    return m_proxyTypeHasBeenSet;
}

