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

#include <tencentcloud/iss/v20230517/model/DescribeOrganizationResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

DescribeOrganizationResponse::DescribeOrganizationResponse() :
    m_organizationIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_parentIdHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_parentIdsHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_onlineHasBeenSet(false)
{
}

CoreInternalOutcome DescribeOrganizationResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("OrganizationId") && !rsp["OrganizationId"].IsNull())
    {
        if (!rsp["OrganizationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationId = string(rsp["OrganizationId"].GetString());
        m_organizationIdHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("ParentId") && !rsp["ParentId"].IsNull())
    {
        if (!rsp["ParentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentId = string(rsp["ParentId"].GetString());
        m_parentIdHasBeenSet = true;
    }

    if (rsp.HasMember("Level") && !rsp["Level"].IsNull())
    {
        if (!rsp["Level"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = rsp["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (rsp.HasMember("AppId") && !rsp["AppId"].IsNull())
    {
        if (!rsp["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = rsp["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (rsp.HasMember("ParentIds") && !rsp["ParentIds"].IsNull())
    {
        if (!rsp["ParentIds"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParentIds` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentIds = string(rsp["ParentIds"].GetString());
        m_parentIdsHasBeenSet = true;
    }

    if (rsp.HasMember("Total") && !rsp["Total"].IsNull())
    {
        if (!rsp["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (rsp.HasMember("Online") && !rsp["Online"].IsNull())
    {
        if (!rsp["Online"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Online` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_online = rsp["Online"].GetInt64();
        m_onlineHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeOrganizationResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_organizationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_parentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentId.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_parentIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentIds.c_str(), allocator).Move(), allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_onlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Online";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_online, allocator);
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


string DescribeOrganizationResponse::GetOrganizationId() const
{
    return m_organizationId;
}

bool DescribeOrganizationResponse::OrganizationIdHasBeenSet() const
{
    return m_organizationIdHasBeenSet;
}

string DescribeOrganizationResponse::GetName() const
{
    return m_name;
}

bool DescribeOrganizationResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeOrganizationResponse::GetParentId() const
{
    return m_parentId;
}

bool DescribeOrganizationResponse::ParentIdHasBeenSet() const
{
    return m_parentIdHasBeenSet;
}

int64_t DescribeOrganizationResponse::GetLevel() const
{
    return m_level;
}

bool DescribeOrganizationResponse::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

int64_t DescribeOrganizationResponse::GetAppId() const
{
    return m_appId;
}

bool DescribeOrganizationResponse::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DescribeOrganizationResponse::GetParentIds() const
{
    return m_parentIds;
}

bool DescribeOrganizationResponse::ParentIdsHasBeenSet() const
{
    return m_parentIdsHasBeenSet;
}

int64_t DescribeOrganizationResponse::GetTotal() const
{
    return m_total;
}

bool DescribeOrganizationResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

int64_t DescribeOrganizationResponse::GetOnline() const
{
    return m_online;
}

bool DescribeOrganizationResponse::OnlineHasBeenSet() const
{
    return m_onlineHasBeenSet;
}


