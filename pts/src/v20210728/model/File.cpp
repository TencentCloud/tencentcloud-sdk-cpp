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

#include <tencentcloud/pts/v20210728/model/File.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

File::File() :
    m_fileIdHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_lineCountHasBeenSet(false),
    m_headLinesHasBeenSet(false),
    m_tailLinesHasBeenSet(false),
    m_headerInFileHasBeenSet(false),
    m_headerColumnsHasBeenSet(false),
    m_fileInfosHasBeenSet(false),
    m_scenarioSetHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_appIDHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_subAccountUinHasBeenSet(false),
    m_appIdHasBeenSet(false)
{
}

CoreInternalOutcome File::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `File.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("Kind") && !value["Kind"].IsNull())
    {
        if (!value["Kind"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `File.Kind` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_kind = value["Kind"].GetInt64();
        m_kindHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `File.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `File.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `File.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `File.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("LineCount") && !value["LineCount"].IsNull())
    {
        if (!value["LineCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `File.LineCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lineCount = value["LineCount"].GetInt64();
        m_lineCountHasBeenSet = true;
    }

    if (value.HasMember("HeadLines") && !value["HeadLines"].IsNull())
    {
        if (!value["HeadLines"].IsArray())
            return CoreInternalOutcome(Core::Error("response `File.HeadLines` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `File.TailLines` is not array type"));

        const rapidjson::Value &tmpValue = value["TailLines"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tailLines.push_back((*itr).GetString());
        }
        m_tailLinesHasBeenSet = true;
    }

    if (value.HasMember("HeaderInFile") && !value["HeaderInFile"].IsNull())
    {
        if (!value["HeaderInFile"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `File.HeaderInFile` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_headerInFile = value["HeaderInFile"].GetBool();
        m_headerInFileHasBeenSet = true;
    }

    if (value.HasMember("HeaderColumns") && !value["HeaderColumns"].IsNull())
    {
        if (!value["HeaderColumns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `File.HeaderColumns` is not array type"));

        const rapidjson::Value &tmpValue = value["HeaderColumns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_headerColumns.push_back((*itr).GetString());
        }
        m_headerColumnsHasBeenSet = true;
    }

    if (value.HasMember("FileInfos") && !value["FileInfos"].IsNull())
    {
        if (!value["FileInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `File.FileInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["FileInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FileInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fileInfos.push_back(item);
        }
        m_fileInfosHasBeenSet = true;
    }

    if (value.HasMember("ScenarioSet") && !value["ScenarioSet"].IsNull())
    {
        if (!value["ScenarioSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `File.ScenarioSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ScenarioSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Scenario item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_scenarioSet.push_back(item);
        }
        m_scenarioSetHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `File.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `File.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `File.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `File.AppID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetInt64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `File.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("SubAccountUin") && !value["SubAccountUin"].IsNull())
    {
        if (!value["SubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `File.SubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountUin = string(value["SubAccountUin"].GetString());
        m_subAccountUinHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `File.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void File::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kind, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_lineCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lineCount, allocator);
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

    if (m_fileInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fileInfos.begin(); itr != m_fileInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_scenarioSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScenarioSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_scenarioSet.begin(); itr != m_scenarioSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_subAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAccountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

}


string File::GetFileId() const
{
    return m_fileId;
}

void File::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool File::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

int64_t File::GetKind() const
{
    return m_kind;
}

void File::SetKind(const int64_t& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool File::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string File::GetName() const
{
    return m_name;
}

void File::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool File::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t File::GetSize() const
{
    return m_size;
}

void File::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool File::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string File::GetType() const
{
    return m_type;
}

void File::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool File::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string File::GetUpdatedAt() const
{
    return m_updatedAt;
}

void File::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool File::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

int64_t File::GetLineCount() const
{
    return m_lineCount;
}

void File::SetLineCount(const int64_t& _lineCount)
{
    m_lineCount = _lineCount;
    m_lineCountHasBeenSet = true;
}

bool File::LineCountHasBeenSet() const
{
    return m_lineCountHasBeenSet;
}

vector<string> File::GetHeadLines() const
{
    return m_headLines;
}

void File::SetHeadLines(const vector<string>& _headLines)
{
    m_headLines = _headLines;
    m_headLinesHasBeenSet = true;
}

bool File::HeadLinesHasBeenSet() const
{
    return m_headLinesHasBeenSet;
}

vector<string> File::GetTailLines() const
{
    return m_tailLines;
}

void File::SetTailLines(const vector<string>& _tailLines)
{
    m_tailLines = _tailLines;
    m_tailLinesHasBeenSet = true;
}

bool File::TailLinesHasBeenSet() const
{
    return m_tailLinesHasBeenSet;
}

bool File::GetHeaderInFile() const
{
    return m_headerInFile;
}

void File::SetHeaderInFile(const bool& _headerInFile)
{
    m_headerInFile = _headerInFile;
    m_headerInFileHasBeenSet = true;
}

bool File::HeaderInFileHasBeenSet() const
{
    return m_headerInFileHasBeenSet;
}

vector<string> File::GetHeaderColumns() const
{
    return m_headerColumns;
}

void File::SetHeaderColumns(const vector<string>& _headerColumns)
{
    m_headerColumns = _headerColumns;
    m_headerColumnsHasBeenSet = true;
}

bool File::HeaderColumnsHasBeenSet() const
{
    return m_headerColumnsHasBeenSet;
}

vector<FileInfo> File::GetFileInfos() const
{
    return m_fileInfos;
}

void File::SetFileInfos(const vector<FileInfo>& _fileInfos)
{
    m_fileInfos = _fileInfos;
    m_fileInfosHasBeenSet = true;
}

bool File::FileInfosHasBeenSet() const
{
    return m_fileInfosHasBeenSet;
}

vector<Scenario> File::GetScenarioSet() const
{
    return m_scenarioSet;
}

void File::SetScenarioSet(const vector<Scenario>& _scenarioSet)
{
    m_scenarioSet = _scenarioSet;
    m_scenarioSetHasBeenSet = true;
}

bool File::ScenarioSetHasBeenSet() const
{
    return m_scenarioSetHasBeenSet;
}

int64_t File::GetStatus() const
{
    return m_status;
}

void File::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool File::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string File::GetCreatedAt() const
{
    return m_createdAt;
}

void File::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool File::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string File::GetProjectId() const
{
    return m_projectId;
}

void File::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool File::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t File::GetAppID() const
{
    return m_appID;
}

void File::SetAppID(const int64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool File::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string File::GetUin() const
{
    return m_uin;
}

void File::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool File::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string File::GetSubAccountUin() const
{
    return m_subAccountUin;
}

void File::SetSubAccountUin(const string& _subAccountUin)
{
    m_subAccountUin = _subAccountUin;
    m_subAccountUinHasBeenSet = true;
}

bool File::SubAccountUinHasBeenSet() const
{
    return m_subAccountUinHasBeenSet;
}

int64_t File::GetAppId() const
{
    return m_appId;
}

void File::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool File::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

