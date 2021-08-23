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

#include <tencentcloud/eiam/v20210420/model/DescribeUserResourcesAuthorizationResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

DescribeUserResourcesAuthorizationResponse::DescribeUserResourcesAuthorizationResponse() :
    m_applicationIdHasBeenSet(false),
    m_applicationAccountsHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_authorizationUserResourceListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeUserResourcesAuthorizationResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ApplicationId") && !rsp["ApplicationId"].IsNull())
    {
        if (!rsp["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(rsp["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (rsp.HasMember("ApplicationAccounts") && !rsp["ApplicationAccounts"].IsNull())
    {
        if (!rsp["ApplicationAccounts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApplicationAccounts` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ApplicationAccounts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_applicationAccounts.push_back((*itr).GetString());
        }
        m_applicationAccountsHasBeenSet = true;
    }

    if (rsp.HasMember("UserId") && !rsp["UserId"].IsNull())
    {
        if (!rsp["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(rsp["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (rsp.HasMember("UserName") && !rsp["UserName"].IsNull())
    {
        if (!rsp["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(rsp["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (rsp.HasMember("AuthorizationUserResourceList") && !rsp["AuthorizationUserResourceList"].IsNull())
    {
        if (!rsp["AuthorizationUserResourceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuthorizationUserResourceList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AuthorizationUserResourceList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AuthorizationUserResouceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_authorizationUserResourceList.push_back(item);
        }
        m_authorizationUserResourceListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeUserResourcesAuthorizationResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationAccountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationAccounts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_applicationAccounts.begin(); itr != m_applicationAccounts.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizationUserResourceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationUserResourceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_authorizationUserResourceList.begin(); itr != m_authorizationUserResourceList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


string DescribeUserResourcesAuthorizationResponse::GetApplicationId() const
{
    return m_applicationId;
}

bool DescribeUserResourcesAuthorizationResponse::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

vector<string> DescribeUserResourcesAuthorizationResponse::GetApplicationAccounts() const
{
    return m_applicationAccounts;
}

bool DescribeUserResourcesAuthorizationResponse::ApplicationAccountsHasBeenSet() const
{
    return m_applicationAccountsHasBeenSet;
}

string DescribeUserResourcesAuthorizationResponse::GetUserId() const
{
    return m_userId;
}

bool DescribeUserResourcesAuthorizationResponse::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string DescribeUserResourcesAuthorizationResponse::GetUserName() const
{
    return m_userName;
}

bool DescribeUserResourcesAuthorizationResponse::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

vector<AuthorizationUserResouceInfo> DescribeUserResourcesAuthorizationResponse::GetAuthorizationUserResourceList() const
{
    return m_authorizationUserResourceList;
}

bool DescribeUserResourcesAuthorizationResponse::AuthorizationUserResourceListHasBeenSet() const
{
    return m_authorizationUserResourceListHasBeenSet;
}


