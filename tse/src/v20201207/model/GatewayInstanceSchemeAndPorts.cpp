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

#include <tencentcloud/tse/v20201207/model/GatewayInstanceSchemeAndPorts.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

GatewayInstanceSchemeAndPorts::GatewayInstanceSchemeAndPorts() :
    m_schemeHasBeenSet(false),
    m_portListHasBeenSet(false)
{
}

CoreInternalOutcome GatewayInstanceSchemeAndPorts::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Scheme") && !value["Scheme"].IsNull())
    {
        if (!value["Scheme"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayInstanceSchemeAndPorts.Scheme` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheme = string(value["Scheme"].GetString());
        m_schemeHasBeenSet = true;
    }

    if (value.HasMember("PortList") && !value["PortList"].IsNull())
    {
        if (!value["PortList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GatewayInstanceSchemeAndPorts.PortList` is not array type"));

        const rapidjson::Value &tmpValue = value["PortList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_portList.push_back((*itr).GetUint64());
        }
        m_portListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GatewayInstanceSchemeAndPorts::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_schemeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scheme";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheme.c_str(), allocator).Move(), allocator);
    }

    if (m_portListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_portList.begin(); itr != m_portList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

}


string GatewayInstanceSchemeAndPorts::GetScheme() const
{
    return m_scheme;
}

void GatewayInstanceSchemeAndPorts::SetScheme(const string& _scheme)
{
    m_scheme = _scheme;
    m_schemeHasBeenSet = true;
}

bool GatewayInstanceSchemeAndPorts::SchemeHasBeenSet() const
{
    return m_schemeHasBeenSet;
}

vector<uint64_t> GatewayInstanceSchemeAndPorts::GetPortList() const
{
    return m_portList;
}

void GatewayInstanceSchemeAndPorts::SetPortList(const vector<uint64_t>& _portList)
{
    m_portList = _portList;
    m_portListHasBeenSet = true;
}

bool GatewayInstanceSchemeAndPorts::PortListHasBeenSet() const
{
    return m_portListHasBeenSet;
}

