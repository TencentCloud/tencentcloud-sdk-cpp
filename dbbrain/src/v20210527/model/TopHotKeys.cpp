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

#include <tencentcloud/dbbrain/v20210527/model/TopHotKeys.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

TopHotKeys::TopHotKeys() :
    m_countHasBeenSet(false),
    m_dbHasBeenSet(false),
    m_instanceNodeIdHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome TopHotKeys::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopHotKeys.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("Db") && !value["Db"].IsNull())
    {
        if (!value["Db"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopHotKeys.Db` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_db = string(value["Db"].GetString());
        m_dbHasBeenSet = true;
    }

    if (value.HasMember("InstanceNodeId") && !value["InstanceNodeId"].IsNull())
    {
        if (!value["InstanceNodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopHotKeys.InstanceNodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceNodeId = string(value["InstanceNodeId"].GetString());
        m_instanceNodeIdHasBeenSet = true;
    }

    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopHotKeys.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopHotKeys.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopHotKeys::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_dbHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Db";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_db.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceNodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

}


int64_t TopHotKeys::GetCount() const
{
    return m_count;
}

void TopHotKeys::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool TopHotKeys::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string TopHotKeys::GetDb() const
{
    return m_db;
}

void TopHotKeys::SetDb(const string& _db)
{
    m_db = _db;
    m_dbHasBeenSet = true;
}

bool TopHotKeys::DbHasBeenSet() const
{
    return m_dbHasBeenSet;
}

string TopHotKeys::GetInstanceNodeId() const
{
    return m_instanceNodeId;
}

void TopHotKeys::SetInstanceNodeId(const string& _instanceNodeId)
{
    m_instanceNodeId = _instanceNodeId;
    m_instanceNodeIdHasBeenSet = true;
}

bool TopHotKeys::InstanceNodeIdHasBeenSet() const
{
    return m_instanceNodeIdHasBeenSet;
}

string TopHotKeys::GetKey() const
{
    return m_key;
}

void TopHotKeys::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool TopHotKeys::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string TopHotKeys::GetType() const
{
    return m_type;
}

void TopHotKeys::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TopHotKeys::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

