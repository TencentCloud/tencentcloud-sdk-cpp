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

#include <tencentcloud/tcss/v20201101/model/CreateComplianceTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

CreateComplianceTaskRequest::CreateComplianceTaskRequest() :
    m_assetTypeSetHasBeenSet(false),
    m_policySetIdHasBeenSet(false),
    m_periodTaskIdHasBeenSet(false)
{
}

string CreateComplianceTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_assetTypeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetTypeSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_assetTypeSet.begin(); itr != m_assetTypeSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_policySetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicySetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_policySetId, allocator);
    }

    if (m_periodTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodTaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_periodTaskId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> CreateComplianceTaskRequest::GetAssetTypeSet() const
{
    return m_assetTypeSet;
}

void CreateComplianceTaskRequest::SetAssetTypeSet(const vector<string>& _assetTypeSet)
{
    m_assetTypeSet = _assetTypeSet;
    m_assetTypeSetHasBeenSet = true;
}

bool CreateComplianceTaskRequest::AssetTypeSetHasBeenSet() const
{
    return m_assetTypeSetHasBeenSet;
}

uint64_t CreateComplianceTaskRequest::GetPolicySetId() const
{
    return m_policySetId;
}

void CreateComplianceTaskRequest::SetPolicySetId(const uint64_t& _policySetId)
{
    m_policySetId = _policySetId;
    m_policySetIdHasBeenSet = true;
}

bool CreateComplianceTaskRequest::PolicySetIdHasBeenSet() const
{
    return m_policySetIdHasBeenSet;
}

uint64_t CreateComplianceTaskRequest::GetPeriodTaskId() const
{
    return m_periodTaskId;
}

void CreateComplianceTaskRequest::SetPeriodTaskId(const uint64_t& _periodTaskId)
{
    m_periodTaskId = _periodTaskId;
    m_periodTaskIdHasBeenSet = true;
}

bool CreateComplianceTaskRequest::PeriodTaskIdHasBeenSet() const
{
    return m_periodTaskIdHasBeenSet;
}


