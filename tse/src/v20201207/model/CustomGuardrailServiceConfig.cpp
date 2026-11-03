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

#include <tencentcloud/tse/v20201207/model/CustomGuardrailServiceConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CustomGuardrailServiceConfig::CustomGuardrailServiceConfig() :
    m_addressModeHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_sSLVerifyHasBeenSet(false),
    m_queryPassthroughEnabledHasBeenSet(false),
    m_headerAllowListHasBeenSet(false)
{
}

CoreInternalOutcome CustomGuardrailServiceConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AddressMode") && !value["AddressMode"].IsNull())
    {
        if (!value["AddressMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailServiceConfig.AddressMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressMode = string(value["AddressMode"].GetString());
        m_addressModeHasBeenSet = true;
    }

    if (value.HasMember("ServiceId") && !value["ServiceId"].IsNull())
    {
        if (!value["ServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailServiceConfig.ServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = string(value["ServiceId"].GetString());
        m_serviceIdHasBeenSet = true;
    }

    if (value.HasMember("Endpoint") && !value["Endpoint"].IsNull())
    {
        if (!value["Endpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailServiceConfig.Endpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpoint = string(value["Endpoint"].GetString());
        m_endpointHasBeenSet = true;
    }

    if (value.HasMember("SSLVerify") && !value["SSLVerify"].IsNull())
    {
        if (!value["SSLVerify"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailServiceConfig.SSLVerify` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_sSLVerify = value["SSLVerify"].GetBool();
        m_sSLVerifyHasBeenSet = true;
    }

    if (value.HasMember("QueryPassthroughEnabled") && !value["QueryPassthroughEnabled"].IsNull())
    {
        if (!value["QueryPassthroughEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailServiceConfig.QueryPassthroughEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_queryPassthroughEnabled = value["QueryPassthroughEnabled"].GetBool();
        m_queryPassthroughEnabledHasBeenSet = true;
    }

    if (value.HasMember("HeaderAllowList") && !value["HeaderAllowList"].IsNull())
    {
        if (!value["HeaderAllowList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailServiceConfig.HeaderAllowList` is not array type"));

        const rapidjson::Value &tmpValue = value["HeaderAllowList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_headerAllowList.push_back((*itr).GetString());
        }
        m_headerAllowListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomGuardrailServiceConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_addressModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressMode.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_sSLVerifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSLVerify";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sSLVerify, allocator);
    }

    if (m_queryPassthroughEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryPassthroughEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queryPassthroughEnabled, allocator);
    }

    if (m_headerAllowListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeaderAllowList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_headerAllowList.begin(); itr != m_headerAllowList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string CustomGuardrailServiceConfig::GetAddressMode() const
{
    return m_addressMode;
}

void CustomGuardrailServiceConfig::SetAddressMode(const string& _addressMode)
{
    m_addressMode = _addressMode;
    m_addressModeHasBeenSet = true;
}

bool CustomGuardrailServiceConfig::AddressModeHasBeenSet() const
{
    return m_addressModeHasBeenSet;
}

string CustomGuardrailServiceConfig::GetServiceId() const
{
    return m_serviceId;
}

void CustomGuardrailServiceConfig::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool CustomGuardrailServiceConfig::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string CustomGuardrailServiceConfig::GetEndpoint() const
{
    return m_endpoint;
}

void CustomGuardrailServiceConfig::SetEndpoint(const string& _endpoint)
{
    m_endpoint = _endpoint;
    m_endpointHasBeenSet = true;
}

bool CustomGuardrailServiceConfig::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

bool CustomGuardrailServiceConfig::GetSSLVerify() const
{
    return m_sSLVerify;
}

void CustomGuardrailServiceConfig::SetSSLVerify(const bool& _sSLVerify)
{
    m_sSLVerify = _sSLVerify;
    m_sSLVerifyHasBeenSet = true;
}

bool CustomGuardrailServiceConfig::SSLVerifyHasBeenSet() const
{
    return m_sSLVerifyHasBeenSet;
}

bool CustomGuardrailServiceConfig::GetQueryPassthroughEnabled() const
{
    return m_queryPassthroughEnabled;
}

void CustomGuardrailServiceConfig::SetQueryPassthroughEnabled(const bool& _queryPassthroughEnabled)
{
    m_queryPassthroughEnabled = _queryPassthroughEnabled;
    m_queryPassthroughEnabledHasBeenSet = true;
}

bool CustomGuardrailServiceConfig::QueryPassthroughEnabledHasBeenSet() const
{
    return m_queryPassthroughEnabledHasBeenSet;
}

vector<string> CustomGuardrailServiceConfig::GetHeaderAllowList() const
{
    return m_headerAllowList;
}

void CustomGuardrailServiceConfig::SetHeaderAllowList(const vector<string>& _headerAllowList)
{
    m_headerAllowList = _headerAllowList;
    m_headerAllowListHasBeenSet = true;
}

bool CustomGuardrailServiceConfig::HeaderAllowListHasBeenSet() const
{
    return m_headerAllowListHasBeenSet;
}

