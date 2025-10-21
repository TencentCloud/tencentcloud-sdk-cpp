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

#include <tencentcloud/ccc/v20200210/model/DisableCCCPhoneNumberRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

DisableCCCPhoneNumberRequest::DisableCCCPhoneNumberRequest() :
    m_phoneNumbersHasBeenSet(false),
    m_disabledHasBeenSet(false),
    m_sdkAppIdHasBeenSet(false)
{
}

string DisableCCCPhoneNumberRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_phoneNumbersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNumbers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_phoneNumbers.begin(); itr != m_phoneNumbers.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_disabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Disabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_disabled, allocator);
    }

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DisableCCCPhoneNumberRequest::GetPhoneNumbers() const
{
    return m_phoneNumbers;
}

void DisableCCCPhoneNumberRequest::SetPhoneNumbers(const vector<string>& _phoneNumbers)
{
    m_phoneNumbers = _phoneNumbers;
    m_phoneNumbersHasBeenSet = true;
}

bool DisableCCCPhoneNumberRequest::PhoneNumbersHasBeenSet() const
{
    return m_phoneNumbersHasBeenSet;
}

int64_t DisableCCCPhoneNumberRequest::GetDisabled() const
{
    return m_disabled;
}

void DisableCCCPhoneNumberRequest::SetDisabled(const int64_t& _disabled)
{
    m_disabled = _disabled;
    m_disabledHasBeenSet = true;
}

bool DisableCCCPhoneNumberRequest::DisabledHasBeenSet() const
{
    return m_disabledHasBeenSet;
}

uint64_t DisableCCCPhoneNumberRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void DisableCCCPhoneNumberRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool DisableCCCPhoneNumberRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}


