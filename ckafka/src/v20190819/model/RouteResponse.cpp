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

#include <tencentcloud/ckafka/v20190819/model/RouteResponse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

RouteResponse::RouteResponse() :
    m_routersHasBeenSet(false)
{
}

CoreInternalOutcome RouteResponse::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Routers") && !value["Routers"].IsNull())
    {
        if (!value["Routers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RouteResponse.Routers` is not array type"));

        const rapidjson::Value &tmpValue = value["Routers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Route item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_routers.push_back(item);
        }
        m_routersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RouteResponse::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_routersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Routers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_routers.begin(); itr != m_routers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<Route> RouteResponse::GetRouters() const
{
    return m_routers;
}

void RouteResponse::SetRouters(const vector<Route>& _routers)
{
    m_routers = _routers;
    m_routersHasBeenSet = true;
}

bool RouteResponse::RoutersHasBeenSet() const
{
    return m_routersHasBeenSet;
}

