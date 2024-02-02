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

#include <tencentcloud/cwp/v20180228/model/DescribeNetAttackSettingResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeNetAttackSettingResponse::DescribeNetAttackSettingResponse() :
    m_netAttackEnableHasBeenSet(false),
    m_netAttackAlarmStatusHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_excludeInstanceIdsHasBeenSet(false),
    m_autoIncludeHasBeenSet(false)
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
        if (!rsp["NetAttackEnable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEnable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_netAttackEnable = rsp["NetAttackEnable"].GetUint64();
        m_netAttackEnableHasBeenSet = true;
    }

    if (rsp.HasMember("NetAttackAlarmStatus") && !rsp["NetAttackAlarmStatus"].IsNull())
    {
        if (!rsp["NetAttackAlarmStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackAlarmStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_netAttackAlarmStatus = rsp["NetAttackAlarmStatus"].GetUint64();
        m_netAttackAlarmStatusHasBeenSet = true;
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

    if (rsp.HasMember("AutoInclude") && !rsp["AutoInclude"].IsNull())
    {
        if (!rsp["AutoInclude"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoInclude` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoInclude = rsp["AutoInclude"].GetUint64();
        m_autoIncludeHasBeenSet = true;
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

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scope, allocator);
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

    if (m_autoIncludeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoInclude";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoInclude, allocator);
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


uint64_t DescribeNetAttackSettingResponse::GetNetAttackEnable() const
{
    return m_netAttackEnable;
}

bool DescribeNetAttackSettingResponse::NetAttackEnableHasBeenSet() const
{
    return m_netAttackEnableHasBeenSet;
}

uint64_t DescribeNetAttackSettingResponse::GetNetAttackAlarmStatus() const
{
    return m_netAttackAlarmStatus;
}

bool DescribeNetAttackSettingResponse::NetAttackAlarmStatusHasBeenSet() const
{
    return m_netAttackAlarmStatusHasBeenSet;
}

uint64_t DescribeNetAttackSettingResponse::GetScope() const
{
    return m_scope;
}

bool DescribeNetAttackSettingResponse::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

vector<string> DescribeNetAttackSettingResponse::GetInstanceIds() const
{
    return m_instanceIds;
}

bool DescribeNetAttackSettingResponse::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

vector<string> DescribeNetAttackSettingResponse::GetExcludeInstanceIds() const
{
    return m_excludeInstanceIds;
}

bool DescribeNetAttackSettingResponse::ExcludeInstanceIdsHasBeenSet() const
{
    return m_excludeInstanceIdsHasBeenSet;
}

uint64_t DescribeNetAttackSettingResponse::GetAutoInclude() const
{
    return m_autoInclude;
}

bool DescribeNetAttackSettingResponse::AutoIncludeHasBeenSet() const
{
    return m_autoIncludeHasBeenSet;
}


