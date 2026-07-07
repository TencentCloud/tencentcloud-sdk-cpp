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

#include <tencentcloud/alb/v20251030/model/TargetGroupConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

TargetGroupConfig::TargetGroupConfig() :
    m_targetGroupsHasBeenSet(false),
    m_targetGroupStickySessionHasBeenSet(false)
{
}

CoreInternalOutcome TargetGroupConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TargetGroups") && !value["TargetGroups"].IsNull())
    {
        if (!value["TargetGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TargetGroupConfig.TargetGroups` is not array type"));

        const rapidjson::Value &tmpValue = value["TargetGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TargetGroupTuple item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_targetGroups.push_back(item);
        }
        m_targetGroupsHasBeenSet = true;
    }

    if (value.HasMember("TargetGroupStickySession") && !value["TargetGroupStickySession"].IsNull())
    {
        if (!value["TargetGroupStickySession"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupConfig.TargetGroupStickySession` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_targetGroupStickySession.Deserialize(value["TargetGroupStickySession"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_targetGroupStickySessionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TargetGroupConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_targetGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_targetGroups.begin(); itr != m_targetGroups.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_targetGroupStickySessionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetGroupStickySession";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_targetGroupStickySession.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<TargetGroupTuple> TargetGroupConfig::GetTargetGroups() const
{
    return m_targetGroups;
}

void TargetGroupConfig::SetTargetGroups(const vector<TargetGroupTuple>& _targetGroups)
{
    m_targetGroups = _targetGroups;
    m_targetGroupsHasBeenSet = true;
}

bool TargetGroupConfig::TargetGroupsHasBeenSet() const
{
    return m_targetGroupsHasBeenSet;
}

TargetGroupStickySession TargetGroupConfig::GetTargetGroupStickySession() const
{
    return m_targetGroupStickySession;
}

void TargetGroupConfig::SetTargetGroupStickySession(const TargetGroupStickySession& _targetGroupStickySession)
{
    m_targetGroupStickySession = _targetGroupStickySession;
    m_targetGroupStickySessionHasBeenSet = true;
}

bool TargetGroupConfig::TargetGroupStickySessionHasBeenSet() const
{
    return m_targetGroupStickySessionHasBeenSet;
}

