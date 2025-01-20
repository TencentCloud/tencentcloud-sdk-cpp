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

#include <tencentcloud/vpc/v20170312/model/ReferredSecurityGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ReferredSecurityGroup::ReferredSecurityGroup() :
    m_securityGroupIdHasBeenSet(false),
    m_referredSecurityGroupIdsHasBeenSet(false)
{
}

CoreInternalOutcome ReferredSecurityGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SecurityGroupId") && !value["SecurityGroupId"].IsNull())
    {
        if (!value["SecurityGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReferredSecurityGroup.SecurityGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityGroupId = string(value["SecurityGroupId"].GetString());
        m_securityGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ReferredSecurityGroupIds") && !value["ReferredSecurityGroupIds"].IsNull())
    {
        if (!value["ReferredSecurityGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReferredSecurityGroup.ReferredSecurityGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ReferredSecurityGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_referredSecurityGroupIds.push_back((*itr).GetString());
        }
        m_referredSecurityGroupIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReferredSecurityGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_securityGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_securityGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_referredSecurityGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferredSecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_referredSecurityGroupIds.begin(); itr != m_referredSecurityGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ReferredSecurityGroup::GetSecurityGroupId() const
{
    return m_securityGroupId;
}

void ReferredSecurityGroup::SetSecurityGroupId(const string& _securityGroupId)
{
    m_securityGroupId = _securityGroupId;
    m_securityGroupIdHasBeenSet = true;
}

bool ReferredSecurityGroup::SecurityGroupIdHasBeenSet() const
{
    return m_securityGroupIdHasBeenSet;
}

vector<string> ReferredSecurityGroup::GetReferredSecurityGroupIds() const
{
    return m_referredSecurityGroupIds;
}

void ReferredSecurityGroup::SetReferredSecurityGroupIds(const vector<string>& _referredSecurityGroupIds)
{
    m_referredSecurityGroupIds = _referredSecurityGroupIds;
    m_referredSecurityGroupIdsHasBeenSet = true;
}

bool ReferredSecurityGroup::ReferredSecurityGroupIdsHasBeenSet() const
{
    return m_referredSecurityGroupIdsHasBeenSet;
}

