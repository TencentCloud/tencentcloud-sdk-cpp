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

#include <tencentcloud/kms/v20190118/model/EncryptByWhiteBoxRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Kms::V20190118::Model;
using namespace std;

EncryptByWhiteBoxRequest::EncryptByWhiteBoxRequest() :
    m_keyIdHasBeenSet(false),
    m_plainTextHasBeenSet(false),
    m_initializationVectorHasBeenSet(false)
{
}

string EncryptByWhiteBoxRequest::ToJsonString() const
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

    if (m_plainTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlainText";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_plainText.c_str(), allocator).Move(), allocator);
    }

    if (m_initializationVectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitializationVector";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_initializationVector.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string EncryptByWhiteBoxRequest::GetKeyId() const
{
    return m_keyId;
}

void EncryptByWhiteBoxRequest::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool EncryptByWhiteBoxRequest::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string EncryptByWhiteBoxRequest::GetPlainText() const
{
    return m_plainText;
}

void EncryptByWhiteBoxRequest::SetPlainText(const string& _plainText)
{
    m_plainText = _plainText;
    m_plainTextHasBeenSet = true;
}

bool EncryptByWhiteBoxRequest::PlainTextHasBeenSet() const
{
    return m_plainTextHasBeenSet;
}

string EncryptByWhiteBoxRequest::GetInitializationVector() const
{
    return m_initializationVector;
}

void EncryptByWhiteBoxRequest::SetInitializationVector(const string& _initializationVector)
{
    m_initializationVector = _initializationVector;
    m_initializationVectorHasBeenSet = true;
}

bool EncryptByWhiteBoxRequest::InitializationVectorHasBeenSet() const
{
    return m_initializationVectorHasBeenSet;
}


