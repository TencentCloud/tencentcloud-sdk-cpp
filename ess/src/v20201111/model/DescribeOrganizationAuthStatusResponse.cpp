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

#include <tencentcloud/ess/v20201111/model/DescribeOrganizationAuthStatusResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

DescribeOrganizationAuthStatusResponse::DescribeOrganizationAuthStatusResponse() :
    m_isVerifiedHasBeenSet(false),
    m_authStatusHasBeenSet(false),
    m_authRecordsHasBeenSet(false),
    m_organizationIdHasBeenSet(false)
{
}

CoreInternalOutcome DescribeOrganizationAuthStatusResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("IsVerified") && !rsp["IsVerified"].IsNull())
    {
        if (!rsp["IsVerified"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsVerified` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isVerified = rsp["IsVerified"].GetBool();
        m_isVerifiedHasBeenSet = true;
    }

    if (rsp.HasMember("AuthStatus") && !rsp["AuthStatus"].IsNull())
    {
        if (!rsp["AuthStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuthStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authStatus = rsp["AuthStatus"].GetInt64();
        m_authStatusHasBeenSet = true;
    }

    if (rsp.HasMember("AuthRecords") && !rsp["AuthRecords"].IsNull())
    {
        if (!rsp["AuthRecords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuthRecords` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AuthRecords"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AuthRecord item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_authRecords.push_back(item);
        }
        m_authRecordsHasBeenSet = true;
    }

    if (rsp.HasMember("OrganizationId") && !rsp["OrganizationId"].IsNull())
    {
        if (!rsp["OrganizationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationId = string(rsp["OrganizationId"].GetString());
        m_organizationIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeOrganizationAuthStatusResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_isVerifiedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsVerified";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isVerified, allocator);
    }

    if (m_authStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authStatus, allocator);
    }

    if (m_authRecordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthRecords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_authRecords.begin(); itr != m_authRecords.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_organizationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationId.c_str(), allocator).Move(), allocator);
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


bool DescribeOrganizationAuthStatusResponse::GetIsVerified() const
{
    return m_isVerified;
}

bool DescribeOrganizationAuthStatusResponse::IsVerifiedHasBeenSet() const
{
    return m_isVerifiedHasBeenSet;
}

int64_t DescribeOrganizationAuthStatusResponse::GetAuthStatus() const
{
    return m_authStatus;
}

bool DescribeOrganizationAuthStatusResponse::AuthStatusHasBeenSet() const
{
    return m_authStatusHasBeenSet;
}

vector<AuthRecord> DescribeOrganizationAuthStatusResponse::GetAuthRecords() const
{
    return m_authRecords;
}

bool DescribeOrganizationAuthStatusResponse::AuthRecordsHasBeenSet() const
{
    return m_authRecordsHasBeenSet;
}

string DescribeOrganizationAuthStatusResponse::GetOrganizationId() const
{
    return m_organizationId;
}

bool DescribeOrganizationAuthStatusResponse::OrganizationIdHasBeenSet() const
{
    return m_organizationIdHasBeenSet;
}


