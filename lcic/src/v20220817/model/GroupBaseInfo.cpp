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

#include <tencentcloud/lcic/v20220817/model/GroupBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

GroupBaseInfo::GroupBaseInfo() :
    m_groupNameHasBeenSet(false),
    m_teacherIdHasBeenSet(false)
{
}

CoreInternalOutcome GroupBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupBaseInfo.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("TeacherId") && !value["TeacherId"].IsNull())
    {
        if (!value["TeacherId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupBaseInfo.TeacherId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_teacherId = string(value["TeacherId"].GetString());
        m_teacherIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GroupBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_teacherIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeacherId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_teacherId.c_str(), allocator).Move(), allocator);
    }

}


string GroupBaseInfo::GetGroupName() const
{
    return m_groupName;
}

void GroupBaseInfo::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool GroupBaseInfo::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string GroupBaseInfo::GetTeacherId() const
{
    return m_teacherId;
}

void GroupBaseInfo::SetTeacherId(const string& _teacherId)
{
    m_teacherId = _teacherId;
    m_teacherIdHasBeenSet = true;
}

bool GroupBaseInfo::TeacherIdHasBeenSet() const
{
    return m_teacherIdHasBeenSet;
}

