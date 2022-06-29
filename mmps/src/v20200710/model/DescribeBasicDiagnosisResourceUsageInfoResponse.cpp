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

#include <tencentcloud/mmps/v20200710/model/DescribeBasicDiagnosisResourceUsageInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mmps::V20200710::Model;
using namespace std;

DescribeBasicDiagnosisResourceUsageInfoResponse::DescribeBasicDiagnosisResourceUsageInfoResponse() :
    m_retHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_unusedCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBasicDiagnosisResourceUsageInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Ret") && !rsp["Ret"].IsNull())
    {
        if (!rsp["Ret"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Ret` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ret = rsp["Ret"].GetInt64();
        m_retHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceName") && !rsp["ResourceName"].IsNull())
    {
        if (!rsp["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(rsp["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (rsp.HasMember("Total") && !rsp["Total"].IsNull())
    {
        if (!rsp["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (rsp.HasMember("UnusedCount") && !rsp["UnusedCount"].IsNull())
    {
        if (!rsp["UnusedCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UnusedCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unusedCount = rsp["UnusedCount"].GetInt64();
        m_unusedCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBasicDiagnosisResourceUsageInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_retHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ret, allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_unusedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnusedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unusedCount, allocator);
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


int64_t DescribeBasicDiagnosisResourceUsageInfoResponse::GetRet() const
{
    return m_ret;
}

bool DescribeBasicDiagnosisResourceUsageInfoResponse::RetHasBeenSet() const
{
    return m_retHasBeenSet;
}

string DescribeBasicDiagnosisResourceUsageInfoResponse::GetResourceName() const
{
    return m_resourceName;
}

bool DescribeBasicDiagnosisResourceUsageInfoResponse::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

int64_t DescribeBasicDiagnosisResourceUsageInfoResponse::GetTotal() const
{
    return m_total;
}

bool DescribeBasicDiagnosisResourceUsageInfoResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

int64_t DescribeBasicDiagnosisResourceUsageInfoResponse::GetUnusedCount() const
{
    return m_unusedCount;
}

bool DescribeBasicDiagnosisResourceUsageInfoResponse::UnusedCountHasBeenSet() const
{
    return m_unusedCountHasBeenSet;
}


