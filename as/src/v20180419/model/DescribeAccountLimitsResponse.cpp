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

#include <tencentcloud/as/v20180419/model/DescribeAccountLimitsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::As::V20180419::Model;
using namespace rapidjson;
using namespace std;

DescribeAccountLimitsResponse::DescribeAccountLimitsResponse() :
    m_maxNumberOfLaunchConfigurationsHasBeenSet(false),
    m_numberOfLaunchConfigurationsHasBeenSet(false),
    m_maxNumberOfAutoScalingGroupsHasBeenSet(false),
    m_numberOfAutoScalingGroupsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAccountLimitsResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("MaxNumberOfLaunchConfigurations") && !rsp["MaxNumberOfLaunchConfigurations"].IsNull())
    {
        if (!rsp["MaxNumberOfLaunchConfigurations"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `MaxNumberOfLaunchConfigurations` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxNumberOfLaunchConfigurations = rsp["MaxNumberOfLaunchConfigurations"].GetInt64();
        m_maxNumberOfLaunchConfigurationsHasBeenSet = true;
    }

    if (rsp.HasMember("NumberOfLaunchConfigurations") && !rsp["NumberOfLaunchConfigurations"].IsNull())
    {
        if (!rsp["NumberOfLaunchConfigurations"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `NumberOfLaunchConfigurations` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_numberOfLaunchConfigurations = rsp["NumberOfLaunchConfigurations"].GetInt64();
        m_numberOfLaunchConfigurationsHasBeenSet = true;
    }

    if (rsp.HasMember("MaxNumberOfAutoScalingGroups") && !rsp["MaxNumberOfAutoScalingGroups"].IsNull())
    {
        if (!rsp["MaxNumberOfAutoScalingGroups"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `MaxNumberOfAutoScalingGroups` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxNumberOfAutoScalingGroups = rsp["MaxNumberOfAutoScalingGroups"].GetInt64();
        m_maxNumberOfAutoScalingGroupsHasBeenSet = true;
    }

    if (rsp.HasMember("NumberOfAutoScalingGroups") && !rsp["NumberOfAutoScalingGroups"].IsNull())
    {
        if (!rsp["NumberOfAutoScalingGroups"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `NumberOfAutoScalingGroups` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_numberOfAutoScalingGroups = rsp["NumberOfAutoScalingGroups"].GetInt64();
        m_numberOfAutoScalingGroupsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


int64_t DescribeAccountLimitsResponse::GetMaxNumberOfLaunchConfigurations() const
{
    return m_maxNumberOfLaunchConfigurations;
}

bool DescribeAccountLimitsResponse::MaxNumberOfLaunchConfigurationsHasBeenSet() const
{
    return m_maxNumberOfLaunchConfigurationsHasBeenSet;
}

int64_t DescribeAccountLimitsResponse::GetNumberOfLaunchConfigurations() const
{
    return m_numberOfLaunchConfigurations;
}

bool DescribeAccountLimitsResponse::NumberOfLaunchConfigurationsHasBeenSet() const
{
    return m_numberOfLaunchConfigurationsHasBeenSet;
}

int64_t DescribeAccountLimitsResponse::GetMaxNumberOfAutoScalingGroups() const
{
    return m_maxNumberOfAutoScalingGroups;
}

bool DescribeAccountLimitsResponse::MaxNumberOfAutoScalingGroupsHasBeenSet() const
{
    return m_maxNumberOfAutoScalingGroupsHasBeenSet;
}

int64_t DescribeAccountLimitsResponse::GetNumberOfAutoScalingGroups() const
{
    return m_numberOfAutoScalingGroups;
}

bool DescribeAccountLimitsResponse::NumberOfAutoScalingGroupsHasBeenSet() const
{
    return m_numberOfAutoScalingGroupsHasBeenSet;
}


