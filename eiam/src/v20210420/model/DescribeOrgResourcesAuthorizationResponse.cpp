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

#include <tencentcloud/eiam/v20210420/model/DescribeOrgResourcesAuthorizationResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

DescribeOrgResourcesAuthorizationResponse::DescribeOrgResourcesAuthorizationResponse() :
    m_applicationIdHasBeenSet(false),
    m_orgNodeIdHasBeenSet(false),
    m_orgNodeNameHasBeenSet(false),
    m_orgNodePathHasBeenSet(false),
    m_authorizationOrgResourceListHasBeenSet(false),
    m_totalCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeOrgResourcesAuthorizationResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("OrgNodeId") && !rsp["OrgNodeId"].IsNull())
    {
        if (!rsp["OrgNodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgNodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgNodeId = string(rsp["OrgNodeId"].GetString());
        m_orgNodeIdHasBeenSet = true;
    }

    if (rsp.HasMember("OrgNodeName") && !rsp["OrgNodeName"].IsNull())
    {
        if (!rsp["OrgNodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgNodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgNodeName = string(rsp["OrgNodeName"].GetString());
        m_orgNodeNameHasBeenSet = true;
    }

    if (rsp.HasMember("OrgNodePath") && !rsp["OrgNodePath"].IsNull())
    {
        if (!rsp["OrgNodePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgNodePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgNodePath = string(rsp["OrgNodePath"].GetString());
        m_orgNodePathHasBeenSet = true;
    }

    if (rsp.HasMember("AuthorizationOrgResourceList") && !rsp["AuthorizationOrgResourceList"].IsNull())
    {
        if (!rsp["AuthorizationOrgResourceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuthorizationOrgResourceList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AuthorizationOrgResourceList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AuthorizationResourceEntityInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_authorizationOrgResourceList.push_back(item);
        }
        m_authorizationOrgResourceListHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeOrgResourcesAuthorizationResponse::ToJsonString() const
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

    if (m_orgNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgNodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orgNodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_orgNodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgNodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orgNodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_orgNodePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgNodePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orgNodePath.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizationOrgResourceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationOrgResourceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_authorizationOrgResourceList.begin(); itr != m_authorizationOrgResourceList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
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


string DescribeOrgResourcesAuthorizationResponse::GetApplicationId() const
{
    return m_applicationId;
}

bool DescribeOrgResourcesAuthorizationResponse::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string DescribeOrgResourcesAuthorizationResponse::GetOrgNodeId() const
{
    return m_orgNodeId;
}

bool DescribeOrgResourcesAuthorizationResponse::OrgNodeIdHasBeenSet() const
{
    return m_orgNodeIdHasBeenSet;
}

string DescribeOrgResourcesAuthorizationResponse::GetOrgNodeName() const
{
    return m_orgNodeName;
}

bool DescribeOrgResourcesAuthorizationResponse::OrgNodeNameHasBeenSet() const
{
    return m_orgNodeNameHasBeenSet;
}

string DescribeOrgResourcesAuthorizationResponse::GetOrgNodePath() const
{
    return m_orgNodePath;
}

bool DescribeOrgResourcesAuthorizationResponse::OrgNodePathHasBeenSet() const
{
    return m_orgNodePathHasBeenSet;
}

vector<AuthorizationResourceEntityInfo> DescribeOrgResourcesAuthorizationResponse::GetAuthorizationOrgResourceList() const
{
    return m_authorizationOrgResourceList;
}

bool DescribeOrgResourcesAuthorizationResponse::AuthorizationOrgResourceListHasBeenSet() const
{
    return m_authorizationOrgResourceListHasBeenSet;
}

uint64_t DescribeOrgResourcesAuthorizationResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeOrgResourcesAuthorizationResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}


