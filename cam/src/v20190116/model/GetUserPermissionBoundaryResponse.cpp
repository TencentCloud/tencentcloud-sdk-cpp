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

#include <tencentcloud/cam/v20190116/model/GetUserPermissionBoundaryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

GetUserPermissionBoundaryResponse::GetUserPermissionBoundaryResponse() :
    m_policyIdHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_policyDocumentHasBeenSet(false),
    m_policyTypeHasBeenSet(false),
    m_createModeHasBeenSet(false)
{
}

CoreInternalOutcome GetUserPermissionBoundaryResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("PolicyId") && !rsp["PolicyId"].IsNull())
    {
        if (!rsp["PolicyId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = rsp["PolicyId"].GetInt64();
        m_policyIdHasBeenSet = true;
    }

    if (rsp.HasMember("PolicyName") && !rsp["PolicyName"].IsNull())
    {
        if (!rsp["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(rsp["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }

    if (rsp.HasMember("PolicyDocument") && !rsp["PolicyDocument"].IsNull())
    {
        if (!rsp["PolicyDocument"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyDocument` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyDocument = string(rsp["PolicyDocument"].GetString());
        m_policyDocumentHasBeenSet = true;
    }

    if (rsp.HasMember("PolicyType") && !rsp["PolicyType"].IsNull())
    {
        if (!rsp["PolicyType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyType = rsp["PolicyType"].GetInt64();
        m_policyTypeHasBeenSet = true;
    }

    if (rsp.HasMember("CreateMode") && !rsp["CreateMode"].IsNull())
    {
        if (!rsp["CreateMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createMode = rsp["CreateMode"].GetInt64();
        m_createModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetUserPermissionBoundaryResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyId, allocator);
    }

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_policyDocumentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyDocument";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyDocument.c_str(), allocator).Move(), allocator);
    }

    if (m_policyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyType, allocator);
    }

    if (m_createModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createMode, allocator);
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


int64_t GetUserPermissionBoundaryResponse::GetPolicyId() const
{
    return m_policyId;
}

bool GetUserPermissionBoundaryResponse::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string GetUserPermissionBoundaryResponse::GetPolicyName() const
{
    return m_policyName;
}

bool GetUserPermissionBoundaryResponse::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

string GetUserPermissionBoundaryResponse::GetPolicyDocument() const
{
    return m_policyDocument;
}

bool GetUserPermissionBoundaryResponse::PolicyDocumentHasBeenSet() const
{
    return m_policyDocumentHasBeenSet;
}

int64_t GetUserPermissionBoundaryResponse::GetPolicyType() const
{
    return m_policyType;
}

bool GetUserPermissionBoundaryResponse::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

int64_t GetUserPermissionBoundaryResponse::GetCreateMode() const
{
    return m_createMode;
}

bool GetUserPermissionBoundaryResponse::CreateModeHasBeenSet() const
{
    return m_createModeHasBeenSet;
}


