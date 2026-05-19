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

#include <tencentcloud/waf/v20180125/model/UploadSkillSecScanRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

UploadSkillSecScanRequest::UploadSkillSecScanRequest() :
    m_serviceIdHasBeenSet(false),
    m_fileDataHasBeenSet(false),
    m_fileNameHasBeenSet(false)
{
}

string UploadSkillSecScanRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileData.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UploadSkillSecScanRequest::GetServiceId() const
{
    return m_serviceId;
}

void UploadSkillSecScanRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool UploadSkillSecScanRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string UploadSkillSecScanRequest::GetFileData() const
{
    return m_fileData;
}

void UploadSkillSecScanRequest::SetFileData(const string& _fileData)
{
    m_fileData = _fileData;
    m_fileDataHasBeenSet = true;
}

bool UploadSkillSecScanRequest::FileDataHasBeenSet() const
{
    return m_fileDataHasBeenSet;
}

string UploadSkillSecScanRequest::GetFileName() const
{
    return m_fileName;
}

void UploadSkillSecScanRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool UploadSkillSecScanRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}


