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

#include <tencentcloud/dlc/v20210125/model/GroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

GroupInfo::GroupInfo() :
    m_workGroupIdHasBeenSet(false),
    m_strategyTypeHasBeenSet(false)
{
}

CoreInternalOutcome GroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkGroupId") && !value["WorkGroupId"].IsNull())
    {
        if (!value["WorkGroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.WorkGroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_workGroupId = value["WorkGroupId"].GetInt64();
        m_workGroupIdHasBeenSet = true;
    }

    if (value.HasMember("StrategyType") && !value["StrategyType"].IsNull())
    {
        if (!value["StrategyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.StrategyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyType = string(value["StrategyType"].GetString());
        m_strategyTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_workGroupId, allocator);
    }

    if (m_strategyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyType.c_str(), allocator).Move(), allocator);
    }

}


int64_t GroupInfo::GetWorkGroupId() const
{
    return m_workGroupId;
}

void GroupInfo::SetWorkGroupId(const int64_t& _workGroupId)
{
    m_workGroupId = _workGroupId;
    m_workGroupIdHasBeenSet = true;
}

bool GroupInfo::WorkGroupIdHasBeenSet() const
{
    return m_workGroupIdHasBeenSet;
}

string GroupInfo::GetStrategyType() const
{
    return m_strategyType;
}

void GroupInfo::SetStrategyType(const string& _strategyType)
{
    m_strategyType = _strategyType;
    m_strategyTypeHasBeenSet = true;
}

bool GroupInfo::StrategyTypeHasBeenSet() const
{
    return m_strategyTypeHasBeenSet;
}

