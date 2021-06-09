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

#include <tencentcloud/mvj/v20190926/model/MarketingValueJudgementRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mvj::V20190926::Model;
using namespace std;

MarketingValueJudgementRequest::MarketingValueJudgementRequest() :
    m_accountTypeHasBeenSet(false),
    m_uidHasBeenSet(false),
    m_userIpHasBeenSet(false),
    m_postTimeHasBeenSet(false),
    m_imeiHasBeenSet(false),
    m_refererHasBeenSet(false)
{
}

string MarketingValueJudgementRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_accountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_accountType, allocator);
    }

    if (m_uidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uid.c_str(), allocator).Move(), allocator);
    }

    if (m_userIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userIp.c_str(), allocator).Move(), allocator);
    }

    if (m_postTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_postTime, allocator);
    }

    if (m_imeiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Imei";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imei.c_str(), allocator).Move(), allocator);
    }

    if (m_refererHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Referer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_referer.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t MarketingValueJudgementRequest::GetAccountType() const
{
    return m_accountType;
}

void MarketingValueJudgementRequest::SetAccountType(const uint64_t& _accountType)
{
    m_accountType = _accountType;
    m_accountTypeHasBeenSet = true;
}

bool MarketingValueJudgementRequest::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}

string MarketingValueJudgementRequest::GetUid() const
{
    return m_uid;
}

void MarketingValueJudgementRequest::SetUid(const string& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool MarketingValueJudgementRequest::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

string MarketingValueJudgementRequest::GetUserIp() const
{
    return m_userIp;
}

void MarketingValueJudgementRequest::SetUserIp(const string& _userIp)
{
    m_userIp = _userIp;
    m_userIpHasBeenSet = true;
}

bool MarketingValueJudgementRequest::UserIpHasBeenSet() const
{
    return m_userIpHasBeenSet;
}

uint64_t MarketingValueJudgementRequest::GetPostTime() const
{
    return m_postTime;
}

void MarketingValueJudgementRequest::SetPostTime(const uint64_t& _postTime)
{
    m_postTime = _postTime;
    m_postTimeHasBeenSet = true;
}

bool MarketingValueJudgementRequest::PostTimeHasBeenSet() const
{
    return m_postTimeHasBeenSet;
}

string MarketingValueJudgementRequest::GetImei() const
{
    return m_imei;
}

void MarketingValueJudgementRequest::SetImei(const string& _imei)
{
    m_imei = _imei;
    m_imeiHasBeenSet = true;
}

bool MarketingValueJudgementRequest::ImeiHasBeenSet() const
{
    return m_imeiHasBeenSet;
}

string MarketingValueJudgementRequest::GetReferer() const
{
    return m_referer;
}

void MarketingValueJudgementRequest::SetReferer(const string& _referer)
{
    m_referer = _referer;
    m_refererHasBeenSet = true;
}

bool MarketingValueJudgementRequest::RefererHasBeenSet() const
{
    return m_refererHasBeenSet;
}


