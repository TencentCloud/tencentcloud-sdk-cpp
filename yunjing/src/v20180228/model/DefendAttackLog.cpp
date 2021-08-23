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

#include <tencentcloud/yunjing/v20180228/model/DefendAttackLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace std;

DefendAttackLog::DefendAttackLog() :
    m_idHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_srcIpHasBeenSet(false),
    m_srcPortHasBeenSet(false),
    m_httpMethodHasBeenSet(false),
    m_httpCgiHasBeenSet(false),
    m_httpParamHasBeenSet(false),
    m_vulTypeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_machineIpHasBeenSet(false),
    m_machineNameHasBeenSet(false),
    m_dstIpHasBeenSet(false),
    m_dstPortHasBeenSet(false),
    m_httpContentHasBeenSet(false)
{
}

CoreInternalOutcome DefendAttackLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DefendAttackLog.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DefendAttackLog.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("SrcIp") && !value["SrcIp"].IsNull())
    {
        if (!value["SrcIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DefendAttackLog.SrcIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcIp = string(value["SrcIp"].GetString());
        m_srcIpHasBeenSet = true;
    }

    if (value.HasMember("SrcPort") && !value["SrcPort"].IsNull())
    {
        if (!value["SrcPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DefendAttackLog.SrcPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_srcPort = value["SrcPort"].GetUint64();
        m_srcPortHasBeenSet = true;
    }

    if (value.HasMember("HttpMethod") && !value["HttpMethod"].IsNull())
    {
        if (!value["HttpMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DefendAttackLog.HttpMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpMethod = string(value["HttpMethod"].GetString());
        m_httpMethodHasBeenSet = true;
    }

    if (value.HasMember("HttpCgi") && !value["HttpCgi"].IsNull())
    {
        if (!value["HttpCgi"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DefendAttackLog.HttpCgi` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpCgi = string(value["HttpCgi"].GetString());
        m_httpCgiHasBeenSet = true;
    }

    if (value.HasMember("HttpParam") && !value["HttpParam"].IsNull())
    {
        if (!value["HttpParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DefendAttackLog.HttpParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpParam = string(value["HttpParam"].GetString());
        m_httpParamHasBeenSet = true;
    }

    if (value.HasMember("VulType") && !value["VulType"].IsNull())
    {
        if (!value["VulType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DefendAttackLog.VulType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulType = string(value["VulType"].GetString());
        m_vulTypeHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DefendAttackLog.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("MachineIp") && !value["MachineIp"].IsNull())
    {
        if (!value["MachineIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DefendAttackLog.MachineIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineIp = string(value["MachineIp"].GetString());
        m_machineIpHasBeenSet = true;
    }

    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DefendAttackLog.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("DstIp") && !value["DstIp"].IsNull())
    {
        if (!value["DstIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DefendAttackLog.DstIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstIp = string(value["DstIp"].GetString());
        m_dstIpHasBeenSet = true;
    }

    if (value.HasMember("DstPort") && !value["DstPort"].IsNull())
    {
        if (!value["DstPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DefendAttackLog.DstPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dstPort = value["DstPort"].GetUint64();
        m_dstPortHasBeenSet = true;
    }

    if (value.HasMember("HttpContent") && !value["HttpContent"].IsNull())
    {
        if (!value["HttpContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DefendAttackLog.HttpContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpContent = string(value["HttpContent"].GetString());
        m_httpContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DefendAttackLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_httpCgiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpCgi";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpCgi.c_str(), allocator).Move(), allocator);
    }

    if (m_httpParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpParam.c_str(), allocator).Move(), allocator);
    }

    if (m_vulTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulType.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_machineIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineIp.c_str(), allocator).Move(), allocator);
    }

    if (m_machineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineName.c_str(), allocator).Move(), allocator);
    }

    if (m_dstIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstIp.c_str(), allocator).Move(), allocator);
    }

    if (m_dstPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dstPort, allocator);
    }

    if (m_httpContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpContent.c_str(), allocator).Move(), allocator);
    }

}


uint64_t DefendAttackLog::GetId() const
{
    return m_id;
}

void DefendAttackLog::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DefendAttackLog::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DefendAttackLog::GetUuid() const
{
    return m_uuid;
}

void DefendAttackLog::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool DefendAttackLog::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string DefendAttackLog::GetSrcIp() const
{
    return m_srcIp;
}

void DefendAttackLog::SetSrcIp(const string& _srcIp)
{
    m_srcIp = _srcIp;
    m_srcIpHasBeenSet = true;
}

bool DefendAttackLog::SrcIpHasBeenSet() const
{
    return m_srcIpHasBeenSet;
}

uint64_t DefendAttackLog::GetSrcPort() const
{
    return m_srcPort;
}

void DefendAttackLog::SetSrcPort(const uint64_t& _srcPort)
{
    m_srcPort = _srcPort;
    m_srcPortHasBeenSet = true;
}

bool DefendAttackLog::SrcPortHasBeenSet() const
{
    return m_srcPortHasBeenSet;
}

string DefendAttackLog::GetHttpMethod() const
{
    return m_httpMethod;
}

void DefendAttackLog::SetHttpMethod(const string& _httpMethod)
{
    m_httpMethod = _httpMethod;
    m_httpMethodHasBeenSet = true;
}

bool DefendAttackLog::HttpMethodHasBeenSet() const
{
    return m_httpMethodHasBeenSet;
}

string DefendAttackLog::GetHttpCgi() const
{
    return m_httpCgi;
}

void DefendAttackLog::SetHttpCgi(const string& _httpCgi)
{
    m_httpCgi = _httpCgi;
    m_httpCgiHasBeenSet = true;
}

bool DefendAttackLog::HttpCgiHasBeenSet() const
{
    return m_httpCgiHasBeenSet;
}

string DefendAttackLog::GetHttpParam() const
{
    return m_httpParam;
}

void DefendAttackLog::SetHttpParam(const string& _httpParam)
{
    m_httpParam = _httpParam;
    m_httpParamHasBeenSet = true;
}

bool DefendAttackLog::HttpParamHasBeenSet() const
{
    return m_httpParamHasBeenSet;
}

string DefendAttackLog::GetVulType() const
{
    return m_vulType;
}

void DefendAttackLog::SetVulType(const string& _vulType)
{
    m_vulType = _vulType;
    m_vulTypeHasBeenSet = true;
}

bool DefendAttackLog::VulTypeHasBeenSet() const
{
    return m_vulTypeHasBeenSet;
}

string DefendAttackLog::GetCreatedAt() const
{
    return m_createdAt;
}

void DefendAttackLog::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool DefendAttackLog::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string DefendAttackLog::GetMachineIp() const
{
    return m_machineIp;
}

void DefendAttackLog::SetMachineIp(const string& _machineIp)
{
    m_machineIp = _machineIp;
    m_machineIpHasBeenSet = true;
}

bool DefendAttackLog::MachineIpHasBeenSet() const
{
    return m_machineIpHasBeenSet;
}

string DefendAttackLog::GetMachineName() const
{
    return m_machineName;
}

void DefendAttackLog::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool DefendAttackLog::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string DefendAttackLog::GetDstIp() const
{
    return m_dstIp;
}

void DefendAttackLog::SetDstIp(const string& _dstIp)
{
    m_dstIp = _dstIp;
    m_dstIpHasBeenSet = true;
}

bool DefendAttackLog::DstIpHasBeenSet() const
{
    return m_dstIpHasBeenSet;
}

uint64_t DefendAttackLog::GetDstPort() const
{
    return m_dstPort;
}

void DefendAttackLog::SetDstPort(const uint64_t& _dstPort)
{
    m_dstPort = _dstPort;
    m_dstPortHasBeenSet = true;
}

bool DefendAttackLog::DstPortHasBeenSet() const
{
    return m_dstPortHasBeenSet;
}

string DefendAttackLog::GetHttpContent() const
{
    return m_httpContent;
}

void DefendAttackLog::SetHttpContent(const string& _httpContent)
{
    m_httpContent = _httpContent;
    m_httpContentHasBeenSet = true;
}

bool DefendAttackLog::HttpContentHasBeenSet() const
{
    return m_httpContentHasBeenSet;
}

