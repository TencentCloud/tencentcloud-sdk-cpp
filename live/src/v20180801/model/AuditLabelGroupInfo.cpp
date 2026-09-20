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

#include <tencentcloud/live/v20180801/model/AuditLabelGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

AuditLabelGroupInfo::AuditLabelGroupInfo() :
    m_groupNameHasBeenSet(false),
    m_groupEnameHasBeenSet(false),
    m_groupMsgHasBeenSet(false)
{
}

CoreInternalOutcome AuditLabelGroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLabelGroupInfo.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("GroupEname") && !value["GroupEname"].IsNull())
    {
        if (!value["GroupEname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLabelGroupInfo.GroupEname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupEname = string(value["GroupEname"].GetString());
        m_groupEnameHasBeenSet = true;
    }

    if (value.HasMember("GroupMsg") && !value["GroupMsg"].IsNull())
    {
        if (!value["GroupMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLabelGroupInfo.GroupMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupMsg = string(value["GroupMsg"].GetString());
        m_groupMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuditLabelGroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupEnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupEname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupEname.c_str(), allocator).Move(), allocator);
    }

    if (m_groupMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupMsg.c_str(), allocator).Move(), allocator);
    }

}


string AuditLabelGroupInfo::GetGroupName() const
{
    return m_groupName;
}

void AuditLabelGroupInfo::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool AuditLabelGroupInfo::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string AuditLabelGroupInfo::GetGroupEname() const
{
    return m_groupEname;
}

void AuditLabelGroupInfo::SetGroupEname(const string& _groupEname)
{
    m_groupEname = _groupEname;
    m_groupEnameHasBeenSet = true;
}

bool AuditLabelGroupInfo::GroupEnameHasBeenSet() const
{
    return m_groupEnameHasBeenSet;
}

string AuditLabelGroupInfo::GetGroupMsg() const
{
    return m_groupMsg;
}

void AuditLabelGroupInfo::SetGroupMsg(const string& _groupMsg)
{
    m_groupMsg = _groupMsg;
    m_groupMsgHasBeenSet = true;
}

bool AuditLabelGroupInfo::GroupMsgHasBeenSet() const
{
    return m_groupMsgHasBeenSet;
}

