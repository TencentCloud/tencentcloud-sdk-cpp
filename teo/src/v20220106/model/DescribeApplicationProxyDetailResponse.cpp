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

#include <tencentcloud/teo/v20220106/model/DescribeApplicationProxyDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

DescribeApplicationProxyDetailResponse::DescribeApplicationProxyDetailResponse() :
    m_proxyIdHasBeenSet(false),
    m_proxyNameHasBeenSet(false),
    m_platTypeHasBeenSet(false),
    m_securityTypeHasBeenSet(false),
    m_accelerateTypeHasBeenSet(false),
    m_forwardClientIpHasBeenSet(false),
    m_sessionPersistHasBeenSet(false),
    m_ruleHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_scheduleValueHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_sessionPersistTimeHasBeenSet(false),
    m_proxyTypeHasBeenSet(false),
    m_hostIdHasBeenSet(false)
{
}

CoreInternalOutcome DescribeApplicationProxyDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ProxyId") && !rsp["ProxyId"].IsNull())
    {
        if (!rsp["ProxyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyId = string(rsp["ProxyId"].GetString());
        m_proxyIdHasBeenSet = true;
    }

    if (rsp.HasMember("ProxyName") && !rsp["ProxyName"].IsNull())
    {
        if (!rsp["ProxyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyName = string(rsp["ProxyName"].GetString());
        m_proxyNameHasBeenSet = true;
    }

    if (rsp.HasMember("PlatType") && !rsp["PlatType"].IsNull())
    {
        if (!rsp["PlatType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlatType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platType = string(rsp["PlatType"].GetString());
        m_platTypeHasBeenSet = true;
    }

    if (rsp.HasMember("SecurityType") && !rsp["SecurityType"].IsNull())
    {
        if (!rsp["SecurityType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_securityType = rsp["SecurityType"].GetInt64();
        m_securityTypeHasBeenSet = true;
    }

    if (rsp.HasMember("AccelerateType") && !rsp["AccelerateType"].IsNull())
    {
        if (!rsp["AccelerateType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccelerateType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accelerateType = rsp["AccelerateType"].GetInt64();
        m_accelerateTypeHasBeenSet = true;
    }

    if (rsp.HasMember("ForwardClientIp") && !rsp["ForwardClientIp"].IsNull())
    {
        if (!rsp["ForwardClientIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardClientIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_forwardClientIp = string(rsp["ForwardClientIp"].GetString());
        m_forwardClientIpHasBeenSet = true;
    }

    if (rsp.HasMember("SessionPersist") && !rsp["SessionPersist"].IsNull())
    {
        if (!rsp["SessionPersist"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SessionPersist` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_sessionPersist = rsp["SessionPersist"].GetBool();
        m_sessionPersistHasBeenSet = true;
    }

    if (rsp.HasMember("Rule") && !rsp["Rule"].IsNull())
    {
        if (!rsp["Rule"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Rule` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Rule"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApplicationProxyRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rule.push_back(item);
        }
        m_ruleHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("ScheduleValue") && !rsp["ScheduleValue"].IsNull())
    {
        if (!rsp["ScheduleValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ScheduleValue` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ScheduleValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_scheduleValue.push_back((*itr).GetString());
        }
        m_scheduleValueHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(rsp["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ZoneId") && !rsp["ZoneId"].IsNull())
    {
        if (!rsp["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(rsp["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (rsp.HasMember("ZoneName") && !rsp["ZoneName"].IsNull())
    {
        if (!rsp["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(rsp["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (rsp.HasMember("SessionPersistTime") && !rsp["SessionPersistTime"].IsNull())
    {
        if (!rsp["SessionPersistTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SessionPersistTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sessionPersistTime = rsp["SessionPersistTime"].GetUint64();
        m_sessionPersistTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ProxyType") && !rsp["ProxyType"].IsNull())
    {
        if (!rsp["ProxyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyType = string(rsp["ProxyType"].GetString());
        m_proxyTypeHasBeenSet = true;
    }

    if (rsp.HasMember("HostId") && !rsp["HostId"].IsNull())
    {
        if (!rsp["HostId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostId = string(rsp["HostId"].GetString());
        m_hostIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeApplicationProxyDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_proxyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyId.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyName.c_str(), allocator).Move(), allocator);
    }

    if (m_platTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_platType.c_str(), allocator).Move(), allocator);
    }

    if (m_securityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_securityType, allocator);
    }

    if (m_accelerateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccelerateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accelerateType, allocator);
    }

    if (m_forwardClientIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardClientIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_forwardClientIp.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionPersistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionPersist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sessionPersist, allocator);
    }

    if (m_ruleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rule.begin(); itr != m_rule.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scheduleValue.begin(); itr != m_scheduleValue.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionPersistTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionPersistTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sessionPersistTime, allocator);
    }

    if (m_proxyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyType.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostId.c_str(), allocator).Move(), allocator);
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


string DescribeApplicationProxyDetailResponse::GetProxyId() const
{
    return m_proxyId;
}

bool DescribeApplicationProxyDetailResponse::ProxyIdHasBeenSet() const
{
    return m_proxyIdHasBeenSet;
}

string DescribeApplicationProxyDetailResponse::GetProxyName() const
{
    return m_proxyName;
}

bool DescribeApplicationProxyDetailResponse::ProxyNameHasBeenSet() const
{
    return m_proxyNameHasBeenSet;
}

string DescribeApplicationProxyDetailResponse::GetPlatType() const
{
    return m_platType;
}

bool DescribeApplicationProxyDetailResponse::PlatTypeHasBeenSet() const
{
    return m_platTypeHasBeenSet;
}

int64_t DescribeApplicationProxyDetailResponse::GetSecurityType() const
{
    return m_securityType;
}

bool DescribeApplicationProxyDetailResponse::SecurityTypeHasBeenSet() const
{
    return m_securityTypeHasBeenSet;
}

int64_t DescribeApplicationProxyDetailResponse::GetAccelerateType() const
{
    return m_accelerateType;
}

bool DescribeApplicationProxyDetailResponse::AccelerateTypeHasBeenSet() const
{
    return m_accelerateTypeHasBeenSet;
}

string DescribeApplicationProxyDetailResponse::GetForwardClientIp() const
{
    return m_forwardClientIp;
}

bool DescribeApplicationProxyDetailResponse::ForwardClientIpHasBeenSet() const
{
    return m_forwardClientIpHasBeenSet;
}

bool DescribeApplicationProxyDetailResponse::GetSessionPersist() const
{
    return m_sessionPersist;
}

bool DescribeApplicationProxyDetailResponse::SessionPersistHasBeenSet() const
{
    return m_sessionPersistHasBeenSet;
}

vector<ApplicationProxyRule> DescribeApplicationProxyDetailResponse::GetRule() const
{
    return m_rule;
}

bool DescribeApplicationProxyDetailResponse::RuleHasBeenSet() const
{
    return m_ruleHasBeenSet;
}

string DescribeApplicationProxyDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeApplicationProxyDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> DescribeApplicationProxyDetailResponse::GetScheduleValue() const
{
    return m_scheduleValue;
}

bool DescribeApplicationProxyDetailResponse::ScheduleValueHasBeenSet() const
{
    return m_scheduleValueHasBeenSet;
}

string DescribeApplicationProxyDetailResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool DescribeApplicationProxyDetailResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string DescribeApplicationProxyDetailResponse::GetZoneId() const
{
    return m_zoneId;
}

bool DescribeApplicationProxyDetailResponse::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string DescribeApplicationProxyDetailResponse::GetZoneName() const
{
    return m_zoneName;
}

bool DescribeApplicationProxyDetailResponse::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

uint64_t DescribeApplicationProxyDetailResponse::GetSessionPersistTime() const
{
    return m_sessionPersistTime;
}

bool DescribeApplicationProxyDetailResponse::SessionPersistTimeHasBeenSet() const
{
    return m_sessionPersistTimeHasBeenSet;
}

string DescribeApplicationProxyDetailResponse::GetProxyType() const
{
    return m_proxyType;
}

bool DescribeApplicationProxyDetailResponse::ProxyTypeHasBeenSet() const
{
    return m_proxyTypeHasBeenSet;
}

string DescribeApplicationProxyDetailResponse::GetHostId() const
{
    return m_hostId;
}

bool DescribeApplicationProxyDetailResponse::HostIdHasBeenSet() const
{
    return m_hostIdHasBeenSet;
}


