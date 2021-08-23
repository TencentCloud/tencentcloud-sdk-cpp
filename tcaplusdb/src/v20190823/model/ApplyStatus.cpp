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

#include <tencentcloud/tcaplusdb/v20190823/model/ApplyStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

ApplyStatus::ApplyStatus() :
    m_applicationIdHasBeenSet(false),
    m_applicationStatusHasBeenSet(false),
    m_applicationTypeHasBeenSet(false),
    m_clusterIdHasBeenSet(false)
{
}

CoreInternalOutcome ApplyStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyStatus.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationStatus") && !value["ApplicationStatus"].IsNull())
    {
        if (!value["ApplicationStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyStatus.ApplicationStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_applicationStatus = value["ApplicationStatus"].GetInt64();
        m_applicationStatusHasBeenSet = true;
    }

    if (value.HasMember("ApplicationType") && !value["ApplicationType"].IsNull())
    {
        if (!value["ApplicationType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyStatus.ApplicationType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_applicationType = value["ApplicationType"].GetInt64();
        m_applicationTypeHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyStatus.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApplyStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applicationStatus, allocator);
    }

    if (m_applicationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applicationType, allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

}


string ApplyStatus::GetApplicationId() const
{
    return m_applicationId;
}

void ApplyStatus::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool ApplyStatus::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

int64_t ApplyStatus::GetApplicationStatus() const
{
    return m_applicationStatus;
}

void ApplyStatus::SetApplicationStatus(const int64_t& _applicationStatus)
{
    m_applicationStatus = _applicationStatus;
    m_applicationStatusHasBeenSet = true;
}

bool ApplyStatus::ApplicationStatusHasBeenSet() const
{
    return m_applicationStatusHasBeenSet;
}

int64_t ApplyStatus::GetApplicationType() const
{
    return m_applicationType;
}

void ApplyStatus::SetApplicationType(const int64_t& _applicationType)
{
    m_applicationType = _applicationType;
    m_applicationTypeHasBeenSet = true;
}

bool ApplyStatus::ApplicationTypeHasBeenSet() const
{
    return m_applicationTypeHasBeenSet;
}

string ApplyStatus::GetClusterId() const
{
    return m_clusterId;
}

void ApplyStatus::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ApplyStatus::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

