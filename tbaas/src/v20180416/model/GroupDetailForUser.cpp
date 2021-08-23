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

#include <tencentcloud/tbaas/v20180416/model/GroupDetailForUser.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

GroupDetailForUser::GroupDetailForUser() :
    m_groupNameHasBeenSet(false),
    m_groupMSPIdHasBeenSet(false)
{
}

CoreInternalOutcome GroupDetailForUser::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupDetailForUser.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("GroupMSPId") && !value["GroupMSPId"].IsNull())
    {
        if (!value["GroupMSPId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupDetailForUser.GroupMSPId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupMSPId = string(value["GroupMSPId"].GetString());
        m_groupMSPIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GroupDetailForUser::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupMSPIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupMSPId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupMSPId.c_str(), allocator).Move(), allocator);
    }

}


string GroupDetailForUser::GetGroupName() const
{
    return m_groupName;
}

void GroupDetailForUser::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool GroupDetailForUser::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string GroupDetailForUser::GetGroupMSPId() const
{
    return m_groupMSPId;
}

void GroupDetailForUser::SetGroupMSPId(const string& _groupMSPId)
{
    m_groupMSPId = _groupMSPId;
    m_groupMSPIdHasBeenSet = true;
}

bool GroupDetailForUser::GroupMSPIdHasBeenSet() const
{
    return m_groupMSPIdHasBeenSet;
}

