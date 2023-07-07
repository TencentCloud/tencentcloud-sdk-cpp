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

#include <tencentcloud/tke/v20180525/model/DescribeResourceUsageResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

DescribeResourceUsageResponse::DescribeResourceUsageResponse() :
    m_cRDUsageHasBeenSet(false),
    m_podUsageHasBeenSet(false),
    m_rSUsageHasBeenSet(false),
    m_configMapUsageHasBeenSet(false),
    m_otherUsageHasBeenSet(false)
{
}

CoreInternalOutcome DescribeResourceUsageResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CRDUsage") && !rsp["CRDUsage"].IsNull())
    {
        if (!rsp["CRDUsage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CRDUsage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cRDUsage.Deserialize(rsp["CRDUsage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cRDUsageHasBeenSet = true;
    }

    if (rsp.HasMember("PodUsage") && !rsp["PodUsage"].IsNull())
    {
        if (!rsp["PodUsage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PodUsage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_podUsage = rsp["PodUsage"].GetUint64();
        m_podUsageHasBeenSet = true;
    }

    if (rsp.HasMember("RSUsage") && !rsp["RSUsage"].IsNull())
    {
        if (!rsp["RSUsage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RSUsage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rSUsage = rsp["RSUsage"].GetUint64();
        m_rSUsageHasBeenSet = true;
    }

    if (rsp.HasMember("ConfigMapUsage") && !rsp["ConfigMapUsage"].IsNull())
    {
        if (!rsp["ConfigMapUsage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigMapUsage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_configMapUsage = rsp["ConfigMapUsage"].GetUint64();
        m_configMapUsageHasBeenSet = true;
    }

    if (rsp.HasMember("OtherUsage") && !rsp["OtherUsage"].IsNull())
    {
        if (!rsp["OtherUsage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OtherUsage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_otherUsage.Deserialize(rsp["OtherUsage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_otherUsageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeResourceUsageResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_cRDUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CRDUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cRDUsage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_podUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_podUsage, allocator);
    }

    if (m_rSUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RSUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rSUsage, allocator);
    }

    if (m_configMapUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigMapUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_configMapUsage, allocator);
    }

    if (m_otherUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_otherUsage.ToJsonObject(value[key.c_str()], allocator);
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


ResourceUsage DescribeResourceUsageResponse::GetCRDUsage() const
{
    return m_cRDUsage;
}

bool DescribeResourceUsageResponse::CRDUsageHasBeenSet() const
{
    return m_cRDUsageHasBeenSet;
}

uint64_t DescribeResourceUsageResponse::GetPodUsage() const
{
    return m_podUsage;
}

bool DescribeResourceUsageResponse::PodUsageHasBeenSet() const
{
    return m_podUsageHasBeenSet;
}

uint64_t DescribeResourceUsageResponse::GetRSUsage() const
{
    return m_rSUsage;
}

bool DescribeResourceUsageResponse::RSUsageHasBeenSet() const
{
    return m_rSUsageHasBeenSet;
}

uint64_t DescribeResourceUsageResponse::GetConfigMapUsage() const
{
    return m_configMapUsage;
}

bool DescribeResourceUsageResponse::ConfigMapUsageHasBeenSet() const
{
    return m_configMapUsageHasBeenSet;
}

ResourceUsage DescribeResourceUsageResponse::GetOtherUsage() const
{
    return m_otherUsage;
}

bool DescribeResourceUsageResponse::OtherUsageHasBeenSet() const
{
    return m_otherUsageHasBeenSet;
}


