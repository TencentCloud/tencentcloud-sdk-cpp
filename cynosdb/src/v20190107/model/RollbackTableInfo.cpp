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

#include <tencentcloud/cynosdb/v20190107/model/RollbackTableInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

RollbackTableInfo::RollbackTableInfo() :
    m_oldTableHasBeenSet(false),
    m_newTableHasBeenSet(false)
{
}

CoreInternalOutcome RollbackTableInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OldTable") && !value["OldTable"].IsNull())
    {
        if (!value["OldTable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RollbackTableInfo.OldTable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldTable = string(value["OldTable"].GetString());
        m_oldTableHasBeenSet = true;
    }

    if (value.HasMember("NewTable") && !value["NewTable"].IsNull())
    {
        if (!value["NewTable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RollbackTableInfo.NewTable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newTable = string(value["NewTable"].GetString());
        m_newTableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RollbackTableInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_oldTableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldTable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldTable.c_str(), allocator).Move(), allocator);
    }

    if (m_newTableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewTable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newTable.c_str(), allocator).Move(), allocator);
    }

}


string RollbackTableInfo::GetOldTable() const
{
    return m_oldTable;
}

void RollbackTableInfo::SetOldTable(const string& _oldTable)
{
    m_oldTable = _oldTable;
    m_oldTableHasBeenSet = true;
}

bool RollbackTableInfo::OldTableHasBeenSet() const
{
    return m_oldTableHasBeenSet;
}

string RollbackTableInfo::GetNewTable() const
{
    return m_newTable;
}

void RollbackTableInfo::SetNewTable(const string& _newTable)
{
    m_newTable = _newTable;
    m_newTableHasBeenSet = true;
}

bool RollbackTableInfo::NewTableHasBeenSet() const
{
    return m_newTableHasBeenSet;
}

