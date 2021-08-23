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

#include <tencentcloud/cam/v20190116/model/ListGrantServiceAccessNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

ListGrantServiceAccessNode::ListGrantServiceAccessNode() :
    m_serviceHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_policyHasBeenSet(false)
{
}

CoreInternalOutcome ListGrantServiceAccessNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Service") && !value["Service"].IsNull())
    {
        if (!value["Service"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ListGrantServiceAccessNode.Service` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_service.Deserialize(value["Service"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_serviceHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ListGrantServiceAccessNode.Action` is not array type"));

        const rapidjson::Value &tmpValue = value["Action"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ListGrantServiceAccessActionNode item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_action.push_back(item);
        }
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("Policy") && !value["Policy"].IsNull())
    {
        if (!value["Policy"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ListGrantServiceAccessNode.Policy` is not array type"));

        const rapidjson::Value &tmpValue = value["Policy"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ListGrantServiceAccessPolicy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_policy.push_back(item);
        }
        m_policyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ListGrantServiceAccessNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Service";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_service.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_action.begin(); itr != m_action.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_policyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Policy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_policy.begin(); itr != m_policy.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


ListGrantServiceAccessService ListGrantServiceAccessNode::GetService() const
{
    return m_service;
}

void ListGrantServiceAccessNode::SetService(const ListGrantServiceAccessService& _service)
{
    m_service = _service;
    m_serviceHasBeenSet = true;
}

bool ListGrantServiceAccessNode::ServiceHasBeenSet() const
{
    return m_serviceHasBeenSet;
}

vector<ListGrantServiceAccessActionNode> ListGrantServiceAccessNode::GetAction() const
{
    return m_action;
}

void ListGrantServiceAccessNode::SetAction(const vector<ListGrantServiceAccessActionNode>& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool ListGrantServiceAccessNode::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

vector<ListGrantServiceAccessPolicy> ListGrantServiceAccessNode::GetPolicy() const
{
    return m_policy;
}

void ListGrantServiceAccessNode::SetPolicy(const vector<ListGrantServiceAccessPolicy>& _policy)
{
    m_policy = _policy;
    m_policyHasBeenSet = true;
}

bool ListGrantServiceAccessNode::PolicyHasBeenSet() const
{
    return m_policyHasBeenSet;
}

