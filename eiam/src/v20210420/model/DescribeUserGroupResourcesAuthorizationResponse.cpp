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

#include <tencentcloud/eiam/v20210420/model/DescribeUserGroupResourcesAuthorizationResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

DescribeUserGroupResourcesAuthorizationResponse::DescribeUserGroupResourcesAuthorizationResponse() :
    m_applicationIdHasBeenSet(false),
    m_userGroupIdHasBeenSet(false),
    m_userGroupNameHasBeenSet(false),
    m_authorizationUserGroupResourceListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeUserGroupResourcesAuthorizationResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("UserGroupId") && !rsp["UserGroupId"].IsNull())
    {
        if (!rsp["UserGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userGroupId = string(rsp["UserGroupId"].GetString());
        m_userGroupIdHasBeenSet = true;
    }

    if (rsp.HasMember("UserGroupName") && !rsp["UserGroupName"].IsNull())
    {
        if (!rsp["UserGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userGroupName = string(rsp["UserGroupName"].GetString());
        m_userGroupNameHasBeenSet = true;
    }

    if (rsp.HasMember("AuthorizationUserGroupResourceList") && !rsp["AuthorizationUserGroupResourceList"].IsNull())
    {
        if (!rsp["AuthorizationUserGroupResourceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuthorizationUserGroupResourceList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AuthorizationUserGroupResourceList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AuthorizationResourceEntityInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_authorizationUserGroupResourceList.push_back(item);
        }
        m_authorizationUserGroupResourceListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeUserGroupResourcesAuthorizationResponse::ToJsonString() const
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

    if (m_userGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_userGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizationUserGroupResourceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationUserGroupResourceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_authorizationUserGroupResourceList.begin(); itr != m_authorizationUserGroupResourceList.end(); ++itr, ++i)
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


string DescribeUserGroupResourcesAuthorizationResponse::GetApplicationId() const
{
    return m_applicationId;
}

bool DescribeUserGroupResourcesAuthorizationResponse::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string DescribeUserGroupResourcesAuthorizationResponse::GetUserGroupId() const
{
    return m_userGroupId;
}

bool DescribeUserGroupResourcesAuthorizationResponse::UserGroupIdHasBeenSet() const
{
    return m_userGroupIdHasBeenSet;
}

string DescribeUserGroupResourcesAuthorizationResponse::GetUserGroupName() const
{
    return m_userGroupName;
}

bool DescribeUserGroupResourcesAuthorizationResponse::UserGroupNameHasBeenSet() const
{
    return m_userGroupNameHasBeenSet;
}

vector<AuthorizationResourceEntityInfo> DescribeUserGroupResourcesAuthorizationResponse::GetAuthorizationUserGroupResourceList() const
{
    return m_authorizationUserGroupResourceList;
}

bool DescribeUserGroupResourcesAuthorizationResponse::AuthorizationUserGroupResourceListHasBeenSet() const
{
    return m_authorizationUserGroupResourceListHasBeenSet;
}


