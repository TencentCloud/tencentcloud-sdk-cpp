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

#include <tencentcloud/trocket/v20230308/model/ConsumerLabelRoute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

ConsumerLabelRoute::ConsumerLabelRoute() :
    m_keyHasBeenSet(false),
    m_routesHasBeenSet(false)
{
}

CoreInternalOutcome ConsumerLabelRoute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerLabelRoute.Key` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_key.Deserialize(value["Key"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Routes") && !value["Routes"].IsNull())
    {
        if (!value["Routes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConsumerLabelRoute.Routes` is not array type"));

        const rapidjson::Value &tmpValue = value["Routes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConsumerLabelRouteItem item;
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

void ConsumerLabelRoute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_key.ToJsonObject(value[key.c_str()], allocator);
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


ConsumerLabelKey ConsumerLabelRoute::GetKey() const
{
    return m_key;
}

void ConsumerLabelRoute::SetKey(const ConsumerLabelKey& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool ConsumerLabelRoute::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

vector<ConsumerLabelRouteItem> ConsumerLabelRoute::GetRoutes() const
{
    return m_routes;
}

void ConsumerLabelRoute::SetRoutes(const vector<ConsumerLabelRouteItem>& _routes)
{
    m_routes = _routes;
    m_routesHasBeenSet = true;
}

bool ConsumerLabelRoute::RoutesHasBeenSet() const
{
    return m_routesHasBeenSet;
}

