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

#include <tencentcloud/sqlserver/v20180328/model/SecurityGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

SecurityGroup::SecurityGroup() :
    m_projectIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_inboundSetHasBeenSet(false),
    m_outboundSetHasBeenSet(false),
    m_securityGroupIdHasBeenSet(false),
    m_securityGroupNameHasBeenSet(false),
    m_securityGroupRemarkHasBeenSet(false)
{
}

CoreInternalOutcome SecurityGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroup.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroup.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("InboundSet") && !value["InboundSet"].IsNull())
    {
        if (!value["InboundSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecurityGroup.InboundSet` is not array type"));

        const rapidjson::Value &tmpValue = value["InboundSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecurityGroupPolicy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_inboundSet.push_back(item);
        }
        m_inboundSetHasBeenSet = true;
    }

    if (value.HasMember("OutboundSet") && !value["OutboundSet"].IsNull())
    {
        if (!value["OutboundSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecurityGroup.OutboundSet` is not array type"));

        const rapidjson::Value &tmpValue = value["OutboundSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecurityGroupPolicy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_outboundSet.push_back(item);
        }
        m_outboundSetHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupId") && !value["SecurityGroupId"].IsNull())
    {
        if (!value["SecurityGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroup.SecurityGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityGroupId = string(value["SecurityGroupId"].GetString());
        m_securityGroupIdHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupName") && !value["SecurityGroupName"].IsNull())
    {
        if (!value["SecurityGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroup.SecurityGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityGroupName = string(value["SecurityGroupName"].GetString());
        m_securityGroupNameHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupRemark") && !value["SecurityGroupRemark"].IsNull())
    {
        if (!value["SecurityGroupRemark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroup.SecurityGroupRemark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityGroupRemark = string(value["SecurityGroupRemark"].GetString());
        m_securityGroupRemarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_inboundSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InboundSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inboundSet.begin(); itr != m_inboundSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_outboundSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutboundSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_outboundSet.begin(); itr != m_outboundSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_securityGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_securityGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_securityGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupRemark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_securityGroupRemark.c_str(), allocator).Move(), allocator);
    }

}


int64_t SecurityGroup::GetProjectId() const
{
    return m_projectId;
}

void SecurityGroup::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool SecurityGroup::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string SecurityGroup::GetCreateTime() const
{
    return m_createTime;
}

void SecurityGroup::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SecurityGroup::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<SecurityGroupPolicy> SecurityGroup::GetInboundSet() const
{
    return m_inboundSet;
}

void SecurityGroup::SetInboundSet(const vector<SecurityGroupPolicy>& _inboundSet)
{
    m_inboundSet = _inboundSet;
    m_inboundSetHasBeenSet = true;
}

bool SecurityGroup::InboundSetHasBeenSet() const
{
    return m_inboundSetHasBeenSet;
}

vector<SecurityGroupPolicy> SecurityGroup::GetOutboundSet() const
{
    return m_outboundSet;
}

void SecurityGroup::SetOutboundSet(const vector<SecurityGroupPolicy>& _outboundSet)
{
    m_outboundSet = _outboundSet;
    m_outboundSetHasBeenSet = true;
}

bool SecurityGroup::OutboundSetHasBeenSet() const
{
    return m_outboundSetHasBeenSet;
}

string SecurityGroup::GetSecurityGroupId() const
{
    return m_securityGroupId;
}

void SecurityGroup::SetSecurityGroupId(const string& _securityGroupId)
{
    m_securityGroupId = _securityGroupId;
    m_securityGroupIdHasBeenSet = true;
}

bool SecurityGroup::SecurityGroupIdHasBeenSet() const
{
    return m_securityGroupIdHasBeenSet;
}

string SecurityGroup::GetSecurityGroupName() const
{
    return m_securityGroupName;
}

void SecurityGroup::SetSecurityGroupName(const string& _securityGroupName)
{
    m_securityGroupName = _securityGroupName;
    m_securityGroupNameHasBeenSet = true;
}

bool SecurityGroup::SecurityGroupNameHasBeenSet() const
{
    return m_securityGroupNameHasBeenSet;
}

string SecurityGroup::GetSecurityGroupRemark() const
{
    return m_securityGroupRemark;
}

void SecurityGroup::SetSecurityGroupRemark(const string& _securityGroupRemark)
{
    m_securityGroupRemark = _securityGroupRemark;
    m_securityGroupRemarkHasBeenSet = true;
}

bool SecurityGroup::SecurityGroupRemarkHasBeenSet() const
{
    return m_securityGroupRemarkHasBeenSet;
}

