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

#include <tencentcloud/dbbrain/v20210527/model/MongoDBTableSpaceItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

MongoDBTableSpaceItem::MongoDBTableSpaceItem() :
    m_appIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_dbHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_sizeOnDiskHasBeenSet(false),
    m_collectionHasBeenSet(false)
{
}

CoreInternalOutcome MongoDBTableSpaceItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBTableSpaceItem.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBTableSpaceItem.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Db") && !value["Db"].IsNull())
    {
        if (!value["Db"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBTableSpaceItem.Db` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_db = string(value["Db"].GetString());
        m_dbHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBTableSpaceItem.Timestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetInt64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("SizeOnDisk") && !value["SizeOnDisk"].IsNull())
    {
        if (!value["SizeOnDisk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBTableSpaceItem.SizeOnDisk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sizeOnDisk = value["SizeOnDisk"].GetInt64();
        m_sizeOnDiskHasBeenSet = true;
    }

    if (value.HasMember("Collection") && !value["Collection"].IsNull())
    {
        if (!value["Collection"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBTableSpaceItem.Collection` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_collection.Deserialize(value["Collection"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_collectionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MongoDBTableSpaceItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_dbHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Db";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_db.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_sizeOnDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SizeOnDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sizeOnDisk, allocator);
    }

    if (m_collectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Collection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_collection.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t MongoDBTableSpaceItem::GetAppId() const
{
    return m_appId;
}

void MongoDBTableSpaceItem::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool MongoDBTableSpaceItem::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string MongoDBTableSpaceItem::GetInstanceId() const
{
    return m_instanceId;
}

void MongoDBTableSpaceItem::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool MongoDBTableSpaceItem::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string MongoDBTableSpaceItem::GetDb() const
{
    return m_db;
}

void MongoDBTableSpaceItem::SetDb(const string& _db)
{
    m_db = _db;
    m_dbHasBeenSet = true;
}

bool MongoDBTableSpaceItem::DbHasBeenSet() const
{
    return m_dbHasBeenSet;
}

int64_t MongoDBTableSpaceItem::GetTimestamp() const
{
    return m_timestamp;
}

void MongoDBTableSpaceItem::SetTimestamp(const int64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool MongoDBTableSpaceItem::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

int64_t MongoDBTableSpaceItem::GetSizeOnDisk() const
{
    return m_sizeOnDisk;
}

void MongoDBTableSpaceItem::SetSizeOnDisk(const int64_t& _sizeOnDisk)
{
    m_sizeOnDisk = _sizeOnDisk;
    m_sizeOnDiskHasBeenSet = true;
}

bool MongoDBTableSpaceItem::SizeOnDiskHasBeenSet() const
{
    return m_sizeOnDiskHasBeenSet;
}

MongoCollectionDetail MongoDBTableSpaceItem::GetCollection() const
{
    return m_collection;
}

void MongoDBTableSpaceItem::SetCollection(const MongoCollectionDetail& _collection)
{
    m_collection = _collection;
    m_collectionHasBeenSet = true;
}

bool MongoDBTableSpaceItem::CollectionHasBeenSet() const
{
    return m_collectionHasBeenSet;
}

