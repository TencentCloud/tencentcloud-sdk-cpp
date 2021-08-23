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

#include <tencentcloud/cam/v20190116/model/OffsiteFlag.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

OffsiteFlag::OffsiteFlag() :
    m_verifyFlagHasBeenSet(false),
    m_notifyPhoneHasBeenSet(false),
    m_notifyEmailHasBeenSet(false),
    m_notifyWechatHasBeenSet(false),
    m_tipsHasBeenSet(false)
{
}

CoreInternalOutcome OffsiteFlag::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VerifyFlag") && !value["VerifyFlag"].IsNull())
    {
        if (!value["VerifyFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OffsiteFlag.VerifyFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_verifyFlag = value["VerifyFlag"].GetUint64();
        m_verifyFlagHasBeenSet = true;
    }

    if (value.HasMember("NotifyPhone") && !value["NotifyPhone"].IsNull())
    {
        if (!value["NotifyPhone"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OffsiteFlag.NotifyPhone` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_notifyPhone = value["NotifyPhone"].GetUint64();
        m_notifyPhoneHasBeenSet = true;
    }

    if (value.HasMember("NotifyEmail") && !value["NotifyEmail"].IsNull())
    {
        if (!value["NotifyEmail"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OffsiteFlag.NotifyEmail` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_notifyEmail = value["NotifyEmail"].GetInt64();
        m_notifyEmailHasBeenSet = true;
    }

    if (value.HasMember("NotifyWechat") && !value["NotifyWechat"].IsNull())
    {
        if (!value["NotifyWechat"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OffsiteFlag.NotifyWechat` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_notifyWechat = value["NotifyWechat"].GetUint64();
        m_notifyWechatHasBeenSet = true;
    }

    if (value.HasMember("Tips") && !value["Tips"].IsNull())
    {
        if (!value["Tips"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OffsiteFlag.Tips` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tips = value["Tips"].GetUint64();
        m_tipsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OffsiteFlag::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_verifyFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_verifyFlag, allocator);
    }

    if (m_notifyPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyPhone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notifyPhone, allocator);
    }

    if (m_notifyEmailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyEmail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notifyEmail, allocator);
    }

    if (m_notifyWechatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyWechat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notifyWechat, allocator);
    }

    if (m_tipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tips, allocator);
    }

}


uint64_t OffsiteFlag::GetVerifyFlag() const
{
    return m_verifyFlag;
}

void OffsiteFlag::SetVerifyFlag(const uint64_t& _verifyFlag)
{
    m_verifyFlag = _verifyFlag;
    m_verifyFlagHasBeenSet = true;
}

bool OffsiteFlag::VerifyFlagHasBeenSet() const
{
    return m_verifyFlagHasBeenSet;
}

uint64_t OffsiteFlag::GetNotifyPhone() const
{
    return m_notifyPhone;
}

void OffsiteFlag::SetNotifyPhone(const uint64_t& _notifyPhone)
{
    m_notifyPhone = _notifyPhone;
    m_notifyPhoneHasBeenSet = true;
}

bool OffsiteFlag::NotifyPhoneHasBeenSet() const
{
    return m_notifyPhoneHasBeenSet;
}

int64_t OffsiteFlag::GetNotifyEmail() const
{
    return m_notifyEmail;
}

void OffsiteFlag::SetNotifyEmail(const int64_t& _notifyEmail)
{
    m_notifyEmail = _notifyEmail;
    m_notifyEmailHasBeenSet = true;
}

bool OffsiteFlag::NotifyEmailHasBeenSet() const
{
    return m_notifyEmailHasBeenSet;
}

uint64_t OffsiteFlag::GetNotifyWechat() const
{
    return m_notifyWechat;
}

void OffsiteFlag::SetNotifyWechat(const uint64_t& _notifyWechat)
{
    m_notifyWechat = _notifyWechat;
    m_notifyWechatHasBeenSet = true;
}

bool OffsiteFlag::NotifyWechatHasBeenSet() const
{
    return m_notifyWechatHasBeenSet;
}

uint64_t OffsiteFlag::GetTips() const
{
    return m_tips;
}

void OffsiteFlag::SetTips(const uint64_t& _tips)
{
    m_tips = _tips;
    m_tipsHasBeenSet = true;
}

bool OffsiteFlag::TipsHasBeenSet() const
{
    return m_tipsHasBeenSet;
}

