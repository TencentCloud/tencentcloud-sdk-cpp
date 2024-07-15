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

#include <tencentcloud/vpc/v20170312/model/CcnRouteTableBroadcastPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CcnRouteTableBroadcastPolicy::CcnRouteTableBroadcastPolicy() :
    m_routeConditionsHasBeenSet(false),
    m_broadcastConditionsHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome CcnRouteTableBroadcastPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RouteConditions") && !value["RouteConditions"].IsNull())
    {
        if (!value["RouteConditions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CcnRouteTableBroadcastPolicy.RouteConditions` is not array type"));

        const rapidjson::Value &tmpValue = value["RouteConditions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CcnRouteBroadcastPolicyRouteCondition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_routeConditions.push_back(item);
        }
        m_routeConditionsHasBeenSet = true;
    }

    if (value.HasMember("BroadcastConditions") && !value["BroadcastConditions"].IsNull())
    {
        if (!value["BroadcastConditions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CcnRouteTableBroadcastPolicy.BroadcastConditions` is not array type"));

        const rapidjson::Value &tmpValue = value["BroadcastConditions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CcnRouteBroadcastPolicyRouteCondition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_broadcastConditions.push_back(item);
        }
        m_broadcastConditionsHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnRouteTableBroadcastPolicy.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnRouteTableBroadcastPolicy.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CcnRouteTableBroadcastPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_routeConditionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteConditions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_routeConditions.begin(); itr != m_routeConditions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_broadcastConditionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BroadcastConditions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_broadcastConditions.begin(); itr != m_broadcastConditions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


vector<CcnRouteBroadcastPolicyRouteCondition> CcnRouteTableBroadcastPolicy::GetRouteConditions() const
{
    return m_routeConditions;
}

void CcnRouteTableBroadcastPolicy::SetRouteConditions(const vector<CcnRouteBroadcastPolicyRouteCondition>& _routeConditions)
{
    m_routeConditions = _routeConditions;
    m_routeConditionsHasBeenSet = true;
}

bool CcnRouteTableBroadcastPolicy::RouteConditionsHasBeenSet() const
{
    return m_routeConditionsHasBeenSet;
}

vector<CcnRouteBroadcastPolicyRouteCondition> CcnRouteTableBroadcastPolicy::GetBroadcastConditions() const
{
    return m_broadcastConditions;
}

void CcnRouteTableBroadcastPolicy::SetBroadcastConditions(const vector<CcnRouteBroadcastPolicyRouteCondition>& _broadcastConditions)
{
    m_broadcastConditions = _broadcastConditions;
    m_broadcastConditionsHasBeenSet = true;
}

bool CcnRouteTableBroadcastPolicy::BroadcastConditionsHasBeenSet() const
{
    return m_broadcastConditionsHasBeenSet;
}

string CcnRouteTableBroadcastPolicy::GetAction() const
{
    return m_action;
}

void CcnRouteTableBroadcastPolicy::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool CcnRouteTableBroadcastPolicy::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string CcnRouteTableBroadcastPolicy::GetDescription() const
{
    return m_description;
}

void CcnRouteTableBroadcastPolicy::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CcnRouteTableBroadcastPolicy::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

