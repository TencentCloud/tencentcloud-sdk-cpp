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

#include <tencentcloud/cwp/v20180228/model/ScreenDefendAttackLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ScreenDefendAttackLog::ScreenDefendAttackLog() :
    m_idHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_srcIpHasBeenSet(false),
    m_srcPortHasBeenSet(false),
    m_httpMethodHasBeenSet(false),
    m_vulTypeHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_dstPortHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_dstIpHasBeenSet(false)
{
}

CoreInternalOutcome ScreenDefendAttackLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenDefendAttackLog.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenDefendAttackLog.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("SrcIp") && !value["SrcIp"].IsNull())
    {
        if (!value["SrcIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenDefendAttackLog.SrcIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcIp = string(value["SrcIp"].GetString());
        m_srcIpHasBeenSet = true;
    }

    if (value.HasMember("SrcPort") && !value["SrcPort"].IsNull())
    {
        if (!value["SrcPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenDefendAttackLog.SrcPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_srcPort = value["SrcPort"].GetUint64();
        m_srcPortHasBeenSet = true;
    }

    if (value.HasMember("HttpMethod") && !value["HttpMethod"].IsNull())
    {
        if (!value["HttpMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenDefendAttackLog.HttpMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpMethod = string(value["HttpMethod"].GetString());
        m_httpMethodHasBeenSet = true;
    }

    if (value.HasMember("VulType") && !value["VulType"].IsNull())
    {
        if (!value["VulType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenDefendAttackLog.VulType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulType = string(value["VulType"].GetString());
        m_vulTypeHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenDefendAttackLog.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("DstPort") && !value["DstPort"].IsNull())
    {
        if (!value["DstPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenDefendAttackLog.DstPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dstPort = value["DstPort"].GetUint64();
        m_dstPortHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenDefendAttackLog.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("DstIp") && !value["DstIp"].IsNull())
    {
        if (!value["DstIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenDefendAttackLog.DstIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstIp = string(value["DstIp"].GetString());
        m_dstIpHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScreenDefendAttackLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_srcIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcIp.c_str(), allocator).Move(), allocator);
    }

    if (m_srcPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_srcPort, allocator);
    }

    if (m_httpMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_vulTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulType.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dstPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dstPort, allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_dstIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstIp.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ScreenDefendAttackLog::GetId() const
{
    return m_id;
}

void ScreenDefendAttackLog::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ScreenDefendAttackLog::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ScreenDefendAttackLog::GetUuid() const
{
    return m_uuid;
}

void ScreenDefendAttackLog::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool ScreenDefendAttackLog::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string ScreenDefendAttackLog::GetSrcIp() const
{
    return m_srcIp;
}

void ScreenDefendAttackLog::SetSrcIp(const string& _srcIp)
{
    m_srcIp = _srcIp;
    m_srcIpHasBeenSet = true;
}

bool ScreenDefendAttackLog::SrcIpHasBeenSet() const
{
    return m_srcIpHasBeenSet;
}

uint64_t ScreenDefendAttackLog::GetSrcPort() const
{
    return m_srcPort;
}

void ScreenDefendAttackLog::SetSrcPort(const uint64_t& _srcPort)
{
    m_srcPort = _srcPort;
    m_srcPortHasBeenSet = true;
}

bool ScreenDefendAttackLog::SrcPortHasBeenSet() const
{
    return m_srcPortHasBeenSet;
}

string ScreenDefendAttackLog::GetHttpMethod() const
{
    return m_httpMethod;
}

void ScreenDefendAttackLog::SetHttpMethod(const string& _httpMethod)
{
    m_httpMethod = _httpMethod;
    m_httpMethodHasBeenSet = true;
}

bool ScreenDefendAttackLog::HttpMethodHasBeenSet() const
{
    return m_httpMethodHasBeenSet;
}

string ScreenDefendAttackLog::GetVulType() const
{
    return m_vulType;
}

void ScreenDefendAttackLog::SetVulType(const string& _vulType)
{
    m_vulType = _vulType;
    m_vulTypeHasBeenSet = true;
}

bool ScreenDefendAttackLog::VulTypeHasBeenSet() const
{
    return m_vulTypeHasBeenSet;
}

string ScreenDefendAttackLog::GetCreatedTime() const
{
    return m_createdTime;
}

void ScreenDefendAttackLog::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool ScreenDefendAttackLog::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

uint64_t ScreenDefendAttackLog::GetDstPort() const
{
    return m_dstPort;
}

void ScreenDefendAttackLog::SetDstPort(const uint64_t& _dstPort)
{
    m_dstPort = _dstPort;
    m_dstPortHasBeenSet = true;
}

bool ScreenDefendAttackLog::DstPortHasBeenSet() const
{
    return m_dstPortHasBeenSet;
}

string ScreenDefendAttackLog::GetQuuid() const
{
    return m_quuid;
}

void ScreenDefendAttackLog::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool ScreenDefendAttackLog::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string ScreenDefendAttackLog::GetDstIp() const
{
    return m_dstIp;
}

void ScreenDefendAttackLog::SetDstIp(const string& _dstIp)
{
    m_dstIp = _dstIp;
    m_dstIpHasBeenSet = true;
}

bool ScreenDefendAttackLog::DstIpHasBeenSet() const
{
    return m_dstIpHasBeenSet;
}

