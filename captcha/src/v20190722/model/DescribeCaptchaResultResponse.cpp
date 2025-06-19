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

#include <tencentcloud/captcha/v20190722/model/DescribeCaptchaResultResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Captcha::V20190722::Model;
using namespace std;

DescribeCaptchaResultResponse::DescribeCaptchaResultResponse() :
    m_captchaCodeHasBeenSet(false),
    m_captchaMsgHasBeenSet(false),
    m_evilLevelHasBeenSet(false),
    m_getCaptchaTimeHasBeenSet(false),
    m_evilBitmapHasBeenSet(false),
    m_submitCaptchaTimeHasBeenSet(false),
    m_deviceRiskCategoryHasBeenSet(false),
    m_scoreHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCaptchaResultResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("EvilLevel") && !rsp["EvilLevel"].IsNull())
    {
        if (!rsp["EvilLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EvilLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_evilLevel = rsp["EvilLevel"].GetInt64();
        m_evilLevelHasBeenSet = true;
    }

    if (rsp.HasMember("GetCaptchaTime") && !rsp["GetCaptchaTime"].IsNull())
    {
        if (!rsp["GetCaptchaTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GetCaptchaTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_getCaptchaTime = rsp["GetCaptchaTime"].GetInt64();
        m_getCaptchaTimeHasBeenSet = true;
    }

    if (rsp.HasMember("EvilBitmap") && !rsp["EvilBitmap"].IsNull())
    {
        if (!rsp["EvilBitmap"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EvilBitmap` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_evilBitmap = rsp["EvilBitmap"].GetInt64();
        m_evilBitmapHasBeenSet = true;
    }

    if (rsp.HasMember("SubmitCaptchaTime") && !rsp["SubmitCaptchaTime"].IsNull())
    {
        if (!rsp["SubmitCaptchaTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubmitCaptchaTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_submitCaptchaTime = rsp["SubmitCaptchaTime"].GetInt64();
        m_submitCaptchaTimeHasBeenSet = true;
    }

    if (rsp.HasMember("DeviceRiskCategory") && !rsp["DeviceRiskCategory"].IsNull())
    {
        if (!rsp["DeviceRiskCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceRiskCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceRiskCategory = string(rsp["DeviceRiskCategory"].GetString());
        m_deviceRiskCategoryHasBeenSet = true;
    }

    if (rsp.HasMember("Score") && !rsp["Score"].IsNull())
    {
        if (!rsp["Score"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Score` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_score = rsp["Score"].GetInt64();
        m_scoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCaptchaResultResponse::ToJsonString() const
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

    if (m_evilLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvilLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_evilLevel, allocator);
    }

    if (m_getCaptchaTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GetCaptchaTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_getCaptchaTime, allocator);
    }

    if (m_evilBitmapHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvilBitmap";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_evilBitmap, allocator);
    }

    if (m_submitCaptchaTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubmitCaptchaTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_submitCaptchaTime, allocator);
    }

    if (m_deviceRiskCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceRiskCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceRiskCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
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


int64_t DescribeCaptchaResultResponse::GetCaptchaCode() const
{
    return m_captchaCode;
}

bool DescribeCaptchaResultResponse::CaptchaCodeHasBeenSet() const
{
    return m_captchaCodeHasBeenSet;
}

string DescribeCaptchaResultResponse::GetCaptchaMsg() const
{
    return m_captchaMsg;
}

bool DescribeCaptchaResultResponse::CaptchaMsgHasBeenSet() const
{
    return m_captchaMsgHasBeenSet;
}

int64_t DescribeCaptchaResultResponse::GetEvilLevel() const
{
    return m_evilLevel;
}

bool DescribeCaptchaResultResponse::EvilLevelHasBeenSet() const
{
    return m_evilLevelHasBeenSet;
}

int64_t DescribeCaptchaResultResponse::GetGetCaptchaTime() const
{
    return m_getCaptchaTime;
}

bool DescribeCaptchaResultResponse::GetCaptchaTimeHasBeenSet() const
{
    return m_getCaptchaTimeHasBeenSet;
}

int64_t DescribeCaptchaResultResponse::GetEvilBitmap() const
{
    return m_evilBitmap;
}

bool DescribeCaptchaResultResponse::EvilBitmapHasBeenSet() const
{
    return m_evilBitmapHasBeenSet;
}

int64_t DescribeCaptchaResultResponse::GetSubmitCaptchaTime() const
{
    return m_submitCaptchaTime;
}

bool DescribeCaptchaResultResponse::SubmitCaptchaTimeHasBeenSet() const
{
    return m_submitCaptchaTimeHasBeenSet;
}

string DescribeCaptchaResultResponse::GetDeviceRiskCategory() const
{
    return m_deviceRiskCategory;
}

bool DescribeCaptchaResultResponse::DeviceRiskCategoryHasBeenSet() const
{
    return m_deviceRiskCategoryHasBeenSet;
}

int64_t DescribeCaptchaResultResponse::GetScore() const
{
    return m_score;
}

bool DescribeCaptchaResultResponse::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}


