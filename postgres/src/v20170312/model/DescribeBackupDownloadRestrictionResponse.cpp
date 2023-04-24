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

#include <tencentcloud/postgres/v20170312/model/DescribeBackupDownloadRestrictionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

DescribeBackupDownloadRestrictionResponse::DescribeBackupDownloadRestrictionResponse() :
    m_restrictionTypeHasBeenSet(false),
    m_vpcRestrictionEffectHasBeenSet(false),
    m_vpcIdSetHasBeenSet(false),
    m_ipRestrictionEffectHasBeenSet(false),
    m_ipSetHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBackupDownloadRestrictionResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("RestrictionType") && !rsp["RestrictionType"].IsNull())
    {
        if (!rsp["RestrictionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestrictionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_restrictionType = string(rsp["RestrictionType"].GetString());
        m_restrictionTypeHasBeenSet = true;
    }

    if (rsp.HasMember("VpcRestrictionEffect") && !rsp["VpcRestrictionEffect"].IsNull())
    {
        if (!rsp["VpcRestrictionEffect"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcRestrictionEffect` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcRestrictionEffect = string(rsp["VpcRestrictionEffect"].GetString());
        m_vpcRestrictionEffectHasBeenSet = true;
    }

    if (rsp.HasMember("VpcIdSet") && !rsp["VpcIdSet"].IsNull())
    {
        if (!rsp["VpcIdSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VpcIdSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["VpcIdSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_vpcIdSet.push_back((*itr).GetString());
        }
        m_vpcIdSetHasBeenSet = true;
    }

    if (rsp.HasMember("IpRestrictionEffect") && !rsp["IpRestrictionEffect"].IsNull())
    {
        if (!rsp["IpRestrictionEffect"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpRestrictionEffect` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipRestrictionEffect = string(rsp["IpRestrictionEffect"].GetString());
        m_ipRestrictionEffectHasBeenSet = true;
    }

    if (rsp.HasMember("IpSet") && !rsp["IpSet"].IsNull())
    {
        if (!rsp["IpSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IpSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["IpSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ipSet.push_back((*itr).GetString());
        }
        m_ipSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBackupDownloadRestrictionResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_restrictionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestrictionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_restrictionType.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcRestrictionEffectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcRestrictionEffect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcRestrictionEffect.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcIdSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vpcIdSet.begin(); itr != m_vpcIdSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ipRestrictionEffectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpRestrictionEffect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipRestrictionEffect.c_str(), allocator).Move(), allocator);
    }

    if (m_ipSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipSet.begin(); itr != m_ipSet.end(); ++itr)
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


string DescribeBackupDownloadRestrictionResponse::GetRestrictionType() const
{
    return m_restrictionType;
}

bool DescribeBackupDownloadRestrictionResponse::RestrictionTypeHasBeenSet() const
{
    return m_restrictionTypeHasBeenSet;
}

string DescribeBackupDownloadRestrictionResponse::GetVpcRestrictionEffect() const
{
    return m_vpcRestrictionEffect;
}

bool DescribeBackupDownloadRestrictionResponse::VpcRestrictionEffectHasBeenSet() const
{
    return m_vpcRestrictionEffectHasBeenSet;
}

vector<string> DescribeBackupDownloadRestrictionResponse::GetVpcIdSet() const
{
    return m_vpcIdSet;
}

bool DescribeBackupDownloadRestrictionResponse::VpcIdSetHasBeenSet() const
{
    return m_vpcIdSetHasBeenSet;
}

string DescribeBackupDownloadRestrictionResponse::GetIpRestrictionEffect() const
{
    return m_ipRestrictionEffect;
}

bool DescribeBackupDownloadRestrictionResponse::IpRestrictionEffectHasBeenSet() const
{
    return m_ipRestrictionEffectHasBeenSet;
}

vector<string> DescribeBackupDownloadRestrictionResponse::GetIpSet() const
{
    return m_ipSet;
}

bool DescribeBackupDownloadRestrictionResponse::IpSetHasBeenSet() const
{
    return m_ipSetHasBeenSet;
}


