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

#include <tencentcloud/apigateway/v20180808/model/IPStrategyApi.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

IPStrategyApi::IPStrategyApi() :
    m_apiIdHasBeenSet(false),
    m_apiNameHasBeenSet(false),
    m_apiTypeHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_otherIPStrategyIdHasBeenSet(false),
    m_otherEnvironmentNameHasBeenSet(false)
{
}

CoreInternalOutcome IPStrategyApi::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApiId") && !value["ApiId"].IsNull())
    {
        if (!value["ApiId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPStrategyApi.ApiId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiId = string(value["ApiId"].GetString());
        m_apiIdHasBeenSet = true;
    }

    if (value.HasMember("ApiName") && !value["ApiName"].IsNull())
    {
        if (!value["ApiName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPStrategyApi.ApiName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiName = string(value["ApiName"].GetString());
        m_apiNameHasBeenSet = true;
    }

    if (value.HasMember("ApiType") && !value["ApiType"].IsNull())
    {
        if (!value["ApiType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPStrategyApi.ApiType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiType = string(value["ApiType"].GetString());
        m_apiTypeHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPStrategyApi.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPStrategyApi.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("OtherIPStrategyId") && !value["OtherIPStrategyId"].IsNull())
    {
        if (!value["OtherIPStrategyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPStrategyApi.OtherIPStrategyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_otherIPStrategyId = string(value["OtherIPStrategyId"].GetString());
        m_otherIPStrategyIdHasBeenSet = true;
    }

    if (value.HasMember("OtherEnvironmentName") && !value["OtherEnvironmentName"].IsNull())
    {
        if (!value["OtherEnvironmentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPStrategyApi.OtherEnvironmentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_otherEnvironmentName = string(value["OtherEnvironmentName"].GetString());
        m_otherEnvironmentNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IPStrategyApi::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_apiIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiId.c_str(), allocator).Move(), allocator);
    }

    if (m_apiNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiName.c_str(), allocator).Move(), allocator);
    }

    if (m_apiTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiType.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_otherIPStrategyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherIPStrategyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_otherIPStrategyId.c_str(), allocator).Move(), allocator);
    }

    if (m_otherEnvironmentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherEnvironmentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_otherEnvironmentName.c_str(), allocator).Move(), allocator);
    }

}


string IPStrategyApi::GetApiId() const
{
    return m_apiId;
}

void IPStrategyApi::SetApiId(const string& _apiId)
{
    m_apiId = _apiId;
    m_apiIdHasBeenSet = true;
}

bool IPStrategyApi::ApiIdHasBeenSet() const
{
    return m_apiIdHasBeenSet;
}

string IPStrategyApi::GetApiName() const
{
    return m_apiName;
}

void IPStrategyApi::SetApiName(const string& _apiName)
{
    m_apiName = _apiName;
    m_apiNameHasBeenSet = true;
}

bool IPStrategyApi::ApiNameHasBeenSet() const
{
    return m_apiNameHasBeenSet;
}

string IPStrategyApi::GetApiType() const
{
    return m_apiType;
}

void IPStrategyApi::SetApiType(const string& _apiType)
{
    m_apiType = _apiType;
    m_apiTypeHasBeenSet = true;
}

bool IPStrategyApi::ApiTypeHasBeenSet() const
{
    return m_apiTypeHasBeenSet;
}

string IPStrategyApi::GetPath() const
{
    return m_path;
}

void IPStrategyApi::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool IPStrategyApi::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string IPStrategyApi::GetMethod() const
{
    return m_method;
}

void IPStrategyApi::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool IPStrategyApi::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string IPStrategyApi::GetOtherIPStrategyId() const
{
    return m_otherIPStrategyId;
}

void IPStrategyApi::SetOtherIPStrategyId(const string& _otherIPStrategyId)
{
    m_otherIPStrategyId = _otherIPStrategyId;
    m_otherIPStrategyIdHasBeenSet = true;
}

bool IPStrategyApi::OtherIPStrategyIdHasBeenSet() const
{
    return m_otherIPStrategyIdHasBeenSet;
}

string IPStrategyApi::GetOtherEnvironmentName() const
{
    return m_otherEnvironmentName;
}

void IPStrategyApi::SetOtherEnvironmentName(const string& _otherEnvironmentName)
{
    m_otherEnvironmentName = _otherEnvironmentName;
    m_otherEnvironmentNameHasBeenSet = true;
}

bool IPStrategyApi::OtherEnvironmentNameHasBeenSet() const
{
    return m_otherEnvironmentNameHasBeenSet;
}

