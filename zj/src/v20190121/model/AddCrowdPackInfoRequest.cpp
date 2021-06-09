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

#include <tencentcloud/zj/v20190121/model/AddCrowdPackInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Zj::V20190121::Model;
using namespace std;

AddCrowdPackInfoRequest::AddCrowdPackInfoRequest() :
    m_licenseHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_descHasBeenSet(false),
    m_cosUrlHasBeenSet(false),
    m_phoneNumHasBeenSet(false)
{
}

string AddCrowdPackInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_licenseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "License";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_license.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_cosUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cosUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_phoneNum, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddCrowdPackInfoRequest::GetLicense() const
{
    return m_license;
}

void AddCrowdPackInfoRequest::SetLicense(const string& _license)
{
    m_license = _license;
    m_licenseHasBeenSet = true;
}

bool AddCrowdPackInfoRequest::LicenseHasBeenSet() const
{
    return m_licenseHasBeenSet;
}

string AddCrowdPackInfoRequest::GetName() const
{
    return m_name;
}

void AddCrowdPackInfoRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AddCrowdPackInfoRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AddCrowdPackInfoRequest::GetFileName() const
{
    return m_fileName;
}

void AddCrowdPackInfoRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool AddCrowdPackInfoRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string AddCrowdPackInfoRequest::GetDesc() const
{
    return m_desc;
}

void AddCrowdPackInfoRequest::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool AddCrowdPackInfoRequest::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string AddCrowdPackInfoRequest::GetCosUrl() const
{
    return m_cosUrl;
}

void AddCrowdPackInfoRequest::SetCosUrl(const string& _cosUrl)
{
    m_cosUrl = _cosUrl;
    m_cosUrlHasBeenSet = true;
}

bool AddCrowdPackInfoRequest::CosUrlHasBeenSet() const
{
    return m_cosUrlHasBeenSet;
}

int64_t AddCrowdPackInfoRequest::GetPhoneNum() const
{
    return m_phoneNum;
}

void AddCrowdPackInfoRequest::SetPhoneNum(const int64_t& _phoneNum)
{
    m_phoneNum = _phoneNum;
    m_phoneNumHasBeenSet = true;
}

bool AddCrowdPackInfoRequest::PhoneNumHasBeenSet() const
{
    return m_phoneNumHasBeenSet;
}


