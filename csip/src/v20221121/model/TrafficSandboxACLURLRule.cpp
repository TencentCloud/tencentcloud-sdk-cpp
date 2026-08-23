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

#include <tencentcloud/csip/v20221121/model/TrafficSandboxACLURLRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

TrafficSandboxACLURLRule::TrafficSandboxACLURLRule() :
    m_uRLHasBeenSet(false),
    m_uRLExceptHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_methodHasBeenSet(false)
{
}

CoreInternalOutcome TrafficSandboxACLURLRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("URL") && !value["URL"].IsNull())
    {
        if (!value["URL"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxACLURLRule.URL` is not array type"));

        const rapidjson::Value &tmpValue = value["URL"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_uRL.push_back((*itr).GetString());
        }
        m_uRLHasBeenSet = true;
    }

    if (value.HasMember("URLExcept") && !value["URLExcept"].IsNull())
    {
        if (!value["URLExcept"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxACLURLRule.URLExcept` is not array type"));

        const rapidjson::Value &tmpValue = value["URLExcept"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_uRLExcept.push_back((*itr).GetString());
        }
        m_uRLExceptHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxACLURLRule.Protocol` is not array type"));

        const rapidjson::Value &tmpValue = value["Protocol"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_protocol.push_back((*itr).GetString());
        }
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxACLURLRule.Method` is not array type"));

        const rapidjson::Value &tmpValue = value["Method"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_method.push_back((*itr).GetString());
        }
        m_methodHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrafficSandboxACLURLRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uRLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_uRL.begin(); itr != m_uRL.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_uRLExceptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URLExcept";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_uRLExcept.begin(); itr != m_uRLExcept.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_protocol.begin(); itr != m_protocol.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_method.begin(); itr != m_method.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> TrafficSandboxACLURLRule::GetURL() const
{
    return m_uRL;
}

void TrafficSandboxACLURLRule::SetURL(const vector<string>& _uRL)
{
    m_uRL = _uRL;
    m_uRLHasBeenSet = true;
}

bool TrafficSandboxACLURLRule::URLHasBeenSet() const
{
    return m_uRLHasBeenSet;
}

vector<string> TrafficSandboxACLURLRule::GetURLExcept() const
{
    return m_uRLExcept;
}

void TrafficSandboxACLURLRule::SetURLExcept(const vector<string>& _uRLExcept)
{
    m_uRLExcept = _uRLExcept;
    m_uRLExceptHasBeenSet = true;
}

bool TrafficSandboxACLURLRule::URLExceptHasBeenSet() const
{
    return m_uRLExceptHasBeenSet;
}

vector<string> TrafficSandboxACLURLRule::GetProtocol() const
{
    return m_protocol;
}

void TrafficSandboxACLURLRule::SetProtocol(const vector<string>& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool TrafficSandboxACLURLRule::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

vector<string> TrafficSandboxACLURLRule::GetMethod() const
{
    return m_method;
}

void TrafficSandboxACLURLRule::SetMethod(const vector<string>& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool TrafficSandboxACLURLRule::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

