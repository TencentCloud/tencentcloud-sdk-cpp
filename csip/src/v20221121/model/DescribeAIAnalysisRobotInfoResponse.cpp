/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/csip/v20221121/model/DescribeAIAnalysisRobotInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeAIAnalysisRobotInfoResponse::DescribeAIAnalysisRobotInfoResponse() :
    m_uRLHasBeenSet(false),
    m_accessTokenHasBeenSet(false),
    m_aesKeyHasBeenSet(false),
    m_botIDHasBeenSet(false),
    m_qrcodeImageContextHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAIAnalysisRobotInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("URL") && !rsp["URL"].IsNull())
    {
        if (!rsp["URL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `URL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uRL = string(rsp["URL"].GetString());
        m_uRLHasBeenSet = true;
    }

    if (rsp.HasMember("AccessToken") && !rsp["AccessToken"].IsNull())
    {
        if (!rsp["AccessToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessToken = string(rsp["AccessToken"].GetString());
        m_accessTokenHasBeenSet = true;
    }

    if (rsp.HasMember("AesKey") && !rsp["AesKey"].IsNull())
    {
        if (!rsp["AesKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AesKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aesKey = string(rsp["AesKey"].GetString());
        m_aesKeyHasBeenSet = true;
    }

    if (rsp.HasMember("BotID") && !rsp["BotID"].IsNull())
    {
        if (!rsp["BotID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_botID = string(rsp["BotID"].GetString());
        m_botIDHasBeenSet = true;
    }

    if (rsp.HasMember("QrcodeImageContext") && !rsp["QrcodeImageContext"].IsNull())
    {
        if (!rsp["QrcodeImageContext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QrcodeImageContext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qrcodeImageContext = string(rsp["QrcodeImageContext"].GetString());
        m_qrcodeImageContextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAIAnalysisRobotInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_uRLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uRL.c_str(), allocator).Move(), allocator);
    }

    if (m_accessTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessToken.c_str(), allocator).Move(), allocator);
    }

    if (m_aesKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AesKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aesKey.c_str(), allocator).Move(), allocator);
    }

    if (m_botIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_botID.c_str(), allocator).Move(), allocator);
    }

    if (m_qrcodeImageContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QrcodeImageContext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qrcodeImageContext.c_str(), allocator).Move(), allocator);
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


string DescribeAIAnalysisRobotInfoResponse::GetURL() const
{
    return m_uRL;
}

bool DescribeAIAnalysisRobotInfoResponse::URLHasBeenSet() const
{
    return m_uRLHasBeenSet;
}

string DescribeAIAnalysisRobotInfoResponse::GetAccessToken() const
{
    return m_accessToken;
}

bool DescribeAIAnalysisRobotInfoResponse::AccessTokenHasBeenSet() const
{
    return m_accessTokenHasBeenSet;
}

string DescribeAIAnalysisRobotInfoResponse::GetAesKey() const
{
    return m_aesKey;
}

bool DescribeAIAnalysisRobotInfoResponse::AesKeyHasBeenSet() const
{
    return m_aesKeyHasBeenSet;
}

string DescribeAIAnalysisRobotInfoResponse::GetBotID() const
{
    return m_botID;
}

bool DescribeAIAnalysisRobotInfoResponse::BotIDHasBeenSet() const
{
    return m_botIDHasBeenSet;
}

string DescribeAIAnalysisRobotInfoResponse::GetQrcodeImageContext() const
{
    return m_qrcodeImageContext;
}

bool DescribeAIAnalysisRobotInfoResponse::QrcodeImageContextHasBeenSet() const
{
    return m_qrcodeImageContextHasBeenSet;
}


