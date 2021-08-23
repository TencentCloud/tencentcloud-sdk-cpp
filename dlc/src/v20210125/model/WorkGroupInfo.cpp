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

#include <tencentcloud/dlc/v20210125/model/WorkGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

WorkGroupInfo::WorkGroupInfo() :
    m_workGroupIdHasBeenSet(false),
    m_workGroupNameHasBeenSet(false),
    m_workGroupDescriptionHasBeenSet(false),
    m_userNumHasBeenSet(false),
    m_userSetHasBeenSet(false),
    m_policySetHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome WorkGroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkGroupId") && !value["WorkGroupId"].IsNull())
    {
        if (!value["WorkGroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkGroupInfo.WorkGroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_workGroupId = value["WorkGroupId"].GetInt64();
        m_workGroupIdHasBeenSet = true;
    }

    if (value.HasMember("WorkGroupName") && !value["WorkGroupName"].IsNull())
    {
        if (!value["WorkGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkGroupInfo.WorkGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workGroupName = string(value["WorkGroupName"].GetString());
        m_workGroupNameHasBeenSet = true;
    }

    if (value.HasMember("WorkGroupDescription") && !value["WorkGroupDescription"].IsNull())
    {
        if (!value["WorkGroupDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkGroupInfo.WorkGroupDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workGroupDescription = string(value["WorkGroupDescription"].GetString());
        m_workGroupDescriptionHasBeenSet = true;
    }

    if (value.HasMember("UserNum") && !value["UserNum"].IsNull())
    {
        if (!value["UserNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkGroupInfo.UserNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_userNum = value["UserNum"].GetInt64();
        m_userNumHasBeenSet = true;
    }

    if (value.HasMember("UserSet") && !value["UserSet"].IsNull())
    {
        if (!value["UserSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkGroupInfo.UserSet` is not array type"));

        const rapidjson::Value &tmpValue = value["UserSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UserMessage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_userSet.push_back(item);
        }
        m_userSetHasBeenSet = true;
    }

    if (value.HasMember("PolicySet") && !value["PolicySet"].IsNull())
    {
        if (!value["PolicySet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkGroupInfo.PolicySet` is not array type"));

        const rapidjson::Value &tmpValue = value["PolicySet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Policy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_policySet.push_back(item);
        }
        m_policySetHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkGroupInfo.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkGroupInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkGroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_userNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userNum, allocator);
    }

    if (m_userSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_userSet.begin(); itr != m_userSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_policySetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicySet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_policySet.begin(); itr != m_policySet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


int64_t WorkGroupInfo::GetWorkGroupId() const
{
    return m_workGroupId;
}

void WorkGroupInfo::SetWorkGroupId(const int64_t& _workGroupId)
{
    m_workGroupId = _workGroupId;
    m_workGroupIdHasBeenSet = true;
}

bool WorkGroupInfo::WorkGroupIdHasBeenSet() const
{
    return m_workGroupIdHasBeenSet;
}

string WorkGroupInfo::GetWorkGroupName() const
{
    return m_workGroupName;
}

void WorkGroupInfo::SetWorkGroupName(const string& _workGroupName)
{
    m_workGroupName = _workGroupName;
    m_workGroupNameHasBeenSet = true;
}

bool WorkGroupInfo::WorkGroupNameHasBeenSet() const
{
    return m_workGroupNameHasBeenSet;
}

string WorkGroupInfo::GetWorkGroupDescription() const
{
    return m_workGroupDescription;
}

void WorkGroupInfo::SetWorkGroupDescription(const string& _workGroupDescription)
{
    m_workGroupDescription = _workGroupDescription;
    m_workGroupDescriptionHasBeenSet = true;
}

bool WorkGroupInfo::WorkGroupDescriptionHasBeenSet() const
{
    return m_workGroupDescriptionHasBeenSet;
}

int64_t WorkGroupInfo::GetUserNum() const
{
    return m_userNum;
}

void WorkGroupInfo::SetUserNum(const int64_t& _userNum)
{
    m_userNum = _userNum;
    m_userNumHasBeenSet = true;
}

bool WorkGroupInfo::UserNumHasBeenSet() const
{
    return m_userNumHasBeenSet;
}

vector<UserMessage> WorkGroupInfo::GetUserSet() const
{
    return m_userSet;
}

void WorkGroupInfo::SetUserSet(const vector<UserMessage>& _userSet)
{
    m_userSet = _userSet;
    m_userSetHasBeenSet = true;
}

bool WorkGroupInfo::UserSetHasBeenSet() const
{
    return m_userSetHasBeenSet;
}

vector<Policy> WorkGroupInfo::GetPolicySet() const
{
    return m_policySet;
}

void WorkGroupInfo::SetPolicySet(const vector<Policy>& _policySet)
{
    m_policySet = _policySet;
    m_policySetHasBeenSet = true;
}

bool WorkGroupInfo::PolicySetHasBeenSet() const
{
    return m_policySetHasBeenSet;
}

string WorkGroupInfo::GetCreator() const
{
    return m_creator;
}

void WorkGroupInfo::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool WorkGroupInfo::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string WorkGroupInfo::GetCreateTime() const
{
    return m_createTime;
}

void WorkGroupInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool WorkGroupInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

