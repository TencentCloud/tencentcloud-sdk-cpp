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

#include <tencentcloud/kms/v20190118/model/EnableKeyRotationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Kms::V20190118::Model;
using namespace std;

EnableKeyRotationRequest::EnableKeyRotationRequest() :
    m_keyIdHasBeenSet(false),
    m_rotateDaysHasBeenSet(false)
{
}

string EnableKeyRotationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_keyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

    if (m_rotateDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RotateDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rotateDays, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string EnableKeyRotationRequest::GetKeyId() const
{
    return m_keyId;
}

void EnableKeyRotationRequest::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool EnableKeyRotationRequest::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

uint64_t EnableKeyRotationRequest::GetRotateDays() const
{
    return m_rotateDays;
}

void EnableKeyRotationRequest::SetRotateDays(const uint64_t& _rotateDays)
{
    m_rotateDays = _rotateDays;
    m_rotateDaysHasBeenSet = true;
}

bool EnableKeyRotationRequest::RotateDaysHasBeenSet() const
{
    return m_rotateDaysHasBeenSet;
}


