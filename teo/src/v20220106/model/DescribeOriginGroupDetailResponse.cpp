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

#include <tencentcloud/teo/v20220106/model/DescribeOriginGroupDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

DescribeOriginGroupDetailResponse::DescribeOriginGroupDetailResponse() :
    m_originIdHasBeenSet(false),
    m_originNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_recordHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_originTypeHasBeenSet(false),
    m_applicationProxyUsedHasBeenSet(false),
    m_loadBalancingUsedHasBeenSet(false),
    m_loadBalancingUsedTypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeOriginGroupDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("OriginId") && !rsp["OriginId"].IsNull())
    {
        if (!rsp["OriginId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originId = string(rsp["OriginId"].GetString());
        m_originIdHasBeenSet = true;
    }

    if (rsp.HasMember("OriginName") && !rsp["OriginName"].IsNull())
    {
        if (!rsp["OriginName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originName = string(rsp["OriginName"].GetString());
        m_originNameHasBeenSet = true;
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

    if (rsp.HasMember("Record") && !rsp["Record"].IsNull())
    {
        if (!rsp["Record"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Record` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Record"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OriginRecord item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_record.push_back(item);
        }
        m_recordHasBeenSet = true;
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

    if (rsp.HasMember("OriginType") && !rsp["OriginType"].IsNull())
    {
        if (!rsp["OriginType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originType = string(rsp["OriginType"].GetString());
        m_originTypeHasBeenSet = true;
    }

    if (rsp.HasMember("ApplicationProxyUsed") && !rsp["ApplicationProxyUsed"].IsNull())
    {
        if (!rsp["ApplicationProxyUsed"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProxyUsed` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_applicationProxyUsed = rsp["ApplicationProxyUsed"].GetBool();
        m_applicationProxyUsedHasBeenSet = true;
    }

    if (rsp.HasMember("LoadBalancingUsed") && !rsp["LoadBalancingUsed"].IsNull())
    {
        if (!rsp["LoadBalancingUsed"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancingUsed` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancingUsed = rsp["LoadBalancingUsed"].GetBool();
        m_loadBalancingUsedHasBeenSet = true;
    }

    if (rsp.HasMember("LoadBalancingUsedType") && !rsp["LoadBalancingUsedType"].IsNull())
    {
        if (!rsp["LoadBalancingUsedType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancingUsedType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancingUsedType = string(rsp["LoadBalancingUsedType"].GetString());
        m_loadBalancingUsedTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeOriginGroupDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_originIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originId.c_str(), allocator).Move(), allocator);
    }

    if (m_originNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_recordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Record";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_record.begin(); itr != m_record.end(); ++itr, ++i)
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

    if (m_originTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originType.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationProxyUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationProxyUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applicationProxyUsed, allocator);
    }

    if (m_loadBalancingUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancingUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loadBalancingUsed, allocator);
    }

    if (m_loadBalancingUsedTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancingUsedType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancingUsedType.c_str(), allocator).Move(), allocator);
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


string DescribeOriginGroupDetailResponse::GetOriginId() const
{
    return m_originId;
}

bool DescribeOriginGroupDetailResponse::OriginIdHasBeenSet() const
{
    return m_originIdHasBeenSet;
}

string DescribeOriginGroupDetailResponse::GetOriginName() const
{
    return m_originName;
}

bool DescribeOriginGroupDetailResponse::OriginNameHasBeenSet() const
{
    return m_originNameHasBeenSet;
}

string DescribeOriginGroupDetailResponse::GetType() const
{
    return m_type;
}

bool DescribeOriginGroupDetailResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<OriginRecord> DescribeOriginGroupDetailResponse::GetRecord() const
{
    return m_record;
}

bool DescribeOriginGroupDetailResponse::RecordHasBeenSet() const
{
    return m_recordHasBeenSet;
}

string DescribeOriginGroupDetailResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool DescribeOriginGroupDetailResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string DescribeOriginGroupDetailResponse::GetZoneId() const
{
    return m_zoneId;
}

bool DescribeOriginGroupDetailResponse::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string DescribeOriginGroupDetailResponse::GetZoneName() const
{
    return m_zoneName;
}

bool DescribeOriginGroupDetailResponse::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

string DescribeOriginGroupDetailResponse::GetOriginType() const
{
    return m_originType;
}

bool DescribeOriginGroupDetailResponse::OriginTypeHasBeenSet() const
{
    return m_originTypeHasBeenSet;
}

bool DescribeOriginGroupDetailResponse::GetApplicationProxyUsed() const
{
    return m_applicationProxyUsed;
}

bool DescribeOriginGroupDetailResponse::ApplicationProxyUsedHasBeenSet() const
{
    return m_applicationProxyUsedHasBeenSet;
}

bool DescribeOriginGroupDetailResponse::GetLoadBalancingUsed() const
{
    return m_loadBalancingUsed;
}

bool DescribeOriginGroupDetailResponse::LoadBalancingUsedHasBeenSet() const
{
    return m_loadBalancingUsedHasBeenSet;
}

string DescribeOriginGroupDetailResponse::GetLoadBalancingUsedType() const
{
    return m_loadBalancingUsedType;
}

bool DescribeOriginGroupDetailResponse::LoadBalancingUsedTypeHasBeenSet() const
{
    return m_loadBalancingUsedTypeHasBeenSet;
}


