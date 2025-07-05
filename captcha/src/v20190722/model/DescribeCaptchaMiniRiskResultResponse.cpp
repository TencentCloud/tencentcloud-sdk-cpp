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

#include <tencentcloud/captcha/v20190722/model/DescribeCaptchaMiniRiskResultResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Captcha::V20190722::Model;
using namespace std;

DescribeCaptchaMiniRiskResultResponse::DescribeCaptchaMiniRiskResultResponse() :
    m_captchaCodeHasBeenSet(false),
    m_captchaMsgHasBeenSet(false),
    m_manageMarketingRiskValueHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCaptchaMiniRiskResultResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CaptchaCode") && !rsp["CaptchaCode"].IsNull())
    {
        if (!rsp["CaptchaCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CaptchaCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_captchaCode = rsp["CaptchaCode"].GetInt64();
        m_captchaCodeHasBeenSet = true;
    }

    if (rsp.HasMember("CaptchaMsg") && !rsp["CaptchaMsg"].IsNull())
    {
        if (!rsp["CaptchaMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CaptchaMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_captchaMsg = string(rsp["CaptchaMsg"].GetString());
        m_captchaMsgHasBeenSet = true;
    }

    if (rsp.HasMember("ManageMarketingRiskValue") && !rsp["ManageMarketingRiskValue"].IsNull())
    {
        if (!rsp["ManageMarketingRiskValue"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ManageMarketingRiskValue` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_manageMarketingRiskValue.Deserialize(rsp["ManageMarketingRiskValue"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_manageMarketingRiskValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCaptchaMiniRiskResultResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_captchaCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaptchaCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_captchaCode, allocator);
    }

    if (m_captchaMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaptchaMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_captchaMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_manageMarketingRiskValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManageMarketingRiskValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_manageMarketingRiskValue.ToJsonObject(value[key.c_str()], allocator);
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


int64_t DescribeCaptchaMiniRiskResultResponse::GetCaptchaCode() const
{
    return m_captchaCode;
}

bool DescribeCaptchaMiniRiskResultResponse::CaptchaCodeHasBeenSet() const
{
    return m_captchaCodeHasBeenSet;
}

string DescribeCaptchaMiniRiskResultResponse::GetCaptchaMsg() const
{
    return m_captchaMsg;
}

bool DescribeCaptchaMiniRiskResultResponse::CaptchaMsgHasBeenSet() const
{
    return m_captchaMsgHasBeenSet;
}

OutputManageMarketingRiskValue DescribeCaptchaMiniRiskResultResponse::GetManageMarketingRiskValue() const
{
    return m_manageMarketingRiskValue;
}

bool DescribeCaptchaMiniRiskResultResponse::ManageMarketingRiskValueHasBeenSet() const
{
    return m_manageMarketingRiskValueHasBeenSet;
}


