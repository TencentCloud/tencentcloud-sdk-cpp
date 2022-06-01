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

#include <tencentcloud/teo/v20220106/model/DescribeLoadBalancingDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

DescribeLoadBalancingDetailResponse::DescribeLoadBalancingDetailResponse() :
    m_loadBalancingIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_tTLHasBeenSet(false),
    m_originIdHasBeenSet(false),
    m_originHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_cnameHasBeenSet(false)
{
}

CoreInternalOutcome DescribeLoadBalancingDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("LoadBalancingId") && !rsp["LoadBalancingId"].IsNull())
    {
        if (!rsp["LoadBalancingId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancingId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancingId = string(rsp["LoadBalancingId"].GetString());
        m_loadBalancingIdHasBeenSet = true;
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

    if (rsp.HasMember("Host") && !rsp["Host"].IsNull())
    {
        if (!rsp["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(rsp["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(rsp["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("TTL") && !rsp["TTL"].IsNull())
    {
        if (!rsp["TTL"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TTL` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tTL = rsp["TTL"].GetUint64();
        m_tTLHasBeenSet = true;
    }

    if (rsp.HasMember("OriginId") && !rsp["OriginId"].IsNull())
    {
        if (!rsp["OriginId"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OriginId` is not array type"));

        const rapidjson::Value &tmpValue = rsp["OriginId"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_originId.push_back((*itr).GetString());
        }
        m_originIdHasBeenSet = true;
    }

    if (rsp.HasMember("Origin") && !rsp["Origin"].IsNull())
    {
        if (!rsp["Origin"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Origin` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Origin"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OriginGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_origin.push_back(item);
        }
        m_originHasBeenSet = true;
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

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Cname") && !rsp["Cname"].IsNull())
    {
        if (!rsp["Cname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cname = string(rsp["Cname"].GetString());
        m_cnameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeLoadBalancingDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_loadBalancingIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancingId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancingId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_tTLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TTL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tTL, allocator);
    }

    if (m_originIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_originId.begin(); itr != m_originId.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_originHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Origin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_origin.begin(); itr != m_origin.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_cnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cname.c_str(), allocator).Move(), allocator);
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


string DescribeLoadBalancingDetailResponse::GetLoadBalancingId() const
{
    return m_loadBalancingId;
}

bool DescribeLoadBalancingDetailResponse::LoadBalancingIdHasBeenSet() const
{
    return m_loadBalancingIdHasBeenSet;
}

string DescribeLoadBalancingDetailResponse::GetZoneId() const
{
    return m_zoneId;
}

bool DescribeLoadBalancingDetailResponse::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string DescribeLoadBalancingDetailResponse::GetHost() const
{
    return m_host;
}

bool DescribeLoadBalancingDetailResponse::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string DescribeLoadBalancingDetailResponse::GetType() const
{
    return m_type;
}

bool DescribeLoadBalancingDetailResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t DescribeLoadBalancingDetailResponse::GetTTL() const
{
    return m_tTL;
}

bool DescribeLoadBalancingDetailResponse::TTLHasBeenSet() const
{
    return m_tTLHasBeenSet;
}

vector<string> DescribeLoadBalancingDetailResponse::GetOriginId() const
{
    return m_originId;
}

bool DescribeLoadBalancingDetailResponse::OriginIdHasBeenSet() const
{
    return m_originIdHasBeenSet;
}

vector<OriginGroup> DescribeLoadBalancingDetailResponse::GetOrigin() const
{
    return m_origin;
}

bool DescribeLoadBalancingDetailResponse::OriginHasBeenSet() const
{
    return m_originHasBeenSet;
}

string DescribeLoadBalancingDetailResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool DescribeLoadBalancingDetailResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string DescribeLoadBalancingDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeLoadBalancingDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeLoadBalancingDetailResponse::GetCname() const
{
    return m_cname;
}

bool DescribeLoadBalancingDetailResponse::CnameHasBeenSet() const
{
    return m_cnameHasBeenSet;
}


