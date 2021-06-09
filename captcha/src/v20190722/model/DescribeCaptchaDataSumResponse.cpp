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

#include <tencentcloud/captcha/v20190722/model/DescribeCaptchaDataSumResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Captcha::V20190722::Model;
using namespace std;

DescribeCaptchaDataSumResponse::DescribeCaptchaDataSumResponse() :
    m_getSumHasBeenSet(false),
    m_vfySuccSumHasBeenSet(false),
    m_vfySumHasBeenSet(false),
    m_attackSumHasBeenSet(false),
    m_captchaMsgHasBeenSet(false),
    m_captchaCodeHasBeenSet(false),
    m_checkTicketSumHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCaptchaDataSumResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("GetSum") && !rsp["GetSum"].IsNull())
    {
        if (!rsp["GetSum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `GetSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_getSum = rsp["GetSum"].GetInt64();
        m_getSumHasBeenSet = true;
    }

    if (rsp.HasMember("VfySuccSum") && !rsp["VfySuccSum"].IsNull())
    {
        if (!rsp["VfySuccSum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `VfySuccSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vfySuccSum = rsp["VfySuccSum"].GetInt64();
        m_vfySuccSumHasBeenSet = true;
    }

    if (rsp.HasMember("VfySum") && !rsp["VfySum"].IsNull())
    {
        if (!rsp["VfySum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `VfySum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vfySum = rsp["VfySum"].GetInt64();
        m_vfySumHasBeenSet = true;
    }

    if (rsp.HasMember("AttackSum") && !rsp["AttackSum"].IsNull())
    {
        if (!rsp["AttackSum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AttackSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attackSum = rsp["AttackSum"].GetInt64();
        m_attackSumHasBeenSet = true;
    }

    if (rsp.HasMember("CaptchaMsg") && !rsp["CaptchaMsg"].IsNull())
    {
        if (!rsp["CaptchaMsg"].IsString())
        {
            return CoreInternalOutcome(Error("response `CaptchaMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_captchaMsg = string(rsp["CaptchaMsg"].GetString());
        m_captchaMsgHasBeenSet = true;
    }

    if (rsp.HasMember("CaptchaCode") && !rsp["CaptchaCode"].IsNull())
    {
        if (!rsp["CaptchaCode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CaptchaCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_captchaCode = rsp["CaptchaCode"].GetInt64();
        m_captchaCodeHasBeenSet = true;
    }

    if (rsp.HasMember("CheckTicketSum") && !rsp["CheckTicketSum"].IsNull())
    {
        if (!rsp["CheckTicketSum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CheckTicketSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_checkTicketSum = rsp["CheckTicketSum"].GetInt64();
        m_checkTicketSumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


int64_t DescribeCaptchaDataSumResponse::GetGetSum() const
{
    return m_getSum;
}

bool DescribeCaptchaDataSumResponse::GetSumHasBeenSet() const
{
    return m_getSumHasBeenSet;
}

int64_t DescribeCaptchaDataSumResponse::GetVfySuccSum() const
{
    return m_vfySuccSum;
}

bool DescribeCaptchaDataSumResponse::VfySuccSumHasBeenSet() const
{
    return m_vfySuccSumHasBeenSet;
}

int64_t DescribeCaptchaDataSumResponse::GetVfySum() const
{
    return m_vfySum;
}

bool DescribeCaptchaDataSumResponse::VfySumHasBeenSet() const
{
    return m_vfySumHasBeenSet;
}

int64_t DescribeCaptchaDataSumResponse::GetAttackSum() const
{
    return m_attackSum;
}

bool DescribeCaptchaDataSumResponse::AttackSumHasBeenSet() const
{
    return m_attackSumHasBeenSet;
}

string DescribeCaptchaDataSumResponse::GetCaptchaMsg() const
{
    return m_captchaMsg;
}

bool DescribeCaptchaDataSumResponse::CaptchaMsgHasBeenSet() const
{
    return m_captchaMsgHasBeenSet;
}

int64_t DescribeCaptchaDataSumResponse::GetCaptchaCode() const
{
    return m_captchaCode;
}

bool DescribeCaptchaDataSumResponse::CaptchaCodeHasBeenSet() const
{
    return m_captchaCodeHasBeenSet;
}

int64_t DescribeCaptchaDataSumResponse::GetCheckTicketSum() const
{
    return m_checkTicketSum;
}

bool DescribeCaptchaDataSumResponse::CheckTicketSumHasBeenSet() const
{
    return m_checkTicketSumHasBeenSet;
}


