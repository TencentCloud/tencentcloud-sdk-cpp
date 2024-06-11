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

#include <tencentcloud/cls/v20201016/model/ExportInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ExportInfo::ExportInfo() :
    m_topicIdHasBeenSet(false),
    m_exportIdHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_countHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_toHasBeenSet(false),
    m_cosPathHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_syntaxRuleHasBeenSet(false),
    m_derivedFieldsHasBeenSet(false)
{
}

CoreInternalOutcome ExportInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportInfo.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("ExportId") && !value["ExportId"].IsNull())
    {
        if (!value["ExportId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportInfo.ExportId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exportId = string(value["ExportId"].GetString());
        m_exportIdHasBeenSet = true;
    }

    if (value.HasMember("Query") && !value["Query"].IsNull())
    {
        if (!value["Query"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportInfo.Query` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_query = string(value["Query"].GetString());
        m_queryHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportInfo.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExportInfo.FileSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetUint64();
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("Order") && !value["Order"].IsNull())
    {
        if (!value["Order"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportInfo.Order` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_order = string(value["Order"].GetString());
        m_orderHasBeenSet = true;
    }

    if (value.HasMember("Format") && !value["Format"].IsNull())
    {
        if (!value["Format"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportInfo.Format` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_format = string(value["Format"].GetString());
        m_formatHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExportInfo.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("From") && !value["From"].IsNull())
    {
        if (!value["From"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExportInfo.From` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_from = value["From"].GetInt64();
        m_fromHasBeenSet = true;
    }

    if (value.HasMember("To") && !value["To"].IsNull())
    {
        if (!value["To"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExportInfo.To` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_to = value["To"].GetInt64();
        m_toHasBeenSet = true;
    }

    if (value.HasMember("CosPath") && !value["CosPath"].IsNull())
    {
        if (!value["CosPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportInfo.CosPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosPath = string(value["CosPath"].GetString());
        m_cosPathHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("SyntaxRule") && !value["SyntaxRule"].IsNull())
    {
        if (!value["SyntaxRule"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExportInfo.SyntaxRule` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_syntaxRule = value["SyntaxRule"].GetUint64();
        m_syntaxRuleHasBeenSet = true;
    }

    if (value.HasMember("DerivedFields") && !value["DerivedFields"].IsNull())
    {
        if (!value["DerivedFields"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExportInfo.DerivedFields` is not array type"));

        const rapidjson::Value &tmpValue = value["DerivedFields"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_derivedFields.push_back((*itr).GetString());
        }
        m_derivedFieldsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExportInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_exportIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExportId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exportId.c_str(), allocator).Move(), allocator);
    }

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileSize, allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_fromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "From";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_from, allocator);
    }

    if (m_toHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "To";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_to, allocator);
    }

    if (m_cosPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosPath.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_syntaxRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyntaxRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_syntaxRule, allocator);
    }

    if (m_derivedFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DerivedFields";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_derivedFields.begin(); itr != m_derivedFields.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ExportInfo::GetTopicId() const
{
    return m_topicId;
}

void ExportInfo::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool ExportInfo::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string ExportInfo::GetExportId() const
{
    return m_exportId;
}

void ExportInfo::SetExportId(const string& _exportId)
{
    m_exportId = _exportId;
    m_exportIdHasBeenSet = true;
}

bool ExportInfo::ExportIdHasBeenSet() const
{
    return m_exportIdHasBeenSet;
}

string ExportInfo::GetQuery() const
{
    return m_query;
}

void ExportInfo::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool ExportInfo::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

string ExportInfo::GetFileName() const
{
    return m_fileName;
}

void ExportInfo::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool ExportInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

uint64_t ExportInfo::GetFileSize() const
{
    return m_fileSize;
}

void ExportInfo::SetFileSize(const uint64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool ExportInfo::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string ExportInfo::GetOrder() const
{
    return m_order;
}

void ExportInfo::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool ExportInfo::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string ExportInfo::GetFormat() const
{
    return m_format;
}

void ExportInfo::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool ExportInfo::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

uint64_t ExportInfo::GetCount() const
{
    return m_count;
}

void ExportInfo::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool ExportInfo::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string ExportInfo::GetStatus() const
{
    return m_status;
}

void ExportInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ExportInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t ExportInfo::GetFrom() const
{
    return m_from;
}

void ExportInfo::SetFrom(const int64_t& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool ExportInfo::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

int64_t ExportInfo::GetTo() const
{
    return m_to;
}

void ExportInfo::SetTo(const int64_t& _to)
{
    m_to = _to;
    m_toHasBeenSet = true;
}

bool ExportInfo::ToHasBeenSet() const
{
    return m_toHasBeenSet;
}

string ExportInfo::GetCosPath() const
{
    return m_cosPath;
}

void ExportInfo::SetCosPath(const string& _cosPath)
{
    m_cosPath = _cosPath;
    m_cosPathHasBeenSet = true;
}

bool ExportInfo::CosPathHasBeenSet() const
{
    return m_cosPathHasBeenSet;
}

string ExportInfo::GetCreateTime() const
{
    return m_createTime;
}

void ExportInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ExportInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t ExportInfo::GetSyntaxRule() const
{
    return m_syntaxRule;
}

void ExportInfo::SetSyntaxRule(const uint64_t& _syntaxRule)
{
    m_syntaxRule = _syntaxRule;
    m_syntaxRuleHasBeenSet = true;
}

bool ExportInfo::SyntaxRuleHasBeenSet() const
{
    return m_syntaxRuleHasBeenSet;
}

vector<string> ExportInfo::GetDerivedFields() const
{
    return m_derivedFields;
}

void ExportInfo::SetDerivedFields(const vector<string>& _derivedFields)
{
    m_derivedFields = _derivedFields;
    m_derivedFieldsHasBeenSet = true;
}

bool ExportInfo::DerivedFieldsHasBeenSet() const
{
    return m_derivedFieldsHasBeenSet;
}

