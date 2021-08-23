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

#include <tencentcloud/redis/v20180412/model/SecurityGroupDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

SecurityGroupDetail::SecurityGroupDetail() :
    m_projectIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_securityGroupIdHasBeenSet(false),
    m_securityGroupNameHasBeenSet(false),
    m_securityGroupRemarkHasBeenSet(false),
    m_inboundRuleHasBeenSet(false),
    m_outboundRuleHasBeenSet(false)
{
}

CoreInternalOutcome SecurityGroupDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupDetail.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupId") && !value["SecurityGroupId"].IsNull())
    {
        if (!value["SecurityGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupDetail.SecurityGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityGroupId = string(value["SecurityGroupId"].GetString());
        m_securityGroupIdHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupName") && !value["SecurityGroupName"].IsNull())
    {
        if (!value["SecurityGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupDetail.SecurityGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityGroupName = string(value["SecurityGroupName"].GetString());
        m_securityGroupNameHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupRemark") && !value["SecurityGroupRemark"].IsNull())
    {
        if (!value["SecurityGroupRemark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupDetail.SecurityGroupRemark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityGroupRemark = string(value["SecurityGroupRemark"].GetString());
        m_securityGroupRemarkHasBeenSet = true;
    }

    if (value.HasMember("InboundRule") && !value["InboundRule"].IsNull())
    {
        if (!value["InboundRule"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecurityGroupDetail.InboundRule` is not array type"));

        const rapidjson::Value &tmpValue = value["InboundRule"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecurityGroupsInboundAndOutbound item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_inboundRule.push_back(item);
        }
        m_inboundRuleHasBeenSet = true;
    }

    if (value.HasMember("OutboundRule") && !value["OutboundRule"].IsNull())
    {
        if (!value["OutboundRule"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecurityGroupDetail.OutboundRule` is not array type"));

        const rapidjson::Value &tmpValue = value["OutboundRule"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecurityGroupsInboundAndOutbound item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_outboundRule.push_back(item);
        }
        m_outboundRuleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityGroupDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_inboundRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InboundRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inboundRule.begin(); itr != m_inboundRule.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_outboundRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutboundRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_outboundRule.begin(); itr != m_outboundRule.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t SecurityGroupDetail::GetProjectId() const
{
    return m_projectId;
}

void SecurityGroupDetail::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool SecurityGroupDetail::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string SecurityGroupDetail::GetCreateTime() const
{
    return m_createTime;
}

void SecurityGroupDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SecurityGroupDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SecurityGroupDetail::GetSecurityGroupId() const
{
    return m_securityGroupId;
}

void SecurityGroupDetail::SetSecurityGroupId(const string& _securityGroupId)
{
    m_securityGroupId = _securityGroupId;
    m_securityGroupIdHasBeenSet = true;
}

bool SecurityGroupDetail::SecurityGroupIdHasBeenSet() const
{
    return m_securityGroupIdHasBeenSet;
}

string SecurityGroupDetail::GetSecurityGroupName() const
{
    return m_securityGroupName;
}

void SecurityGroupDetail::SetSecurityGroupName(const string& _securityGroupName)
{
    m_securityGroupName = _securityGroupName;
    m_securityGroupNameHasBeenSet = true;
}

bool SecurityGroupDetail::SecurityGroupNameHasBeenSet() const
{
    return m_securityGroupNameHasBeenSet;
}

string SecurityGroupDetail::GetSecurityGroupRemark() const
{
    return m_securityGroupRemark;
}

void SecurityGroupDetail::SetSecurityGroupRemark(const string& _securityGroupRemark)
{
    m_securityGroupRemark = _securityGroupRemark;
    m_securityGroupRemarkHasBeenSet = true;
}

bool SecurityGroupDetail::SecurityGroupRemarkHasBeenSet() const
{
    return m_securityGroupRemarkHasBeenSet;
}

vector<SecurityGroupsInboundAndOutbound> SecurityGroupDetail::GetInboundRule() const
{
    return m_inboundRule;
}

void SecurityGroupDetail::SetInboundRule(const vector<SecurityGroupsInboundAndOutbound>& _inboundRule)
{
    m_inboundRule = _inboundRule;
    m_inboundRuleHasBeenSet = true;
}

bool SecurityGroupDetail::InboundRuleHasBeenSet() const
{
    return m_inboundRuleHasBeenSet;
}

vector<SecurityGroupsInboundAndOutbound> SecurityGroupDetail::GetOutboundRule() const
{
    return m_outboundRule;
}

void SecurityGroupDetail::SetOutboundRule(const vector<SecurityGroupsInboundAndOutbound>& _outboundRule)
{
    m_outboundRule = _outboundRule;
    m_outboundRuleHasBeenSet = true;
}

bool SecurityGroupDetail::OutboundRuleHasBeenSet() const
{
    return m_outboundRuleHasBeenSet;
}

