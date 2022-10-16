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

#include <tencentcloud/faceid/v20180301/model/ApplySdkVerificationTokenRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

ApplySdkVerificationTokenRequest::ApplySdkVerificationTokenRequest() :
    m_needVerifyIdCardHasBeenSet(false),
    m_idCardTypeHasBeenSet(false),
    m_disableChangeOcrResultHasBeenSet(false),
    m_disableCheckOcrWarningsHasBeenSet(false),
    m_extraHasBeenSet(false)
{
}

string ApplySdkVerificationTokenRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_needVerifyIdCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedVerifyIdCard";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needVerifyIdCard, allocator);
    }

    if (m_idCardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idCardType.c_str(), allocator).Move(), allocator);
    }

    if (m_disableChangeOcrResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableChangeOcrResult";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_disableChangeOcrResult, allocator);
    }

    if (m_disableCheckOcrWarningsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableCheckOcrWarnings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_disableCheckOcrWarnings, allocator);
    }

    if (m_extraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extra";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extra.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


bool ApplySdkVerificationTokenRequest::GetNeedVerifyIdCard() const
{
    return m_needVerifyIdCard;
}

void ApplySdkVerificationTokenRequest::SetNeedVerifyIdCard(const bool& _needVerifyIdCard)
{
    m_needVerifyIdCard = _needVerifyIdCard;
    m_needVerifyIdCardHasBeenSet = true;
}

bool ApplySdkVerificationTokenRequest::NeedVerifyIdCardHasBeenSet() const
{
    return m_needVerifyIdCardHasBeenSet;
}

string ApplySdkVerificationTokenRequest::GetIdCardType() const
{
    return m_idCardType;
}

void ApplySdkVerificationTokenRequest::SetIdCardType(const string& _idCardType)
{
    m_idCardType = _idCardType;
    m_idCardTypeHasBeenSet = true;
}

bool ApplySdkVerificationTokenRequest::IdCardTypeHasBeenSet() const
{
    return m_idCardTypeHasBeenSet;
}

bool ApplySdkVerificationTokenRequest::GetDisableChangeOcrResult() const
{
    return m_disableChangeOcrResult;
}

void ApplySdkVerificationTokenRequest::SetDisableChangeOcrResult(const bool& _disableChangeOcrResult)
{
    m_disableChangeOcrResult = _disableChangeOcrResult;
    m_disableChangeOcrResultHasBeenSet = true;
}

bool ApplySdkVerificationTokenRequest::DisableChangeOcrResultHasBeenSet() const
{
    return m_disableChangeOcrResultHasBeenSet;
}

bool ApplySdkVerificationTokenRequest::GetDisableCheckOcrWarnings() const
{
    return m_disableCheckOcrWarnings;
}

void ApplySdkVerificationTokenRequest::SetDisableCheckOcrWarnings(const bool& _disableCheckOcrWarnings)
{
    m_disableCheckOcrWarnings = _disableCheckOcrWarnings;
    m_disableCheckOcrWarningsHasBeenSet = true;
}

bool ApplySdkVerificationTokenRequest::DisableCheckOcrWarningsHasBeenSet() const
{
    return m_disableCheckOcrWarningsHasBeenSet;
}

string ApplySdkVerificationTokenRequest::GetExtra() const
{
    return m_extra;
}

void ApplySdkVerificationTokenRequest::SetExtra(const string& _extra)
{
    m_extra = _extra;
    m_extraHasBeenSet = true;
}

bool ApplySdkVerificationTokenRequest::ExtraHasBeenSet() const
{
    return m_extraHasBeenSet;
}


