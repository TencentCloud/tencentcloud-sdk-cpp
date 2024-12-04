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

#include <tencentcloud/vcube/v20220410/model/CreateTrialLicenseRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vcube::V20220410::Model;
using namespace std;

CreateTrialLicenseRequest::CreateTrialLicenseRequest() :
    m_applicationIdHasBeenSet(false),
    m_featureIdsHasBeenSet(false),
    m_groupHasBeenSet(false)
{
}

string CreateTrialLicenseRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_featureIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeatureIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_featureIds.begin(); itr != m_featureIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_groupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Group";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_group, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTrialLicenseRequest::GetApplicationId() const
{
    return m_applicationId;
}

void CreateTrialLicenseRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool CreateTrialLicenseRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

vector<uint64_t> CreateTrialLicenseRequest::GetFeatureIds() const
{
    return m_featureIds;
}

void CreateTrialLicenseRequest::SetFeatureIds(const vector<uint64_t>& _featureIds)
{
    m_featureIds = _featureIds;
    m_featureIdsHasBeenSet = true;
}

bool CreateTrialLicenseRequest::FeatureIdsHasBeenSet() const
{
    return m_featureIdsHasBeenSet;
}

uint64_t CreateTrialLicenseRequest::GetGroup() const
{
    return m_group;
}

void CreateTrialLicenseRequest::SetGroup(const uint64_t& _group)
{
    m_group = _group;
    m_groupHasBeenSet = true;
}

bool CreateTrialLicenseRequest::GroupHasBeenSet() const
{
    return m_groupHasBeenSet;
}


