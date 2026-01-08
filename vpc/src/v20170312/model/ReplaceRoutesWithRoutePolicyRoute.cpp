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

#include <tencentcloud/vpc/v20170312/model/ReplaceRoutesWithRoutePolicyRoute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ReplaceRoutesWithRoutePolicyRoute::ReplaceRoutesWithRoutePolicyRoute() :
    m_routeItemIdHasBeenSet(false),
    m_forceMatchPolicyHasBeenSet(false)
{
}

CoreInternalOutcome ReplaceRoutesWithRoutePolicyRoute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RouteItemId") && !value["RouteItemId"].IsNull())
    {
        if (!value["RouteItemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplaceRoutesWithRoutePolicyRoute.RouteItemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeItemId = string(value["RouteItemId"].GetString());
        m_routeItemIdHasBeenSet = true;
    }

    if (value.HasMember("ForceMatchPolicy") && !value["ForceMatchPolicy"].IsNull())
    {
        if (!value["ForceMatchPolicy"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ReplaceRoutesWithRoutePolicyRoute.ForceMatchPolicy` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_forceMatchPolicy = value["ForceMatchPolicy"].GetBool();
        m_forceMatchPolicyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReplaceRoutesWithRoutePolicyRoute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_routeItemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteItemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeItemId.c_str(), allocator).Move(), allocator);
    }

    if (m_forceMatchPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceMatchPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_forceMatchPolicy, allocator);
    }

}


string ReplaceRoutesWithRoutePolicyRoute::GetRouteItemId() const
{
    return m_routeItemId;
}

void ReplaceRoutesWithRoutePolicyRoute::SetRouteItemId(const string& _routeItemId)
{
    m_routeItemId = _routeItemId;
    m_routeItemIdHasBeenSet = true;
}

bool ReplaceRoutesWithRoutePolicyRoute::RouteItemIdHasBeenSet() const
{
    return m_routeItemIdHasBeenSet;
}

bool ReplaceRoutesWithRoutePolicyRoute::GetForceMatchPolicy() const
{
    return m_forceMatchPolicy;
}

void ReplaceRoutesWithRoutePolicyRoute::SetForceMatchPolicy(const bool& _forceMatchPolicy)
{
    m_forceMatchPolicy = _forceMatchPolicy;
    m_forceMatchPolicyHasBeenSet = true;
}

bool ReplaceRoutesWithRoutePolicyRoute::ForceMatchPolicyHasBeenSet() const
{
    return m_forceMatchPolicyHasBeenSet;
}

