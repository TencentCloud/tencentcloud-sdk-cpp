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

#include <tencentcloud/tione/v20211111/model/DescribeRoleResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

DescribeRoleResponse::DescribeRoleResponse() :
    m_roleIdHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_roleTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_accessRulesHasBeenSet(false),
    m_resourcePermissionsHasBeenSet(false),
    m_totalCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRoleResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("RoleId") && !rsp["RoleId"].IsNull())
    {
        if (!rsp["RoleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleId = string(rsp["RoleId"].GetString());
        m_roleIdHasBeenSet = true;
    }

    if (rsp.HasMember("RoleName") && !rsp["RoleName"].IsNull())
    {
        if (!rsp["RoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleName = string(rsp["RoleName"].GetString());
        m_roleNameHasBeenSet = true;
    }

    if (rsp.HasMember("RoleType") && !rsp["RoleType"].IsNull())
    {
        if (!rsp["RoleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleType = string(rsp["RoleType"].GetString());
        m_roleTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
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

    if (rsp.HasMember("AccessRules") && !rsp["AccessRules"].IsNull())
    {
        if (!rsp["AccessRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccessRules` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AccessRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AccessRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_accessRules.push_back(item);
        }
        m_accessRulesHasBeenSet = true;
    }

    if (rsp.HasMember("ResourcePermissions") && !rsp["ResourcePermissions"].IsNull())
    {
        if (!rsp["ResourcePermissions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourcePermissions` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ResourcePermissions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResourcePermission item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourcePermissions.push_back(item);
        }
        m_resourcePermissionsHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeRoleResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_roleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleId.c_str(), allocator).Move(), allocator);
    }

    if (m_roleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleName.c_str(), allocator).Move(), allocator);
    }

    if (m_roleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleType.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_accessRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_accessRules.begin(); itr != m_accessRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_resourcePermissionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourcePermissions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourcePermissions.begin(); itr != m_resourcePermissions.end(); ++itr, ++i)
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


string DescribeRoleResponse::GetRoleId() const
{
    return m_roleId;
}

bool DescribeRoleResponse::RoleIdHasBeenSet() const
{
    return m_roleIdHasBeenSet;
}

string DescribeRoleResponse::GetRoleName() const
{
    return m_roleName;
}

bool DescribeRoleResponse::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

string DescribeRoleResponse::GetRoleType() const
{
    return m_roleType;
}

bool DescribeRoleResponse::RoleTypeHasBeenSet() const
{
    return m_roleTypeHasBeenSet;
}

string DescribeRoleResponse::GetDescription() const
{
    return m_description;
}

bool DescribeRoleResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DescribeRoleResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeRoleResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<AccessRule> DescribeRoleResponse::GetAccessRules() const
{
    return m_accessRules;
}

bool DescribeRoleResponse::AccessRulesHasBeenSet() const
{
    return m_accessRulesHasBeenSet;
}

vector<ResourcePermission> DescribeRoleResponse::GetResourcePermissions() const
{
    return m_resourcePermissions;
}

bool DescribeRoleResponse::ResourcePermissionsHasBeenSet() const
{
    return m_resourcePermissionsHasBeenSet;
}

int64_t DescribeRoleResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeRoleResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}


