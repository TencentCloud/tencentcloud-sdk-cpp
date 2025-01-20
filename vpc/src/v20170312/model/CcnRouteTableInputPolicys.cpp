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

#include <tencentcloud/vpc/v20170312/model/CcnRouteTableInputPolicys.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CcnRouteTableInputPolicys::CcnRouteTableInputPolicys() :
    m_policysHasBeenSet(false),
    m_policyVersionHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome CcnRouteTableInputPolicys::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Policys") && !value["Policys"].IsNull())
    {
        if (!value["Policys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CcnRouteTableInputPolicys.Policys` is not array type"));

        const rapidjson::Value &tmpValue = value["Policys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CcnRouteTableInputPolicy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_policys.push_back(item);
        }
        m_policysHasBeenSet = true;
    }

    if (value.HasMember("PolicyVersion") && !value["PolicyVersion"].IsNull())
    {
        if (!value["PolicyVersion"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CcnRouteTableInputPolicys.PolicyVersion` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_policyVersion = value["PolicyVersion"].GetUint64();
        m_policyVersionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnRouteTableInputPolicys.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CcnRouteTableInputPolicys::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_policysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Policys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_policys.begin(); itr != m_policys.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_policyVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyVersion, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


vector<CcnRouteTableInputPolicy> CcnRouteTableInputPolicys::GetPolicys() const
{
    return m_policys;
}

void CcnRouteTableInputPolicys::SetPolicys(const vector<CcnRouteTableInputPolicy>& _policys)
{
    m_policys = _policys;
    m_policysHasBeenSet = true;
}

bool CcnRouteTableInputPolicys::PolicysHasBeenSet() const
{
    return m_policysHasBeenSet;
}

uint64_t CcnRouteTableInputPolicys::GetPolicyVersion() const
{
    return m_policyVersion;
}

void CcnRouteTableInputPolicys::SetPolicyVersion(const uint64_t& _policyVersion)
{
    m_policyVersion = _policyVersion;
    m_policyVersionHasBeenSet = true;
}

bool CcnRouteTableInputPolicys::PolicyVersionHasBeenSet() const
{
    return m_policyVersionHasBeenSet;
}

string CcnRouteTableInputPolicys::GetCreateTime() const
{
    return m_createTime;
}

void CcnRouteTableInputPolicys::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CcnRouteTableInputPolicys::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

