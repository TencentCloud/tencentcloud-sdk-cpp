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

#include <tencentcloud/lke/v20231130/model/UploadAttributeLabelResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

UploadAttributeLabelResponse::UploadAttributeLabelResponse() :
    m_errorMsgHasBeenSet(false),
    m_errorLinkHasBeenSet(false),
    m_errorLinkTextHasBeenSet(false)
{
}

CoreInternalOutcome UploadAttributeLabelResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ErrorMsg") && !rsp["ErrorMsg"].IsNull())
    {
        if (!rsp["ErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMsg = string(rsp["ErrorMsg"].GetString());
        m_errorMsgHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorLink") && !rsp["ErrorLink"].IsNull())
    {
        if (!rsp["ErrorLink"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorLink` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorLink = string(rsp["ErrorLink"].GetString());
        m_errorLinkHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorLinkText") && !rsp["ErrorLinkText"].IsNull())
    {
        if (!rsp["ErrorLinkText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorLinkText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorLinkText = string(rsp["ErrorLinkText"].GetString());
        m_errorLinkTextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string UploadAttributeLabelResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_errorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_errorLinkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorLink";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorLink.c_str(), allocator).Move(), allocator);
    }

    if (m_errorLinkTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorLinkText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorLinkText.c_str(), allocator).Move(), allocator);
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


string UploadAttributeLabelResponse::GetErrorMsg() const
{
    return m_errorMsg;
}

bool UploadAttributeLabelResponse::ErrorMsgHasBeenSet() const
{
    return m_errorMsgHasBeenSet;
}

string UploadAttributeLabelResponse::GetErrorLink() const
{
    return m_errorLink;
}

bool UploadAttributeLabelResponse::ErrorLinkHasBeenSet() const
{
    return m_errorLinkHasBeenSet;
}

string UploadAttributeLabelResponse::GetErrorLinkText() const
{
    return m_errorLinkText;
}

bool UploadAttributeLabelResponse::ErrorLinkTextHasBeenSet() const
{
    return m_errorLinkTextHasBeenSet;
}


