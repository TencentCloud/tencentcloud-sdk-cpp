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

#include <tencentcloud/redis/v20180412/model/InstanceSecurityGroupDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

InstanceSecurityGroupDetail::InstanceSecurityGroupDetail() :
    m_instanceIdHasBeenSet(false),
    m_securityGroupDetailsHasBeenSet(false)
{
}

CoreInternalOutcome InstanceSecurityGroupDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSecurityGroupDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupDetails") && !value["SecurityGroupDetails"].IsNull())
    {
        if (!value["SecurityGroupDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceSecurityGroupDetail.SecurityGroupDetails` is not array type"));

        const rapidjson::Value &tmpValue = value["SecurityGroupDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecurityGroupDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_securityGroupDetails.push_back(item);
        }
        m_securityGroupDetailsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceSecurityGroupDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_securityGroupDetails.begin(); itr != m_securityGroupDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string InstanceSecurityGroupDetail::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceSecurityGroupDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceSecurityGroupDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<SecurityGroupDetail> InstanceSecurityGroupDetail::GetSecurityGroupDetails() const
{
    return m_securityGroupDetails;
}

void InstanceSecurityGroupDetail::SetSecurityGroupDetails(const vector<SecurityGroupDetail>& _securityGroupDetails)
{
    m_securityGroupDetails = _securityGroupDetails;
    m_securityGroupDetailsHasBeenSet = true;
}

bool InstanceSecurityGroupDetail::SecurityGroupDetailsHasBeenSet() const
{
    return m_securityGroupDetailsHasBeenSet;
}

