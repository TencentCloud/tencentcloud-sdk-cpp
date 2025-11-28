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

#include <tencentcloud/tke/v20180525/model/CancelUpgradePlanRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

CancelUpgradePlanRequest::CancelUpgradePlanRequest() :
    m_clusterIDHasBeenSet(false),
    m_planIDHasBeenSet(false)
{
}

string CancelUpgradePlanRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterID.c_str(), allocator).Move(), allocator);
    }

    if (m_planIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_planID, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CancelUpgradePlanRequest::GetClusterID() const
{
    return m_clusterID;
}

void CancelUpgradePlanRequest::SetClusterID(const string& _clusterID)
{
    m_clusterID = _clusterID;
    m_clusterIDHasBeenSet = true;
}

bool CancelUpgradePlanRequest::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

int64_t CancelUpgradePlanRequest::GetPlanID() const
{
    return m_planID;
}

void CancelUpgradePlanRequest::SetPlanID(const int64_t& _planID)
{
    m_planID = _planID;
    m_planIDHasBeenSet = true;
}

bool CancelUpgradePlanRequest::PlanIDHasBeenSet() const
{
    return m_planIDHasBeenSet;
}


