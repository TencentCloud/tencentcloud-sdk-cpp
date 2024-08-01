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

#include <tencentcloud/rce/v20201103/model/InputCreateNameListFront.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20201103::Model;
using namespace std;

InputCreateNameListFront::InputCreateNameListFront() :
    m_listNameHasBeenSet(false),
    m_listTypeHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_encryptionTypeHasBeenSet(false),
    m_sceneCodeHasBeenSet(false)
{
}

CoreInternalOutcome InputCreateNameListFront::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ListName") && !value["ListName"].IsNull())
    {
        if (!value["ListName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputCreateNameListFront.ListName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listName = string(value["ListName"].GetString());
        m_listNameHasBeenSet = true;
    }

    if (value.HasMember("ListType") && !value["ListType"].IsNull())
    {
        if (!value["ListType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputCreateNameListFront.ListType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_listType = value["ListType"].GetInt64();
        m_listTypeHasBeenSet = true;
    }

    if (value.HasMember("DataType") && !value["DataType"].IsNull())
    {
        if (!value["DataType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputCreateNameListFront.DataType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataType = value["DataType"].GetInt64();
        m_dataTypeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputCreateNameListFront.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("EncryptionType") && !value["EncryptionType"].IsNull())
    {
        if (!value["EncryptionType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputCreateNameListFront.EncryptionType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_encryptionType = value["EncryptionType"].GetInt64();
        m_encryptionTypeHasBeenSet = true;
    }

    if (value.HasMember("SceneCode") && !value["SceneCode"].IsNull())
    {
        if (!value["SceneCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputCreateNameListFront.SceneCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sceneCode = string(value["SceneCode"].GetString());
        m_sceneCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InputCreateNameListFront::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
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


string InputCreateNameListFront::GetListName() const
{
    return m_listName;
}

void InputCreateNameListFront::SetListName(const string& _listName)
{
    m_listName = _listName;
    m_listNameHasBeenSet = true;
}

bool InputCreateNameListFront::ListNameHasBeenSet() const
{
    return m_listNameHasBeenSet;
}

int64_t InputCreateNameListFront::GetListType() const
{
    return m_listType;
}

void InputCreateNameListFront::SetListType(const int64_t& _listType)
{
    m_listType = _listType;
    m_listTypeHasBeenSet = true;
}

bool InputCreateNameListFront::ListTypeHasBeenSet() const
{
    return m_listTypeHasBeenSet;
}

int64_t InputCreateNameListFront::GetDataType() const
{
    return m_dataType;
}

void InputCreateNameListFront::SetDataType(const int64_t& _dataType)
{
    m_dataType = _dataType;
    m_dataTypeHasBeenSet = true;
}

bool InputCreateNameListFront::DataTypeHasBeenSet() const
{
    return m_dataTypeHasBeenSet;
}

string InputCreateNameListFront::GetRemark() const
{
    return m_remark;
}

void InputCreateNameListFront::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool InputCreateNameListFront::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t InputCreateNameListFront::GetEncryptionType() const
{
    return m_encryptionType;
}

void InputCreateNameListFront::SetEncryptionType(const int64_t& _encryptionType)
{
    m_encryptionType = _encryptionType;
    m_encryptionTypeHasBeenSet = true;
}

bool InputCreateNameListFront::EncryptionTypeHasBeenSet() const
{
    return m_encryptionTypeHasBeenSet;
}

string InputCreateNameListFront::GetSceneCode() const
{
    return m_sceneCode;
}

void InputCreateNameListFront::SetSceneCode(const string& _sceneCode)
{
    m_sceneCode = _sceneCode;
    m_sceneCodeHasBeenSet = true;
}

bool InputCreateNameListFront::SceneCodeHasBeenSet() const
{
    return m_sceneCodeHasBeenSet;
}

