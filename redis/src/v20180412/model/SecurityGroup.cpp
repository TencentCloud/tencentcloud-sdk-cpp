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

#include <tencentcloud/redis/v20180412/model/SecurityGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

SecurityGroup::SecurityGroup() :
    m_createTimeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_securityGroupIdHasBeenSet(false),
    m_securityGroupNameHasBeenSet(false),
    m_securityGroupRemarkHasBeenSet(false),
    m_outboundHasBeenSet(false),
    m_inboundHasBeenSet(false)
{
}

CoreInternalOutcome SecurityGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroup.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroup.ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
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

    if (value.HasMember("Outbound") && !value["Outbound"].IsNull())
    {
        if (!value["Outbound"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecurityGroup.Outbound` is not array type"));

        const rapidjson::Value &tmpValue = value["Outbound"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Outbound item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_outbound.push_back(item);
        }
        m_outboundHasBeenSet = true;
    }

    if (value.HasMember("Inbound") && !value["Inbound"].IsNull())
    {
        if (!value["Inbound"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecurityGroup.Inbound` is not array type"));

        const rapidjson::Value &tmpValue = value["Inbound"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Inbound item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_inbound.push_back(item);
        }
        m_inboundHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
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

    if (m_outboundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Outbound";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_outbound.begin(); itr != m_outbound.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_inboundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Inbound";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inbound.begin(); itr != m_inbound.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

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

uint64_t SecurityGroup::GetProjectId() const
{
    return m_projectId;
}

void SecurityGroup::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool SecurityGroup::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
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

vector<Outbound> SecurityGroup::GetOutbound() const
{
    return m_outbound;
}

void SecurityGroup::SetOutbound(const vector<Outbound>& _outbound)
{
    m_outbound = _outbound;
    m_outboundHasBeenSet = true;
}

bool SecurityGroup::OutboundHasBeenSet() const
{
    return m_outboundHasBeenSet;
}

vector<Inbound> SecurityGroup::GetInbound() const
{
    return m_inbound;
}

void SecurityGroup::SetInbound(const vector<Inbound>& _inbound)
{
    m_inbound = _inbound;
    m_inboundHasBeenSet = true;
}

bool SecurityGroup::InboundHasBeenSet() const
{
    return m_inboundHasBeenSet;
}

