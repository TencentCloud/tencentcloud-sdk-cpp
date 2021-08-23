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

#include <tencentcloud/as/v20180419/model/AutoScalingGroupAbstract.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::As::V20180419::Model;
using namespace std;

AutoScalingGroupAbstract::AutoScalingGroupAbstract() :
    m_autoScalingGroupIdHasBeenSet(false),
    m_autoScalingGroupNameHasBeenSet(false)
{
}

CoreInternalOutcome AutoScalingGroupAbstract::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AutoScalingGroupId") && !value["AutoScalingGroupId"].IsNull())
    {
        if (!value["AutoScalingGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScalingGroupAbstract.AutoScalingGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoScalingGroupId = string(value["AutoScalingGroupId"].GetString());
        m_autoScalingGroupIdHasBeenSet = true;
    }

    if (value.HasMember("AutoScalingGroupName") && !value["AutoScalingGroupName"].IsNull())
    {
        if (!value["AutoScalingGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScalingGroupAbstract.AutoScalingGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoScalingGroupName = string(value["AutoScalingGroupName"].GetString());
        m_autoScalingGroupNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutoScalingGroupAbstract::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_autoScalingGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScalingGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoScalingGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoScalingGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScalingGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoScalingGroupName.c_str(), allocator).Move(), allocator);
    }

}


string AutoScalingGroupAbstract::GetAutoScalingGroupId() const
{
    return m_autoScalingGroupId;
}

void AutoScalingGroupAbstract::SetAutoScalingGroupId(const string& _autoScalingGroupId)
{
    m_autoScalingGroupId = _autoScalingGroupId;
    m_autoScalingGroupIdHasBeenSet = true;
}

bool AutoScalingGroupAbstract::AutoScalingGroupIdHasBeenSet() const
{
    return m_autoScalingGroupIdHasBeenSet;
}

string AutoScalingGroupAbstract::GetAutoScalingGroupName() const
{
    return m_autoScalingGroupName;
}

void AutoScalingGroupAbstract::SetAutoScalingGroupName(const string& _autoScalingGroupName)
{
    m_autoScalingGroupName = _autoScalingGroupName;
    m_autoScalingGroupNameHasBeenSet = true;
}

bool AutoScalingGroupAbstract::AutoScalingGroupNameHasBeenSet() const
{
    return m_autoScalingGroupNameHasBeenSet;
}

