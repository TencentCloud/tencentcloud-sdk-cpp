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

#include <tencentcloud/alb/v20251030/model/ModifyTargetsInTargetGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

ModifyTargetsInTargetGroupRequest::ModifyTargetsInTargetGroupRequest() :
    m_targetGroupIdHasBeenSet(false),
    m_dryRunHasBeenSet(false),
    m_targetsHasBeenSet(false)
{
}

string ModifyTargetsInTargetGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_targetGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dryRun, allocator);
    }

    if (m_targetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Targets";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_targets.begin(); itr != m_targets.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyTargetsInTargetGroupRequest::GetTargetGroupId() const
{
    return m_targetGroupId;
}

void ModifyTargetsInTargetGroupRequest::SetTargetGroupId(const string& _targetGroupId)
{
    m_targetGroupId = _targetGroupId;
    m_targetGroupIdHasBeenSet = true;
}

bool ModifyTargetsInTargetGroupRequest::TargetGroupIdHasBeenSet() const
{
    return m_targetGroupIdHasBeenSet;
}

bool ModifyTargetsInTargetGroupRequest::GetDryRun() const
{
    return m_dryRun;
}

void ModifyTargetsInTargetGroupRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool ModifyTargetsInTargetGroupRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}

vector<TargetToModify> ModifyTargetsInTargetGroupRequest::GetTargets() const
{
    return m_targets;
}

void ModifyTargetsInTargetGroupRequest::SetTargets(const vector<TargetToModify>& _targets)
{
    m_targets = _targets;
    m_targetsHasBeenSet = true;
}

bool ModifyTargetsInTargetGroupRequest::TargetsHasBeenSet() const
{
    return m_targetsHasBeenSet;
}


