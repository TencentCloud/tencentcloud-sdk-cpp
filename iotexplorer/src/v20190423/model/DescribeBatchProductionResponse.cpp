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

#include <tencentcloud/iotexplorer/v20190423/model/DescribeBatchProductionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

DescribeBatchProductionResponse::DescribeBatchProductionResponse() :
    m_batchCntHasBeenSet(false),
    m_burnMethodHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_downloadUrlHasBeenSet(false),
    m_generationMethodHasBeenSet(false),
    m_uploadUrlHasBeenSet(false),
    m_successCountHasBeenSet(false),
    m_lastFailedReasonHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBatchProductionResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("BatchCnt") && !rsp["BatchCnt"].IsNull())
    {
        if (!rsp["BatchCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_batchCnt = rsp["BatchCnt"].GetInt64();
        m_batchCntHasBeenSet = true;
    }

    if (rsp.HasMember("BurnMethod") && !rsp["BurnMethod"].IsNull())
    {
        if (!rsp["BurnMethod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BurnMethod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_burnMethod = rsp["BurnMethod"].GetInt64();
        m_burnMethodHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = rsp["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("DownloadUrl") && !rsp["DownloadUrl"].IsNull())
    {
        if (!rsp["DownloadUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DownloadUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downloadUrl = string(rsp["DownloadUrl"].GetString());
        m_downloadUrlHasBeenSet = true;
    }

    if (rsp.HasMember("GenerationMethod") && !rsp["GenerationMethod"].IsNull())
    {
        if (!rsp["GenerationMethod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GenerationMethod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_generationMethod = rsp["GenerationMethod"].GetInt64();
        m_generationMethodHasBeenSet = true;
    }

    if (rsp.HasMember("UploadUrl") && !rsp["UploadUrl"].IsNull())
    {
        if (!rsp["UploadUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uploadUrl = string(rsp["UploadUrl"].GetString());
        m_uploadUrlHasBeenSet = true;
    }

    if (rsp.HasMember("SuccessCount") && !rsp["SuccessCount"].IsNull())
    {
        if (!rsp["SuccessCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SuccessCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_successCount = rsp["SuccessCount"].GetInt64();
        m_successCountHasBeenSet = true;
    }

    if (rsp.HasMember("LastFailedReason") && !rsp["LastFailedReason"].IsNull())
    {
        if (!rsp["LastFailedReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LastFailedReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastFailedReason = string(rsp["LastFailedReason"].GetString());
        m_lastFailedReasonHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBatchProductionResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_batchCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_batchCnt, allocator);
    }

    if (m_burnMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BurnMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_burnMethod, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_downloadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_downloadUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_generationMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GenerationMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_generationMethod, allocator);
    }

    if (m_uploadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uploadUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_successCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successCount, allocator);
    }

    if (m_lastFailedReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastFailedReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastFailedReason.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
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


int64_t DescribeBatchProductionResponse::GetBatchCnt() const
{
    return m_batchCnt;
}

bool DescribeBatchProductionResponse::BatchCntHasBeenSet() const
{
    return m_batchCntHasBeenSet;
}

int64_t DescribeBatchProductionResponse::GetBurnMethod() const
{
    return m_burnMethod;
}

bool DescribeBatchProductionResponse::BurnMethodHasBeenSet() const
{
    return m_burnMethodHasBeenSet;
}

int64_t DescribeBatchProductionResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeBatchProductionResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeBatchProductionResponse::GetDownloadUrl() const
{
    return m_downloadUrl;
}

bool DescribeBatchProductionResponse::DownloadUrlHasBeenSet() const
{
    return m_downloadUrlHasBeenSet;
}

int64_t DescribeBatchProductionResponse::GetGenerationMethod() const
{
    return m_generationMethod;
}

bool DescribeBatchProductionResponse::GenerationMethodHasBeenSet() const
{
    return m_generationMethodHasBeenSet;
}

string DescribeBatchProductionResponse::GetUploadUrl() const
{
    return m_uploadUrl;
}

bool DescribeBatchProductionResponse::UploadUrlHasBeenSet() const
{
    return m_uploadUrlHasBeenSet;
}

int64_t DescribeBatchProductionResponse::GetSuccessCount() const
{
    return m_successCount;
}

bool DescribeBatchProductionResponse::SuccessCountHasBeenSet() const
{
    return m_successCountHasBeenSet;
}

string DescribeBatchProductionResponse::GetLastFailedReason() const
{
    return m_lastFailedReason;
}

bool DescribeBatchProductionResponse::LastFailedReasonHasBeenSet() const
{
    return m_lastFailedReasonHasBeenSet;
}

int64_t DescribeBatchProductionResponse::GetStatus() const
{
    return m_status;
}

bool DescribeBatchProductionResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


