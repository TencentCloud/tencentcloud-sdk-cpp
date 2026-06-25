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

#include <tencentcloud/clb/v20180317/model/ModifyModelRouterAttributesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ModifyModelRouterAttributesRequest::ModifyModelRouterAttributesRequest() :
    m_modelRouterIdHasBeenSet(false),
    m_modelRouterNameHasBeenSet(false),
    m_rateLimitConfigHasBeenSet(false),
    m_routerSettingHasBeenSet(false),
    m_certIdHasBeenSet(false)
{
}

string ModifyModelRouterAttributesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modelRouterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelRouterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelRouterId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelRouterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelRouterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelRouterName.c_str(), allocator).Move(), allocator);
    }

    if (m_rateLimitConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RateLimitConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rateLimitConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_routerSettingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouterSetting";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_routerSetting.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyModelRouterAttributesRequest::GetModelRouterId() const
{
    return m_modelRouterId;
}

void ModifyModelRouterAttributesRequest::SetModelRouterId(const string& _modelRouterId)
{
    m_modelRouterId = _modelRouterId;
    m_modelRouterIdHasBeenSet = true;
}

bool ModifyModelRouterAttributesRequest::ModelRouterIdHasBeenSet() const
{
    return m_modelRouterIdHasBeenSet;
}

string ModifyModelRouterAttributesRequest::GetModelRouterName() const
{
    return m_modelRouterName;
}

void ModifyModelRouterAttributesRequest::SetModelRouterName(const string& _modelRouterName)
{
    m_modelRouterName = _modelRouterName;
    m_modelRouterNameHasBeenSet = true;
}

bool ModifyModelRouterAttributesRequest::ModelRouterNameHasBeenSet() const
{
    return m_modelRouterNameHasBeenSet;
}

RateLimitConfigForModelRouter ModifyModelRouterAttributesRequest::GetRateLimitConfig() const
{
    return m_rateLimitConfig;
}

void ModifyModelRouterAttributesRequest::SetRateLimitConfig(const RateLimitConfigForModelRouter& _rateLimitConfig)
{
    m_rateLimitConfig = _rateLimitConfig;
    m_rateLimitConfigHasBeenSet = true;
}

bool ModifyModelRouterAttributesRequest::RateLimitConfigHasBeenSet() const
{
    return m_rateLimitConfigHasBeenSet;
}

RouterSettingWithFallBack ModifyModelRouterAttributesRequest::GetRouterSetting() const
{
    return m_routerSetting;
}

void ModifyModelRouterAttributesRequest::SetRouterSetting(const RouterSettingWithFallBack& _routerSetting)
{
    m_routerSetting = _routerSetting;
    m_routerSettingHasBeenSet = true;
}

bool ModifyModelRouterAttributesRequest::RouterSettingHasBeenSet() const
{
    return m_routerSettingHasBeenSet;
}

string ModifyModelRouterAttributesRequest::GetCertId() const
{
    return m_certId;
}

void ModifyModelRouterAttributesRequest::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool ModifyModelRouterAttributesRequest::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}


