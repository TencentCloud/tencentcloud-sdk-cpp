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

#include <tencentcloud/tcb/v20180608/model/DescribeCloudAppInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribeCloudAppInfoResponse::DescribeCloudAppInfoResponse() :
    m_serviceNameHasBeenSet(false),
    m_frameworkHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_appPathHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_latestVersionNameHasBeenSet(false),
    m_latestStatusHasBeenSet(false),
    m_latestBuildTimeHasBeenSet(false),
    m_deployTypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCloudAppInfoResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("ServiceName") && !rsp["ServiceName"].IsNull())
    {
        if (!rsp["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(rsp["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (rsp.HasMember("Framework") && !rsp["Framework"].IsNull())
    {
        if (!rsp["Framework"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Framework` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_framework = string(rsp["Framework"].GetString());
        m_frameworkHasBeenSet = true;
    }

    if (rsp.HasMember("Domain") && !rsp["Domain"].IsNull())
    {
        if (!rsp["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(rsp["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (rsp.HasMember("AppPath") && !rsp["AppPath"].IsNull())
    {
        if (!rsp["AppPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appPath = string(rsp["AppPath"].GetString());
        m_appPathHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("LatestVersionName") && !rsp["LatestVersionName"].IsNull())
    {
        if (!rsp["LatestVersionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LatestVersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestVersionName = string(rsp["LatestVersionName"].GetString());
        m_latestVersionNameHasBeenSet = true;
    }

    if (rsp.HasMember("LatestStatus") && !rsp["LatestStatus"].IsNull())
    {
        if (!rsp["LatestStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LatestStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestStatus = string(rsp["LatestStatus"].GetString());
        m_latestStatusHasBeenSet = true;
    }

    if (rsp.HasMember("LatestBuildTime") && !rsp["LatestBuildTime"].IsNull())
    {
        if (!rsp["LatestBuildTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LatestBuildTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestBuildTime = string(rsp["LatestBuildTime"].GetString());
        m_latestBuildTimeHasBeenSet = true;
    }

    if (rsp.HasMember("DeployType") && !rsp["DeployType"].IsNull())
    {
        if (!rsp["DeployType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeployType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployType = string(rsp["DeployType"].GetString());
        m_deployTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCloudAppInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_frameworkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Framework";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_framework.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_appPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appPath.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_latestVersionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestVersionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestVersionName.c_str(), allocator).Move(), allocator);
    }

    if (m_latestStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_latestBuildTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestBuildTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestBuildTime.c_str(), allocator).Move(), allocator);
    }

    if (m_deployTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployType.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeCloudAppInfoResponse::GetServiceName() const
{
    return m_serviceName;
}

bool DescribeCloudAppInfoResponse::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string DescribeCloudAppInfoResponse::GetFramework() const
{
    return m_framework;
}

bool DescribeCloudAppInfoResponse::FrameworkHasBeenSet() const
{
    return m_frameworkHasBeenSet;
}

string DescribeCloudAppInfoResponse::GetDomain() const
{
    return m_domain;
}

bool DescribeCloudAppInfoResponse::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DescribeCloudAppInfoResponse::GetAppPath() const
{
    return m_appPath;
}

bool DescribeCloudAppInfoResponse::AppPathHasBeenSet() const
{
    return m_appPathHasBeenSet;
}

string DescribeCloudAppInfoResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeCloudAppInfoResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeCloudAppInfoResponse::GetLatestVersionName() const
{
    return m_latestVersionName;
}

bool DescribeCloudAppInfoResponse::LatestVersionNameHasBeenSet() const
{
    return m_latestVersionNameHasBeenSet;
}

string DescribeCloudAppInfoResponse::GetLatestStatus() const
{
    return m_latestStatus;
}

bool DescribeCloudAppInfoResponse::LatestStatusHasBeenSet() const
{
    return m_latestStatusHasBeenSet;
}

string DescribeCloudAppInfoResponse::GetLatestBuildTime() const
{
    return m_latestBuildTime;
}

bool DescribeCloudAppInfoResponse::LatestBuildTimeHasBeenSet() const
{
    return m_latestBuildTimeHasBeenSet;
}

string DescribeCloudAppInfoResponse::GetDeployType() const
{
    return m_deployType;
}

bool DescribeCloudAppInfoResponse::DeployTypeHasBeenSet() const
{
    return m_deployTypeHasBeenSet;
}


