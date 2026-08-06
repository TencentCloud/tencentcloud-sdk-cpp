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

#include <tencentcloud/cngw/v20230418/model/KongServiceRoute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

KongServiceRoute::KongServiceRoute() :
    m_serviceHasBeenSet(false),
    m_routeTotalCountHasBeenSet(false),
    m_routeHasMoreHasBeenSet(false),
    m_routesHasBeenSet(false)
{
}

CoreInternalOutcome KongServiceRoute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Service") && !value["Service"].IsNull())
    {
        if (!value["Service"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KongServiceRoute.Service` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_service.Deserialize(value["Service"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_serviceHasBeenSet = true;
    }

    if (value.HasMember("RouteTotalCount") && !value["RouteTotalCount"].IsNull())
    {
        if (!value["RouteTotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KongServiceRoute.RouteTotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_routeTotalCount = value["RouteTotalCount"].GetInt64();
        m_routeTotalCountHasBeenSet = true;
    }

    if (value.HasMember("RouteHasMore") && !value["RouteHasMore"].IsNull())
    {
        if (!value["RouteHasMore"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KongServiceRoute.RouteHasMore` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_routeHasMore = value["RouteHasMore"].GetBool();
        m_routeHasMoreHasBeenSet = true;
    }

    if (value.HasMember("Routes") && !value["Routes"].IsNull())
    {
        if (!value["Routes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KongServiceRoute.Routes` is not array type"));

        const rapidjson::Value &tmpValue = value["Routes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KongRoutePreview item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_routes.push_back(item);
        }
        m_routesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KongServiceRoute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Service";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_service.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_routeTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_routeTotalCount, allocator);
    }

    if (m_routeHasMoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteHasMore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_routeHasMore, allocator);
    }

    if (m_routesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Routes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_routes.begin(); itr != m_routes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


KongServicePreview KongServiceRoute::GetService() const
{
    return m_service;
}

void KongServiceRoute::SetService(const KongServicePreview& _service)
{
    m_service = _service;
    m_serviceHasBeenSet = true;
}

bool KongServiceRoute::ServiceHasBeenSet() const
{
    return m_serviceHasBeenSet;
}

int64_t KongServiceRoute::GetRouteTotalCount() const
{
    return m_routeTotalCount;
}

void KongServiceRoute::SetRouteTotalCount(const int64_t& _routeTotalCount)
{
    m_routeTotalCount = _routeTotalCount;
    m_routeTotalCountHasBeenSet = true;
}

bool KongServiceRoute::RouteTotalCountHasBeenSet() const
{
    return m_routeTotalCountHasBeenSet;
}

bool KongServiceRoute::GetRouteHasMore() const
{
    return m_routeHasMore;
}

void KongServiceRoute::SetRouteHasMore(const bool& _routeHasMore)
{
    m_routeHasMore = _routeHasMore;
    m_routeHasMoreHasBeenSet = true;
}

bool KongServiceRoute::RouteHasMoreHasBeenSet() const
{
    return m_routeHasMoreHasBeenSet;
}

vector<KongRoutePreview> KongServiceRoute::GetRoutes() const
{
    return m_routes;
}

void KongServiceRoute::SetRoutes(const vector<KongRoutePreview>& _routes)
{
    m_routes = _routes;
    m_routesHasBeenSet = true;
}

bool KongServiceRoute::RoutesHasBeenSet() const
{
    return m_routesHasBeenSet;
}

