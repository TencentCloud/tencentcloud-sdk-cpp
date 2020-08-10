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

#include <tencentcloud/ocr/v20181119/model/VerifyBasicBizLicenseRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace rapidjson;
using namespace std;

VerifyBasicBizLicenseRequest::VerifyBasicBizLicenseRequest() :
    m_imageBase64HasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_imageConfigHasBeenSet(false),
    m_regNumHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_regCapitalHasBeenSet(false)
{
}

string VerifyBasicBizLicenseRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_imageBase64HasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_imageBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_imageConfigHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_imageConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_regNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_regNum.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_regCapitalHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegCapital";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_regCapital, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string VerifyBasicBizLicenseRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void VerifyBasicBizLicenseRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool VerifyBasicBizLicenseRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string VerifyBasicBizLicenseRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void VerifyBasicBizLicenseRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool VerifyBasicBizLicenseRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string VerifyBasicBizLicenseRequest::GetImageConfig() const
{
    return m_imageConfig;
}

void VerifyBasicBizLicenseRequest::SetImageConfig(const string& _imageConfig)
{
    m_imageConfig = _imageConfig;
    m_imageConfigHasBeenSet = true;
}

bool VerifyBasicBizLicenseRequest::ImageConfigHasBeenSet() const
{
    return m_imageConfigHasBeenSet;
}

string VerifyBasicBizLicenseRequest::GetRegNum() const
{
    return m_regNum;
}

void VerifyBasicBizLicenseRequest::SetRegNum(const string& _regNum)
{
    m_regNum = _regNum;
    m_regNumHasBeenSet = true;
}

bool VerifyBasicBizLicenseRequest::RegNumHasBeenSet() const
{
    return m_regNumHasBeenSet;
}

string VerifyBasicBizLicenseRequest::GetName() const
{
    return m_name;
}

void VerifyBasicBizLicenseRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VerifyBasicBizLicenseRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string VerifyBasicBizLicenseRequest::GetAddress() const
{
    return m_address;
}

void VerifyBasicBizLicenseRequest::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool VerifyBasicBizLicenseRequest::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

int64_t VerifyBasicBizLicenseRequest::GetRegCapital() const
{
    return m_regCapital;
}

void VerifyBasicBizLicenseRequest::SetRegCapital(const int64_t& _regCapital)
{
    m_regCapital = _regCapital;
    m_regCapitalHasBeenSet = true;
}

bool VerifyBasicBizLicenseRequest::RegCapitalHasBeenSet() const
{
    return m_regCapitalHasBeenSet;
}


