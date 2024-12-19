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

#include <tencentcloud/ess/v20201111/model/SignQrCode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

SignQrCode::SignQrCode() :
    m_qrCodeIdHasBeenSet(false),
    m_qrCodeUrlHasBeenSet(false),
    m_expiredTimeHasBeenSet(false),
    m_weixinQrCodeUrlHasBeenSet(false)
{
}

CoreInternalOutcome SignQrCode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QrCodeId") && !value["QrCodeId"].IsNull())
    {
        if (!value["QrCodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignQrCode.QrCodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qrCodeId = string(value["QrCodeId"].GetString());
        m_qrCodeIdHasBeenSet = true;
    }

    if (value.HasMember("QrCodeUrl") && !value["QrCodeUrl"].IsNull())
    {
        if (!value["QrCodeUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignQrCode.QrCodeUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qrCodeUrl = string(value["QrCodeUrl"].GetString());
        m_qrCodeUrlHasBeenSet = true;
    }

    if (value.HasMember("ExpiredTime") && !value["ExpiredTime"].IsNull())
    {
        if (!value["ExpiredTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SignQrCode.ExpiredTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = value["ExpiredTime"].GetInt64();
        m_expiredTimeHasBeenSet = true;
    }

    if (value.HasMember("WeixinQrCodeUrl") && !value["WeixinQrCodeUrl"].IsNull())
    {
        if (!value["WeixinQrCodeUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignQrCode.WeixinQrCodeUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_weixinQrCodeUrl = string(value["WeixinQrCodeUrl"].GetString());
        m_weixinQrCodeUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SignQrCode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_qrCodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QrCodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qrCodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_qrCodeUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QrCodeUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qrCodeUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expiredTime, allocator);
    }

    if (m_weixinQrCodeUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeixinQrCodeUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_weixinQrCodeUrl.c_str(), allocator).Move(), allocator);
    }

}


string SignQrCode::GetQrCodeId() const
{
    return m_qrCodeId;
}

void SignQrCode::SetQrCodeId(const string& _qrCodeId)
{
    m_qrCodeId = _qrCodeId;
    m_qrCodeIdHasBeenSet = true;
}

bool SignQrCode::QrCodeIdHasBeenSet() const
{
    return m_qrCodeIdHasBeenSet;
}

string SignQrCode::GetQrCodeUrl() const
{
    return m_qrCodeUrl;
}

void SignQrCode::SetQrCodeUrl(const string& _qrCodeUrl)
{
    m_qrCodeUrl = _qrCodeUrl;
    m_qrCodeUrlHasBeenSet = true;
}

bool SignQrCode::QrCodeUrlHasBeenSet() const
{
    return m_qrCodeUrlHasBeenSet;
}

int64_t SignQrCode::GetExpiredTime() const
{
    return m_expiredTime;
}

void SignQrCode::SetExpiredTime(const int64_t& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool SignQrCode::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

string SignQrCode::GetWeixinQrCodeUrl() const
{
    return m_weixinQrCodeUrl;
}

void SignQrCode::SetWeixinQrCodeUrl(const string& _weixinQrCodeUrl)
{
    m_weixinQrCodeUrl = _weixinQrCodeUrl;
    m_weixinQrCodeUrlHasBeenSet = true;
}

bool SignQrCode::WeixinQrCodeUrlHasBeenSet() const
{
    return m_weixinQrCodeUrlHasBeenSet;
}

