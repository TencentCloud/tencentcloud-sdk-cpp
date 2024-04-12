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

#include <tencentcloud/lke/v20231130/model/UploadAttributeLabelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

UploadAttributeLabelRequest::UploadAttributeLabelRequest() :
    m_botBizIdHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_cosUrlHasBeenSet(false),
    m_cosHashHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_loginUinHasBeenSet(false),
    m_loginSubAccountUinHasBeenSet(false)
{
}

string UploadAttributeLabelRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_botBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotBizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_botBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_cosUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cosUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_cosHashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosHash";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cosHash.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_size.c_str(), allocator).Move(), allocator);
    }

    if (m_loginUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loginUin.c_str(), allocator).Move(), allocator);
    }

    if (m_loginSubAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginSubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loginSubAccountUin.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UploadAttributeLabelRequest::GetBotBizId() const
{
    return m_botBizId;
}

void UploadAttributeLabelRequest::SetBotBizId(const string& _botBizId)
{
    m_botBizId = _botBizId;
    m_botBizIdHasBeenSet = true;
}

bool UploadAttributeLabelRequest::BotBizIdHasBeenSet() const
{
    return m_botBizIdHasBeenSet;
}

string UploadAttributeLabelRequest::GetFileName() const
{
    return m_fileName;
}

void UploadAttributeLabelRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool UploadAttributeLabelRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string UploadAttributeLabelRequest::GetCosUrl() const
{
    return m_cosUrl;
}

void UploadAttributeLabelRequest::SetCosUrl(const string& _cosUrl)
{
    m_cosUrl = _cosUrl;
    m_cosUrlHasBeenSet = true;
}

bool UploadAttributeLabelRequest::CosUrlHasBeenSet() const
{
    return m_cosUrlHasBeenSet;
}

string UploadAttributeLabelRequest::GetCosHash() const
{
    return m_cosHash;
}

void UploadAttributeLabelRequest::SetCosHash(const string& _cosHash)
{
    m_cosHash = _cosHash;
    m_cosHashHasBeenSet = true;
}

bool UploadAttributeLabelRequest::CosHashHasBeenSet() const
{
    return m_cosHashHasBeenSet;
}

string UploadAttributeLabelRequest::GetSize() const
{
    return m_size;
}

void UploadAttributeLabelRequest::SetSize(const string& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool UploadAttributeLabelRequest::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string UploadAttributeLabelRequest::GetLoginUin() const
{
    return m_loginUin;
}

void UploadAttributeLabelRequest::SetLoginUin(const string& _loginUin)
{
    m_loginUin = _loginUin;
    m_loginUinHasBeenSet = true;
}

bool UploadAttributeLabelRequest::LoginUinHasBeenSet() const
{
    return m_loginUinHasBeenSet;
}

string UploadAttributeLabelRequest::GetLoginSubAccountUin() const
{
    return m_loginSubAccountUin;
}

void UploadAttributeLabelRequest::SetLoginSubAccountUin(const string& _loginSubAccountUin)
{
    m_loginSubAccountUin = _loginSubAccountUin;
    m_loginSubAccountUinHasBeenSet = true;
}

bool UploadAttributeLabelRequest::LoginSubAccountUinHasBeenSet() const
{
    return m_loginSubAccountUinHasBeenSet;
}


