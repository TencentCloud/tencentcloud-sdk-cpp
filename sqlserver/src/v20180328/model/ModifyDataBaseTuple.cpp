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

#include <tencentcloud/sqlserver/v20180328/model/ModifyDataBaseTuple.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

ModifyDataBaseTuple::ModifyDataBaseTuple() :
    m_databaseTupleHasBeenSet(false),
    m_newDatabaseTupleHasBeenSet(false),
    m_deleteDataBasesTupleHasBeenSet(false)
{
}

CoreInternalOutcome ModifyDataBaseTuple::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DatabaseTuple") && !value["DatabaseTuple"].IsNull())
    {
        if (!value["DatabaseTuple"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyDataBaseTuple.DatabaseTuple` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_databaseTuple.Deserialize(value["DatabaseTuple"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_databaseTupleHasBeenSet = true;
    }

    if (value.HasMember("NewDatabaseTuple") && !value["NewDatabaseTuple"].IsNull())
    {
        if (!value["NewDatabaseTuple"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyDataBaseTuple.NewDatabaseTuple` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_newDatabaseTuple.Deserialize(value["NewDatabaseTuple"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_newDatabaseTupleHasBeenSet = true;
    }

    if (value.HasMember("DeleteDataBasesTuple") && !value["DeleteDataBasesTuple"].IsNull())
    {
        if (!value["DeleteDataBasesTuple"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyDataBaseTuple.DeleteDataBasesTuple` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deleteDataBasesTuple = value["DeleteDataBasesTuple"].GetBool();
        m_deleteDataBasesTupleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifyDataBaseTuple::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_databaseTupleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseTuple";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_databaseTuple.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_newDatabaseTupleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewDatabaseTuple";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_newDatabaseTuple.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_deleteDataBasesTupleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteDataBasesTuple";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleteDataBasesTuple, allocator);
    }

}


DatabaseTuple ModifyDataBaseTuple::GetDatabaseTuple() const
{
    return m_databaseTuple;
}

void ModifyDataBaseTuple::SetDatabaseTuple(const DatabaseTuple& _databaseTuple)
{
    m_databaseTuple = _databaseTuple;
    m_databaseTupleHasBeenSet = true;
}

bool ModifyDataBaseTuple::DatabaseTupleHasBeenSet() const
{
    return m_databaseTupleHasBeenSet;
}

DatabaseTuple ModifyDataBaseTuple::GetNewDatabaseTuple() const
{
    return m_newDatabaseTuple;
}

void ModifyDataBaseTuple::SetNewDatabaseTuple(const DatabaseTuple& _newDatabaseTuple)
{
    m_newDatabaseTuple = _newDatabaseTuple;
    m_newDatabaseTupleHasBeenSet = true;
}

bool ModifyDataBaseTuple::NewDatabaseTupleHasBeenSet() const
{
    return m_newDatabaseTupleHasBeenSet;
}

bool ModifyDataBaseTuple::GetDeleteDataBasesTuple() const
{
    return m_deleteDataBasesTuple;
}

void ModifyDataBaseTuple::SetDeleteDataBasesTuple(const bool& _deleteDataBasesTuple)
{
    m_deleteDataBasesTuple = _deleteDataBasesTuple;
    m_deleteDataBasesTupleHasBeenSet = true;
}

bool ModifyDataBaseTuple::DeleteDataBasesTupleHasBeenSet() const
{
    return m_deleteDataBasesTupleHasBeenSet;
}

