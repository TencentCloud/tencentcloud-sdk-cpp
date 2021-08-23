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

#include <tencentcloud/sqlserver/v20180328/model/RenameRestoreDatabase.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

RenameRestoreDatabase::RenameRestoreDatabase() :
    m_oldNameHasBeenSet(false),
    m_newNameHasBeenSet(false)
{
}

CoreInternalOutcome RenameRestoreDatabase::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OldName") && !value["OldName"].IsNull())
    {
        if (!value["OldName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RenameRestoreDatabase.OldName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldName = string(value["OldName"].GetString());
        m_oldNameHasBeenSet = true;
    }

    if (value.HasMember("NewName") && !value["NewName"].IsNull())
    {
        if (!value["NewName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RenameRestoreDatabase.NewName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newName = string(value["NewName"].GetString());
        m_newNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RenameRestoreDatabase::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_oldNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldName.c_str(), allocator).Move(), allocator);
    }

    if (m_newNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newName.c_str(), allocator).Move(), allocator);
    }

}


string RenameRestoreDatabase::GetOldName() const
{
    return m_oldName;
}

void RenameRestoreDatabase::SetOldName(const string& _oldName)
{
    m_oldName = _oldName;
    m_oldNameHasBeenSet = true;
}

bool RenameRestoreDatabase::OldNameHasBeenSet() const
{
    return m_oldNameHasBeenSet;
}

string RenameRestoreDatabase::GetNewName() const
{
    return m_newName;
}

void RenameRestoreDatabase::SetNewName(const string& _newName)
{
    m_newName = _newName;
    m_newNameHasBeenSet = true;
}

bool RenameRestoreDatabase::NewNameHasBeenSet() const
{
    return m_newNameHasBeenSet;
}

