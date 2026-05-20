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

#include <tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayLLMModelAPIRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

ModifyCloudNativeAPIGatewayLLMModelAPIRequest::ModifyCloudNativeAPIGatewayLLMModelAPIRequest() :
    m_gatewayIdHasBeenSet(false),
    m_modelAPIIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_basePathHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_listModelServiceIdHasBeenSet(false),
    m_modelServiceRouteHasBeenSet(false),
    m_matchHeadersHasBeenSet(false),
    m_enableCrossServiceFallbackHasBeenSet(false),
    m_crossServiceFallbackConfigHasBeenSet(false)
{
}

string ModifyCloudNativeAPIGatewayLLMModelAPIRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelAPIIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelAPIId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelAPIId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_basePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasePath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_basePath.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_listModelServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListModelServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_listModelServiceId.begin(); itr != m_listModelServiceId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_modelServiceRouteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelServiceRoute";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modelServiceRoute.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_matchHeadersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchHeaders";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_matchHeaders.begin(); itr != m_matchHeaders.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_enableCrossServiceFallbackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableCrossServiceFallback";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableCrossServiceFallback, allocator);
    }

    if (m_crossServiceFallbackConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossServiceFallbackConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_crossServiceFallbackConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCloudNativeAPIGatewayLLMModelAPIRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void ModifyCloudNativeAPIGatewayLLMModelAPIRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayLLMModelAPIRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string ModifyCloudNativeAPIGatewayLLMModelAPIRequest::GetModelAPIId() const
{
    return m_modelAPIId;
}

void ModifyCloudNativeAPIGatewayLLMModelAPIRequest::SetModelAPIId(const string& _modelAPIId)
{
    m_modelAPIId = _modelAPIId;
    m_modelAPIIdHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayLLMModelAPIRequest::ModelAPIIdHasBeenSet() const
{
    return m_modelAPIIdHasBeenSet;
}

string ModifyCloudNativeAPIGatewayLLMModelAPIRequest::GetName() const
{
    return m_name;
}

void ModifyCloudNativeAPIGatewayLLMModelAPIRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayLLMModelAPIRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyCloudNativeAPIGatewayLLMModelAPIRequest::GetBasePath() const
{
    return m_basePath;
}

void ModifyCloudNativeAPIGatewayLLMModelAPIRequest::SetBasePath(const string& _basePath)
{
    m_basePath = _basePath;
    m_basePathHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayLLMModelAPIRequest::BasePathHasBeenSet() const
{
    return m_basePathHasBeenSet;
}

string ModifyCloudNativeAPIGatewayLLMModelAPIRequest::GetDescription() const
{
    return m_description;
}

void ModifyCloudNativeAPIGatewayLLMModelAPIRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayLLMModelAPIRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<string> ModifyCloudNativeAPIGatewayLLMModelAPIRequest::GetListModelServiceId() const
{
    return m_listModelServiceId;
}

void ModifyCloudNativeAPIGatewayLLMModelAPIRequest::SetListModelServiceId(const vector<string>& _listModelServiceId)
{
    m_listModelServiceId = _listModelServiceId;
    m_listModelServiceIdHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayLLMModelAPIRequest::ListModelServiceIdHasBeenSet() const
{
    return m_listModelServiceIdHasBeenSet;
}

CloudNativeAPIGatewayLLMModelServiceRoute ModifyCloudNativeAPIGatewayLLMModelAPIRequest::GetModelServiceRoute() const
{
    return m_modelServiceRoute;
}

void ModifyCloudNativeAPIGatewayLLMModelAPIRequest::SetModelServiceRoute(const CloudNativeAPIGatewayLLMModelServiceRoute& _modelServiceRoute)
{
    m_modelServiceRoute = _modelServiceRoute;
    m_modelServiceRouteHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayLLMModelAPIRequest::ModelServiceRouteHasBeenSet() const
{
    return m_modelServiceRouteHasBeenSet;
}

vector<AIGWKVMatch> ModifyCloudNativeAPIGatewayLLMModelAPIRequest::GetMatchHeaders() const
{
    return m_matchHeaders;
}

void ModifyCloudNativeAPIGatewayLLMModelAPIRequest::SetMatchHeaders(const vector<AIGWKVMatch>& _matchHeaders)
{
    m_matchHeaders = _matchHeaders;
    m_matchHeadersHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayLLMModelAPIRequest::MatchHeadersHasBeenSet() const
{
    return m_matchHeadersHasBeenSet;
}

bool ModifyCloudNativeAPIGatewayLLMModelAPIRequest::GetEnableCrossServiceFallback() const
{
    return m_enableCrossServiceFallback;
}

void ModifyCloudNativeAPIGatewayLLMModelAPIRequest::SetEnableCrossServiceFallback(const bool& _enableCrossServiceFallback)
{
    m_enableCrossServiceFallback = _enableCrossServiceFallback;
    m_enableCrossServiceFallbackHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayLLMModelAPIRequest::EnableCrossServiceFallbackHasBeenSet() const
{
    return m_enableCrossServiceFallbackHasBeenSet;
}

AIGWCrossServiceFallbackConfig ModifyCloudNativeAPIGatewayLLMModelAPIRequest::GetCrossServiceFallbackConfig() const
{
    return m_crossServiceFallbackConfig;
}

void ModifyCloudNativeAPIGatewayLLMModelAPIRequest::SetCrossServiceFallbackConfig(const AIGWCrossServiceFallbackConfig& _crossServiceFallbackConfig)
{
    m_crossServiceFallbackConfig = _crossServiceFallbackConfig;
    m_crossServiceFallbackConfigHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayLLMModelAPIRequest::CrossServiceFallbackConfigHasBeenSet() const
{
    return m_crossServiceFallbackConfigHasBeenSet;
}


