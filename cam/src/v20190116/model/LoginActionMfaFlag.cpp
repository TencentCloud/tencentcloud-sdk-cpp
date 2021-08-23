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

#include <tencentcloud/cam/v20190116/model/LoginActionMfaFlag.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

LoginActionMfaFlag::LoginActionMfaFlag() :
    m_phoneHasBeenSet(false),
    m_stokenHasBeenSet(false),
    m_wechatHasBeenSet(false)
{
}

CoreInternalOutcome LoginActionMfaFlag::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Phone") && !value["Phone"].IsNull())
    {
        if (!value["Phone"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoginActionMfaFlag.Phone` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_phone = value["Phone"].GetUint64();
        m_phoneHasBeenSet = true;
    }

    if (value.HasMember("Stoken") && !value["Stoken"].IsNull())
    {
        if (!value["Stoken"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoginActionMfaFlag.Stoken` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_stoken = value["Stoken"].GetUint64();
        m_stokenHasBeenSet = true;
    }

    if (value.HasMember("Wechat") && !value["Wechat"].IsNull())
    {
        if (!value["Wechat"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoginActionMfaFlag.Wechat` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_wechat = value["Wechat"].GetUint64();
        m_wechatHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoginActionMfaFlag::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_phone, allocator);
    }

    if (m_stokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stoken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stoken, allocator);
    }

    if (m_wechatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Wechat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wechat, allocator);
    }

}


uint64_t LoginActionMfaFlag::GetPhone() const
{
    return m_phone;
}

void LoginActionMfaFlag::SetPhone(const uint64_t& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool LoginActionMfaFlag::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

uint64_t LoginActionMfaFlag::GetStoken() const
{
    return m_stoken;
}

void LoginActionMfaFlag::SetStoken(const uint64_t& _stoken)
{
    m_stoken = _stoken;
    m_stokenHasBeenSet = true;
}

bool LoginActionMfaFlag::StokenHasBeenSet() const
{
    return m_stokenHasBeenSet;
}

uint64_t LoginActionMfaFlag::GetWechat() const
{
    return m_wechat;
}

void LoginActionMfaFlag::SetWechat(const uint64_t& _wechat)
{
    m_wechat = _wechat;
    m_wechatHasBeenSet = true;
}

bool LoginActionMfaFlag::WechatHasBeenSet() const
{
    return m_wechatHasBeenSet;
}

