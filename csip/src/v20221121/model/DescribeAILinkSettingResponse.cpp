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

#include <tencentcloud/csip/v20221121/model/DescribeAILinkSettingResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeAILinkSettingResponse::DescribeAILinkSettingResponse() :
    m_aILinkEnableHasBeenSet(false),
    m_ruleScopeDeepHasBeenSet(false),
    m_ruleScopeBalancedHasBeenSet(false),
    m_ruleScopePreciseHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_quuidsHasBeenSet(false),
    m_excludeQuuidsHasBeenSet(false),
    m_autoIncludeHasBeenSet(false),
    m_tagIDsHasBeenSet(false),
    m_tCSSScopeHasBeenSet(false),
    m_clusterIDsHasBeenSet(false),
    m_excludeClusterIDsHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_excludeInstanceIdsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAILinkSettingResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AILinkEnable") && !rsp["AILinkEnable"].IsNull())
    {
        if (!rsp["AILinkEnable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AILinkEnable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_aILinkEnable = rsp["AILinkEnable"].GetUint64();
        m_aILinkEnableHasBeenSet = true;
    }

    if (rsp.HasMember("RuleScopeDeep") && !rsp["RuleScopeDeep"].IsNull())
    {
        if (!rsp["RuleScopeDeep"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleScopeDeep` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleScopeDeep = rsp["RuleScopeDeep"].GetUint64();
        m_ruleScopeDeepHasBeenSet = true;
    }

    if (rsp.HasMember("RuleScopeBalanced") && !rsp["RuleScopeBalanced"].IsNull())
    {
        if (!rsp["RuleScopeBalanced"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleScopeBalanced` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleScopeBalanced = rsp["RuleScopeBalanced"].GetUint64();
        m_ruleScopeBalancedHasBeenSet = true;
    }

    if (rsp.HasMember("RuleScopePrecise") && !rsp["RuleScopePrecise"].IsNull())
    {
        if (!rsp["RuleScopePrecise"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleScopePrecise` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleScopePrecise = rsp["RuleScopePrecise"].GetUint64();
        m_ruleScopePreciseHasBeenSet = true;
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

    if (rsp.HasMember("ExcludeQuuids") && !rsp["ExcludeQuuids"].IsNull())
    {
        if (!rsp["ExcludeQuuids"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExcludeQuuids` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ExcludeQuuids"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_excludeQuuids.push_back((*itr).GetString());
        }
        m_excludeQuuidsHasBeenSet = true;
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

    if (rsp.HasMember("TagIDs") && !rsp["TagIDs"].IsNull())
    {
        if (!rsp["TagIDs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TagIDs` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TagIDs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tagIDs.push_back((*itr).GetString());
        }
        m_tagIDsHasBeenSet = true;
    }

    if (rsp.HasMember("TCSSScope") && !rsp["TCSSScope"].IsNull())
    {
        if (!rsp["TCSSScope"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TCSSScope` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tCSSScope = rsp["TCSSScope"].GetUint64();
        m_tCSSScopeHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterIDs") && !rsp["ClusterIDs"].IsNull())
    {
        if (!rsp["ClusterIDs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterIDs` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ClusterIDs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_clusterIDs.push_back((*itr).GetString());
        }
        m_clusterIDsHasBeenSet = true;
    }

    if (rsp.HasMember("ExcludeClusterIDs") && !rsp["ExcludeClusterIDs"].IsNull())
    {
        if (!rsp["ExcludeClusterIDs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExcludeClusterIDs` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ExcludeClusterIDs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_excludeClusterIDs.push_back((*itr).GetString());
        }
        m_excludeClusterIDsHasBeenSet = true;
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

string DescribeAILinkSettingResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_aILinkEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AILinkEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aILinkEnable, allocator);
    }

    if (m_ruleScopeDeepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleScopeDeep";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleScopeDeep, allocator);
    }

    if (m_ruleScopeBalancedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleScopeBalanced";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleScopeBalanced, allocator);
    }

    if (m_ruleScopePreciseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleScopePrecise";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleScopePrecise, allocator);
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

    if (m_excludeQuuidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeQuuids";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeQuuids.begin(); itr != m_excludeQuuids.end(); ++itr)
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

    if (m_tagIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagIDs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagIDs.begin(); itr != m_tagIDs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tCSSScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TCSSScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tCSSScope, allocator);
    }

    if (m_clusterIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterIDs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_clusterIDs.begin(); itr != m_clusterIDs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_excludeClusterIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeClusterIDs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeClusterIDs.begin(); itr != m_excludeClusterIDs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


uint64_t DescribeAILinkSettingResponse::GetAILinkEnable() const
{
    return m_aILinkEnable;
}

bool DescribeAILinkSettingResponse::AILinkEnableHasBeenSet() const
{
    return m_aILinkEnableHasBeenSet;
}

uint64_t DescribeAILinkSettingResponse::GetRuleScopeDeep() const
{
    return m_ruleScopeDeep;
}

bool DescribeAILinkSettingResponse::RuleScopeDeepHasBeenSet() const
{
    return m_ruleScopeDeepHasBeenSet;
}

uint64_t DescribeAILinkSettingResponse::GetRuleScopeBalanced() const
{
    return m_ruleScopeBalanced;
}

bool DescribeAILinkSettingResponse::RuleScopeBalancedHasBeenSet() const
{
    return m_ruleScopeBalancedHasBeenSet;
}

uint64_t DescribeAILinkSettingResponse::GetRuleScopePrecise() const
{
    return m_ruleScopePrecise;
}

bool DescribeAILinkSettingResponse::RuleScopePreciseHasBeenSet() const
{
    return m_ruleScopePreciseHasBeenSet;
}

uint64_t DescribeAILinkSettingResponse::GetScope() const
{
    return m_scope;
}

bool DescribeAILinkSettingResponse::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

vector<string> DescribeAILinkSettingResponse::GetQuuids() const
{
    return m_quuids;
}

bool DescribeAILinkSettingResponse::QuuidsHasBeenSet() const
{
    return m_quuidsHasBeenSet;
}

vector<string> DescribeAILinkSettingResponse::GetExcludeQuuids() const
{
    return m_excludeQuuids;
}

bool DescribeAILinkSettingResponse::ExcludeQuuidsHasBeenSet() const
{
    return m_excludeQuuidsHasBeenSet;
}

uint64_t DescribeAILinkSettingResponse::GetAutoInclude() const
{
    return m_autoInclude;
}

bool DescribeAILinkSettingResponse::AutoIncludeHasBeenSet() const
{
    return m_autoIncludeHasBeenSet;
}

vector<string> DescribeAILinkSettingResponse::GetTagIDs() const
{
    return m_tagIDs;
}

bool DescribeAILinkSettingResponse::TagIDsHasBeenSet() const
{
    return m_tagIDsHasBeenSet;
}

uint64_t DescribeAILinkSettingResponse::GetTCSSScope() const
{
    return m_tCSSScope;
}

bool DescribeAILinkSettingResponse::TCSSScopeHasBeenSet() const
{
    return m_tCSSScopeHasBeenSet;
}

vector<string> DescribeAILinkSettingResponse::GetClusterIDs() const
{
    return m_clusterIDs;
}

bool DescribeAILinkSettingResponse::ClusterIDsHasBeenSet() const
{
    return m_clusterIDsHasBeenSet;
}

vector<string> DescribeAILinkSettingResponse::GetExcludeClusterIDs() const
{
    return m_excludeClusterIDs;
}

bool DescribeAILinkSettingResponse::ExcludeClusterIDsHasBeenSet() const
{
    return m_excludeClusterIDsHasBeenSet;
}

vector<string> DescribeAILinkSettingResponse::GetInstanceIds() const
{
    return m_instanceIds;
}

bool DescribeAILinkSettingResponse::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

vector<string> DescribeAILinkSettingResponse::GetExcludeInstanceIds() const
{
    return m_excludeInstanceIds;
}

bool DescribeAILinkSettingResponse::ExcludeInstanceIdsHasBeenSet() const
{
    return m_excludeInstanceIdsHasBeenSet;
}


