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

#include <tencentcloud/captcha/v20190722/model/DescribeCaptchaMiniDataSumResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Captcha::V20190722::Model;
using namespace std;

DescribeCaptchaMiniDataSumResponse::DescribeCaptchaMiniDataSumResponse() :
    m_getSumHasBeenSet(false),
    m_vfySuccSumHasBeenSet(false),
    m_vfySumHasBeenSet(false),
    m_attackSumHasBeenSet(false),
    m_captchaMsgHasBeenSet(false),
    m_captchaCodeHasBeenSet(false),
    m_checkTicketSumHasBeenSet(false),
    m_ticketThroughputSumHasBeenSet(false),
    m_ticketInterceptSumHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCaptchaMiniDataSumResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("GetSum") && !rsp["GetSum"].IsNull())
    {
        if (!rsp["GetSum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GetSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_getSum = rsp["GetSum"].GetInt64();
        m_getSumHasBeenSet = true;
    }

    if (rsp.HasMember("VfySuccSum") && !rsp["VfySuccSum"].IsNull())
    {
        if (!rsp["VfySuccSum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VfySuccSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vfySuccSum = rsp["VfySuccSum"].GetInt64();
        m_vfySuccSumHasBeenSet = true;
    }

    if (rsp.HasMember("VfySum") && !rsp["VfySum"].IsNull())
    {
        if (!rsp["VfySum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VfySum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vfySum = rsp["VfySum"].GetInt64();
        m_vfySumHasBeenSet = true;
    }

    if (rsp.HasMember("AttackSum") && !rsp["AttackSum"].IsNull())
    {
        if (!rsp["AttackSum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AttackSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attackSum = rsp["AttackSum"].GetInt64();
        m_attackSumHasBeenSet = true;
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

    if (rsp.HasMember("CaptchaCode") && !rsp["CaptchaCode"].IsNull())
    {
        if (!rsp["CaptchaCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CaptchaCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_captchaCode = rsp["CaptchaCode"].GetInt64();
        m_captchaCodeHasBeenSet = true;
    }

    if (rsp.HasMember("CheckTicketSum") && !rsp["CheckTicketSum"].IsNull())
    {
        if (!rsp["CheckTicketSum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CheckTicketSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_checkTicketSum = rsp["CheckTicketSum"].GetInt64();
        m_checkTicketSumHasBeenSet = true;
    }

    if (rsp.HasMember("TicketThroughputSum") && !rsp["TicketThroughputSum"].IsNull())
    {
        if (!rsp["TicketThroughputSum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TicketThroughputSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ticketThroughputSum = rsp["TicketThroughputSum"].GetInt64();
        m_ticketThroughputSumHasBeenSet = true;
    }

    if (rsp.HasMember("TicketInterceptSum") && !rsp["TicketInterceptSum"].IsNull())
    {
        if (!rsp["TicketInterceptSum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TicketInterceptSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ticketInterceptSum = rsp["TicketInterceptSum"].GetInt64();
        m_ticketInterceptSumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCaptchaMiniDataSumResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_getSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GetSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_getSum, allocator);
    }

    if (m_vfySuccSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VfySuccSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vfySuccSum, allocator);
    }

    if (m_vfySumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VfySum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vfySum, allocator);
    }

    if (m_attackSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackSum, allocator);
    }

    if (m_captchaMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaptchaMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_captchaMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_captchaCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaptchaCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_captchaCode, allocator);
    }

    if (m_checkTicketSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckTicketSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkTicketSum, allocator);
    }

    if (m_ticketThroughputSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TicketThroughputSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ticketThroughputSum, allocator);
    }

    if (m_ticketInterceptSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TicketInterceptSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ticketInterceptSum, allocator);
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


int64_t DescribeCaptchaMiniDataSumResponse::GetGetSum() const
{
    return m_getSum;
}

bool DescribeCaptchaMiniDataSumResponse::GetSumHasBeenSet() const
{
    return m_getSumHasBeenSet;
}

int64_t DescribeCaptchaMiniDataSumResponse::GetVfySuccSum() const
{
    return m_vfySuccSum;
}

bool DescribeCaptchaMiniDataSumResponse::VfySuccSumHasBeenSet() const
{
    return m_vfySuccSumHasBeenSet;
}

int64_t DescribeCaptchaMiniDataSumResponse::GetVfySum() const
{
    return m_vfySum;
}

bool DescribeCaptchaMiniDataSumResponse::VfySumHasBeenSet() const
{
    return m_vfySumHasBeenSet;
}

int64_t DescribeCaptchaMiniDataSumResponse::GetAttackSum() const
{
    return m_attackSum;
}

bool DescribeCaptchaMiniDataSumResponse::AttackSumHasBeenSet() const
{
    return m_attackSumHasBeenSet;
}

string DescribeCaptchaMiniDataSumResponse::GetCaptchaMsg() const
{
    return m_captchaMsg;
}

bool DescribeCaptchaMiniDataSumResponse::CaptchaMsgHasBeenSet() const
{
    return m_captchaMsgHasBeenSet;
}

int64_t DescribeCaptchaMiniDataSumResponse::GetCaptchaCode() const
{
    return m_captchaCode;
}

bool DescribeCaptchaMiniDataSumResponse::CaptchaCodeHasBeenSet() const
{
    return m_captchaCodeHasBeenSet;
}

int64_t DescribeCaptchaMiniDataSumResponse::GetCheckTicketSum() const
{
    return m_checkTicketSum;
}

bool DescribeCaptchaMiniDataSumResponse::CheckTicketSumHasBeenSet() const
{
    return m_checkTicketSumHasBeenSet;
}

int64_t DescribeCaptchaMiniDataSumResponse::GetTicketThroughputSum() const
{
    return m_ticketThroughputSum;
}

bool DescribeCaptchaMiniDataSumResponse::TicketThroughputSumHasBeenSet() const
{
    return m_ticketThroughputSumHasBeenSet;
}

int64_t DescribeCaptchaMiniDataSumResponse::GetTicketInterceptSum() const
{
    return m_ticketInterceptSum;
}

bool DescribeCaptchaMiniDataSumResponse::TicketInterceptSumHasBeenSet() const
{
    return m_ticketInterceptSumHasBeenSet;
}


