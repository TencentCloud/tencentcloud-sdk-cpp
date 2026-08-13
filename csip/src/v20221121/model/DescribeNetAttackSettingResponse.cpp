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

#include <tencentcloud/csip/v20221121/model/DescribeNetAttackSettingResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeNetAttackSettingResponse::DescribeNetAttackSettingResponse() :
    m_netAttackEnableHasBeenSet(false),
    m_netAttackAlarmStatusHasBeenSet(false),
    m_autoIncludeHasBeenSet(false),
    m_cWPScopeHasBeenSet(false),
    m_instanceIDsHasBeenSet(false),
    m_excludeInstanceIDsHasBeenSet(false),
    m_tagIDsHasBeenSet(false),
    m_tCSSScopeHasBeenSet(false),
    m_clusterIDsHasBeenSet(false),
    m_excludeClusterIDsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeNetAttackSettingResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("NetAttackEnable") && !rsp["NetAttackEnable"].IsNull())
    {
        if (!rsp["NetAttackEnable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEnable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_netAttackEnable = rsp["NetAttackEnable"].GetInt64();
        m_netAttackEnableHasBeenSet = true;
    }

    if (rsp.HasMember("NetAttackAlarmStatus") && !rsp["NetAttackAlarmStatus"].IsNull())
    {
        if (!rsp["NetAttackAlarmStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackAlarmStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_netAttackAlarmStatus = rsp["NetAttackAlarmStatus"].GetInt64();
        m_netAttackAlarmStatusHasBeenSet = true;
    }

    if (rsp.HasMember("AutoInclude") && !rsp["AutoInclude"].IsNull())
    {
        if (!rsp["AutoInclude"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoInclude` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoInclude = rsp["AutoInclude"].GetInt64();
        m_autoIncludeHasBeenSet = true;
    }

    if (rsp.HasMember("CWPScope") && !rsp["CWPScope"].IsNull())
    {
        if (!rsp["CWPScope"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CWPScope` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cWPScope = rsp["CWPScope"].GetInt64();
        m_cWPScopeHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceIDs") && !rsp["InstanceIDs"].IsNull())
    {
        if (!rsp["InstanceIDs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceIDs` is not array type"));

        const rapidjson::Value &tmpValue = rsp["InstanceIDs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instanceIDs.push_back((*itr).GetString());
        }
        m_instanceIDsHasBeenSet = true;
    }

    if (rsp.HasMember("ExcludeInstanceIDs") && !rsp["ExcludeInstanceIDs"].IsNull())
    {
        if (!rsp["ExcludeInstanceIDs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExcludeInstanceIDs` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ExcludeInstanceIDs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_excludeInstanceIDs.push_back((*itr).GetString());
        }
        m_excludeInstanceIDsHasBeenSet = true;
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
        if (!rsp["TCSSScope"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TCSSScope` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tCSSScope = rsp["TCSSScope"].GetInt64();
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


    return CoreInternalOutcome(true);
}

string DescribeNetAttackSettingResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_netAttackEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetAttackEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_netAttackEnable, allocator);
    }

    if (m_netAttackAlarmStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetAttackAlarmStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_netAttackAlarmStatus, allocator);
    }

    if (m_autoIncludeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoInclude";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoInclude, allocator);
    }

    if (m_cWPScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CWPScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cWPScope, allocator);
    }

    if (m_instanceIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIDs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIDs.begin(); itr != m_instanceIDs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_excludeInstanceIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeInstanceIDs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeInstanceIDs.begin(); itr != m_excludeInstanceIDs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeNetAttackSettingResponse::GetNetAttackEnable() const
{
    return m_netAttackEnable;
}

bool DescribeNetAttackSettingResponse::NetAttackEnableHasBeenSet() const
{
    return m_netAttackEnableHasBeenSet;
}

int64_t DescribeNetAttackSettingResponse::GetNetAttackAlarmStatus() const
{
    return m_netAttackAlarmStatus;
}

bool DescribeNetAttackSettingResponse::NetAttackAlarmStatusHasBeenSet() const
{
    return m_netAttackAlarmStatusHasBeenSet;
}

int64_t DescribeNetAttackSettingResponse::GetAutoInclude() const
{
    return m_autoInclude;
}

bool DescribeNetAttackSettingResponse::AutoIncludeHasBeenSet() const
{
    return m_autoIncludeHasBeenSet;
}

int64_t DescribeNetAttackSettingResponse::GetCWPScope() const
{
    return m_cWPScope;
}

bool DescribeNetAttackSettingResponse::CWPScopeHasBeenSet() const
{
    return m_cWPScopeHasBeenSet;
}

vector<string> DescribeNetAttackSettingResponse::GetInstanceIDs() const
{
    return m_instanceIDs;
}

bool DescribeNetAttackSettingResponse::InstanceIDsHasBeenSet() const
{
    return m_instanceIDsHasBeenSet;
}

vector<string> DescribeNetAttackSettingResponse::GetExcludeInstanceIDs() const
{
    return m_excludeInstanceIDs;
}

bool DescribeNetAttackSettingResponse::ExcludeInstanceIDsHasBeenSet() const
{
    return m_excludeInstanceIDsHasBeenSet;
}

vector<string> DescribeNetAttackSettingResponse::GetTagIDs() const
{
    return m_tagIDs;
}

bool DescribeNetAttackSettingResponse::TagIDsHasBeenSet() const
{
    return m_tagIDsHasBeenSet;
}

int64_t DescribeNetAttackSettingResponse::GetTCSSScope() const
{
    return m_tCSSScope;
}

bool DescribeNetAttackSettingResponse::TCSSScopeHasBeenSet() const
{
    return m_tCSSScopeHasBeenSet;
}

vector<string> DescribeNetAttackSettingResponse::GetClusterIDs() const
{
    return m_clusterIDs;
}

bool DescribeNetAttackSettingResponse::ClusterIDsHasBeenSet() const
{
    return m_clusterIDsHasBeenSet;
}

vector<string> DescribeNetAttackSettingResponse::GetExcludeClusterIDs() const
{
    return m_excludeClusterIDs;
}

bool DescribeNetAttackSettingResponse::ExcludeClusterIDsHasBeenSet() const
{
    return m_excludeClusterIDsHasBeenSet;
}


