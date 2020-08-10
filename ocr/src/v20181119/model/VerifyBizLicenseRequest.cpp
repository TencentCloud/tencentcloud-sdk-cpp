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

#include <tencentcloud/ocr/v20181119/model/VerifyBizLicenseRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace rapidjson;
using namespace std;

VerifyBizLicenseRequest::VerifyBizLicenseRequest() :
    m_imageBase64HasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_imageConfigHasBeenSet(false),
    m_regNumHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_addressHasBeenSet(false)
{
}

string VerifyBizLicenseRequest::ToJsonString() const
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


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string VerifyBizLicenseRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void VerifyBizLicenseRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool VerifyBizLicenseRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string VerifyBizLicenseRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void VerifyBizLicenseRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool VerifyBizLicenseRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string VerifyBizLicenseRequest::GetImageConfig() const
{
    return m_imageConfig;
}

void VerifyBizLicenseRequest::SetImageConfig(const string& _imageConfig)
{
    m_imageConfig = _imageConfig;
    m_imageConfigHasBeenSet = true;
}

bool VerifyBizLicenseRequest::ImageConfigHasBeenSet() const
{
    return m_imageConfigHasBeenSet;
}

string VerifyBizLicenseRequest::GetRegNum() const
{
    return m_regNum;
}

void VerifyBizLicenseRequest::SetRegNum(const string& _regNum)
{
    m_regNum = _regNum;
    m_regNumHasBeenSet = true;
}

bool VerifyBizLicenseRequest::RegNumHasBeenSet() const
{
    return m_regNumHasBeenSet;
}

string VerifyBizLicenseRequest::GetName() const
{
    return m_name;
}

void VerifyBizLicenseRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VerifyBizLicenseRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string VerifyBizLicenseRequest::GetAddress() const
{
    return m_address;
}

void VerifyBizLicenseRequest::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool VerifyBizLicenseRequest::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}


