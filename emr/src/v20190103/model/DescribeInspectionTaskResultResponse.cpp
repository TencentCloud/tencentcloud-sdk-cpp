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

#include <tencentcloud/emr/v20190103/model/DescribeInspectionTaskResultResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DescribeInspectionTaskResultResponse::DescribeInspectionTaskResultResponse() :
    m_inspectionResultInfoHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_typeInfoHasBeenSet(false)
{
}

CoreInternalOutcome DescribeInspectionTaskResultResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("InspectionResultInfo") && !rsp["InspectionResultInfo"].IsNull())
    {
        if (!rsp["InspectionResultInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InspectionResultInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inspectionResultInfo = string(rsp["InspectionResultInfo"].GetString());
        m_inspectionResultInfoHasBeenSet = true;
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

    if (rsp.HasMember("TypeInfo") && !rsp["TypeInfo"].IsNull())
    {
        if (!rsp["TypeInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TypeInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeInfo = string(rsp["TypeInfo"].GetString());
        m_typeInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeInspectionTaskResultResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_inspectionResultInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InspectionResultInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inspectionResultInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_typeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_typeInfo.c_str(), allocator).Move(), allocator);
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


string DescribeInspectionTaskResultResponse::GetInspectionResultInfo() const
{
    return m_inspectionResultInfo;
}

bool DescribeInspectionTaskResultResponse::InspectionResultInfoHasBeenSet() const
{
    return m_inspectionResultInfoHasBeenSet;
}

int64_t DescribeInspectionTaskResultResponse::GetTotal() const
{
    return m_total;
}

bool DescribeInspectionTaskResultResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

string DescribeInspectionTaskResultResponse::GetTypeInfo() const
{
    return m_typeInfo;
}

bool DescribeInspectionTaskResultResponse::TypeInfoHasBeenSet() const
{
    return m_typeInfoHasBeenSet;
}


