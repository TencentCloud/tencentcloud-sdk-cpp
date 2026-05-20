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

#include <tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayLLMModelAPIRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CreateCloudNativeAPIGatewayLLMModelAPIRequest::CreateCloudNativeAPIGatewayLLMModelAPIRequest() :
    m_gatewayIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sceneTypeHasBeenSet(false),
    m_requestProtocolHasBeenSet(false),
    m_listModelServiceIdHasBeenSet(false),
    m_routeListHasBeenSet(false),
    m_basePathHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_modelServiceRouteHasBeenSet(false),
    m_matchHeadersHasBeenSet(false),
    m_enableCrossServiceFallbackHasBeenSet(false),
    m_crossServiceFallbackConfigHasBeenSet(false)
{
}

string CreateCloudNativeAPIGatewayLLMModelAPIRequest::ToJsonString() const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sceneType.c_str(), allocator).Move(), allocator);
    }

    if (m_requestProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestProtocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_requestProtocol.c_str(), allocator).Move(), allocator);
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

    if (m_routeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_routeList.begin(); itr != m_routeList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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


string CreateCloudNativeAPIGatewayLLMModelAPIRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void CreateCloudNativeAPIGatewayLLMModelAPIRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayLLMModelAPIRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string CreateCloudNativeAPIGatewayLLMModelAPIRequest::GetName() const
{
    return m_name;
}

void CreateCloudNativeAPIGatewayLLMModelAPIRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayLLMModelAPIRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateCloudNativeAPIGatewayLLMModelAPIRequest::GetSceneType() const
{
    return m_sceneType;
}

void CreateCloudNativeAPIGatewayLLMModelAPIRequest::SetSceneType(const string& _sceneType)
{
    m_sceneType = _sceneType;
    m_sceneTypeHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayLLMModelAPIRequest::SceneTypeHasBeenSet() const
{
    return m_sceneTypeHasBeenSet;
}

string CreateCloudNativeAPIGatewayLLMModelAPIRequest::GetRequestProtocol() const
{
    return m_requestProtocol;
}

void CreateCloudNativeAPIGatewayLLMModelAPIRequest::SetRequestProtocol(const string& _requestProtocol)
{
    m_requestProtocol = _requestProtocol;
    m_requestProtocolHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayLLMModelAPIRequest::RequestProtocolHasBeenSet() const
{
    return m_requestProtocolHasBeenSet;
}

vector<string> CreateCloudNativeAPIGatewayLLMModelAPIRequest::GetListModelServiceId() const
{
    return m_listModelServiceId;
}

void CreateCloudNativeAPIGatewayLLMModelAPIRequest::SetListModelServiceId(const vector<string>& _listModelServiceId)
{
    m_listModelServiceId = _listModelServiceId;
    m_listModelServiceIdHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayLLMModelAPIRequest::ListModelServiceIdHasBeenSet() const
{
    return m_listModelServiceIdHasBeenSet;
}

vector<DefaultKongRoute> CreateCloudNativeAPIGatewayLLMModelAPIRequest::GetRouteList() const
{
    return m_routeList;
}

void CreateCloudNativeAPIGatewayLLMModelAPIRequest::SetRouteList(const vector<DefaultKongRoute>& _routeList)
{
    m_routeList = _routeList;
    m_routeListHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayLLMModelAPIRequest::RouteListHasBeenSet() const
{
    return m_routeListHasBeenSet;
}

string CreateCloudNativeAPIGatewayLLMModelAPIRequest::GetBasePath() const
{
    return m_basePath;
}

void CreateCloudNativeAPIGatewayLLMModelAPIRequest::SetBasePath(const string& _basePath)
{
    m_basePath = _basePath;
    m_basePathHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayLLMModelAPIRequest::BasePathHasBeenSet() const
{
    return m_basePathHasBeenSet;
}

string CreateCloudNativeAPIGatewayLLMModelAPIRequest::GetDescription() const
{
    return m_description;
}

void CreateCloudNativeAPIGatewayLLMModelAPIRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayLLMModelAPIRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

CloudNativeAPIGatewayLLMModelServiceRoute CreateCloudNativeAPIGatewayLLMModelAPIRequest::GetModelServiceRoute() const
{
    return m_modelServiceRoute;
}

void CreateCloudNativeAPIGatewayLLMModelAPIRequest::SetModelServiceRoute(const CloudNativeAPIGatewayLLMModelServiceRoute& _modelServiceRoute)
{
    m_modelServiceRoute = _modelServiceRoute;
    m_modelServiceRouteHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayLLMModelAPIRequest::ModelServiceRouteHasBeenSet() const
{
    return m_modelServiceRouteHasBeenSet;
}

vector<AIGWKVMatch> CreateCloudNativeAPIGatewayLLMModelAPIRequest::GetMatchHeaders() const
{
    return m_matchHeaders;
}

void CreateCloudNativeAPIGatewayLLMModelAPIRequest::SetMatchHeaders(const vector<AIGWKVMatch>& _matchHeaders)
{
    m_matchHeaders = _matchHeaders;
    m_matchHeadersHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayLLMModelAPIRequest::MatchHeadersHasBeenSet() const
{
    return m_matchHeadersHasBeenSet;
}

bool CreateCloudNativeAPIGatewayLLMModelAPIRequest::GetEnableCrossServiceFallback() const
{
    return m_enableCrossServiceFallback;
}

void CreateCloudNativeAPIGatewayLLMModelAPIRequest::SetEnableCrossServiceFallback(const bool& _enableCrossServiceFallback)
{
    m_enableCrossServiceFallback = _enableCrossServiceFallback;
    m_enableCrossServiceFallbackHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayLLMModelAPIRequest::EnableCrossServiceFallbackHasBeenSet() const
{
    return m_enableCrossServiceFallbackHasBeenSet;
}

AIGWCrossServiceFallbackConfig CreateCloudNativeAPIGatewayLLMModelAPIRequest::GetCrossServiceFallbackConfig() const
{
    return m_crossServiceFallbackConfig;
}

void CreateCloudNativeAPIGatewayLLMModelAPIRequest::SetCrossServiceFallbackConfig(const AIGWCrossServiceFallbackConfig& _crossServiceFallbackConfig)
{
    m_crossServiceFallbackConfig = _crossServiceFallbackConfig;
    m_crossServiceFallbackConfigHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayLLMModelAPIRequest::CrossServiceFallbackConfigHasBeenSet() const
{
    return m_crossServiceFallbackConfigHasBeenSet;
}


