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

#include <tencentcloud/dts/v20211206/model/DatabaseTableObject.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

DatabaseTableObject::DatabaseTableObject() :
    m_objectModeHasBeenSet(false),
    m_databasesHasBeenSet(false),
    m_advancedObjectsHasBeenSet(false)
{
}

CoreInternalOutcome DatabaseTableObject::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ObjectMode") && !value["ObjectMode"].IsNull())
    {
        if (!value["ObjectMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseTableObject.ObjectMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectMode = string(value["ObjectMode"].GetString());
        m_objectModeHasBeenSet = true;
    }

    if (value.HasMember("Databases") && !value["Databases"].IsNull())
    {
        if (!value["Databases"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DatabaseTableObject.Databases` is not array type"));

        const rapidjson::Value &tmpValue = value["Databases"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DBItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_databases.push_back(item);
        }
        m_databasesHasBeenSet = true;
    }

    if (value.HasMember("AdvancedObjects") && !value["AdvancedObjects"].IsNull())
    {
        if (!value["AdvancedObjects"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DatabaseTableObject.AdvancedObjects` is not array type"));

        const rapidjson::Value &tmpValue = value["AdvancedObjects"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_advancedObjects.push_back((*itr).GetString());
        }
        m_advancedObjectsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DatabaseTableObject::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_objectModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objectMode.c_str(), allocator).Move(), allocator);
    }

    if (m_databasesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Databases";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_databases.begin(); itr != m_databases.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_advancedObjectsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedObjects";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_advancedObjects.begin(); itr != m_advancedObjects.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string DatabaseTableObject::GetObjectMode() const
{
    return m_objectMode;
}

void DatabaseTableObject::SetObjectMode(const string& _objectMode)
{
    m_objectMode = _objectMode;
    m_objectModeHasBeenSet = true;
}

bool DatabaseTableObject::ObjectModeHasBeenSet() const
{
    return m_objectModeHasBeenSet;
}

vector<DBItem> DatabaseTableObject::GetDatabases() const
{
    return m_databases;
}

void DatabaseTableObject::SetDatabases(const vector<DBItem>& _databases)
{
    m_databases = _databases;
    m_databasesHasBeenSet = true;
}

bool DatabaseTableObject::DatabasesHasBeenSet() const
{
    return m_databasesHasBeenSet;
}

vector<string> DatabaseTableObject::GetAdvancedObjects() const
{
    return m_advancedObjects;
}

void DatabaseTableObject::SetAdvancedObjects(const vector<string>& _advancedObjects)
{
    m_advancedObjects = _advancedObjects;
    m_advancedObjectsHasBeenSet = true;
}

bool DatabaseTableObject::AdvancedObjectsHasBeenSet() const
{
    return m_advancedObjectsHasBeenSet;
}

