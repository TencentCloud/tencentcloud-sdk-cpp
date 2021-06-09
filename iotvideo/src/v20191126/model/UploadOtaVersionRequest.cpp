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

#include <tencentcloud/iotvideo/v20191126/model/UploadOtaVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

UploadOtaVersionRequest::UploadOtaVersionRequest() :
    m_productIdHasBeenSet(false),
    m_otaVersionHasBeenSet(false),
    m_versionUrlHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_md5HasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_contentsHasBeenSet(false)
{
}

string UploadOtaVersionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_otaVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtaVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_otaVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_versionUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_versionUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fileSize, allocator);
    }

    if (m_md5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Md5";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_md5.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_contentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Contents";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_contents.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UploadOtaVersionRequest::GetProductId() const
{
    return m_productId;
}

void UploadOtaVersionRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool UploadOtaVersionRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string UploadOtaVersionRequest::GetOtaVersion() const
{
    return m_otaVersion;
}

void UploadOtaVersionRequest::SetOtaVersion(const string& _otaVersion)
{
    m_otaVersion = _otaVersion;
    m_otaVersionHasBeenSet = true;
}

bool UploadOtaVersionRequest::OtaVersionHasBeenSet() const
{
    return m_otaVersionHasBeenSet;
}

string UploadOtaVersionRequest::GetVersionUrl() const
{
    return m_versionUrl;
}

void UploadOtaVersionRequest::SetVersionUrl(const string& _versionUrl)
{
    m_versionUrl = _versionUrl;
    m_versionUrlHasBeenSet = true;
}

bool UploadOtaVersionRequest::VersionUrlHasBeenSet() const
{
    return m_versionUrlHasBeenSet;
}

uint64_t UploadOtaVersionRequest::GetFileSize() const
{
    return m_fileSize;
}

void UploadOtaVersionRequest::SetFileSize(const uint64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool UploadOtaVersionRequest::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string UploadOtaVersionRequest::GetMd5() const
{
    return m_md5;
}

void UploadOtaVersionRequest::SetMd5(const string& _md5)
{
    m_md5 = _md5;
    m_md5HasBeenSet = true;
}

bool UploadOtaVersionRequest::Md5HasBeenSet() const
{
    return m_md5HasBeenSet;
}

string UploadOtaVersionRequest::GetOperator() const
{
    return m_operator;
}

void UploadOtaVersionRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool UploadOtaVersionRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string UploadOtaVersionRequest::GetRemark() const
{
    return m_remark;
}

void UploadOtaVersionRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool UploadOtaVersionRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

Contents UploadOtaVersionRequest::GetContents() const
{
    return m_contents;
}

void UploadOtaVersionRequest::SetContents(const Contents& _contents)
{
    m_contents = _contents;
    m_contentsHasBeenSet = true;
}

bool UploadOtaVersionRequest::ContentsHasBeenSet() const
{
    return m_contentsHasBeenSet;
}


