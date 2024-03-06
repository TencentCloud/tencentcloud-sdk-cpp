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

#include <tencentcloud/dsgc/v20190723/model/ModifyDSPACOSTaskResultRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

ModifyDSPACOSTaskResultRequest::ModifyDSPACOSTaskResultRequest() :
    m_dspaIdHasBeenSet(false),
    m_complianceIdHasBeenSet(false),
    m_fileResultIdHasBeenSet(false),
    m_isSetNonSensitiveFileHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_dataSourceIdHasBeenSet(false)
{
}

string ModifyDSPACOSTaskResultRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dspaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DspaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dspaId.c_str(), allocator).Move(), allocator);
    }

    if (m_complianceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_complianceId, allocator);
    }

    if (m_fileResultIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileResultId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fileResultId, allocator);
    }

    if (m_isSetNonSensitiveFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSetNonSensitiveFile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isSetNonSensitiveFile, allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataSourceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDSPACOSTaskResultRequest::GetDspaId() const
{
    return m_dspaId;
}

void ModifyDSPACOSTaskResultRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool ModifyDSPACOSTaskResultRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

int64_t ModifyDSPACOSTaskResultRequest::GetComplianceId() const
{
    return m_complianceId;
}

void ModifyDSPACOSTaskResultRequest::SetComplianceId(const int64_t& _complianceId)
{
    m_complianceId = _complianceId;
    m_complianceIdHasBeenSet = true;
}

bool ModifyDSPACOSTaskResultRequest::ComplianceIdHasBeenSet() const
{
    return m_complianceIdHasBeenSet;
}

int64_t ModifyDSPACOSTaskResultRequest::GetFileResultId() const
{
    return m_fileResultId;
}

void ModifyDSPACOSTaskResultRequest::SetFileResultId(const int64_t& _fileResultId)
{
    m_fileResultId = _fileResultId;
    m_fileResultIdHasBeenSet = true;
}

bool ModifyDSPACOSTaskResultRequest::FileResultIdHasBeenSet() const
{
    return m_fileResultIdHasBeenSet;
}

bool ModifyDSPACOSTaskResultRequest::GetIsSetNonSensitiveFile() const
{
    return m_isSetNonSensitiveFile;
}

void ModifyDSPACOSTaskResultRequest::SetIsSetNonSensitiveFile(const bool& _isSetNonSensitiveFile)
{
    m_isSetNonSensitiveFile = _isSetNonSensitiveFile;
    m_isSetNonSensitiveFileHasBeenSet = true;
}

bool ModifyDSPACOSTaskResultRequest::IsSetNonSensitiveFileHasBeenSet() const
{
    return m_isSetNonSensitiveFileHasBeenSet;
}

string ModifyDSPACOSTaskResultRequest::GetFileName() const
{
    return m_fileName;
}

void ModifyDSPACOSTaskResultRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool ModifyDSPACOSTaskResultRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string ModifyDSPACOSTaskResultRequest::GetBucketName() const
{
    return m_bucketName;
}

void ModifyDSPACOSTaskResultRequest::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool ModifyDSPACOSTaskResultRequest::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

string ModifyDSPACOSTaskResultRequest::GetDataSourceId() const
{
    return m_dataSourceId;
}

void ModifyDSPACOSTaskResultRequest::SetDataSourceId(const string& _dataSourceId)
{
    m_dataSourceId = _dataSourceId;
    m_dataSourceIdHasBeenSet = true;
}

bool ModifyDSPACOSTaskResultRequest::DataSourceIdHasBeenSet() const
{
    return m_dataSourceIdHasBeenSet;
}


