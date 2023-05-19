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

#include <tencentcloud/tcss/v20201101/model/DescribeVulDefenceSettingResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeVulDefenceSettingResponse::DescribeVulDefenceSettingResponse() :
    m_isEnabledHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_hostCountHasBeenSet(false),
    m_exceptionHostCountHasBeenSet(false),
    m_hostIDsHasBeenSet(false),
    m_hostTotalCountHasBeenSet(false),
    m_supportDefenseVulCountHasBeenSet(false),
    m_hostNodeCountHasBeenSet(false),
    m_superScopeHasBeenSet(false),
    m_superNodeCountHasBeenSet(false),
    m_superNodeIdsHasBeenSet(false),
    m_nodeTotalCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVulDefenceSettingResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("IsEnabled") && !rsp["IsEnabled"].IsNull())
    {
        if (!rsp["IsEnabled"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IsEnabled` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isEnabled = rsp["IsEnabled"].GetInt64();
        m_isEnabledHasBeenSet = true;
    }

    if (rsp.HasMember("Scope") && !rsp["Scope"].IsNull())
    {
        if (!rsp["Scope"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Scope` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scope = rsp["Scope"].GetInt64();
        m_scopeHasBeenSet = true;
    }

    if (rsp.HasMember("HostCount") && !rsp["HostCount"].IsNull())
    {
        if (!rsp["HostCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HostCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hostCount = rsp["HostCount"].GetInt64();
        m_hostCountHasBeenSet = true;
    }

    if (rsp.HasMember("ExceptionHostCount") && !rsp["ExceptionHostCount"].IsNull())
    {
        if (!rsp["ExceptionHostCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExceptionHostCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_exceptionHostCount = rsp["ExceptionHostCount"].GetInt64();
        m_exceptionHostCountHasBeenSet = true;
    }

    if (rsp.HasMember("HostIDs") && !rsp["HostIDs"].IsNull())
    {
        if (!rsp["HostIDs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HostIDs` is not array type"));

        const rapidjson::Value &tmpValue = rsp["HostIDs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_hostIDs.push_back((*itr).GetString());
        }
        m_hostIDsHasBeenSet = true;
    }

    if (rsp.HasMember("HostTotalCount") && !rsp["HostTotalCount"].IsNull())
    {
        if (!rsp["HostTotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HostTotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hostTotalCount = rsp["HostTotalCount"].GetInt64();
        m_hostTotalCountHasBeenSet = true;
    }

    if (rsp.HasMember("SupportDefenseVulCount") && !rsp["SupportDefenseVulCount"].IsNull())
    {
        if (!rsp["SupportDefenseVulCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SupportDefenseVulCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_supportDefenseVulCount = rsp["SupportDefenseVulCount"].GetInt64();
        m_supportDefenseVulCountHasBeenSet = true;
    }

    if (rsp.HasMember("HostNodeCount") && !rsp["HostNodeCount"].IsNull())
    {
        if (!rsp["HostNodeCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HostNodeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hostNodeCount = rsp["HostNodeCount"].GetInt64();
        m_hostNodeCountHasBeenSet = true;
    }

    if (rsp.HasMember("SuperScope") && !rsp["SuperScope"].IsNull())
    {
        if (!rsp["SuperScope"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SuperScope` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_superScope = rsp["SuperScope"].GetInt64();
        m_superScopeHasBeenSet = true;
    }

    if (rsp.HasMember("SuperNodeCount") && !rsp["SuperNodeCount"].IsNull())
    {
        if (!rsp["SuperNodeCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_superNodeCount = rsp["SuperNodeCount"].GetInt64();
        m_superNodeCountHasBeenSet = true;
    }

    if (rsp.HasMember("SuperNodeIds") && !rsp["SuperNodeIds"].IsNull())
    {
        if (!rsp["SuperNodeIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SuperNodeIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SuperNodeIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_superNodeIds.push_back((*itr).GetString());
        }
        m_superNodeIdsHasBeenSet = true;
    }

    if (rsp.HasMember("NodeTotalCount") && !rsp["NodeTotalCount"].IsNull())
    {
        if (!rsp["NodeTotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeTotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeTotalCount = rsp["NodeTotalCount"].GetInt64();
        m_nodeTotalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeVulDefenceSettingResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_isEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEnabled, allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scope, allocator);
    }

    if (m_hostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostCount, allocator);
    }

    if (m_exceptionHostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExceptionHostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exceptionHostCount, allocator);
    }

    if (m_hostIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIDs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hostIDs.begin(); itr != m_hostIDs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_hostTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostTotalCount, allocator);
    }

    if (m_supportDefenseVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportDefenseVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportDefenseVulCount, allocator);
    }

    if (m_hostNodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostNodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostNodeCount, allocator);
    }

    if (m_superScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuperScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_superScope, allocator);
    }

    if (m_superNodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuperNodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_superNodeCount, allocator);
    }

    if (m_superNodeIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuperNodeIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_superNodeIds.begin(); itr != m_superNodeIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nodeTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeTotalCount, allocator);
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


int64_t DescribeVulDefenceSettingResponse::GetIsEnabled() const
{
    return m_isEnabled;
}

bool DescribeVulDefenceSettingResponse::IsEnabledHasBeenSet() const
{
    return m_isEnabledHasBeenSet;
}

int64_t DescribeVulDefenceSettingResponse::GetScope() const
{
    return m_scope;
}

bool DescribeVulDefenceSettingResponse::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

int64_t DescribeVulDefenceSettingResponse::GetHostCount() const
{
    return m_hostCount;
}

bool DescribeVulDefenceSettingResponse::HostCountHasBeenSet() const
{
    return m_hostCountHasBeenSet;
}

int64_t DescribeVulDefenceSettingResponse::GetExceptionHostCount() const
{
    return m_exceptionHostCount;
}

bool DescribeVulDefenceSettingResponse::ExceptionHostCountHasBeenSet() const
{
    return m_exceptionHostCountHasBeenSet;
}

vector<string> DescribeVulDefenceSettingResponse::GetHostIDs() const
{
    return m_hostIDs;
}

bool DescribeVulDefenceSettingResponse::HostIDsHasBeenSet() const
{
    return m_hostIDsHasBeenSet;
}

int64_t DescribeVulDefenceSettingResponse::GetHostTotalCount() const
{
    return m_hostTotalCount;
}

bool DescribeVulDefenceSettingResponse::HostTotalCountHasBeenSet() const
{
    return m_hostTotalCountHasBeenSet;
}

int64_t DescribeVulDefenceSettingResponse::GetSupportDefenseVulCount() const
{
    return m_supportDefenseVulCount;
}

bool DescribeVulDefenceSettingResponse::SupportDefenseVulCountHasBeenSet() const
{
    return m_supportDefenseVulCountHasBeenSet;
}

int64_t DescribeVulDefenceSettingResponse::GetHostNodeCount() const
{
    return m_hostNodeCount;
}

bool DescribeVulDefenceSettingResponse::HostNodeCountHasBeenSet() const
{
    return m_hostNodeCountHasBeenSet;
}

int64_t DescribeVulDefenceSettingResponse::GetSuperScope() const
{
    return m_superScope;
}

bool DescribeVulDefenceSettingResponse::SuperScopeHasBeenSet() const
{
    return m_superScopeHasBeenSet;
}

int64_t DescribeVulDefenceSettingResponse::GetSuperNodeCount() const
{
    return m_superNodeCount;
}

bool DescribeVulDefenceSettingResponse::SuperNodeCountHasBeenSet() const
{
    return m_superNodeCountHasBeenSet;
}

vector<string> DescribeVulDefenceSettingResponse::GetSuperNodeIds() const
{
    return m_superNodeIds;
}

bool DescribeVulDefenceSettingResponse::SuperNodeIdsHasBeenSet() const
{
    return m_superNodeIdsHasBeenSet;
}

int64_t DescribeVulDefenceSettingResponse::GetNodeTotalCount() const
{
    return m_nodeTotalCount;
}

bool DescribeVulDefenceSettingResponse::NodeTotalCountHasBeenSet() const
{
    return m_nodeTotalCountHasBeenSet;
}


