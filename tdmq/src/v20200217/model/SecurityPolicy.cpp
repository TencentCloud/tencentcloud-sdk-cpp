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

#include <tencentcloud/tdmq/v20200217/model/SecurityPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

SecurityPolicy::SecurityPolicy() :
    m_routeHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome SecurityPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Route") && !value["Route"].IsNull())
    {
        if (!value["Route"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityPolicy.Route` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_route = string(value["Route"].GetString());
        m_routeHasBeenSet = true;
    }

    if (value.HasMember("Policy") && !value["Policy"].IsNull())
    {
        if (!value["Policy"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityPolicy.Policy` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_policy = value["Policy"].GetBool();
        m_policyHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityPolicy.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_routeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Route";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_route.c_str(), allocator).Move(), allocator);
    }

    if (m_policyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Policy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policy, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

}


string SecurityPolicy::GetRoute() const
{
    return m_route;
}

void SecurityPolicy::SetRoute(const string& _route)
{
    m_route = _route;
    m_routeHasBeenSet = true;
}

bool SecurityPolicy::RouteHasBeenSet() const
{
    return m_routeHasBeenSet;
}

bool SecurityPolicy::GetPolicy() const
{
    return m_policy;
}

void SecurityPolicy::SetPolicy(const bool& _policy)
{
    m_policy = _policy;
    m_policyHasBeenSet = true;
}

bool SecurityPolicy::PolicyHasBeenSet() const
{
    return m_policyHasBeenSet;
}

string SecurityPolicy::GetRemark() const
{
    return m_remark;
}

void SecurityPolicy::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool SecurityPolicy::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

