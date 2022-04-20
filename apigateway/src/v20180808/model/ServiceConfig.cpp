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

#include <tencentcloud/apigateway/v20180808/model/ServiceConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

ServiceConfig::ServiceConfig() :
    m_productHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_upstreamIdHasBeenSet(false),
    m_cosConfigHasBeenSet(false)
{
}

CoreInternalOutcome ServiceConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Product") && !value["Product"].IsNull())
    {
        if (!value["Product"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceConfig.Product` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_product = string(value["Product"].GetString());
        m_productHasBeenSet = true;
    }

    if (value.HasMember("UniqVpcId") && !value["UniqVpcId"].IsNull())
    {
        if (!value["UniqVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceConfig.UniqVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqVpcId = string(value["UniqVpcId"].GetString());
        m_uniqVpcIdHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceConfig.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceConfig.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceConfig.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("UpstreamId") && !value["UpstreamId"].IsNull())
    {
        if (!value["UpstreamId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceConfig.UpstreamId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamId = string(value["UpstreamId"].GetString());
        m_upstreamIdHasBeenSet = true;
    }

    if (value.HasMember("CosConfig") && !value["CosConfig"].IsNull())
    {
        if (!value["CosConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceConfig.CosConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cosConfig.Deserialize(value["CosConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cosConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
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

    if (m_upstreamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upstreamId.c_str(), allocator).Move(), allocator);
    }

    if (m_cosConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cosConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ServiceConfig::GetProduct() const
{
    return m_product;
}

void ServiceConfig::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool ServiceConfig::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

string ServiceConfig::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void ServiceConfig::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool ServiceConfig::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

string ServiceConfig::GetUrl() const
{
    return m_url;
}

void ServiceConfig::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool ServiceConfig::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string ServiceConfig::GetPath() const
{
    return m_path;
}

void ServiceConfig::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool ServiceConfig::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string ServiceConfig::GetMethod() const
{
    return m_method;
}

void ServiceConfig::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool ServiceConfig::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string ServiceConfig::GetUpstreamId() const
{
    return m_upstreamId;
}

void ServiceConfig::SetUpstreamId(const string& _upstreamId)
{
    m_upstreamId = _upstreamId;
    m_upstreamIdHasBeenSet = true;
}

bool ServiceConfig::UpstreamIdHasBeenSet() const
{
    return m_upstreamIdHasBeenSet;
}

CosConfig ServiceConfig::GetCosConfig() const
{
    return m_cosConfig;
}

void ServiceConfig::SetCosConfig(const CosConfig& _cosConfig)
{
    m_cosConfig = _cosConfig;
    m_cosConfigHasBeenSet = true;
}

bool ServiceConfig::CosConfigHasBeenSet() const
{
    return m_cosConfigHasBeenSet;
}

