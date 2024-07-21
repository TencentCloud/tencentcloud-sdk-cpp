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

#include <tencentcloud/cynosdb/v20190107/model/ModifyResourcePackagesDeductionPriorityRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ModifyResourcePackagesDeductionPriorityRequest::ModifyResourcePackagesDeductionPriorityRequest() :
    m_packageTypeHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_deductionPrioritiesHasBeenSet(false)
{
}

string ModifyResourcePackagesDeductionPriorityRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_packageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_packageType.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_deductionPrioritiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductionPriorities";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deductionPriorities.begin(); itr != m_deductionPriorities.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyResourcePackagesDeductionPriorityRequest::GetPackageType() const
{
    return m_packageType;
}

void ModifyResourcePackagesDeductionPriorityRequest::SetPackageType(const string& _packageType)
{
    m_packageType = _packageType;
    m_packageTypeHasBeenSet = true;
}

bool ModifyResourcePackagesDeductionPriorityRequest::PackageTypeHasBeenSet() const
{
    return m_packageTypeHasBeenSet;
}

string ModifyResourcePackagesDeductionPriorityRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyResourcePackagesDeductionPriorityRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyResourcePackagesDeductionPriorityRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<PackagePriority> ModifyResourcePackagesDeductionPriorityRequest::GetDeductionPriorities() const
{
    return m_deductionPriorities;
}

void ModifyResourcePackagesDeductionPriorityRequest::SetDeductionPriorities(const vector<PackagePriority>& _deductionPriorities)
{
    m_deductionPriorities = _deductionPriorities;
    m_deductionPrioritiesHasBeenSet = true;
}

bool ModifyResourcePackagesDeductionPriorityRequest::DeductionPrioritiesHasBeenSet() const
{
    return m_deductionPrioritiesHasBeenSet;
}


