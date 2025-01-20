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

#include <tencentcloud/vpc/v20170312/model/AccessPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

AccessPolicy::AccessPolicy() :
    m_targetCidrHasBeenSet(false),
    m_vpnGatewayIdSslAccessPolicyIdHasBeenSet(false),
    m_forAllClientHasBeenSet(false),
    m_userGroupIdsHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome AccessPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TargetCidr") && !value["TargetCidr"].IsNull())
    {
        if (!value["TargetCidr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessPolicy.TargetCidr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetCidr = string(value["TargetCidr"].GetString());
        m_targetCidrHasBeenSet = true;
    }

    if (value.HasMember("VpnGatewayIdSslAccessPolicyId") && !value["VpnGatewayIdSslAccessPolicyId"].IsNull())
    {
        if (!value["VpnGatewayIdSslAccessPolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessPolicy.VpnGatewayIdSslAccessPolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpnGatewayIdSslAccessPolicyId = string(value["VpnGatewayIdSslAccessPolicyId"].GetString());
        m_vpnGatewayIdSslAccessPolicyIdHasBeenSet = true;
    }

    if (value.HasMember("ForAllClient") && !value["ForAllClient"].IsNull())
    {
        if (!value["ForAllClient"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessPolicy.ForAllClient` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_forAllClient = value["ForAllClient"].GetUint64();
        m_forAllClientHasBeenSet = true;
    }

    if (value.HasMember("UserGroupIds") && !value["UserGroupIds"].IsNull())
    {
        if (!value["UserGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccessPolicy.UserGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["UserGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_userGroupIds.push_back((*itr).GetString());
        }
        m_userGroupIdsHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessPolicy.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessPolicy.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_targetCidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetCidr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetCidr.c_str(), allocator).Move(), allocator);
    }

    if (m_vpnGatewayIdSslAccessPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpnGatewayIdSslAccessPolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpnGatewayIdSslAccessPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_forAllClientHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForAllClient";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_forAllClient, allocator);
    }

    if (m_userGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_userGroupIds.begin(); itr != m_userGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

}


string AccessPolicy::GetTargetCidr() const
{
    return m_targetCidr;
}

void AccessPolicy::SetTargetCidr(const string& _targetCidr)
{
    m_targetCidr = _targetCidr;
    m_targetCidrHasBeenSet = true;
}

bool AccessPolicy::TargetCidrHasBeenSet() const
{
    return m_targetCidrHasBeenSet;
}

string AccessPolicy::GetVpnGatewayIdSslAccessPolicyId() const
{
    return m_vpnGatewayIdSslAccessPolicyId;
}

void AccessPolicy::SetVpnGatewayIdSslAccessPolicyId(const string& _vpnGatewayIdSslAccessPolicyId)
{
    m_vpnGatewayIdSslAccessPolicyId = _vpnGatewayIdSslAccessPolicyId;
    m_vpnGatewayIdSslAccessPolicyIdHasBeenSet = true;
}

bool AccessPolicy::VpnGatewayIdSslAccessPolicyIdHasBeenSet() const
{
    return m_vpnGatewayIdSslAccessPolicyIdHasBeenSet;
}

uint64_t AccessPolicy::GetForAllClient() const
{
    return m_forAllClient;
}

void AccessPolicy::SetForAllClient(const uint64_t& _forAllClient)
{
    m_forAllClient = _forAllClient;
    m_forAllClientHasBeenSet = true;
}

bool AccessPolicy::ForAllClientHasBeenSet() const
{
    return m_forAllClientHasBeenSet;
}

vector<string> AccessPolicy::GetUserGroupIds() const
{
    return m_userGroupIds;
}

void AccessPolicy::SetUserGroupIds(const vector<string>& _userGroupIds)
{
    m_userGroupIds = _userGroupIds;
    m_userGroupIdsHasBeenSet = true;
}

bool AccessPolicy::UserGroupIdsHasBeenSet() const
{
    return m_userGroupIdsHasBeenSet;
}

string AccessPolicy::GetUpdateTime() const
{
    return m_updateTime;
}

void AccessPolicy::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AccessPolicy::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string AccessPolicy::GetRemark() const
{
    return m_remark;
}

void AccessPolicy::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool AccessPolicy::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

