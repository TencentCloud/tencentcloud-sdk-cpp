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

#include <tencentcloud/iotcloud/v20210408/model/UpdatePrivateCARequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotcloud::V20210408::Model;
using namespace std;

UpdatePrivateCARequest::UpdatePrivateCARequest() :
    m_certNameHasBeenSet(false),
    m_certTextHasBeenSet(false),
    m_verifyCertTextHasBeenSet(false)
{
}

string UpdatePrivateCARequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_certNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certName.c_str(), allocator).Move(), allocator);
    }

    if (m_certTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertText";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certText.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyCertTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyCertText";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_verifyCertText.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdatePrivateCARequest::GetCertName() const
{
    return m_certName;
}

void UpdatePrivateCARequest::SetCertName(const string& _certName)
{
    m_certName = _certName;
    m_certNameHasBeenSet = true;
}

bool UpdatePrivateCARequest::CertNameHasBeenSet() const
{
    return m_certNameHasBeenSet;
}

string UpdatePrivateCARequest::GetCertText() const
{
    return m_certText;
}

void UpdatePrivateCARequest::SetCertText(const string& _certText)
{
    m_certText = _certText;
    m_certTextHasBeenSet = true;
}

bool UpdatePrivateCARequest::CertTextHasBeenSet() const
{
    return m_certTextHasBeenSet;
}

string UpdatePrivateCARequest::GetVerifyCertText() const
{
    return m_verifyCertText;
}

void UpdatePrivateCARequest::SetVerifyCertText(const string& _verifyCertText)
{
    m_verifyCertText = _verifyCertText;
    m_verifyCertTextHasBeenSet = true;
}

bool UpdatePrivateCARequest::VerifyCertTextHasBeenSet() const
{
    return m_verifyCertTextHasBeenSet;
}


