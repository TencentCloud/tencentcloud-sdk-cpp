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

#include <tencentcloud/tdmq/v20200217/model/DescribeEnvironmentAttributesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

DescribeEnvironmentAttributesResponse::DescribeEnvironmentAttributesResponse() :
    m_msgTTLHasBeenSet(false),
    m_rateInByteHasBeenSet(false),
    m_rateInSizeHasBeenSet(false),
    m_retentionHoursHasBeenSet(false),
    m_retentionSizeHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_replicasHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome DescribeEnvironmentAttributesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("MsgTTL") && !rsp["MsgTTL"].IsNull())
    {
        if (!rsp["MsgTTL"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MsgTTL` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_msgTTL = rsp["MsgTTL"].GetUint64();
        m_msgTTLHasBeenSet = true;
    }

    if (rsp.HasMember("RateInByte") && !rsp["RateInByte"].IsNull())
    {
        if (!rsp["RateInByte"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RateInByte` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rateInByte = rsp["RateInByte"].GetUint64();
        m_rateInByteHasBeenSet = true;
    }

    if (rsp.HasMember("RateInSize") && !rsp["RateInSize"].IsNull())
    {
        if (!rsp["RateInSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RateInSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rateInSize = rsp["RateInSize"].GetUint64();
        m_rateInSizeHasBeenSet = true;
    }

    if (rsp.HasMember("RetentionHours") && !rsp["RetentionHours"].IsNull())
    {
        if (!rsp["RetentionHours"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionHours` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_retentionHours = rsp["RetentionHours"].GetUint64();
        m_retentionHoursHasBeenSet = true;
    }

    if (rsp.HasMember("RetentionSize") && !rsp["RetentionSize"].IsNull())
    {
        if (!rsp["RetentionSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_retentionSize = rsp["RetentionSize"].GetUint64();
        m_retentionSizeHasBeenSet = true;
    }

    if (rsp.HasMember("EnvironmentId") && !rsp["EnvironmentId"].IsNull())
    {
        if (!rsp["EnvironmentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvironmentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environmentId = string(rsp["EnvironmentId"].GetString());
        m_environmentIdHasBeenSet = true;
    }

    if (rsp.HasMember("Replicas") && !rsp["Replicas"].IsNull())
    {
        if (!rsp["Replicas"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Replicas` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_replicas = rsp["Replicas"].GetUint64();
        m_replicasHasBeenSet = true;
    }

    if (rsp.HasMember("Remark") && !rsp["Remark"].IsNull())
    {
        if (!rsp["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(rsp["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeEnvironmentAttributesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_msgTTLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgTTL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_msgTTL, allocator);
    }

    if (m_rateInByteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RateInByte";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rateInByte, allocator);
    }

    if (m_rateInSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RateInSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rateInSize, allocator);
    }

    if (m_retentionHoursHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionHours";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retentionHours, allocator);
    }

    if (m_retentionSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retentionSize, allocator);
    }

    if (m_environmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_replicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replicas, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
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


uint64_t DescribeEnvironmentAttributesResponse::GetMsgTTL() const
{
    return m_msgTTL;
}

bool DescribeEnvironmentAttributesResponse::MsgTTLHasBeenSet() const
{
    return m_msgTTLHasBeenSet;
}

uint64_t DescribeEnvironmentAttributesResponse::GetRateInByte() const
{
    return m_rateInByte;
}

bool DescribeEnvironmentAttributesResponse::RateInByteHasBeenSet() const
{
    return m_rateInByteHasBeenSet;
}

uint64_t DescribeEnvironmentAttributesResponse::GetRateInSize() const
{
    return m_rateInSize;
}

bool DescribeEnvironmentAttributesResponse::RateInSizeHasBeenSet() const
{
    return m_rateInSizeHasBeenSet;
}

uint64_t DescribeEnvironmentAttributesResponse::GetRetentionHours() const
{
    return m_retentionHours;
}

bool DescribeEnvironmentAttributesResponse::RetentionHoursHasBeenSet() const
{
    return m_retentionHoursHasBeenSet;
}

uint64_t DescribeEnvironmentAttributesResponse::GetRetentionSize() const
{
    return m_retentionSize;
}

bool DescribeEnvironmentAttributesResponse::RetentionSizeHasBeenSet() const
{
    return m_retentionSizeHasBeenSet;
}

string DescribeEnvironmentAttributesResponse::GetEnvironmentId() const
{
    return m_environmentId;
}

bool DescribeEnvironmentAttributesResponse::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

uint64_t DescribeEnvironmentAttributesResponse::GetReplicas() const
{
    return m_replicas;
}

bool DescribeEnvironmentAttributesResponse::ReplicasHasBeenSet() const
{
    return m_replicasHasBeenSet;
}

string DescribeEnvironmentAttributesResponse::GetRemark() const
{
    return m_remark;
}

bool DescribeEnvironmentAttributesResponse::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


