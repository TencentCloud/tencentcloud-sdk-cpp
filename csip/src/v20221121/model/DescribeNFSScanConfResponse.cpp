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

#include <tencentcloud/csip/v20221121/model/DescribeNFSScanConfResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeNFSScanConfResponse::DescribeNFSScanConfResponse() :
    m_enableHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_includeQuuidHasBeenSet(false),
    m_excludeQuuidHasBeenSet(false)
{
}

CoreInternalOutcome DescribeNFSScanConfResponse::Deserialize(const string &payload)
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


    return CoreInternalOutcome(true);
}

string DescribeNFSScanConfResponse::ToJsonString() const
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

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeNFSScanConfResponse::GetEnable() const
{
    return m_enable;
}

bool DescribeNFSScanConfResponse::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

uint64_t DescribeNFSScanConfResponse::GetScope() const
{
    return m_scope;
}

bool DescribeNFSScanConfResponse::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

vector<string> DescribeNFSScanConfResponse::GetIncludeQuuid() const
{
    return m_includeQuuid;
}

bool DescribeNFSScanConfResponse::IncludeQuuidHasBeenSet() const
{
    return m_includeQuuidHasBeenSet;
}

vector<string> DescribeNFSScanConfResponse::GetExcludeQuuid() const
{
    return m_excludeQuuid;
}

bool DescribeNFSScanConfResponse::ExcludeQuuidHasBeenSet() const
{
    return m_excludeQuuidHasBeenSet;
}


