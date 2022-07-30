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

#include <tencentcloud/pts/v20210728/model/TestData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

TestData::TestData() :
    m_nameHasBeenSet(false),
    m_splitHasBeenSet(false),
    m_headerInFileHasBeenSet(false),
    m_headerColumnsHasBeenSet(false),
    m_lineCountHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_headLinesHasBeenSet(false),
    m_tailLinesHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_fileIdHasBeenSet(false)
{
}

CoreInternalOutcome TestData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TestData.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Split") && !value["Split"].IsNull())
    {
        if (!value["Split"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TestData.Split` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_split = value["Split"].GetBool();
        m_splitHasBeenSet = true;
    }

    if (value.HasMember("HeaderInFile") && !value["HeaderInFile"].IsNull())
    {
        if (!value["HeaderInFile"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TestData.HeaderInFile` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_headerInFile = value["HeaderInFile"].GetBool();
        m_headerInFileHasBeenSet = true;
    }

    if (value.HasMember("HeaderColumns") && !value["HeaderColumns"].IsNull())
    {
        if (!value["HeaderColumns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TestData.HeaderColumns` is not array type"));

        const rapidjson::Value &tmpValue = value["HeaderColumns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_headerColumns.push_back((*itr).GetString());
        }
        m_headerColumnsHasBeenSet = true;
    }

    if (value.HasMember("LineCount") && !value["LineCount"].IsNull())
    {
        if (!value["LineCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TestData.LineCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lineCount = value["LineCount"].GetInt64();
        m_lineCountHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TestData.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TestData.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("HeadLines") && !value["HeadLines"].IsNull())
    {
        if (!value["HeadLines"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TestData.HeadLines` is not array type"));

        const rapidjson::Value &tmpValue = value["HeadLines"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_headLines.push_back((*itr).GetString());
        }
        m_headLinesHasBeenSet = true;
    }

    if (value.HasMember("TailLines") && !value["TailLines"].IsNull())
    {
        if (!value["TailLines"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TestData.TailLines` is not array type"));

        const rapidjson::Value &tmpValue = value["TailLines"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tailLines.push_back((*itr).GetString());
        }
        m_tailLinesHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TestData.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TestData.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TestData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_splitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Split";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_split, allocator);
    }

    if (m_headerInFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeaderInFile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_headerInFile, allocator);
    }

    if (m_headerColumnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeaderColumns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_headerColumns.begin(); itr != m_headerColumns.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_lineCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lineCount, allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_headLinesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadLines";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_headLines.begin(); itr != m_headLines.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tailLinesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TailLines";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tailLines.begin(); itr != m_tailLines.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

}


string TestData::GetName() const
{
    return m_name;
}

void TestData::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TestData::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

bool TestData::GetSplit() const
{
    return m_split;
}

void TestData::SetSplit(const bool& _split)
{
    m_split = _split;
    m_splitHasBeenSet = true;
}

bool TestData::SplitHasBeenSet() const
{
    return m_splitHasBeenSet;
}

bool TestData::GetHeaderInFile() const
{
    return m_headerInFile;
}

void TestData::SetHeaderInFile(const bool& _headerInFile)
{
    m_headerInFile = _headerInFile;
    m_headerInFileHasBeenSet = true;
}

bool TestData::HeaderInFileHasBeenSet() const
{
    return m_headerInFileHasBeenSet;
}

vector<string> TestData::GetHeaderColumns() const
{
    return m_headerColumns;
}

void TestData::SetHeaderColumns(const vector<string>& _headerColumns)
{
    m_headerColumns = _headerColumns;
    m_headerColumnsHasBeenSet = true;
}

bool TestData::HeaderColumnsHasBeenSet() const
{
    return m_headerColumnsHasBeenSet;
}

int64_t TestData::GetLineCount() const
{
    return m_lineCount;
}

void TestData::SetLineCount(const int64_t& _lineCount)
{
    m_lineCount = _lineCount;
    m_lineCountHasBeenSet = true;
}

bool TestData::LineCountHasBeenSet() const
{
    return m_lineCountHasBeenSet;
}

string TestData::GetUpdatedAt() const
{
    return m_updatedAt;
}

void TestData::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool TestData::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

int64_t TestData::GetSize() const
{
    return m_size;
}

void TestData::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool TestData::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

vector<string> TestData::GetHeadLines() const
{
    return m_headLines;
}

void TestData::SetHeadLines(const vector<string>& _headLines)
{
    m_headLines = _headLines;
    m_headLinesHasBeenSet = true;
}

bool TestData::HeadLinesHasBeenSet() const
{
    return m_headLinesHasBeenSet;
}

vector<string> TestData::GetTailLines() const
{
    return m_tailLines;
}

void TestData::SetTailLines(const vector<string>& _tailLines)
{
    m_tailLines = _tailLines;
    m_tailLinesHasBeenSet = true;
}

bool TestData::TailLinesHasBeenSet() const
{
    return m_tailLinesHasBeenSet;
}

string TestData::GetType() const
{
    return m_type;
}

void TestData::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TestData::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string TestData::GetFileId() const
{
    return m_fileId;
}

void TestData::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool TestData::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

