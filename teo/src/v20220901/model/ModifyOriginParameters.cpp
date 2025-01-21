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

#include <tencentcloud/teo/v20220901/model/ModifyOriginParameters.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ModifyOriginParameters::ModifyOriginParameters() :
    m_originTypeHasBeenSet(false),
    m_originHasBeenSet(false),
    m_originProtocolHasBeenSet(false),
    m_hTTPOriginPortHasBeenSet(false),
    m_hTTPSOriginPortHasBeenSet(false),
    m_privateAccessHasBeenSet(false),
    m_privateParametersHasBeenSet(false)
{
}

CoreInternalOutcome ModifyOriginParameters::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OriginType") && !value["OriginType"].IsNull())
    {
        if (!value["OriginType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyOriginParameters.OriginType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originType = string(value["OriginType"].GetString());
        m_originTypeHasBeenSet = true;
    }

    if (value.HasMember("Origin") && !value["Origin"].IsNull())
    {
        if (!value["Origin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyOriginParameters.Origin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_origin = string(value["Origin"].GetString());
        m_originHasBeenSet = true;
    }

    if (value.HasMember("OriginProtocol") && !value["OriginProtocol"].IsNull())
    {
        if (!value["OriginProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyOriginParameters.OriginProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originProtocol = string(value["OriginProtocol"].GetString());
        m_originProtocolHasBeenSet = true;
    }

    if (value.HasMember("HTTPOriginPort") && !value["HTTPOriginPort"].IsNull())
    {
        if (!value["HTTPOriginPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyOriginParameters.HTTPOriginPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hTTPOriginPort = value["HTTPOriginPort"].GetInt64();
        m_hTTPOriginPortHasBeenSet = true;
    }

    if (value.HasMember("HTTPSOriginPort") && !value["HTTPSOriginPort"].IsNull())
    {
        if (!value["HTTPSOriginPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyOriginParameters.HTTPSOriginPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hTTPSOriginPort = value["HTTPSOriginPort"].GetInt64();
        m_hTTPSOriginPortHasBeenSet = true;
    }

    if (value.HasMember("PrivateAccess") && !value["PrivateAccess"].IsNull())
    {
        if (!value["PrivateAccess"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyOriginParameters.PrivateAccess` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateAccess = string(value["PrivateAccess"].GetString());
        m_privateAccessHasBeenSet = true;
    }

    if (value.HasMember("PrivateParameters") && !value["PrivateParameters"].IsNull())
    {
        if (!value["PrivateParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyOriginParameters.PrivateParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_privateParameters.Deserialize(value["PrivateParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_privateParametersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifyOriginParameters::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_originTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originType.c_str(), allocator).Move(), allocator);
    }

    if (m_originHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Origin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_origin.c_str(), allocator).Move(), allocator);
    }

    if (m_originProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_hTTPOriginPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HTTPOriginPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hTTPOriginPort, allocator);
    }

    if (m_hTTPSOriginPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HTTPSOriginPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hTTPSOriginPort, allocator);
    }

    if (m_privateAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateAccess.c_str(), allocator).Move(), allocator);
    }

    if (m_privateParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_privateParameters.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ModifyOriginParameters::GetOriginType() const
{
    return m_originType;
}

void ModifyOriginParameters::SetOriginType(const string& _originType)
{
    m_originType = _originType;
    m_originTypeHasBeenSet = true;
}

bool ModifyOriginParameters::OriginTypeHasBeenSet() const
{
    return m_originTypeHasBeenSet;
}

string ModifyOriginParameters::GetOrigin() const
{
    return m_origin;
}

void ModifyOriginParameters::SetOrigin(const string& _origin)
{
    m_origin = _origin;
    m_originHasBeenSet = true;
}

bool ModifyOriginParameters::OriginHasBeenSet() const
{
    return m_originHasBeenSet;
}

string ModifyOriginParameters::GetOriginProtocol() const
{
    return m_originProtocol;
}

void ModifyOriginParameters::SetOriginProtocol(const string& _originProtocol)
{
    m_originProtocol = _originProtocol;
    m_originProtocolHasBeenSet = true;
}

bool ModifyOriginParameters::OriginProtocolHasBeenSet() const
{
    return m_originProtocolHasBeenSet;
}

int64_t ModifyOriginParameters::GetHTTPOriginPort() const
{
    return m_hTTPOriginPort;
}

void ModifyOriginParameters::SetHTTPOriginPort(const int64_t& _hTTPOriginPort)
{
    m_hTTPOriginPort = _hTTPOriginPort;
    m_hTTPOriginPortHasBeenSet = true;
}

bool ModifyOriginParameters::HTTPOriginPortHasBeenSet() const
{
    return m_hTTPOriginPortHasBeenSet;
}

int64_t ModifyOriginParameters::GetHTTPSOriginPort() const
{
    return m_hTTPSOriginPort;
}

void ModifyOriginParameters::SetHTTPSOriginPort(const int64_t& _hTTPSOriginPort)
{
    m_hTTPSOriginPort = _hTTPSOriginPort;
    m_hTTPSOriginPortHasBeenSet = true;
}

bool ModifyOriginParameters::HTTPSOriginPortHasBeenSet() const
{
    return m_hTTPSOriginPortHasBeenSet;
}

string ModifyOriginParameters::GetPrivateAccess() const
{
    return m_privateAccess;
}

void ModifyOriginParameters::SetPrivateAccess(const string& _privateAccess)
{
    m_privateAccess = _privateAccess;
    m_privateAccessHasBeenSet = true;
}

bool ModifyOriginParameters::PrivateAccessHasBeenSet() const
{
    return m_privateAccessHasBeenSet;
}

OriginPrivateParameters ModifyOriginParameters::GetPrivateParameters() const
{
    return m_privateParameters;
}

void ModifyOriginParameters::SetPrivateParameters(const OriginPrivateParameters& _privateParameters)
{
    m_privateParameters = _privateParameters;
    m_privateParametersHasBeenSet = true;
}

bool ModifyOriginParameters::PrivateParametersHasBeenSet() const
{
    return m_privateParametersHasBeenSet;
}

