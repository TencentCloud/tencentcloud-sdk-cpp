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

#include <tencentcloud/oceanus/v20190422/model/Connectors.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

Connectors::Connectors() :
    m_connectionMethodHasBeenSet(false),
    m_connectorHasBeenSet(false),
    m_existedHasBeenSet(false)
{
}

CoreInternalOutcome Connectors::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConnectionMethod") && !value["ConnectionMethod"].IsNull())
    {
        if (!value["ConnectionMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Connectors.ConnectionMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectionMethod = string(value["ConnectionMethod"].GetString());
        m_connectionMethodHasBeenSet = true;
    }

    if (value.HasMember("Connector") && !value["Connector"].IsNull())
    {
        if (!value["Connector"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Connectors.Connector` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connector = string(value["Connector"].GetString());
        m_connectorHasBeenSet = true;
    }

    if (value.HasMember("Existed") && !value["Existed"].IsNull())
    {
        if (!value["Existed"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Connectors.Existed` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_existed = value["Existed"].GetBool();
        m_existedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Connectors::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_connectionMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectionMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_connectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Connector";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connector.c_str(), allocator).Move(), allocator);
    }

    if (m_existedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Existed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_existed, allocator);
    }

}


string Connectors::GetConnectionMethod() const
{
    return m_connectionMethod;
}

void Connectors::SetConnectionMethod(const string& _connectionMethod)
{
    m_connectionMethod = _connectionMethod;
    m_connectionMethodHasBeenSet = true;
}

bool Connectors::ConnectionMethodHasBeenSet() const
{
    return m_connectionMethodHasBeenSet;
}

string Connectors::GetConnector() const
{
    return m_connector;
}

void Connectors::SetConnector(const string& _connector)
{
    m_connector = _connector;
    m_connectorHasBeenSet = true;
}

bool Connectors::ConnectorHasBeenSet() const
{
    return m_connectorHasBeenSet;
}

bool Connectors::GetExisted() const
{
    return m_existed;
}

void Connectors::SetExisted(const bool& _existed)
{
    m_existed = _existed;
    m_existedHasBeenSet = true;
}

bool Connectors::ExistedHasBeenSet() const
{
    return m_existedHasBeenSet;
}

