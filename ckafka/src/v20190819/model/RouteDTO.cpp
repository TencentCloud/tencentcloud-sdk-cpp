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

#include <tencentcloud/ckafka/v20190819/model/RouteDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

RouteDTO::RouteDTO() :
    m_routeIdHasBeenSet(false)
{
}

CoreInternalOutcome RouteDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RouteId") && !value["RouteId"].IsNull())
    {
        if (!value["RouteId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RouteDTO.RouteId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_routeId = value["RouteId"].GetInt64();
        m_routeIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RouteDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_routeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_routeId, allocator);
    }

}


int64_t RouteDTO::GetRouteId() const
{
    return m_routeId;
}

void RouteDTO::SetRouteId(const int64_t& _routeId)
{
    m_routeId = _routeId;
    m_routeIdHasBeenSet = true;
}

bool RouteDTO::RouteIdHasBeenSet() const
{
    return m_routeIdHasBeenSet;
}

