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

#include <tencentcloud/dlc/v20210125/model/WorkGroupMessage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

WorkGroupMessage::WorkGroupMessage() :
    m_workGroupIdHasBeenSet(false),
    m_workGroupNameHasBeenSet(false),
    m_workGroupDescriptionHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome WorkGroupMessage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkGroupId") && !value["WorkGroupId"].IsNull())
    {
        if (!value["WorkGroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkGroupMessage.WorkGroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_workGroupId = value["WorkGroupId"].GetInt64();
        m_workGroupIdHasBeenSet = true;
    }

    if (value.HasMember("WorkGroupName") && !value["WorkGroupName"].IsNull())
    {
        if (!value["WorkGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkGroupMessage.WorkGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workGroupName = string(value["WorkGroupName"].GetString());
        m_workGroupNameHasBeenSet = true;
    }

    if (value.HasMember("WorkGroupDescription") && !value["WorkGroupDescription"].IsNull())
    {
        if (!value["WorkGroupDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkGroupMessage.WorkGroupDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workGroupDescription = string(value["WorkGroupDescription"].GetString());
        m_workGroupDescriptionHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkGroupMessage.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkGroupMessage.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkGroupMessage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_workGroupId, allocator);
    }

    if (m_workGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_workGroupDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkGroupDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workGroupDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t WorkGroupMessage::GetWorkGroupId() const
{
    return m_workGroupId;
}

void WorkGroupMessage::SetWorkGroupId(const int64_t& _workGroupId)
{
    m_workGroupId = _workGroupId;
    m_workGroupIdHasBeenSet = true;
}

bool WorkGroupMessage::WorkGroupIdHasBeenSet() const
{
    return m_workGroupIdHasBeenSet;
}

string WorkGroupMessage::GetWorkGroupName() const
{
    return m_workGroupName;
}

void WorkGroupMessage::SetWorkGroupName(const string& _workGroupName)
{
    m_workGroupName = _workGroupName;
    m_workGroupNameHasBeenSet = true;
}

bool WorkGroupMessage::WorkGroupNameHasBeenSet() const
{
    return m_workGroupNameHasBeenSet;
}

string WorkGroupMessage::GetWorkGroupDescription() const
{
    return m_workGroupDescription;
}

void WorkGroupMessage::SetWorkGroupDescription(const string& _workGroupDescription)
{
    m_workGroupDescription = _workGroupDescription;
    m_workGroupDescriptionHasBeenSet = true;
}

bool WorkGroupMessage::WorkGroupDescriptionHasBeenSet() const
{
    return m_workGroupDescriptionHasBeenSet;
}

string WorkGroupMessage::GetCreator() const
{
    return m_creator;
}

void WorkGroupMessage::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool WorkGroupMessage::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string WorkGroupMessage::GetCreateTime() const
{
    return m_createTime;
}

void WorkGroupMessage::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool WorkGroupMessage::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

