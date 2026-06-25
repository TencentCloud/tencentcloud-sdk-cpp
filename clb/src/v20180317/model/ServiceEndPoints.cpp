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

#include <tencentcloud/clb/v20180317/model/ServiceEndPoints.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ServiceEndPoints::ServiceEndPoints() :
    m_certIdHasBeenSet(false),
    m_portHasBeenSet(false),
    m_schemaHasBeenSet(false)
{
}

CoreInternalOutcome ServiceEndPoints::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CertId") && !value["CertId"].IsNull())
    {
        if (!value["CertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceEndPoints.CertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certId = string(value["CertId"].GetString());
        m_certIdHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceEndPoints.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Schema") && !value["Schema"].IsNull())
    {
        if (!value["Schema"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceEndPoints.Schema` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schema = string(value["Schema"].GetString());
        m_schemaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceEndPoints::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certId.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_schemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Schema";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schema.c_str(), allocator).Move(), allocator);
    }

}


string ServiceEndPoints::GetCertId() const
{
    return m_certId;
}

void ServiceEndPoints::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool ServiceEndPoints::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

uint64_t ServiceEndPoints::GetPort() const
{
    return m_port;
}

void ServiceEndPoints::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool ServiceEndPoints::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string ServiceEndPoints::GetSchema() const
{
    return m_schema;
}

void ServiceEndPoints::SetSchema(const string& _schema)
{
    m_schema = _schema;
    m_schemaHasBeenSet = true;
}

bool ServiceEndPoints::SchemaHasBeenSet() const
{
    return m_schemaHasBeenSet;
}

