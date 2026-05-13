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

#include <tencentcloud/csip/v20221121/model/ModifyDspmAssetSecurityAnalysisSwitchRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyDspmAssetSecurityAnalysisSwitchRequest::ModifyDspmAssetSecurityAnalysisSwitchRequest() :
    m_instancesHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_enableHasBeenSet(false)
{
}

string ModifyDspmAssetSecurityAnalysisSwitchRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Instances";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instances.begin(); itr != m_instances.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enable, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<DspmAssetInstance> ModifyDspmAssetSecurityAnalysisSwitchRequest::GetInstances() const
{
    return m_instances;
}

void ModifyDspmAssetSecurityAnalysisSwitchRequest::SetInstances(const vector<DspmAssetInstance>& _instances)
{
    m_instances = _instances;
    m_instancesHasBeenSet = true;
}

bool ModifyDspmAssetSecurityAnalysisSwitchRequest::InstancesHasBeenSet() const
{
    return m_instancesHasBeenSet;
}

vector<string> ModifyDspmAssetSecurityAnalysisSwitchRequest::GetMemberId() const
{
    return m_memberId;
}

void ModifyDspmAssetSecurityAnalysisSwitchRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ModifyDspmAssetSecurityAnalysisSwitchRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

int64_t ModifyDspmAssetSecurityAnalysisSwitchRequest::GetEnable() const
{
    return m_enable;
}

void ModifyDspmAssetSecurityAnalysisSwitchRequest::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ModifyDspmAssetSecurityAnalysisSwitchRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}


