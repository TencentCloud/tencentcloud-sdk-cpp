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

#include <tencentcloud/rce/v20201103/model/InputModifyNameFront.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20201103::Model;
using namespace std;

InputModifyNameFront::InputModifyNameFront() :
    m_nameListIdHasBeenSet(false),
    m_listNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome InputModifyNameFront::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NameListId") && !value["NameListId"].IsNull())
    {
        if (!value["NameListId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputModifyNameFront.NameListId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nameListId = value["NameListId"].GetInt64();
        m_nameListIdHasBeenSet = true;
    }

    if (value.HasMember("ListName") && !value["ListName"].IsNull())
    {
        if (!value["ListName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputModifyNameFront.ListName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listName = string(value["ListName"].GetString());
        m_listNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputModifyNameFront.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputModifyNameFront.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InputModifyNameFront::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


int64_t InputModifyNameFront::GetNameListId() const
{
    return m_nameListId;
}

void InputModifyNameFront::SetNameListId(const int64_t& _nameListId)
{
    m_nameListId = _nameListId;
    m_nameListIdHasBeenSet = true;
}

bool InputModifyNameFront::NameListIdHasBeenSet() const
{
    return m_nameListIdHasBeenSet;
}

string InputModifyNameFront::GetListName() const
{
    return m_listName;
}

void InputModifyNameFront::SetListName(const string& _listName)
{
    m_listName = _listName;
    m_listNameHasBeenSet = true;
}

bool InputModifyNameFront::ListNameHasBeenSet() const
{
    return m_listNameHasBeenSet;
}

int64_t InputModifyNameFront::GetStatus() const
{
    return m_status;
}

void InputModifyNameFront::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InputModifyNameFront::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string InputModifyNameFront::GetRemark() const
{
    return m_remark;
}

void InputModifyNameFront::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool InputModifyNameFront::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

