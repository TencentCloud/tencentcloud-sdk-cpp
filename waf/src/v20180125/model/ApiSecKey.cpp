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

#include <tencentcloud/waf/v20180125/model/ApiSecKey.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ApiSecKey::ApiSecKey() :
    m_apiNameHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_methodHasBeenSet(false)
{
}

CoreInternalOutcome ApiSecKey::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApiName") && !value["ApiName"].IsNull())
    {
        if (!value["ApiName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecKey.ApiName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiName = string(value["ApiName"].GetString());
        m_apiNameHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecKey.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecKey.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiSecKey::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_apiNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiName.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

}


string ApiSecKey::GetApiName() const
{
    return m_apiName;
}

void ApiSecKey::SetApiName(const string& _apiName)
{
    m_apiName = _apiName;
    m_apiNameHasBeenSet = true;
}

bool ApiSecKey::ApiNameHasBeenSet() const
{
    return m_apiNameHasBeenSet;
}

string ApiSecKey::GetDomain() const
{
    return m_domain;
}

void ApiSecKey::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ApiSecKey::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ApiSecKey::GetMethod() const
{
    return m_method;
}

void ApiSecKey::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool ApiSecKey::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

