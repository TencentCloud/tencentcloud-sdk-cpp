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

#include <tencentcloud/cdwdoris/v20211228/model/UserWorkloadGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

UserWorkloadGroup::UserWorkloadGroup() :
    m_userNameHasBeenSet(false),
    m_workloadGroupNameHasBeenSet(false)
{
}

CoreInternalOutcome UserWorkloadGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserWorkloadGroup.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("WorkloadGroupName") && !value["WorkloadGroupName"].IsNull())
    {
        if (!value["WorkloadGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserWorkloadGroup.WorkloadGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workloadGroupName = string(value["WorkloadGroupName"].GetString());
        m_workloadGroupNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserWorkloadGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_workloadGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkloadGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workloadGroupName.c_str(), allocator).Move(), allocator);
    }

}


string UserWorkloadGroup::GetUserName() const
{
    return m_userName;
}

void UserWorkloadGroup::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool UserWorkloadGroup::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string UserWorkloadGroup::GetWorkloadGroupName() const
{
    return m_workloadGroupName;
}

void UserWorkloadGroup::SetWorkloadGroupName(const string& _workloadGroupName)
{
    m_workloadGroupName = _workloadGroupName;
    m_workloadGroupNameHasBeenSet = true;
}

bool UserWorkloadGroup::WorkloadGroupNameHasBeenSet() const
{
    return m_workloadGroupNameHasBeenSet;
}

