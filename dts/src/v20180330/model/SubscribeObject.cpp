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

#include <tencentcloud/dts/v20180330/model/SubscribeObject.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20180330::Model;
using namespace std;

SubscribeObject::SubscribeObject() :
    m_objectsTypeHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNamesHasBeenSet(false)
{
}

CoreInternalOutcome SubscribeObject::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ObjectsType") && !value["ObjectsType"].IsNull())
    {
        if (!value["ObjectsType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubscribeObject.ObjectsType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_objectsType = value["ObjectsType"].GetInt64();
        m_objectsTypeHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubscribeObject.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("TableNames") && !value["TableNames"].IsNull())
    {
        if (!value["TableNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SubscribeObject.TableNames` is not array type"));

        const rapidjson::Value &tmpValue = value["TableNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tableNames.push_back((*itr).GetString());
        }
        m_tableNamesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubscribeObject::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_objectsTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectsType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_objectsType, allocator);
    }

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tableNames.begin(); itr != m_tableNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


int64_t SubscribeObject::GetObjectsType() const
{
    return m_objectsType;
}

void SubscribeObject::SetObjectsType(const int64_t& _objectsType)
{
    m_objectsType = _objectsType;
    m_objectsTypeHasBeenSet = true;
}

bool SubscribeObject::ObjectsTypeHasBeenSet() const
{
    return m_objectsTypeHasBeenSet;
}

string SubscribeObject::GetDatabaseName() const
{
    return m_databaseName;
}

void SubscribeObject::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool SubscribeObject::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

vector<string> SubscribeObject::GetTableNames() const
{
    return m_tableNames;
}

void SubscribeObject::SetTableNames(const vector<string>& _tableNames)
{
    m_tableNames = _tableNames;
    m_tableNamesHasBeenSet = true;
}

bool SubscribeObject::TableNamesHasBeenSet() const
{
    return m_tableNamesHasBeenSet;
}

