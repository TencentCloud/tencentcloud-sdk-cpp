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

#include <tencentcloud/tione/v20191022/model/DescribeNotebookSummaryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20191022::Model;
using namespace std;

DescribeNotebookSummaryResponse::DescribeNotebookSummaryResponse() :
    m_allInstanceCntHasBeenSet(false),
    m_billingInstanceCntHasBeenSet(false),
    m_storageOnlyBillingInstanceCntHasBeenSet(false),
    m_computingBillingInstanceCntHasBeenSet(false)
{
}

CoreInternalOutcome DescribeNotebookSummaryResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AllInstanceCnt") && !rsp["AllInstanceCnt"].IsNull())
    {
        if (!rsp["AllInstanceCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AllInstanceCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_allInstanceCnt = rsp["AllInstanceCnt"].GetInt64();
        m_allInstanceCntHasBeenSet = true;
    }

    if (rsp.HasMember("BillingInstanceCnt") && !rsp["BillingInstanceCnt"].IsNull())
    {
        if (!rsp["BillingInstanceCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BillingInstanceCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_billingInstanceCnt = rsp["BillingInstanceCnt"].GetInt64();
        m_billingInstanceCntHasBeenSet = true;
    }

    if (rsp.HasMember("StorageOnlyBillingInstanceCnt") && !rsp["StorageOnlyBillingInstanceCnt"].IsNull())
    {
        if (!rsp["StorageOnlyBillingInstanceCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StorageOnlyBillingInstanceCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageOnlyBillingInstanceCnt = rsp["StorageOnlyBillingInstanceCnt"].GetInt64();
        m_storageOnlyBillingInstanceCntHasBeenSet = true;
    }

    if (rsp.HasMember("ComputingBillingInstanceCnt") && !rsp["ComputingBillingInstanceCnt"].IsNull())
    {
        if (!rsp["ComputingBillingInstanceCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ComputingBillingInstanceCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_computingBillingInstanceCnt = rsp["ComputingBillingInstanceCnt"].GetInt64();
        m_computingBillingInstanceCntHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeNotebookSummaryResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_allInstanceCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllInstanceCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allInstanceCnt, allocator);
    }

    if (m_billingInstanceCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingInstanceCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_billingInstanceCnt, allocator);
    }

    if (m_storageOnlyBillingInstanceCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageOnlyBillingInstanceCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageOnlyBillingInstanceCnt, allocator);
    }

    if (m_computingBillingInstanceCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputingBillingInstanceCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_computingBillingInstanceCnt, allocator);
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


int64_t DescribeNotebookSummaryResponse::GetAllInstanceCnt() const
{
    return m_allInstanceCnt;
}

bool DescribeNotebookSummaryResponse::AllInstanceCntHasBeenSet() const
{
    return m_allInstanceCntHasBeenSet;
}

int64_t DescribeNotebookSummaryResponse::GetBillingInstanceCnt() const
{
    return m_billingInstanceCnt;
}

bool DescribeNotebookSummaryResponse::BillingInstanceCntHasBeenSet() const
{
    return m_billingInstanceCntHasBeenSet;
}

int64_t DescribeNotebookSummaryResponse::GetStorageOnlyBillingInstanceCnt() const
{
    return m_storageOnlyBillingInstanceCnt;
}

bool DescribeNotebookSummaryResponse::StorageOnlyBillingInstanceCntHasBeenSet() const
{
    return m_storageOnlyBillingInstanceCntHasBeenSet;
}

int64_t DescribeNotebookSummaryResponse::GetComputingBillingInstanceCnt() const
{
    return m_computingBillingInstanceCnt;
}

bool DescribeNotebookSummaryResponse::ComputingBillingInstanceCntHasBeenSet() const
{
    return m_computingBillingInstanceCntHasBeenSet;
}


