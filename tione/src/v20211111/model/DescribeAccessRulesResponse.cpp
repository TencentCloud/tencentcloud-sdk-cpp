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

#include <tencentcloud/tione/v20211111/model/DescribeAccessRulesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

DescribeAccessRulesResponse::DescribeAccessRulesResponse() :
    m_accessRulesHasBeenSet(false),
    m_fullAccessRulesHasBeenSet(false),
    m_globalRolesHasBeenSet(false),
    m_workspacesHasBeenSet(false),
    m_outsideAccessRulesHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAccessRulesResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("FullAccessRules") && !rsp["FullAccessRules"].IsNull())
    {
        if (!rsp["FullAccessRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FullAccessRules` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FullAccessRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AccessRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fullAccessRules.push_back(item);
        }
        m_fullAccessRulesHasBeenSet = true;
    }

    if (rsp.HasMember("GlobalRoles") && !rsp["GlobalRoles"].IsNull())
    {
        if (!rsp["GlobalRoles"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GlobalRoles` is not array type"));

        const rapidjson::Value &tmpValue = rsp["GlobalRoles"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_globalRoles.push_back((*itr).GetString());
        }
        m_globalRolesHasBeenSet = true;
    }

    if (rsp.HasMember("Workspaces") && !rsp["Workspaces"].IsNull())
    {
        if (!rsp["Workspaces"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Workspaces` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Workspaces"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Workspace item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_workspaces.push_back(item);
        }
        m_workspacesHasBeenSet = true;
    }

    if (rsp.HasMember("OutsideAccessRules") && !rsp["OutsideAccessRules"].IsNull())
    {
        if (!rsp["OutsideAccessRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OutsideAccessRules` is not array type"));

        const rapidjson::Value &tmpValue = rsp["OutsideAccessRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AccessRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_outsideAccessRules.push_back(item);
        }
        m_outsideAccessRulesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAccessRulesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    if (m_fullAccessRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullAccessRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fullAccessRules.begin(); itr != m_fullAccessRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_globalRolesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalRoles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_globalRoles.begin(); itr != m_globalRoles.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_workspacesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Workspaces";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_workspaces.begin(); itr != m_workspaces.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_outsideAccessRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutsideAccessRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_outsideAccessRules.begin(); itr != m_outsideAccessRules.end(); ++itr, ++i)
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


vector<AccessRule> DescribeAccessRulesResponse::GetAccessRules() const
{
    return m_accessRules;
}

bool DescribeAccessRulesResponse::AccessRulesHasBeenSet() const
{
    return m_accessRulesHasBeenSet;
}

vector<AccessRule> DescribeAccessRulesResponse::GetFullAccessRules() const
{
    return m_fullAccessRules;
}

bool DescribeAccessRulesResponse::FullAccessRulesHasBeenSet() const
{
    return m_fullAccessRulesHasBeenSet;
}

vector<string> DescribeAccessRulesResponse::GetGlobalRoles() const
{
    return m_globalRoles;
}

bool DescribeAccessRulesResponse::GlobalRolesHasBeenSet() const
{
    return m_globalRolesHasBeenSet;
}

vector<Workspace> DescribeAccessRulesResponse::GetWorkspaces() const
{
    return m_workspaces;
}

bool DescribeAccessRulesResponse::WorkspacesHasBeenSet() const
{
    return m_workspacesHasBeenSet;
}

vector<AccessRule> DescribeAccessRulesResponse::GetOutsideAccessRules() const
{
    return m_outsideAccessRules;
}

bool DescribeAccessRulesResponse::OutsideAccessRulesHasBeenSet() const
{
    return m_outsideAccessRulesHasBeenSet;
}


