/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/dts/v20211206/model/OwnerDifference.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

OwnerDifference::OwnerDifference() :
    m_dbHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_objectNameHasBeenSet(false),
    m_objectTypeHasBeenSet(false),
    m_srcOwnerHasBeenSet(false),
    m_dstOwnerHasBeenSet(false)
{
}

CoreInternalOutcome OwnerDifference::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Db") && !value["Db"].IsNull())
    {
        if (!value["Db"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OwnerDifference.Db` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_db = string(value["Db"].GetString());
        m_dbHasBeenSet = true;
    }

    if (value.HasMember("Schema") && !value["Schema"].IsNull())
    {
        if (!value["Schema"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OwnerDifference.Schema` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schema = string(value["Schema"].GetString());
        m_schemaHasBeenSet = true;
    }

    if (value.HasMember("ObjectName") && !value["ObjectName"].IsNull())
    {
        if (!value["ObjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OwnerDifference.ObjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectName = string(value["ObjectName"].GetString());
        m_objectNameHasBeenSet = true;
    }

    if (value.HasMember("ObjectType") && !value["ObjectType"].IsNull())
    {
        if (!value["ObjectType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OwnerDifference.ObjectType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectType = string(value["ObjectType"].GetString());
        m_objectTypeHasBeenSet = true;
    }

    if (value.HasMember("SrcOwner") && !value["SrcOwner"].IsNull())
    {
        if (!value["SrcOwner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OwnerDifference.SrcOwner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcOwner = string(value["SrcOwner"].GetString());
        m_srcOwnerHasBeenSet = true;
    }

    if (value.HasMember("DstOwner") && !value["DstOwner"].IsNull())
    {
        if (!value["DstOwner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OwnerDifference.DstOwner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstOwner = string(value["DstOwner"].GetString());
        m_dstOwnerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OwnerDifference::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dbHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Db";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_db.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Schema";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schema.c_str(), allocator).Move(), allocator);
    }

    if (m_objectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objectName.c_str(), allocator).Move(), allocator);
    }

    if (m_objectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objectType.c_str(), allocator).Move(), allocator);
    }

    if (m_srcOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcOwner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcOwner.c_str(), allocator).Move(), allocator);
    }

    if (m_dstOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstOwner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstOwner.c_str(), allocator).Move(), allocator);
    }

}


string OwnerDifference::GetDb() const
{
    return m_db;
}

void OwnerDifference::SetDb(const string& _db)
{
    m_db = _db;
    m_dbHasBeenSet = true;
}

bool OwnerDifference::DbHasBeenSet() const
{
    return m_dbHasBeenSet;
}

string OwnerDifference::GetSchema() const
{
    return m_schema;
}

void OwnerDifference::SetSchema(const string& _schema)
{
    m_schema = _schema;
    m_schemaHasBeenSet = true;
}

bool OwnerDifference::SchemaHasBeenSet() const
{
    return m_schemaHasBeenSet;
}

string OwnerDifference::GetObjectName() const
{
    return m_objectName;
}

void OwnerDifference::SetObjectName(const string& _objectName)
{
    m_objectName = _objectName;
    m_objectNameHasBeenSet = true;
}

bool OwnerDifference::ObjectNameHasBeenSet() const
{
    return m_objectNameHasBeenSet;
}

string OwnerDifference::GetObjectType() const
{
    return m_objectType;
}

void OwnerDifference::SetObjectType(const string& _objectType)
{
    m_objectType = _objectType;
    m_objectTypeHasBeenSet = true;
}

bool OwnerDifference::ObjectTypeHasBeenSet() const
{
    return m_objectTypeHasBeenSet;
}

string OwnerDifference::GetSrcOwner() const
{
    return m_srcOwner;
}

void OwnerDifference::SetSrcOwner(const string& _srcOwner)
{
    m_srcOwner = _srcOwner;
    m_srcOwnerHasBeenSet = true;
}

bool OwnerDifference::SrcOwnerHasBeenSet() const
{
    return m_srcOwnerHasBeenSet;
}

string OwnerDifference::GetDstOwner() const
{
    return m_dstOwner;
}

void OwnerDifference::SetDstOwner(const string& _dstOwner)
{
    m_dstOwner = _dstOwner;
    m_dstOwnerHasBeenSet = true;
}

bool OwnerDifference::DstOwnerHasBeenSet() const
{
    return m_dstOwnerHasBeenSet;
}

