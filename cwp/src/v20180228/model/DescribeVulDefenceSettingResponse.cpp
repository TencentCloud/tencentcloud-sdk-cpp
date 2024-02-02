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

#include <tencentcloud/cwp/v20180228/model/DescribeVulDefenceSettingResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeVulDefenceSettingResponse::DescribeVulDefenceSettingResponse() :
    m_enableHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_quuidsHasBeenSet(false),
    m_flagshipCountHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_autoIncludeHasBeenSet(false),
    m_excludeInstanceIdsHasBeenSet(false)
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


    if (rsp.HasMember("Enable") && !rsp["Enable"].IsNull())
    {
        if (!rsp["Enable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Enable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = rsp["Enable"].GetUint64();
        m_enableHasBeenSet = true;
    }

    if (rsp.HasMember("Scope") && !rsp["Scope"].IsNull())
    {
        if (!rsp["Scope"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Scope` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scope = rsp["Scope"].GetUint64();
        m_scopeHasBeenSet = true;
    }

    if (rsp.HasMember("Quuids") && !rsp["Quuids"].IsNull())
    {
        if (!rsp["Quuids"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Quuids` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Quuids"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_quuids.push_back((*itr).GetString());
        }
        m_quuidsHasBeenSet = true;
    }

    if (rsp.HasMember("FlagshipCount") && !rsp["FlagshipCount"].IsNull())
    {
        if (!rsp["FlagshipCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FlagshipCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_flagshipCount = rsp["FlagshipCount"].GetUint64();
        m_flagshipCountHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceIds") && !rsp["InstanceIds"].IsNull())
    {
        if (!rsp["InstanceIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["InstanceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instanceIds.push_back((*itr).GetString());
        }
        m_instanceIdsHasBeenSet = true;
    }

    if (rsp.HasMember("AutoInclude") && !rsp["AutoInclude"].IsNull())
    {
        if (!rsp["AutoInclude"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoInclude` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoInclude = rsp["AutoInclude"].GetUint64();
        m_autoIncludeHasBeenSet = true;
    }

    if (rsp.HasMember("ExcludeInstanceIds") && !rsp["ExcludeInstanceIds"].IsNull())
    {
        if (!rsp["ExcludeInstanceIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExcludeInstanceIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ExcludeInstanceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_excludeInstanceIds.push_back((*itr).GetString());
        }
        m_excludeInstanceIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeVulDefenceSettingResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scope, allocator);
    }

    if (m_quuidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuids";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_quuids.begin(); itr != m_quuids.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_flagshipCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlagshipCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flagshipCount, allocator);
    }

    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_autoIncludeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoInclude";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoInclude, allocator);
    }

    if (m_excludeInstanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeInstanceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeInstanceIds.begin(); itr != m_excludeInstanceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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


uint64_t DescribeVulDefenceSettingResponse::GetEnable() const
{
    return m_enable;
}

bool DescribeVulDefenceSettingResponse::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

uint64_t DescribeVulDefenceSettingResponse::GetScope() const
{
    return m_scope;
}

bool DescribeVulDefenceSettingResponse::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

vector<string> DescribeVulDefenceSettingResponse::GetQuuids() const
{
    return m_quuids;
}

bool DescribeVulDefenceSettingResponse::QuuidsHasBeenSet() const
{
    return m_quuidsHasBeenSet;
}

uint64_t DescribeVulDefenceSettingResponse::GetFlagshipCount() const
{
    return m_flagshipCount;
}

bool DescribeVulDefenceSettingResponse::FlagshipCountHasBeenSet() const
{
    return m_flagshipCountHasBeenSet;
}

vector<string> DescribeVulDefenceSettingResponse::GetInstanceIds() const
{
    return m_instanceIds;
}

bool DescribeVulDefenceSettingResponse::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

uint64_t DescribeVulDefenceSettingResponse::GetAutoInclude() const
{
    return m_autoInclude;
}

bool DescribeVulDefenceSettingResponse::AutoIncludeHasBeenSet() const
{
    return m_autoIncludeHasBeenSet;
}

vector<string> DescribeVulDefenceSettingResponse::GetExcludeInstanceIds() const
{
    return m_excludeInstanceIds;
}

bool DescribeVulDefenceSettingResponse::ExcludeInstanceIdsHasBeenSet() const
{
    return m_excludeInstanceIdsHasBeenSet;
}


