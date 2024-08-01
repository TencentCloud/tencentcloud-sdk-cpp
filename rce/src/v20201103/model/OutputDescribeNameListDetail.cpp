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

#include <tencentcloud/rce/v20201103/model/OutputDescribeNameListDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20201103::Model;
using namespace std;

OutputDescribeNameListDetail::OutputDescribeNameListDetail() :
    m_nameListIdHasBeenSet(false),
    m_listNameHasBeenSet(false),
    m_listTypeHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_sceneCodeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_encryptionTypeHasBeenSet(false)
{
}

CoreInternalOutcome OutputDescribeNameListDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NameListId") && !value["NameListId"].IsNull())
    {
        if (!value["NameListId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeNameListDetail.NameListId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nameListId = value["NameListId"].GetInt64();
        m_nameListIdHasBeenSet = true;
    }

    if (value.HasMember("ListName") && !value["ListName"].IsNull())
    {
        if (!value["ListName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeNameListDetail.ListName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listName = string(value["ListName"].GetString());
        m_listNameHasBeenSet = true;
    }

    if (value.HasMember("ListType") && !value["ListType"].IsNull())
    {
        if (!value["ListType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeNameListDetail.ListType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_listType = value["ListType"].GetInt64();
        m_listTypeHasBeenSet = true;
    }

    if (value.HasMember("DataType") && !value["DataType"].IsNull())
    {
        if (!value["DataType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeNameListDetail.DataType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataType = value["DataType"].GetInt64();
        m_dataTypeHasBeenSet = true;
    }

    if (value.HasMember("SceneCode") && !value["SceneCode"].IsNull())
    {
        if (!value["SceneCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeNameListDetail.SceneCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sceneCode = string(value["SceneCode"].GetString());
        m_sceneCodeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeNameListDetail.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeNameListDetail.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeNameListDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeNameListDetail.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("EncryptionType") && !value["EncryptionType"].IsNull())
    {
        if (!value["EncryptionType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeNameListDetail.EncryptionType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_encryptionType = value["EncryptionType"].GetInt64();
        m_encryptionTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutputDescribeNameListDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameListIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameListId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nameListId, allocator);
    }

    if (m_listNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listName.c_str(), allocator).Move(), allocator);
    }

    if (m_listTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_listType, allocator);
    }

    if (m_dataTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataType, allocator);
    }

    if (m_sceneCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sceneCode.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encryptionType, allocator);
    }

}


int64_t OutputDescribeNameListDetail::GetNameListId() const
{
    return m_nameListId;
}

void OutputDescribeNameListDetail::SetNameListId(const int64_t& _nameListId)
{
    m_nameListId = _nameListId;
    m_nameListIdHasBeenSet = true;
}

bool OutputDescribeNameListDetail::NameListIdHasBeenSet() const
{
    return m_nameListIdHasBeenSet;
}

string OutputDescribeNameListDetail::GetListName() const
{
    return m_listName;
}

void OutputDescribeNameListDetail::SetListName(const string& _listName)
{
    m_listName = _listName;
    m_listNameHasBeenSet = true;
}

bool OutputDescribeNameListDetail::ListNameHasBeenSet() const
{
    return m_listNameHasBeenSet;
}

int64_t OutputDescribeNameListDetail::GetListType() const
{
    return m_listType;
}

void OutputDescribeNameListDetail::SetListType(const int64_t& _listType)
{
    m_listType = _listType;
    m_listTypeHasBeenSet = true;
}

bool OutputDescribeNameListDetail::ListTypeHasBeenSet() const
{
    return m_listTypeHasBeenSet;
}

int64_t OutputDescribeNameListDetail::GetDataType() const
{
    return m_dataType;
}

void OutputDescribeNameListDetail::SetDataType(const int64_t& _dataType)
{
    m_dataType = _dataType;
    m_dataTypeHasBeenSet = true;
}

bool OutputDescribeNameListDetail::DataTypeHasBeenSet() const
{
    return m_dataTypeHasBeenSet;
}

string OutputDescribeNameListDetail::GetSceneCode() const
{
    return m_sceneCode;
}

void OutputDescribeNameListDetail::SetSceneCode(const string& _sceneCode)
{
    m_sceneCode = _sceneCode;
    m_sceneCodeHasBeenSet = true;
}

bool OutputDescribeNameListDetail::SceneCodeHasBeenSet() const
{
    return m_sceneCodeHasBeenSet;
}

int64_t OutputDescribeNameListDetail::GetStatus() const
{
    return m_status;
}

void OutputDescribeNameListDetail::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool OutputDescribeNameListDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string OutputDescribeNameListDetail::GetRemark() const
{
    return m_remark;
}

void OutputDescribeNameListDetail::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool OutputDescribeNameListDetail::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string OutputDescribeNameListDetail::GetCreateTime() const
{
    return m_createTime;
}

void OutputDescribeNameListDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool OutputDescribeNameListDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string OutputDescribeNameListDetail::GetUpdateTime() const
{
    return m_updateTime;
}

void OutputDescribeNameListDetail::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool OutputDescribeNameListDetail::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t OutputDescribeNameListDetail::GetEncryptionType() const
{
    return m_encryptionType;
}

void OutputDescribeNameListDetail::SetEncryptionType(const int64_t& _encryptionType)
{
    m_encryptionType = _encryptionType;
    m_encryptionTypeHasBeenSet = true;
}

bool OutputDescribeNameListDetail::EncryptionTypeHasBeenSet() const
{
    return m_encryptionTypeHasBeenSet;
}

