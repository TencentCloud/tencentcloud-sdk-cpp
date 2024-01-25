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

#include <tencentcloud/wedata/v20210820/model/ImportTableDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ImportTableDataRequest::ImportTableDataRequest() :
    m_projectIdHasBeenSet(false),
    m_datasourceIdHasBeenSet(false),
    m_tableRequestHasBeenSet(false),
    m_columnDelimiterHasBeenSet(false),
    m_headerLineHasBeenSet(false),
    m_quoteHasBeenSet(false),
    m_datasourcePathHasBeenSet(false),
    m_storageDataSourceTypeHasBeenSet(false),
    m_fileFormatHasBeenSet(false),
    m_importTableTypeHasBeenSet(false),
    m_msTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameCnHasBeenSet(false),
    m_privilegeHasBeenSet(false),
    m_escapeHasBeenSet(false),
    m_nullFormatHasBeenSet(false),
    m_fileEncodeHasBeenSet(false),
    m_bucketNameHasBeenSet(false)
{
}

string ImportTableDataRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_datasourceId, allocator);
    }

    if (m_tableRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableRequest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tableRequest.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_columnDelimiterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnDelimiter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_columnDelimiter.c_str(), allocator).Move(), allocator);
    }

    if (m_headerLineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeaderLine";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_headerLine, allocator);
    }

    if (m_quoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quote";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_quote.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourcePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourcePath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_datasourcePath.c_str(), allocator).Move(), allocator);
    }

    if (m_storageDataSourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageDataSourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_storageDataSourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_importTableTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImportTableType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_importTableType.c_str(), allocator).Move(), allocator);
    }

    if (m_msTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_msType.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_nameCnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameCn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nameCn.c_str(), allocator).Move(), allocator);
    }

    if (m_privilegeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Privilege";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_privilege, allocator);
    }

    if (m_escapeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Escape";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_escape.c_str(), allocator).Move(), allocator);
    }

    if (m_nullFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NullFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nullFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_fileEncodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileEncode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileEncode.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bucketName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ImportTableDataRequest::GetProjectId() const
{
    return m_projectId;
}

void ImportTableDataRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ImportTableDataRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t ImportTableDataRequest::GetDatasourceId() const
{
    return m_datasourceId;
}

void ImportTableDataRequest::SetDatasourceId(const int64_t& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool ImportTableDataRequest::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

TableHybrisReq ImportTableDataRequest::GetTableRequest() const
{
    return m_tableRequest;
}

void ImportTableDataRequest::SetTableRequest(const TableHybrisReq& _tableRequest)
{
    m_tableRequest = _tableRequest;
    m_tableRequestHasBeenSet = true;
}

bool ImportTableDataRequest::TableRequestHasBeenSet() const
{
    return m_tableRequestHasBeenSet;
}

string ImportTableDataRequest::GetColumnDelimiter() const
{
    return m_columnDelimiter;
}

void ImportTableDataRequest::SetColumnDelimiter(const string& _columnDelimiter)
{
    m_columnDelimiter = _columnDelimiter;
    m_columnDelimiterHasBeenSet = true;
}

bool ImportTableDataRequest::ColumnDelimiterHasBeenSet() const
{
    return m_columnDelimiterHasBeenSet;
}

int64_t ImportTableDataRequest::GetHeaderLine() const
{
    return m_headerLine;
}

void ImportTableDataRequest::SetHeaderLine(const int64_t& _headerLine)
{
    m_headerLine = _headerLine;
    m_headerLineHasBeenSet = true;
}

bool ImportTableDataRequest::HeaderLineHasBeenSet() const
{
    return m_headerLineHasBeenSet;
}

string ImportTableDataRequest::GetQuote() const
{
    return m_quote;
}

void ImportTableDataRequest::SetQuote(const string& _quote)
{
    m_quote = _quote;
    m_quoteHasBeenSet = true;
}

bool ImportTableDataRequest::QuoteHasBeenSet() const
{
    return m_quoteHasBeenSet;
}

string ImportTableDataRequest::GetDatasourcePath() const
{
    return m_datasourcePath;
}

void ImportTableDataRequest::SetDatasourcePath(const string& _datasourcePath)
{
    m_datasourcePath = _datasourcePath;
    m_datasourcePathHasBeenSet = true;
}

bool ImportTableDataRequest::DatasourcePathHasBeenSet() const
{
    return m_datasourcePathHasBeenSet;
}

string ImportTableDataRequest::GetStorageDataSourceType() const
{
    return m_storageDataSourceType;
}

void ImportTableDataRequest::SetStorageDataSourceType(const string& _storageDataSourceType)
{
    m_storageDataSourceType = _storageDataSourceType;
    m_storageDataSourceTypeHasBeenSet = true;
}

bool ImportTableDataRequest::StorageDataSourceTypeHasBeenSet() const
{
    return m_storageDataSourceTypeHasBeenSet;
}

string ImportTableDataRequest::GetFileFormat() const
{
    return m_fileFormat;
}

void ImportTableDataRequest::SetFileFormat(const string& _fileFormat)
{
    m_fileFormat = _fileFormat;
    m_fileFormatHasBeenSet = true;
}

bool ImportTableDataRequest::FileFormatHasBeenSet() const
{
    return m_fileFormatHasBeenSet;
}

string ImportTableDataRequest::GetImportTableType() const
{
    return m_importTableType;
}

void ImportTableDataRequest::SetImportTableType(const string& _importTableType)
{
    m_importTableType = _importTableType;
    m_importTableTypeHasBeenSet = true;
}

bool ImportTableDataRequest::ImportTableTypeHasBeenSet() const
{
    return m_importTableTypeHasBeenSet;
}

string ImportTableDataRequest::GetMsType() const
{
    return m_msType;
}

void ImportTableDataRequest::SetMsType(const string& _msType)
{
    m_msType = _msType;
    m_msTypeHasBeenSet = true;
}

bool ImportTableDataRequest::MsTypeHasBeenSet() const
{
    return m_msTypeHasBeenSet;
}

string ImportTableDataRequest::GetDescription() const
{
    return m_description;
}

void ImportTableDataRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ImportTableDataRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ImportTableDataRequest::GetNameCn() const
{
    return m_nameCn;
}

void ImportTableDataRequest::SetNameCn(const string& _nameCn)
{
    m_nameCn = _nameCn;
    m_nameCnHasBeenSet = true;
}

bool ImportTableDataRequest::NameCnHasBeenSet() const
{
    return m_nameCnHasBeenSet;
}

int64_t ImportTableDataRequest::GetPrivilege() const
{
    return m_privilege;
}

void ImportTableDataRequest::SetPrivilege(const int64_t& _privilege)
{
    m_privilege = _privilege;
    m_privilegeHasBeenSet = true;
}

bool ImportTableDataRequest::PrivilegeHasBeenSet() const
{
    return m_privilegeHasBeenSet;
}

string ImportTableDataRequest::GetEscape() const
{
    return m_escape;
}

void ImportTableDataRequest::SetEscape(const string& _escape)
{
    m_escape = _escape;
    m_escapeHasBeenSet = true;
}

bool ImportTableDataRequest::EscapeHasBeenSet() const
{
    return m_escapeHasBeenSet;
}

string ImportTableDataRequest::GetNullFormat() const
{
    return m_nullFormat;
}

void ImportTableDataRequest::SetNullFormat(const string& _nullFormat)
{
    m_nullFormat = _nullFormat;
    m_nullFormatHasBeenSet = true;
}

bool ImportTableDataRequest::NullFormatHasBeenSet() const
{
    return m_nullFormatHasBeenSet;
}

string ImportTableDataRequest::GetFileEncode() const
{
    return m_fileEncode;
}

void ImportTableDataRequest::SetFileEncode(const string& _fileEncode)
{
    m_fileEncode = _fileEncode;
    m_fileEncodeHasBeenSet = true;
}

bool ImportTableDataRequest::FileEncodeHasBeenSet() const
{
    return m_fileEncodeHasBeenSet;
}

string ImportTableDataRequest::GetBucketName() const
{
    return m_bucketName;
}

void ImportTableDataRequest::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool ImportTableDataRequest::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}


