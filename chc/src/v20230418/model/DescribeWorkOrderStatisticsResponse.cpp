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

#include <tencentcloud/chc/v20230418/model/DescribeWorkOrderStatisticsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

DescribeWorkOrderStatisticsResponse::DescribeWorkOrderStatisticsResponse() :
    m_totalNumHasBeenSet(false),
    m_processingNumHasBeenSet(false),
    m_confirmingNumHasBeenSet(false),
    m_finishNumHasBeenSet(false),
    m_rejectNumHasBeenSet(false),
    m_exceptionNumHasBeenSet(false),
    m_cancelNumHasBeenSet(false),
    m_checkingNumHasBeenSet(false)
{
}

CoreInternalOutcome DescribeWorkOrderStatisticsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalNum") && !rsp["TotalNum"].IsNull())
    {
        if (!rsp["TotalNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalNum = rsp["TotalNum"].GetUint64();
        m_totalNumHasBeenSet = true;
    }

    if (rsp.HasMember("ProcessingNum") && !rsp["ProcessingNum"].IsNull())
    {
        if (!rsp["ProcessingNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessingNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_processingNum = rsp["ProcessingNum"].GetUint64();
        m_processingNumHasBeenSet = true;
    }

    if (rsp.HasMember("ConfirmingNum") && !rsp["ConfirmingNum"].IsNull())
    {
        if (!rsp["ConfirmingNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConfirmingNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_confirmingNum = rsp["ConfirmingNum"].GetUint64();
        m_confirmingNumHasBeenSet = true;
    }

    if (rsp.HasMember("FinishNum") && !rsp["FinishNum"].IsNull())
    {
        if (!rsp["FinishNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FinishNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_finishNum = rsp["FinishNum"].GetUint64();
        m_finishNumHasBeenSet = true;
    }

    if (rsp.HasMember("RejectNum") && !rsp["RejectNum"].IsNull())
    {
        if (!rsp["RejectNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RejectNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rejectNum = rsp["RejectNum"].GetUint64();
        m_rejectNumHasBeenSet = true;
    }

    if (rsp.HasMember("ExceptionNum") && !rsp["ExceptionNum"].IsNull())
    {
        if (!rsp["ExceptionNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExceptionNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_exceptionNum = rsp["ExceptionNum"].GetUint64();
        m_exceptionNumHasBeenSet = true;
    }

    if (rsp.HasMember("CancelNum") && !rsp["CancelNum"].IsNull())
    {
        if (!rsp["CancelNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CancelNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cancelNum = rsp["CancelNum"].GetUint64();
        m_cancelNumHasBeenSet = true;
    }

    if (rsp.HasMember("CheckingNum") && !rsp["CheckingNum"].IsNull())
    {
        if (!rsp["CheckingNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CheckingNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_checkingNum = rsp["CheckingNum"].GetUint64();
        m_checkingNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeWorkOrderStatisticsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalNum, allocator);
    }

    if (m_processingNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessingNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processingNum, allocator);
    }

    if (m_confirmingNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfirmingNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confirmingNum, allocator);
    }

    if (m_finishNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_finishNum, allocator);
    }

    if (m_rejectNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RejectNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rejectNum, allocator);
    }

    if (m_exceptionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExceptionNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exceptionNum, allocator);
    }

    if (m_cancelNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CancelNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cancelNum, allocator);
    }

    if (m_checkingNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckingNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkingNum, allocator);
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


uint64_t DescribeWorkOrderStatisticsResponse::GetTotalNum() const
{
    return m_totalNum;
}

bool DescribeWorkOrderStatisticsResponse::TotalNumHasBeenSet() const
{
    return m_totalNumHasBeenSet;
}

uint64_t DescribeWorkOrderStatisticsResponse::GetProcessingNum() const
{
    return m_processingNum;
}

bool DescribeWorkOrderStatisticsResponse::ProcessingNumHasBeenSet() const
{
    return m_processingNumHasBeenSet;
}

uint64_t DescribeWorkOrderStatisticsResponse::GetConfirmingNum() const
{
    return m_confirmingNum;
}

bool DescribeWorkOrderStatisticsResponse::ConfirmingNumHasBeenSet() const
{
    return m_confirmingNumHasBeenSet;
}

uint64_t DescribeWorkOrderStatisticsResponse::GetFinishNum() const
{
    return m_finishNum;
}

bool DescribeWorkOrderStatisticsResponse::FinishNumHasBeenSet() const
{
    return m_finishNumHasBeenSet;
}

uint64_t DescribeWorkOrderStatisticsResponse::GetRejectNum() const
{
    return m_rejectNum;
}

bool DescribeWorkOrderStatisticsResponse::RejectNumHasBeenSet() const
{
    return m_rejectNumHasBeenSet;
}

uint64_t DescribeWorkOrderStatisticsResponse::GetExceptionNum() const
{
    return m_exceptionNum;
}

bool DescribeWorkOrderStatisticsResponse::ExceptionNumHasBeenSet() const
{
    return m_exceptionNumHasBeenSet;
}

uint64_t DescribeWorkOrderStatisticsResponse::GetCancelNum() const
{
    return m_cancelNum;
}

bool DescribeWorkOrderStatisticsResponse::CancelNumHasBeenSet() const
{
    return m_cancelNumHasBeenSet;
}

uint64_t DescribeWorkOrderStatisticsResponse::GetCheckingNum() const
{
    return m_checkingNum;
}

bool DescribeWorkOrderStatisticsResponse::CheckingNumHasBeenSet() const
{
    return m_checkingNumHasBeenSet;
}


