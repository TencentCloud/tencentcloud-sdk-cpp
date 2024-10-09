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

#include <tencentcloud/vclm/v20240523/model/DescribeImageAnimateJobResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vclm::V20240523::Model;
using namespace std;

DescribeImageAnimateJobResponse::DescribeImageAnimateJobResponse() :
    m_statusHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_resultVideoUrlHasBeenSet(false),
    m_maskVideoUrlHasBeenSet(false)
{
}

CoreInternalOutcome DescribeImageAnimateJobResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorCode") && !rsp["ErrorCode"].IsNull())
    {
        if (!rsp["ErrorCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = string(rsp["ErrorCode"].GetString());
        m_errorCodeHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorMessage") && !rsp["ErrorMessage"].IsNull())
    {
        if (!rsp["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(rsp["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (rsp.HasMember("ResultVideoUrl") && !rsp["ResultVideoUrl"].IsNull())
    {
        if (!rsp["ResultVideoUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultVideoUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultVideoUrl = string(rsp["ResultVideoUrl"].GetString());
        m_resultVideoUrlHasBeenSet = true;
    }

    if (rsp.HasMember("MaskVideoUrl") && !rsp["MaskVideoUrl"].IsNull())
    {
        if (!rsp["MaskVideoUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaskVideoUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maskVideoUrl = string(rsp["MaskVideoUrl"].GetString());
        m_maskVideoUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeImageAnimateJobResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_errorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorCode.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_resultVideoUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultVideoUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultVideoUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_maskVideoUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaskVideoUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maskVideoUrl.c_str(), allocator).Move(), allocator);
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


string DescribeImageAnimateJobResponse::GetStatus() const
{
    return m_status;
}

bool DescribeImageAnimateJobResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeImageAnimateJobResponse::GetErrorCode() const
{
    return m_errorCode;
}

bool DescribeImageAnimateJobResponse::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string DescribeImageAnimateJobResponse::GetErrorMessage() const
{
    return m_errorMessage;
}

bool DescribeImageAnimateJobResponse::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

string DescribeImageAnimateJobResponse::GetResultVideoUrl() const
{
    return m_resultVideoUrl;
}

bool DescribeImageAnimateJobResponse::ResultVideoUrlHasBeenSet() const
{
    return m_resultVideoUrlHasBeenSet;
}

string DescribeImageAnimateJobResponse::GetMaskVideoUrl() const
{
    return m_maskVideoUrl;
}

bool DescribeImageAnimateJobResponse::MaskVideoUrlHasBeenSet() const
{
    return m_maskVideoUrlHasBeenSet;
}


