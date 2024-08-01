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

#include <tencentcloud/rce/v20201103/model/OutputDescribeNameListFrontFix.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20201103::Model;
using namespace std;

OutputDescribeNameListFrontFix::OutputDescribeNameListFrontFix() :
    m_nameListIdHasBeenSet(false),
    m_listNameHasBeenSet(false),
    m_listTypeHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_effectCountHasBeenSet(false),
    m_encryptionTypeHasBeenSet(false),
    m_sceneCodeHasBeenSet(false)
{
}

CoreInternalOutcome OutputDescribeNameListFrontFix::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NameListId") && !value["NameListId"].IsNull())
    {
        if (!value["NameListId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeNameListFrontFix.NameListId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nameListId = value["NameListId"].GetInt64();
        m_nameListIdHasBeenSet = true;
    }

    if (value.HasMember("ListName") && !value["ListName"].IsNull())
    {
        if (!value["ListName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeNameListFrontFix.ListName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listName = string(value["ListName"].GetString());
        m_listNameHasBeenSet = true;
    }

    if (value.HasMember("ListType") && !value["ListType"].IsNull())
    {
        if (!value["ListType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeNameListFrontFix.ListType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_listType = value["ListType"].GetInt64();
        m_listTypeHasBeenSet = true;
    }

    if (value.HasMember("DataType") && !value["DataType"].IsNull())
    {
        if (!value["DataType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeNameListFrontFix.DataType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataType = value["DataType"].GetInt64();
        m_dataTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeNameListFrontFix.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeNameListFrontFix.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeNameListFrontFix.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeNameListFrontFix.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("EffectCount") && !value["EffectCount"].IsNull())
    {
        if (!value["EffectCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeNameListFrontFix.EffectCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_effectCount = string(value["EffectCount"].GetString());
        m_effectCountHasBeenSet = true;
    }

    if (value.HasMember("EncryptionType") && !value["EncryptionType"].IsNull())
    {
        if (!value["EncryptionType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeNameListFrontFix.EncryptionType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_encryptionType = value["EncryptionType"].GetInt64();
        m_encryptionTypeHasBeenSet = true;
    }

    if (value.HasMember("SceneCode") && !value["SceneCode"].IsNull())
    {
        if (!value["SceneCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeNameListFrontFix.SceneCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sceneCode = string(value["SceneCode"].GetString());
        m_sceneCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutputDescribeNameListFrontFix::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_effectCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_effectCount.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encryptionType, allocator);
    }

    if (m_sceneCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sceneCode.c_str(), allocator).Move(), allocator);
    }

}


int64_t OutputDescribeNameListFrontFix::GetNameListId() const
{
    return m_nameListId;
}

void OutputDescribeNameListFrontFix::SetNameListId(const int64_t& _nameListId)
{
    m_nameListId = _nameListId;
    m_nameListIdHasBeenSet = true;
}

bool OutputDescribeNameListFrontFix::NameListIdHasBeenSet() const
{
    return m_nameListIdHasBeenSet;
}

string OutputDescribeNameListFrontFix::GetListName() const
{
    return m_listName;
}

void OutputDescribeNameListFrontFix::SetListName(const string& _listName)
{
    m_listName = _listName;
    m_listNameHasBeenSet = true;
}

bool OutputDescribeNameListFrontFix::ListNameHasBeenSet() const
{
    return m_listNameHasBeenSet;
}

int64_t OutputDescribeNameListFrontFix::GetListType() const
{
    return m_listType;
}

void OutputDescribeNameListFrontFix::SetListType(const int64_t& _listType)
{
    m_listType = _listType;
    m_listTypeHasBeenSet = true;
}

bool OutputDescribeNameListFrontFix::ListTypeHasBeenSet() const
{
    return m_listTypeHasBeenSet;
}

int64_t OutputDescribeNameListFrontFix::GetDataType() const
{
    return m_dataType;
}

void OutputDescribeNameListFrontFix::SetDataType(const int64_t& _dataType)
{
    m_dataType = _dataType;
    m_dataTypeHasBeenSet = true;
}

bool OutputDescribeNameListFrontFix::DataTypeHasBeenSet() const
{
    return m_dataTypeHasBeenSet;
}

int64_t OutputDescribeNameListFrontFix::GetStatus() const
{
    return m_status;
}

void OutputDescribeNameListFrontFix::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool OutputDescribeNameListFrontFix::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string OutputDescribeNameListFrontFix::GetRemark() const
{
    return m_remark;
}

void OutputDescribeNameListFrontFix::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool OutputDescribeNameListFrontFix::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string OutputDescribeNameListFrontFix::GetCreateTime() const
{
    return m_createTime;
}

void OutputDescribeNameListFrontFix::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool OutputDescribeNameListFrontFix::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string OutputDescribeNameListFrontFix::GetUpdateTime() const
{
    return m_updateTime;
}

void OutputDescribeNameListFrontFix::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool OutputDescribeNameListFrontFix::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string OutputDescribeNameListFrontFix::GetEffectCount() const
{
    return m_effectCount;
}

void OutputDescribeNameListFrontFix::SetEffectCount(const string& _effectCount)
{
    m_effectCount = _effectCount;
    m_effectCountHasBeenSet = true;
}

bool OutputDescribeNameListFrontFix::EffectCountHasBeenSet() const
{
    return m_effectCountHasBeenSet;
}

int64_t OutputDescribeNameListFrontFix::GetEncryptionType() const
{
    return m_encryptionType;
}

void OutputDescribeNameListFrontFix::SetEncryptionType(const int64_t& _encryptionType)
{
    m_encryptionType = _encryptionType;
    m_encryptionTypeHasBeenSet = true;
}

bool OutputDescribeNameListFrontFix::EncryptionTypeHasBeenSet() const
{
    return m_encryptionTypeHasBeenSet;
}

string OutputDescribeNameListFrontFix::GetSceneCode() const
{
    return m_sceneCode;
}

void OutputDescribeNameListFrontFix::SetSceneCode(const string& _sceneCode)
{
    m_sceneCode = _sceneCode;
    m_sceneCodeHasBeenSet = true;
}

bool OutputDescribeNameListFrontFix::SceneCodeHasBeenSet() const
{
    return m_sceneCodeHasBeenSet;
}

