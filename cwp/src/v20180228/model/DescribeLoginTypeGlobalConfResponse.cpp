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

#include <tencentcloud/cwp/v20180228/model/DescribeLoginTypeGlobalConfResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeLoginTypeGlobalConfResponse::DescribeLoginTypeGlobalConfResponse() :
    m_enableHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_includeHostCountHasBeenSet(false),
    m_excludeHostCountHasBeenSet(false),
    m_includeQuuidHasBeenSet(false),
    m_excludeQuuidHasBeenSet(false),
    m_enableCountHasBeenSet(false),
    m_disableCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeLoginTypeGlobalConfResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("IncludeHostCount") && !rsp["IncludeHostCount"].IsNull())
    {
        if (!rsp["IncludeHostCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IncludeHostCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_includeHostCount = rsp["IncludeHostCount"].GetUint64();
        m_includeHostCountHasBeenSet = true;
    }

    if (rsp.HasMember("ExcludeHostCount") && !rsp["ExcludeHostCount"].IsNull())
    {
        if (!rsp["ExcludeHostCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExcludeHostCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_excludeHostCount = rsp["ExcludeHostCount"].GetUint64();
        m_excludeHostCountHasBeenSet = true;
    }

    if (rsp.HasMember("IncludeQuuid") && !rsp["IncludeQuuid"].IsNull())
    {
        if (!rsp["IncludeQuuid"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IncludeQuuid` is not array type"));

        const rapidjson::Value &tmpValue = rsp["IncludeQuuid"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_includeQuuid.push_back((*itr).GetString());
        }
        m_includeQuuidHasBeenSet = true;
    }

    if (rsp.HasMember("ExcludeQuuid") && !rsp["ExcludeQuuid"].IsNull())
    {
        if (!rsp["ExcludeQuuid"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExcludeQuuid` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ExcludeQuuid"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_excludeQuuid.push_back((*itr).GetString());
        }
        m_excludeQuuidHasBeenSet = true;
    }

    if (rsp.HasMember("EnableCount") && !rsp["EnableCount"].IsNull())
    {
        if (!rsp["EnableCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EnableCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enableCount = rsp["EnableCount"].GetUint64();
        m_enableCountHasBeenSet = true;
    }

    if (rsp.HasMember("DisableCount") && !rsp["DisableCount"].IsNull())
    {
        if (!rsp["DisableCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DisableCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_disableCount = rsp["DisableCount"].GetUint64();
        m_disableCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeLoginTypeGlobalConfResponse::ToJsonString() const
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

    if (m_includeHostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeHostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_includeHostCount, allocator);
    }

    if (m_excludeHostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeHostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_excludeHostCount, allocator);
    }

    if (m_includeQuuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeQuuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_includeQuuid.begin(); itr != m_includeQuuid.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_excludeQuuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeQuuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeQuuid.begin(); itr != m_excludeQuuid.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_enableCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableCount, allocator);
    }

    if (m_disableCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disableCount, allocator);
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


uint64_t DescribeLoginTypeGlobalConfResponse::GetEnable() const
{
    return m_enable;
}

bool DescribeLoginTypeGlobalConfResponse::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

uint64_t DescribeLoginTypeGlobalConfResponse::GetScope() const
{
    return m_scope;
}

bool DescribeLoginTypeGlobalConfResponse::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

uint64_t DescribeLoginTypeGlobalConfResponse::GetIncludeHostCount() const
{
    return m_includeHostCount;
}

bool DescribeLoginTypeGlobalConfResponse::IncludeHostCountHasBeenSet() const
{
    return m_includeHostCountHasBeenSet;
}

uint64_t DescribeLoginTypeGlobalConfResponse::GetExcludeHostCount() const
{
    return m_excludeHostCount;
}

bool DescribeLoginTypeGlobalConfResponse::ExcludeHostCountHasBeenSet() const
{
    return m_excludeHostCountHasBeenSet;
}

vector<string> DescribeLoginTypeGlobalConfResponse::GetIncludeQuuid() const
{
    return m_includeQuuid;
}

bool DescribeLoginTypeGlobalConfResponse::IncludeQuuidHasBeenSet() const
{
    return m_includeQuuidHasBeenSet;
}

vector<string> DescribeLoginTypeGlobalConfResponse::GetExcludeQuuid() const
{
    return m_excludeQuuid;
}

bool DescribeLoginTypeGlobalConfResponse::ExcludeQuuidHasBeenSet() const
{
    return m_excludeQuuidHasBeenSet;
}

uint64_t DescribeLoginTypeGlobalConfResponse::GetEnableCount() const
{
    return m_enableCount;
}

bool DescribeLoginTypeGlobalConfResponse::EnableCountHasBeenSet() const
{
    return m_enableCountHasBeenSet;
}

uint64_t DescribeLoginTypeGlobalConfResponse::GetDisableCount() const
{
    return m_disableCount;
}

bool DescribeLoginTypeGlobalConfResponse::DisableCountHasBeenSet() const
{
    return m_disableCountHasBeenSet;
}


