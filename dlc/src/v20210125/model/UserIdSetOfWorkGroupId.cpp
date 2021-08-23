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

#include <tencentcloud/dlc/v20210125/model/UserIdSetOfWorkGroupId.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

UserIdSetOfWorkGroupId::UserIdSetOfWorkGroupId() :
    m_workGroupIdHasBeenSet(false),
    m_userIdsHasBeenSet(false)
{
}

CoreInternalOutcome UserIdSetOfWorkGroupId::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkGroupId") && !value["WorkGroupId"].IsNull())
    {
        if (!value["WorkGroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserIdSetOfWorkGroupId.WorkGroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_workGroupId = value["WorkGroupId"].GetInt64();
        m_workGroupIdHasBeenSet = true;
    }

    if (value.HasMember("UserIds") && !value["UserIds"].IsNull())
    {
        if (!value["UserIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserIdSetOfWorkGroupId.UserIds` is not array type"));

        const rapidjson::Value &tmpValue = value["UserIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_userIds.push_back((*itr).GetString());
        }
        m_userIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserIdSetOfWorkGroupId::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_workGroupId, allocator);
    }

    if (m_userIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_userIds.begin(); itr != m_userIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


int64_t UserIdSetOfWorkGroupId::GetWorkGroupId() const
{
    return m_workGroupId;
}

void UserIdSetOfWorkGroupId::SetWorkGroupId(const int64_t& _workGroupId)
{
    m_workGroupId = _workGroupId;
    m_workGroupIdHasBeenSet = true;
}

bool UserIdSetOfWorkGroupId::WorkGroupIdHasBeenSet() const
{
    return m_workGroupIdHasBeenSet;
}

vector<string> UserIdSetOfWorkGroupId::GetUserIds() const
{
    return m_userIds;
}

void UserIdSetOfWorkGroupId::SetUserIds(const vector<string>& _userIds)
{
    m_userIds = _userIds;
    m_userIdsHasBeenSet = true;
}

bool UserIdSetOfWorkGroupId::UserIdsHasBeenSet() const
{
    return m_userIdsHasBeenSet;
}

