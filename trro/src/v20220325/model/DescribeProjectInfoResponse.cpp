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

#include <tencentcloud/trro/v20220325/model/DescribeProjectInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trro::V20220325::Model;
using namespace std;

DescribeProjectInfoResponse::DescribeProjectInfoResponse() :
    m_projectNameHasBeenSet(false),
    m_projectDescriptionHasBeenSet(false),
    m_policyModeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeProjectInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ProjectName") && !rsp["ProjectName"].IsNull())
    {
        if (!rsp["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(rsp["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (rsp.HasMember("ProjectDescription") && !rsp["ProjectDescription"].IsNull())
    {
        if (!rsp["ProjectDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectDescription = string(rsp["ProjectDescription"].GetString());
        m_projectDescriptionHasBeenSet = true;
    }

    if (rsp.HasMember("PolicyMode") && !rsp["PolicyMode"].IsNull())
    {
        if (!rsp["PolicyMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyMode = string(rsp["PolicyMode"].GetString());
        m_policyModeHasBeenSet = true;
    }

    if (rsp.HasMember("ModifyTime") && !rsp["ModifyTime"].IsNull())
    {
        if (!rsp["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(rsp["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeProjectInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_policyModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyMode.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
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


string DescribeProjectInfoResponse::GetProjectName() const
{
    return m_projectName;
}

bool DescribeProjectInfoResponse::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string DescribeProjectInfoResponse::GetProjectDescription() const
{
    return m_projectDescription;
}

bool DescribeProjectInfoResponse::ProjectDescriptionHasBeenSet() const
{
    return m_projectDescriptionHasBeenSet;
}

string DescribeProjectInfoResponse::GetPolicyMode() const
{
    return m_policyMode;
}

bool DescribeProjectInfoResponse::PolicyModeHasBeenSet() const
{
    return m_policyModeHasBeenSet;
}

string DescribeProjectInfoResponse::GetModifyTime() const
{
    return m_modifyTime;
}

bool DescribeProjectInfoResponse::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}


